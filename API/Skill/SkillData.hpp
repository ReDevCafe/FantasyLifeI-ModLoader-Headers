#ifndef SKILLDATA_HPP
    #define SKILLDATA_HPP

    #include "API/Common/CommonSkillParam.hpp"
    #include "API/Language.hpp"
    #include <vector>
    #include "SkillEffectInfo.hpp"
    #include "Export.h"
//TODO: Check how FGDSkillData works
class ML_API SkillData : public GameObjectProxy<FGDSkillData>
{
    public:
        SkillData(FGDSkillData& data) : 
            GameObjectProxy(data)
        {};

        std::string         GetIdentifier();

        ESkillCategory      GetCategory()                        { return this->_object.Category;}
        void                SetCategory(ESkillCategory category) { this->_object.Category = category; }

        CommonSkillParam    GetParams()                          { return CommonSkillParam(this->_object.Params); }

    protected:
        std::string         GetNameIdentifier();
    public:
        std::string         GetName(LANG lang);
        void                SetName(LANG lang, FString name);

    protected:
        std::string         GetDescIdentifier();
    public:
        std::string         GetDescription(LANG lang);
        void                SetDescription(LANG lang, FString name);

        ESkillIconType      GetIconType()                       { return this->_object.skillIconType; }
        void                SetIconType(ESkillIconType type)    { this->_object.skillIconType = type; }

        std::string         GetLifeLimit();

        uint8_t             GetSortOrder()                      { return  this->_object.sortOrder; }
        void                SetSortOrder(int8_t value)          { this->_object.sortOrder = value; }

        SkillEffectInfo     GetSkillEffect(int index);
        void                SetSkillEffect(int index, SkillEffectInfo value);
        void                AddSkillEffect(SkillEffectInfo value);

        bool                GetNotAggregated()                  { return  this->_object.notAggregated; }
        void                SetNotAggregated(bool value)        { this->_object.notAggregated = value; }

        ERarityType         GetRarity()                         { return  this->_object.rarity; }
        void                SetRarity(ERarityType value)        { this->_object.rarity = value; }
};

#endif // !SKILLDATA_HPP