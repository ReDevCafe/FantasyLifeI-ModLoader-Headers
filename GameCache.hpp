#ifndef GAMECACHE_HPP
    #define GAMECACHE_HPP

    #include <functional>
    #include <string>
    #include <type_traits>
    #include <memory>

    #include "API/Item/ItemData.hpp"
    #include "API/Recipe/RecipeData.hpp"
    #include "API/Skill/SkillData.hpp"
    #include "API/Common/CommonPickParamData.hpp"
    #include "API/Entities/CharaData.hpp"
    #include "API/World/Level.hpp"

class UStaticDataManager;
class GameData;
class GameCache 
{
    public:
        GameCache();
        ~GameCache() = default;

        //                      Called for caches that require the save to be loaded
        void                    PostLoadCache   ();

        FGDStCommon_NounInfo*   GetNoun         (std::string key) const { return _cacheNounInfo.at(key); }
        FGDStCommon_TextInfo*   GetText         (std::string key) const { return _cacheTextInfo.at(key); }
        SkillData               GetSkill        (std::string key) const { return *_cacheSkillData.at(key); }
        CommonPickParamData     GetPickParam    (std::string key) const { return *_cacheCommonPickParam.at(key); }
        ItemData                GetItem         (std::string key) const { return *_cacheItemData.at(key); }
        RecipeData              GetRecipe       (std::string key) const { return *_cacheRecipeData.at(key); }
        CharaData               GetChara        (std::string key) const { return *_cacheCharaData.at(key); }

        /* Get Lists
        const std::unordered_map<std::string, FGDStCommon_NounInfo*>                GetNounInfos()            const { return _cacheNounInfo; }
        const std::unordered_map<std::string, FGDStCommon_TextInfo*>                GetTextInfos()            const { return _cacheTextInfo; }
        const std::unordered_map<std::string, std::unique_ptr<CommonPickParamData>> GetCommonPicksParamData() const { return _cacheCommonPickParam; }
        const std::unordered_map<std::string, std::unique_ptr<SkillData>>           GetSkillsData()           const { return _cacheSkillData; }
        const std::unordered_map<std::string, std::unique_ptr<ItemData>>            GetListItems()            const { return _cacheItemData; }
        const std::unordered_map<std::string, std::unique_ptr<RecipeData>>          GetListRecipes()          const { return _cacheRecipeData; }
        const std::unordered_map<std::string, std::unique_ptr<CharaData>>           GetCharasData()           const { return _cacheCharaData; }
        const std::unordered_map<std::string, std::unique_ptr<MapSubLevel>>         GetSubLevels()            const { return _cacheSubLevel; }
        const std::unordered_map<std::string, std::unique_ptr<MapData>>             GetMaps()                 const { return _cacheMap; }
        */

    private:
        std::unordered_map<std::string, FGDStCommon_NounInfo*>                  _cacheNounInfo;
        std::unordered_map<std::string, FGDStCommon_TextInfo*>                  _cacheTextInfo;
        std::unordered_map<std::string, std::unique_ptr<CommonPickParamData>>   _cacheCommonPickParam;
        std::unordered_map<std::string, std::unique_ptr<SkillData>>             _cacheSkillData;
        std::unordered_map<std::string, std::unique_ptr<ItemData>>              _cacheItemData;
        std::unordered_map<std::string, std::unique_ptr<RecipeData>>            _cacheRecipeData;
        std::unordered_map<std::string, std::unique_ptr<CharaData>>             _cacheCharaData;
        std::unordered_map<std::string, std::unique_ptr<Level>>                 _cacheLevel;

        void initNoun(GameData* gmd, UStaticDataManager* sdm);
        void initText(GameData* gmd, UStaticDataManager* sdm);
        void initSkill(GameData* gmd, UStaticDataManager* sdm);
        void initCommonPickParam(GameData* gmd, UStaticDataManager* sdm);
        void initItem(GameData* gmd, UStaticDataManager* sdm);
        void initRecipe(GameData* gmd, UStaticDataManager* sdm);
        void initChara(GameData* gmd, UStaticDataManager* sdm);

        void initLevel(GameData* gmd);

        // Post load 
        void postInitText(GameData* gmd, UStaticDataManager* sdm);
};

#endif // !GAMECACHE_HPP