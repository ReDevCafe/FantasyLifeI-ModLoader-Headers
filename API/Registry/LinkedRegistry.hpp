#ifndef LINKED_REGISTRY_HPP
#define LINKED_REGISTRY_HPP

#include "API/Engine/TMap.hpp"
#include "API/Function/Engine/FName/FNameCTor.hpp"
#include "API/Registry/RegistrySource.hpp"
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>

template<typename Value, typename GameEntry>
class LinkedRegistry : public RegistrySource<Value>
{
  public:
  LinkedRegistry(const std::string& name, int priority = 0)
  : _name(name), _priority(priority), _gameRegistry(nullptr) {}
  
  void LinkToGameRegistry(TMap<FName, GameEntry>* gameRegistry) 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    _gameRegistry = gameRegistry;
  }
  
  void AddModEntry(const std::string& key, Value* value) 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    uint64_t offset = _modEntries.size();
    _modEntries.push_back(std::shared_ptr<Value>(value));
    _keyToOffset[key] = offset;
    
    if (_gameRegistry)
      SyncToGameRegistry(key, value);
  }
  
  Value* Get(const std::string& key) override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    auto it = _keyToOffset.find(key);

    return (it != _keyToOffset.end()) ? _modEntries[it->second].get() : nullptr;
  }
  
  Value* GetByOffset(uint64_t offset) override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    return (offset < _modEntries.size()) ? _modEntries[offset].get() : nullptr;
  }
  
  bool Contains(const std::string& key) const override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    return _keyToOffset.find(key) != _keyToOffset.end();
  }
  
  size_t Size() const override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    return _modEntries.size();
  }
  
  std::vector<std::string> GetAllKeys() const override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    std::vector<std::string> keys;
    keys.reserve(_keyToOffset.size());

    for (const auto& [key, _] : _keyToOffset)
      keys.push_back(key);
    
    return keys;
  }
  
  uint64_t GetOffset(const std::string& key) const override 
  {
    std::lock_guard<std::mutex> lock(_mutex);
    auto it = _keyToOffset.find(key);
    
    return (it != _keyToOffset.end()) ? it->second : UINT64_MAX;
  }
  
  int GetPriority() const override { return _priority; }
  std::string GetSourceName() const override { return _name; }
  
  protected:
  virtual void SyncToGameRegistry(const std::string& key, Value* value) = 0;
  
  std::string _name;
  int _priority;
  TMap<FName, GameEntry>* _gameRegistry;
  std::vector<std::shared_ptr<Value>> _modEntries;
  std::unordered_map<std::string, uint64_t> _keyToOffset;
  mutable std::mutex _mutex;
};

#endif // !LINKED_REGISTRY_HPP