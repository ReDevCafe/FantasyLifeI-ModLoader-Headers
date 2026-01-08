#ifndef TMAP_REGISTRY
#define TMAP_REGISTRY

#include "API/Engine/TMap.hpp"
#include "RegistrySource.hpp"
#include <stdexcept>
#include <unordered_map>
#include "SDK.h"

class FName;

template<typename Key, typename Entry>
class TMapRegistrySource : public RegistrySource<Entry>
{
public:
  TMapRegistrySource(const std::string& name, int priority, TMap<Key, Entry>* gameMap) : 
    _name(name), 
    _priority(priority), 
    _gameMap(gameMap), 
    _isIndexed(false) 
  {}
  
  void BuildIndex() 
  {
    if (!_gameMap) throw std::runtime_error("Game map not bound");
      
    _keyToOffset.clear();
    for (uint32_t i = 0; i < _gameMap->Data.Num(); ++i) 
    {
      auto& entry = _gameMap->Data[i];
      std::string key = entry.Value.First.ToString();
      _keyToOffset[key] = i;
    }
    _isIndexed = true;
  }
  
  Entry* Get(const std::string& key) override 
  {
    if (!_isIndexed) BuildIndex();
    
    auto it = _keyToOffset.find(key);
    if (it == _keyToOffset.end()) return nullptr;
    
    return ExtractValue(_gameMap->Data[it->second].Value.Second);
  }
  
  Entry* GetByOffset(uint64_t offset) override 
  {
    if (!_gameMap || offset >= _gameMap->Data.Num()) return nullptr;
    return ExtractValue(_gameMap->Data[offset].Value.Second);
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

protected:
  virtual Entry* ExtractValue(Entry& entry) 
  {
    return &entry;
  }
  
  std::string _name;
  int _priority;
  TMap<Key, Entry>* _gameMap;
  std::unordered_map<std::string, uint64_t> _keyToOffset;
  bool _isIndexed;
};

#endif