#ifndef FNAME_HPP
  #define FNAME_HPP
  
  #include "API/Function/Engine/FNameCTor.hpp"
  #include "API/Function/Engine/FnameToString.hpp"
  #include "SDK/BasicType.h"
  #include <string>
  #include <string_view>


class API_FName
{
  uint32_t ComparisonIndex = 0;
  uint32_t Number = 0;

  public:
  API_FName(std::string_view value)
  {
    FNameCTor::call(reinterpret_cast<FName*>(this), static_cast<int>(value.size()), value.data(), 1);
  }

  std::string ToString()
  {
    FString str;
    FNameToString::call(reinterpret_cast<FName*>(this), &str);

    return str.ToString();
  }
};

#define FName API_FName 

#endif // !FNAME_HPP