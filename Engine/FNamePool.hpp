#ifndef FNAMEPOOL_HPP
    #define FNAMEPOOL_HPP
    #include "SDK.h"
    #include "string.h"
    #include <unordered_map>
    #include <shared_mutex>



static constexpr size_t align_up(size_t size, size_t alignment) 
{
    return (size + alignment - 1) & ~(alignment - 1);
}

static constexpr uint32_t FNameMaxBlocksBits = 13;
static constexpr uint32_t FNameBlockOffsetBits = 16;
static constexpr uint32_t FNameBlockSize = 1 << FNameMaxBlocksBits;
static constexpr uint32_t FNameBlockOffsets =  1 << FNameBlockOffsetBits;
static constexpr uint32_t Stride = 2;
static constexpr uint32_t BlockSizeBytes = Stride * FNameBlockOffsets;

struct FNameEntryHeader 
{
    uint16_t bIsWide    : 1;
    uint16_t ProbeHash  : 5;
    uint16_t Length     : 10;    
};

struct FNameEntryAllocator
{
    void* Lock;
    static constexpr uintptr_t CurrentBlock      = 0x0;
    static constexpr uintptr_t CurrentByteCursor = CurrentBlock + sizeof(uint32_t);
    static constexpr uintptr_t Blocks            = align_up(CurrentByteCursor + sizeof(uint32_t), alignof(uint8_t*));

    uintptr_t* GetBlocks(uintptr_t base)
    {
        return reinterpret_cast<uintptr_t*>(base + Blocks);
    }
};

struct FNamePool 
{
    FNameEntryAllocator Allocator;
};

class FNameUtils
{
    public: 
    static std::string GetString(uintptr_t baseAddress, const FName& name);
    static std::string GetString(const FName& name);

    //WARNING: Really slow, know what u do before using it.
    static FName       GetFName(uintptr_t baseAddress, const std::string& data);
    //WARNING: Really slow, know what u do before using it.
    static FName       GetFName(const std::string& data);

    static FName       CreateFName(uintptr_t baseAddress, const std::string& data);
    static FName       CreateFName(const std::string& data);

    private:
    static std::unordered_map<std::string, FNameEntryId> _fnameCache;
    static std::unordered_map<FNameEntryId, std::string> _stringCache;
    static std::shared_mutex                             _cacheMutex;

    static void entryPush(std::string entry, FNameEntryId id);
    static uint8_t fnv1a5bits(const std::string& data);
};

#endif // ! #define FNAMEPOOL_HPP

