#ifndef Wrapped_REGISTRY_HPP
  #define Wrapped_REGISTRY_HPP

  #include "TMapRegistry.hpp"

template<typename WrappedType, typename GameDataType>
class WrappedRegistry : public TMapRegistry<WrappedType, GameDataType> 
{
  public:
  WrappedRegistry() {}

  protected:
  WrappedType* extractValue(GameDataType& entry) { return new WrappedType(entry); }
};

#endif