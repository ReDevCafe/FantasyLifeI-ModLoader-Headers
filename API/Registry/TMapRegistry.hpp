#ifndef TMAP_REGISTRY
  #define TMAP_REGISTRY

  #include "API/Engine/TMap.hpp"
  #include "RegistryBase.hpp"
  #include <stdexcept>
  #include <unordered_map>
  #include "Export.h"

class FName;

template<typename Value, typename Entry>
class TMapRegistry : public IRegistry<Value>
{
  public:
  TMapRegistry() : _gameMap(nullptr), _isIndexed(false), _mapSize(0)
  {}

  ML_API void Bind(TMap<FName, Entry>* gameMap)
  {
    _gameMap = gameMap;
    _isIndexed = false;
  }

  ML_API void BuildIndex()
  {
    if(!_gameMap) throw std::runtime_error("Cannot build index: game map not bound");

    _mapSize = _gameMap->Num();
    _keyToIndex.clear();

    for(uint32_t i = 0; i < _gameMap->Data.Num(); ++i)
    {
      auto& entry = _gameMap->Data[i];
      std::string key = entry.Value.First.ToString();
      _keyToIndex.emplace(key, i);
    }

    _isIndexed = true;
  }

  ML_API Value* Get(const std::string& key) override 
  {
    if(!_isIndexed)  
    {
      #ifdef MLDEBUG 
      throw std::runtime_error("Registry not indexed: Call BuildIndex() first");
      #else 
      BuildIndex();
      #endif
    } else if (_gameMap->Num() != _mapSize) 
    {
      _isIndexed = false;
      BuildIndex();
    }

    auto it = _keyToIndex.find(key);
    if (it == _keyToIndex.end() || !_gameMap) return nullptr;

    uint32_t index = it->second;
    if(index >= _gameMap->Data.Num()) return nullptr;

    return ExtractValue(_gameMap->Data[index].Value.Second);
  }

  ML_API bool Contains(const std::string& key) const override { return _keyToIndex.find(key) != _keyToIndex.end(); }

  ML_API size_t Size() const override { return _keyToIndex.size(); }
  
  ML_API std::unordered_map<std::string, uint32_t>::const_iterator begin() const override { return _keyToIndex.begin(); }
  
  ML_API std::unordered_map<std::string, uint32_t>::const_iterator end() const override { return _keyToIndex.end(); }
  
  ML_API TMap<FName, Entry>* GetGameMap() const { return _gameMap; }
  
  ML_API const std::unordered_map<std::string, uint32_t>& GetMapping() const { return _keyToIndex; }

  protected:
  virtual Value* ExtractValue(Entry& entry)
  {
    return new Value(entry);
  }

  TMap<FName, Entry>* _gameMap;
  std::unordered_map<std::string, uint32_t> _keyToIndex;
  bool _isIndexed;
  size_t _mapSize;
};

#endif