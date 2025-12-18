#ifndef NESTED_TMAP_REGISTRY
  #define NESTED_TMAP_REGISTRY

  #include "TMapRegistry.hpp"
  #include <functional>

template<typename TValue, typename TMapEntry>
class NestedTMapRegistry : public TMapRegistry<TValue, TMapEntry> 
{
    public:
    using ExtractFunc = std::function<TValue*(TMapEntry&)>;
    
    NestedTMapRegistry(ExtractFunc extractor) : _extractor(extractor) 
    {}

    protected:
    TValue* ExtractValue(TMapEntry& entry) override 
    { return _extractor ? _extractor(entry) : nullptr; }

    private:
    ExtractFunc _extractor;
};

#endif