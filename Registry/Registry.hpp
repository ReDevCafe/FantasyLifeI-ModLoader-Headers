#ifndef FLI_BASE_REGISTRY_HPP
  #define FLI_BASE_REGISTRY_HPP

  #include <string>
  #include <unordered_map>


template<typename T>
class IRegistry 
{
    public:
    virtual ~IRegistry() = default;
    
    virtual T* get(const std::string& key) = 0;
    virtual bool contains(const std::string& key) const = 0;
    virtual size_t size() const = 0;
    
    virtual std::unordered_map<std::string, uint32_t>::const_iterator begin() const = 0;
    virtual std::unordered_map<std::string, uint32_t>::const_iterator end() const = 0;
};

#endif