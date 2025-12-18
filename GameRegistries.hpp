#ifndef FLI_GAME_REGISTRIES_PROXY
  #define FLI_GAME_REGISTRIES_PROXY

  #include "API/Registry/WrappedRegistry.hpp"
  #include "Export.h"
  #include "API/Item/ItemMaterialData.hpp"


class GameData;
class ML_API GameRegistries 
{
  public:
  void init(GameData* gameData);
  void bindItem(UStaticDataManager* sdm);

  static WrappedRegistry<ItemMaterialData, FGDItemMaterialData>* ITEM_MATERIAL;
};

#endif