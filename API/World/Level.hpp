#ifndef LEVEL_HPP
    
    #define LEVEL_HPP
    #include "Export.h"
    #include "SDK.h"
    #include <unordered_map>
    #include <string>
    #include <type_traits>
    #include "API/Pick/MapPickPoint.hpp"
    #include <memory>

class ML_API Level 
{
    public:
        Level(
            UGDSMapPickPoint* mapPickPoint
        );
        
        Level(const Level&) = delete;
        Level& operator=(const Level&) = delete;
         ~Level() = default;
        
    private:
    std::unordered_map<std::string, std::unique_ptr<MapPickPoint>> _pickPoint;
};

#endif // !LEVEL_HPP
