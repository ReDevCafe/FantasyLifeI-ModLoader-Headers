#ifndef FNAMEPOOL_HPP
    #define FNAMEPOOL_HPP
    #include "SDK.h"
    #include "string.h"
    #include <unordered_map>

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

    uint32_t GetCurrentBlock(uintptr_t base) const
    {
        return *reinterpret_cast<uint32_t*>(base + CurrentBlock);
    }

    uint32_t GetCurrentByteCursor(uintptr_t base) const
    {
        return *reinterpret_cast<uint32_t*>(base + CurrentByteCursor);
    }

    uintptr_t* GetBlocks(uintptr_t base) const
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
    static std::string getString(uintptr_t baseAddress, const FName& name);
    static std::string getString(const FName& name);

    static FName       getFName(uintptr_t baseAddress, const std::string& data);
    static FName       getFName(const std::string& data);

    private:
    static std::unordered_map<std::string, FNameEntryId> fnameCache;
    static std::unordered_map<FNameEntryId, std::string> stringCache;
};

#endif // ! #define FNAMEPOOL_HPP

