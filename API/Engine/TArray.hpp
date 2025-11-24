#ifndef TARRAY_HPP
  #define TARRAY_HPP

#include <cstdint>
template <class T = char>
class TArray
{
  friend class FString;

  public:
    T* Data;
    int32_t Count;
    int32_t Max;

  inline TArray()
  {
      Data = nullptr;
      Count = Max = 0;
  };

  inline int Num() const
  {
      return Count;
  };

  inline T& operator[](int i)
  {
      return Data[i];
  };

  inline const T& operator[](int i) const
  {
      return Data[i];
  };

  inline bool IsValidIndex(int i) const
  {
      return i < Num();
  }

  inline int Slack() const
  {
      return Max - Count;
  }

  inline bool RemoveSingle(const int Index)
  {
      if (Index < Count)
      {
          if (Index != Count - 1)
              Data[Index] = Data[Count - 1];

          --Count;

          return true;
      }
      return false;
  }

  inline void RemoveAt(int Index, int Length = 1)
  {
      for (; Length != 0; --Length)
      {
          if (!RemoveSingle(Index++))
              break;
      }
  }


};

#endif //! TARRAY_HPP