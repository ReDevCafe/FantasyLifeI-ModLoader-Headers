#ifndef FNAME_HPP
  #define FNAME_HPP
  
  #include "API/Function/Engine/FNameCTor.hpp"
  #include "API/Function/Engine/FnameToString.hpp"
  #include "SDK/BasicType.h"
  #include <string>
  #include <string_view>

class API_FName : public FName
{

  public:
  API_FName(std::string_view value)
  {
    FNameCTor::call(reinterpret_cast<FName*>(this), static_cast<int>(value.size()), value.data(), 1);
  }

  API_FName(const FName& fname)
  {
    this->ComparisonIndex = fname.ComparisonIndex;
    this->Number = fname.Number;
  }
  
  std::string ToString() const
  {
    FString str;
    FNameToString::call(reinterpret_cast<FName*>(const_cast<API_FName*>(this)), &str);
    return str.ToString();
  }

  bool operator==(const API_FName &o) const 
  {
    return (ComparisonIndex == o.ComparisonIndex);
  }

  bool operator!=(const API_FName &o) const 
  {
    return !(*this == o);
  }

  bool operator==(const FName &o) const 
  {
    return (ComparisonIndex == o.ComparisonIndex);
  }

  bool operator!=(const FName &o) const 
  {
    return !(*this == o);
  }
};

#endif // !FNAME_HPP