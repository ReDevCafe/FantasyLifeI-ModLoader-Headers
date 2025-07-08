
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Enum /Script/NiagaraSimCaching.ENiagaraSimCacheSectionPlayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimCacheSectionPlayMode : uint8_t
{
	ENiagaraSimCacheSectionPlayMode__SimWithoutCache                                 = 0,
	ENiagaraSimCacheSectionPlayMode__DisplayCacheOnly                                = 1
};

/// Enum /Script/NiagaraSimCaching.ENiagaraSimCacheSectionStretchMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimCacheSectionStretchMode : uint8_t
{
	ENiagaraSimCacheSectionStretchMode__Repeat                                       = 0,
	ENiagaraSimCacheSectionStretchMode__TimeDilate                                   = 1
};

/// Struct /Script/NiagaraSimCaching.MovieSceneNiagaraCacheParams
/// Size: 0x0088 (136 bytes) (0x000020 - 0x000088) align 8 MaxSize: 0x0088
struct FMovieSceneNiagaraCacheParams : FMovieSceneBaseCacheParams
{ 
	FNiagaraSimCacheCreateParameters                   CacheParameters;                                            // 0x0020   (0x0058)  
	class UNiagaraSimCache*                            SimCache;                                                   // 0x0078   (0x0008)  
	bool                                               bLockCacheToReadOnly;                                       // 0x0080   (0x0001)  
	bool                                               bOverrideQualityLevel;                                      // 0x0081   (0x0001)  
	EPerQualityLevels                                  RecordQualityLevel;                                         // 0x0082   (0x0001)  
	ENiagaraSimCacheSectionPlayMode                    CacheReplayPlayMode;                                        // 0x0083   (0x0001)  
	ENiagaraSimCacheSectionStretchMode                 SectionStretchMode;                                         // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0085   (0x0003)  MISSED
};

/// Class /Script/NiagaraSimCaching.MovieSceneNiagaraCacheSection
/// Size: 0x0188 (392 bytes) (0x0000F8 - 0x000188) align 8 MaxSize: 0x0188
class UMovieSceneNiagaraCacheSection : public UMovieSceneBaseCacheSection
{ 
public:
	FMovieSceneNiagaraCacheParams                      Params;                                                     // 0x00F8   (0x0088)  
	bool                                               bCacheOutOfDate;                                            // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0181   (0x0007)  MISSED
};

/// Class /Script/NiagaraSimCaching.MovieSceneNiagaraCacheTrack
/// Size: 0x00C8 (200 bytes) (0x000098 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMovieSceneNiagaraCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0098   (0x0010)  MISSED
	bool                                               bIsRecording;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00B0   (0x0010)  
	bool                                               bCacheRecordingEnabled;                                     // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Struct /Script/NiagaraSimCaching.MovieSceneNiagaraSectionTemplateParameter
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FMovieSceneNiagaraSectionTemplateParameter
{ 
	FMovieSceneFrameRange                              SectionRange;                                               // 0x0000   (0x0010)  
	FMovieSceneNiagaraCacheParams                      Params;                                                     // 0x0010   (0x0088)  
};

/// Struct /Script/NiagaraSimCaching.MovieSceneNiagaraCacheSectionTemplate
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieSceneNiagaraCacheSectionTemplate : FMovieSceneTrackImplementation
{ 
	TArray<FMovieSceneNiagaraSectionTemplateParameter> CacheSections;                                              // 0x0010   (0x0010)  
};

#pragma pack(pop)


