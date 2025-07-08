#ifndef MODLOADER_HPP
    #define MODLOADER_HPP

    #include "Logger/Logger.hpp"
    #include "ModEnvironnement.hpp"
    #include "Utils.hpp"
    #include "GameData.hpp"
    #include "GameCache.hpp"
    #include "Hook/MemoryHelper.hpp"
    #include "Patcher/Patcher.hpp"
    #include "Patcher/Patches/EventHook.hpp"
    #include "Export.h"

class ModLoader {
    public:
        ML_API static GameData *gameData;
        ML_API static GameCache *gameCache;

        static ModEnvironnement *modEnvironnement;
        static Logger *logger; 
        
        static DWORD WINAPI init(LPVOID lpParam);

    protected:
    private:
};

#endif /* !MODLOADER_HPP */