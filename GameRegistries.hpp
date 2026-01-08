#ifndef FLI_GAME_REGISTRIES_PROXY
#define FLI_GAME_REGISTRIES_PROXY

#include "API/Function/Engine/FName/FNameCTor.hpp"
#include "API/Registry/TMapRegistry.hpp"
#include "API/Registry/WrappedRegistry.hpp"
#include "API/Registry/MergedRegistry.hpp"
#include "API/Item/ItemMaterialData.hpp"
#include "Export.h"
#include "SDK/DP1Project.h"
#include <memory>

class GameData;

class ML_API GameRegistries 
{
public:
  void init(GameData* gameData);

private:
  void bindNounPRE(UStaticDataManager* sdm);
  void bindItem(UStaticDataManager* sdm);

public:
  static std::shared_ptr<MergedRegistry<FGDBattleCommandNameNoun>>         BATTLE_COMMAND_NOUN;
  static std::shared_ptr<MergedRegistry<FGDPlantDungeonText_Noun>>         PLANT_DUNGEON_NOUN;
  static std::shared_ptr<MergedRegistry<FGDItemText_Noun>>                 ITEM_NOUN;
  static std::shared_ptr<MergedRegistry<FGDLifeText_Noun>>                 LIFE_NOUN;
  static std::shared_ptr<MergedRegistry<FGDSkillText>>                     SKILL_NOUN;
  static std::shared_ptr<MergedRegistry<FGDQuestRequestMapText_Noun>>      QUEST_REQUEST_NOUN;
  static std::shared_ptr<MergedRegistry<FGDQuestTitleText>>                QUEST_TITLE_NOUN;
  static std::shared_ptr<MergedRegistry<FGDMapText_Noun>>                  MAP_NOUN;
  static std::shared_ptr<MergedRegistry<FGDMenuText_Noun>>                 MENU_NOUN;
  static std::shared_ptr<MergedRegistry<FGDCharaText_Noun>>                CHARA_NOUN;
  static std::shared_ptr<MergedRegistry<FGDSystemText_Noun>>               SYSTEM_NOUN;
  
  static std::shared_ptr<MergedRegistry<ItemMaterialData>>                 ITEM_MATERIAL;

  template<typename T>
  static uint16_t AddModSource(std::shared_ptr<MergedRegistry<T>>& registry, std::shared_ptr<RegistrySource<T>> source)
  {
    if (!registry) throw std::runtime_error("Registry not initialized");
    return registry->AddSource(source);
  }
  
  template<typename T>
  static void RemoveModSource(std::shared_ptr<MergedRegistry<T>>& registry, uint16_t sourceId)
  {
    if (!registry) throw std::runtime_error("Registry not initialized");
    registry->RemoveSource(sourceId);
  }

private:
  static uint16_t _battleCommandNounSourceId;
  static uint16_t _plantDungeonNounSourceId;
  static uint16_t _itemNounSourceId;
  static uint16_t _lifeNounSourceId;
  static uint16_t _skillNounSourceId;
  static uint16_t _questRequestNounSourceId;
  static uint16_t _questTitleNounSourceId;
  static uint16_t _mapNounSourceId;
  static uint16_t _menuNounSourceId;
  static uint16_t _charaNounSourceId;
  static uint16_t _systemNounSourceId;
  static uint16_t _itemMaterialSourceId;
};

#endif