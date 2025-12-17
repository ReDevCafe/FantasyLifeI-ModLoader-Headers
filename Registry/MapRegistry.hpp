#ifndef MAP_REGISTRY_HPP
  #define MAP_REGISTRY_HPP

  #include "Registry.hpp"
  #include <unordered_map>
  #include "API/Engine/TMap.hpp"
  
  class FName;

template<typename TValue, typename TMapEntry>
class MapRegistry : public IRegistry<TValue> 
{
  public:
  using MapType = TMap<FName, TMapEntry>;

  MapRegistry() : _gameMap(nullptr), _isIndexed(false){}

  protected:
  virtual TValue* extractValue(TMapEntry& entry) 
  {
    return &entry;
  }

  private:
  MapType* _gameMap;
  std::unordered_map<std::string, uint32_t> _keyToIndex;
  bool _isIndexed;
};

#endif