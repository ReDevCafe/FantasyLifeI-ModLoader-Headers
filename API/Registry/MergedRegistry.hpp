#ifndef MERGED_REGISTRY_HPP
#define MERGED_REGISTRY_HPP

#include "API/Registry/RegistryBase.hpp"
#include "API/Registry/RegistrySource.hpp"
#include <algorithm>
#include <memory>
#include <mutex>

#include "CompositeIndex.hpp"

template<typename Value>
class MergedRegistry : public IRegistry<Value>
{
  public:
  MergedRegistry() : _needsRebuild(false), _nextSourceId(0) {}
  
  uint16_t AddSource(std::shared_ptr<RegistrySource<Value>> source) 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    if (_nextSourceId >= (1 << CompositeIndex::SOURCE_BITS)) throw std::overflow_error("Maximum number of sources reached");
    
    uint16_t sourceId = _nextSourceId++;
    _sources[sourceId] = source;
    
    _priorityOrder.clear();
    for (const auto& [id, src] : _sources) 
      _priorityOrder.push_back(id);

    std::sort
    ( _priorityOrder.begin(), _priorityOrder.end(),
      [this](uint16_t a, uint16_t b) 
      {
        return _sources[a]->GetPriority() > _sources[b]->GetPriority();
      }
    );
    
    _needsRebuild = true;
    return sourceId;
  }
  
  void RemoveSource(uint16_t sourceId) 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    _sources.erase(sourceId);
    _priorityOrder.erase(
      std::remove(_priorityOrder.begin(), _priorityOrder.end(), sourceId),
      _priorityOrder.end()
    );
    _needsRebuild = true;
  }
  
  Value* Get(const std::string& key) override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    RebuildIfNeeded();
    
    auto it = _mergedIndex.find(key);
    if (it == _mergedIndex.end()) return nullptr;
    
    return GetByCompositeIndex(it->second);
  }

  Value* GetByCompositeIndex(uint64_t compositeIndex) 
  {
    uint16_t sourceId;
    uint64_t offset;
    CompositeIndex::Decode(compositeIndex, sourceId, offset);
    
    auto srcIt = _sources.find(sourceId);
    if (srcIt == _sources.end()) return nullptr;
    
    return srcIt->second->GetByOffset(offset);
  }
  
  Value* GetByOffset(uint64_t offset) override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    RebuildIfNeeded();
    
    if (offset >= _offsetToComposite.size()) return nullptr;
    return GetByCompositeIndex(_offsetToComposite[offset]);
  }
  
  uint64_t GetCompositeIndex(const std::string& key) 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    RebuildIfNeeded();
    
    auto it = _mergedIndex.find(key);
    return (it != _mergedIndex.end()) ? it->second : UINT64_MAX;
  }
  
  struct IndexInfo 
  {
    uint16_t sourceId;
    uint64_t sourceOffset;
    std::string sourceName;
    bool valid;
  };
  
  IndexInfo DecodeIndex(uint64_t compositeIndex) 
  {
    IndexInfo info;
    CompositeIndex::Decode(compositeIndex, info.sourceId, info.sourceOffset);
    
    auto srcIt = _sources.find(info.sourceId);
    if (srcIt != _sources.end()) {
      info.sourceName = srcIt->second->GetSourceName();
      info.valid = true;
    } 
    else info.valid = false;
    
    return info;
  }
  
  bool Contains(const std::string& key) const override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    return _mergedIndex.find(key) != _mergedIndex.end();
  }
  
  size_t Size() const override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    return _mergedIndex.size();
  }
  
  std::unordered_map<std::string, uint64_t>::const_iterator begin() const override 
  {
    return _mergedIndex.begin();
  }
  
  std::unordered_map<std::string, uint64_t>::const_iterator end() const override 
  {
    return _mergedIndex.end();
  }
  
  std::vector<Value*> GetAll() 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    RebuildIfNeeded();
    
    std::vector<Value*> results;
    results.reserve(_mergedIndex.size());
    
    for (const auto& [key, compositeIdx] : _mergedIndex) {
      if (auto* value = GetByCompositeIndex(compositeIdx)) {
        results.push_back(value);
      }
    }
    
    return results;
  }
  
  std::vector<std::string> GetSourceNames() 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    std::vector<std::string> names;
    for (uint16_t id : _priorityOrder) names.push_back(_sources[id]->GetSourceName());
    
    return names;
  }
  
  private:
  void RebuildIfNeeded() 
  {
    if (!_needsRebuild) return;
    
    _mergedIndex.clear();
    _offsetToComposite.clear();
    
    for (uint16_t sourceId : _priorityOrder) 
    {
      auto& source = _sources[sourceId];
      auto keys = source->GetAllKeys();
      
      for (const auto& key : keys) 
      {
        if (_mergedIndex.find(key) == _mergedIndex.end()) 
        {
          uint64_t sourceOffset = source->GetOffset(key);
          uint64_t compositeIndex = CompositeIndex::Encode(sourceId, sourceOffset);
          
          _mergedIndex[key] = compositeIndex;
          _offsetToComposite.push_back(compositeIndex);
        }
      }
    }
    
    _needsRebuild = false;
  }
  
  std::unordered_map<uint16_t, std::shared_ptr<RegistrySource<Value>>> _sources;
  std::vector<uint16_t> _priorityOrder;
  std::unordered_map<std::string, uint64_t> _mergedIndex; // key -> composite index
  std::vector<uint64_t> _offsetToComposite;               // merged offset -> composite index
  mutable std::mutex _mutex;
  bool _needsRebuild;
  uint16_t _nextSourceId;
};


#endif 