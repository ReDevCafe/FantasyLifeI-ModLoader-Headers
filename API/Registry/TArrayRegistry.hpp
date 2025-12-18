#ifndef TARRAY_REGISTRY
  #define TARRAY_REGISTRY

  #include "RegistryBase.hpp"
  #include "API/Engine/TArray.hpp"
  #include <functional>

template<typename Value>
class TArrayRegistry : public IRegistry<Value>
{
  public:
  using KeyExtractor = std::function<std::string(const Value&)>;

  TArrayRegistry() : _gameArray(nullptr), _isIndexed(false) 
  {}

  ML_API void Bind(TArray<Value>* gameArray, KeyExtractor extractor) 
  {
    _gameArray = gameArray;
    _keyExtractor = extractor;
    _isIndexed = false;
  }

  ML_API void BuildIndex() 
  {
    if (!_gameArray) throw std::runtime_error("Cannot build index: game array not bound");
    if (!_keyExtractor) throw std::runtime_error("Cannot build index: key extractor not set");
    
    _keyToIndex.clear();
    
    for (uint32_t i = 0; i < _gameArray->Num(); ++i) 
    {
        std::string key = _keyExtractor(_gameArray->Data[i]);
        _keyToIndex.emplace(key, i);
    }
    
    _isIndexed = true;
  }

  ML_API Value* Get(const std::string& key) override 
  {
    if(!_isIndexed)  
    {
      #ifdef MLDEBUG 
      throw std::runtime_error("Registry not indexed: Call buildIndex() first");
      #else 
      buildIndex();
      #endif
    }
    
    auto it = _keyToIndex.find(key);
    if (it == _keyToIndex.end() || !_gameArray) return nullptr;
    
    uint32_t index = it->second;
    if (index >= _gameArray->Num()) return nullptr;
    
    return &_gameArray->Data[index];
  }

  ML_API bool Contains(const std::string& key) const override { return _keyToIndex.find(key) != _keyToIndex.end(); }
  
  ML_API size_t Size() const override { return _keyToIndex.size(); }
  
  ML_API std::unordered_map<std::string, uint32_t>::const_iterator begin() const override { return _keyToIndex.begin(); }
  
  ML_API std::unordered_map<std::string, uint32_t>::const_iterator end() const override { return _keyToIndex.end();}
  
  ML_API TArray<Value>* getGameArray() const { return _gameArray; }
  
  ML_API const std::unordered_map<std::string, uint32_t>& getMapping() const { return _keyToIndex;}

  private:
  TArray<Value>* _gameArray;
  KeyExtractor _keyExtractor;
  std::unordered_map<std::string, uint32_t> _keyToIndex;
  bool _isIndexed;
};

#endif