#ifndef SDKFIX_H
#define SDKFIX_H

#include "SDK.h"

#undef FCharaStatusGroupV
struct FCharaStatusGroupV
{
	uint64_t unknown;
	TArray<FAvatarCharaStatusV>						   m_stAvatarV;
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

#undef FGDItemData
struct FGDItemData : FTableRowBase
{ 
	FName                                              ID;                                                         // 0x0008   (0x0008)  
	FName                                              nameId;                                                     // 0x0010   (0x0008)  
	FName                                              DescId;                                                     // 0x0018   (0x0008)  
	FName                                              overwriteIconName;                                          // 0x0020   (0x0008)  
	uint32_t                                           sortOrder;                                                  // 0x0028   (0x0004)  
	uint32_t                                           flagNo;                                                     // 0x002C   (0x0004)  
	EItemCategory									   Category;                                                   // 0x0030   (0x0001)  
	EItemType										   Type;                                                       // 0x0031   (0x0001)  
	char                                               series;                                                     // 0x0032   (0x0001)  
	char                                               seType;                                                     // 0x0033   (0x0001)  
	uint16_t                                           StackMax;                                                   // 0x0034   (0x0002)  
	bool                                               disableSoldAbadon;                                          // 0x0036   (0x0001)  
	bool                                               disableUsedInventory;                                       // 0x0037   (0x0001)  
	bool                                               disableBagRegist;                                           // 0x0038   (0x0001)  
	bool                                               disablePresentToNPC;                                        // 0x0039   (0x0001)  
	bool                                               disablePresentToMultiplay;                                  // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED
	FGDStCommon_PriceInfo                              priceInfo;                                                  // 0x0040   (0x0090)  
	ERarityType										   rarity;                                                     // 0x00D0   (0x0001)  
	EItemQualityType								   Quality;                                                    // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00D2   (0x0006)  MISSED
	TArray<FGDStCommon_CondCmd>                        enablePresentReceiveCondList;                               // 0x00D8   (0x0010)  
	EItemEffectType									   dropEffType;                                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

#undef FGDRecipeData
struct FGDRecipeData : FTableRowBase
{ 
	FName                                              recipeId;                                                   // 0x0008   (0x0008)  
	ERecipeType                                        Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGDRecipeData_LifeParamInfo                        lifeParamInfo;                                              // 0x0014   (0x0008)  
	ERecipeCategory									   Category;                                                   // 0x001C   (0x0001)  
	ERecipeItemSeries                                  recipeItemSeries;                                           // 0x001D   (0x0001)  
	EItemTitleType                                     titleType;                                                  // 0x001E   (0x0001)  
	ERandomRecipeType                                  randomRecipeType;                                           // 0x001F   (0x0001)  
	FName                                              randomResipeTableId;                                        // 0x0020   (0x0008)  
	FName                                              ItemId;                                                     // 0x0028   (0x0008)  
	ERarityType                                        rarity;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              gameTableId;                                                // 0x0034   (0x0008)  
	FGDRecipeData_RewardData                           rewardData;                                                 // 0x003C   (0x0030)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FGDRecipeData_ItemInfo>                     itemList;                                                   // 0x0070   (0x0010)  
	FGDRecipeData_ItemInfo                             rebuildItem;                                                // 0x0080   (0x000C)  
	char                                               addMaterialType;                                            // 0x008C   (0x0001)  
	bool                                               requestable;                                                // 0x008D   (0x0001)  
	bool                                               notAcquiredLife;                                            // 0x008E   (0x0001)  
	char                                               multipleCraftLimit;                                         // 0x008F   (0x0001)  
};


#endif // !SDKFIX_H