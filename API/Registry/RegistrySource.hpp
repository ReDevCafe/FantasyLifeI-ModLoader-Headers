#ifndef REGISTRY_SOURCE_HPP
  #define REGISTRY_SOURCE_HPP

  #include <cstdint>
  #include <string>
  #include <vector>

template<typename Value>
class RegistrySource 
{
public:
    virtual ~RegistrySource() = default;
    
    virtual Value* Get(const std::string& key) = 0;
    virtual Value* GetByOffset(uint64_t offset) = 0;
    virtual bool Contains(const std::string& key) const = 0;
    virtual size_t Size() const = 0;
    virtual std::vector<std::string> GetAllKeys() const = 0;
    virtual uint64_t GetOffset(const std::string& key) const = 0;
    
    // higher are checked first
    virtual int GetPriority() const = 0;
    virtual std::string GetSourceName() const = 0;
};

#endif