#ifndef FLI_REGISTRY_COMPOSITE_INDEX_HPP
  #define FLI_REGISTRY_COMPOSITE_INDEX_HPP

  #include <cstdint>
  #include <stdexcept>

struct CompositeIndex
{
  static constexpr uint64_t SOURCE_BITS = 16;
  static constexpr uint64_t OFFSET_BITS = 48;
  static constexpr uint64_t SOURCE_MASK = (1ULL << SOURCE_BITS) - 1;
  static constexpr uint64_t OFFSET_MASK = (1ULL << OFFSET_BITS) - 1;

  static uint64_t Encode(uint16_t sourceId, uint64_t offset) 
  {
    if (offset > OFFSET_MASK) throw std::overflow_error("Offset exceeds 48-bit limit");
    return (static_cast<uint64_t>(sourceId) << OFFSET_BITS) | (offset & OFFSET_MASK);
  }
  
  static void Decode(uint64_t composite, uint16_t& sourceId, uint64_t& offset) 
  {
    sourceId = static_cast<uint16_t>(composite >> OFFSET_BITS);
    offset = composite & OFFSET_MASK;
  }
  
  static uint16_t GetSourceId(uint64_t composite) 
  {
    return static_cast<uint16_t>(composite >> OFFSET_BITS);
  }
  
  static uint64_t GetOffset(uint64_t composite) 
  {
    return composite & OFFSET_MASK;
  }
};

#endif 