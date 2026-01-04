#if !defined(COMMONITEMEFFECTPARAM_HPP)
    #define COMMONITEMEFFECTPARAM_HPP

    #include "API/GameObjectProxy.hpp"
    #include "API/Language.hpp"

class CommonItemEffectParam : public GameObjectProxy<FGDStCommon_ItemEffParam>
{
    public:
    CommonItemEffectParam(FGDStCommon_ItemEffParam& data) : GameObjectProxy(data){};

    void            SetStrength(int16_t value)      { this->_object.val = value; }
    int16_t         GetStrength()                   {  return this->_object.val; }

    void            SetTime(int16_t value)          { this->_object.Time = value; }
    int16_t         GetTime()                       {  return this->_object.Time; }

    void            SetIsRange(bool value)          { this->_object.isRange = value; }
    bool            GetIsRange()                    {  return this->_object.isRange; }

    void            SetEffect(EItemEffectType value){ this->_object.itemEffectType = value; }
    EItemEffectType GetEffect()                     {  return this->_object.itemEffectType; }

    protected:
    std::string     getDescIdentifier();

    public:
    std::string     GetDescription(LANG lang);

};

#endif // COMMONITEMEFFECTPARAM_HPP
