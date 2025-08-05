#ifndef MAPPICKPOINT_HPP
    #define MAPPICKPOINT_HPP
    #include "Export.h"
    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"
    #include <string>

    #include "MapPickPoint_ParamInfo.hpp"

class ML_API MapPickPoint : public GameObjectProxy<FGDMapPickPoint>
{
    public:
    MapPickPoint(FGDMapPickPoint& data) : GameObjectProxy(data){};

    //TODO: Finish
    std::string             GetIdentifier();

    MapPickPointParamInfo   GetParamInfo()              { return MapPickPointParamInfo(this->_object.ParamInfo); }

    FVector4                GetActorPos()               { return this->_object.actorPos; }
    void                    SetActorPos(FVector4 value) { this->_object.actorPos = value; }
    void                    SetActorX(double value)     { this->_object.actorPos.X = value; }
    void                    SetActorY(double value)     { this->_object.actorPos.Y = value; }
    void                    SetActorZ(double value)     { this->_object.actorPos.Z = value; }
    void                    SetActorW(double value)     { this->_object.actorPos.W = value; }

};

#endif // !MAPPICKPOINT_HPP