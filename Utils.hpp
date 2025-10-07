#ifndef UTILS_HPP_
    #define UTILS_HPP_

    #include <string>
    #include <Windows.h>
    #include "Export.h"
    #include <unordered_map>
    #include "SDK/BasicType.h"

    #define NAME_BUFFER 1024

struct FName;

class Utils {
    public:
        static ML_API std::string &FNameToString(uintptr_t baseAddress, FName fname);
        static ML_API std::string &FNameToString(FName fname);
        
        static std::string &PC_FNameToString(uintptr_t baseAdress, FName fname);
        static std::string &PC_FNameToString(FName fname);

        static void EnableAnsiColors();
    protected:
    private:
        static std::unordered_map<FNameEntryId, std::string> _strings; 
};

#endif /* !UTILS_HPP_ */