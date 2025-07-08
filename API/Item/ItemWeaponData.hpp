#ifndef ITEMWEAPONDATA_HPP
    #define ITEMWEAPONDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"
    #include <vector>

class ML_API ItemWeaponData : public ItemUniqueSkillEquipData
{
    public:
        ItemWeaponData(FGDItemWeaponData& data) : ItemUniqueSkillEquipData(data){};

        void    GetPhysicalOffenses();
};

#endif // !ITEMWeaponDATA_HPP