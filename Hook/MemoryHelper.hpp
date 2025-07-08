#ifndef MEMORYHELPER_HPP_
    #define MEMORYHELPER_HPP_

    #include <cstdint>
    #include <limits>
    #include <stdexcept>
    
    #define NOMINMAX
    #include <windows.h>

    #include "Export.h"

class MemoryHelper {
    public:
        ML_API static uintptr_t findFreeMemory(uintptr_t address, uint8_t length);
        ML_API static bool isFree(uintptr_t address,  uint8_t length);
        ML_API static CONTEXT getPreviousFrame(CONTEXT originalCtx, uint8_t nth);
    protected:
    private:
};

#endif /* !MEMORYHELPER_HPP_ */
