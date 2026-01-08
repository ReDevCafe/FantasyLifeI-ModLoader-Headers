#ifndef Wrapped_REGISTRY_HPP
#define Wrapped_REGISTRY_HPP

#include "API/Engine/TMap.hpp"
#include "RegistrySource.hpp"
#include <stdexcept>
#include <unordered_map>
#include "SDK.h"

template<typename WrappedType, typename GameDataType>
class WrappedRegistrySource : public RegistrySource<WrappedType>
{
public:
  WrappedRegistrySource(const std::string& name, int priority, TMap<FName, GameDataType>* gameMap) : 
    _name(name), 
    _priority(priority), 
    _gameMap(gameMap), 
    _isIndexed(false) 
  {}

  WrappedRegistrySource(const std::string& name, int priority, TMap<FGDId, GameDataType>* gameMap) : 
    _name(name), 
    _priority(priority), 
    _gameMap(gameMap), 
    _isIndexed(false) 
  {}
  
  void BuildIndex() 
  {
    if (!_gameMap) throw std::runtime_error("Game map not bound");
      
    _keyToOffset.clear();
    _wrappedCache.clear();
    
    for (uint32_t i = 0; i < _gameMap->Data.Num(); ++i) 
    {
      auto& entry = _gameMap->Data[i];
      std::string key = entry.Value.First.ToString();
      _keyToOffset[key] = i;
      
      _wrappedCache.push_back(new WrappedType(entry.Value.Second));
    }
    _isIndexed = true;
  }
  
  WrappedType* Get(const std::string& key) override 
  {
    if (!_isIndexed) BuildIndex();
    
    auto it = _keyToOffset.find(key);
    if (it == _keyToOffset.end()) return nullptr;
    
    return _wrappedCache[it->second];
  }
  
  WrappedType* GetByOffset(uint64_t offset) override 
  {
    if (!_isIndexed) BuildIndex();
    if (offset >= _wrappedCache.size()) return nullptr;
    return _wrappedCache[offset];
  }
  
  bool Contains(const std::string& key) const override 
  {
    return _keyToOffset.find(key) != _keyToOffset.end();
  }
  
  size_t Size() const override { return _keyToOffset.size(); }
  
  std::vector<std::string> GetAllKeys() const override 
  {
    std::vector<std::string> keys;
    keys.reserve(_keyToOffset.size());

    for (const auto& [key, _] : _keyToOffset) 
      keys.push_back(key);

    return keys;
  }
  
  uint64_t GetOffset(const std::string& key) const override 
  {
    auto it = _keyToOffset.find(key);
    return (it != _keyToOffset.end()) ? it->second : UINT64_MAX;
  }
  
  int GetPriority() const override { return _priority; }
  std::string GetSourceName() const override { return _name; }
  
  ~WrappedRegistrySource()
  {
    for (auto* wrapped : _wrappedCache) 
      delete wrapped;
  }

protected:
  std::string _name;
  int _priority;
  TMap<FName, GameDataType>* _gameMap;
  std::unordered_map<std::string, uint64_t> _keyToOffset;
  std::vector<WrappedType*> _wrappedCache;
  bool _isIndexed;
};

#endif