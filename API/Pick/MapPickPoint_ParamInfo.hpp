#ifndef MAPPICKPOINT_PARAMINFO_HPP
    #define MAPPICKPOINT_PARAMINFO_HPP
    #include "Export.h"
    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

    #include "PickStatusParam.hpp"

class ML_API MapPickPointParamInfo : GameObjectProxy<FGDMapPickPoint_ParamInfo>
{
    public:
    MapPickPointParamInfo(FGDMapPickPoint_ParamInfo &data) : GameObjectProxy(data){};

    uint16_t GetLevel()                 {  return this->_object.Level; }
    void     SetLevel(uint16_t value)   { this->_object.Level = value; }

    PickStatusParam GetParamCorrect()   { return PickStatusParam(this->_object.baseParamCorrect); }
};

#endif // MAPPICKPOINT_PARAMINFO_HPP