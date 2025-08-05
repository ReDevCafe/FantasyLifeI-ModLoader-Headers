#ifndef PICKSTATUSPARAM_HPP
    #define PICKSTATUSPARAM_HPP
    #include "Export.h"
    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

class ML_API PickStatusParam : public GameObjectProxy<FGDStCommon_PickStatusParam>
{
    public:
    PickStatusParam(FGDStCommon_PickStatusParam &data) : GameObjectProxy(data){};

    int32_t GetHP()                             {  return this->_object.HP; }
    void    SetHP(int32_t value)                { this->_object.HP = value; }

    int32_t GetOffense()                        {  return this->_object.offense; }
    void    SetOffense(int32_t value)           { this->_object.offense = value; }

    int32_t GetDefense()                        {  return this->_object.defense; }
    void    SetDefense(int32_t value)           { this->_object.defense = value; }

    int32_t GetCriticalEvasion()                {  return this->_object.criticalRateEvasion; }
    void    SetCriticalEvasion(int32_t value)   { this->_object.criticalRateEvasion = value; }
};


#endif // !PICKSTATUSPARAM_HPP