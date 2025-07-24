
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioAnalyzer
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2
};

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min                                                       = 0,
	EConstantQFFTSizeEnum__XXSmall                                                   = 1,
	EConstantQFFTSizeEnum__XSmall                                                    = 2,
	EConstantQFFTSizeEnum__Small                                                     = 3,
	EConstantQFFTSizeEnum__Medium                                                    = 4,
	EConstantQFFTSizeEnum__Large                                                     = 5,
	EConstantQFFTSizeEnum__XLarge                                                    = 6,
	EConstantQFFTSizeEnum__XXLarge                                                   = 7,
	EConstantQFFTSizeEnum__Max                                                       = 8
};

/// Enum /Script/AudioSynesthesia.ELoudnessCurveTypeEnum
/// Size: 0x01 (1 bytes)
enum class ELoudnessCurveTypeEnum : uint8_t
{
	ELoudnessCurveTypeEnum__A                                                        = 0,
	ELoudnessCurveTypeEnum__B                                                        = 1,
	ELoudnessCurveTypeEnum__C                                                        = 2,
	ELoudnessCurveTypeEnum__D                                                        = 3,
	ELoudnessCurveTypeEnum__None                                                     = 4
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x01 (1 bytes)
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4
};

/// Enum /Script/AudioSynesthesia.EMeterPeakType
/// Size: 0x01 (1 bytes)
enum class EMeterPeakType : uint8_t
{
	EMeterPeakType__MeanSquared                                                      = 0,
	EMeterPeakType__RootMeanSquared                                                  = 1,
	EMeterPeakType__Peak                                                             = 2,
	EMeterPeakType__Count                                                            = 3
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
public:
};

/// Class /Script/AudioSynesthesia.ConstantQSettings
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UConstantQSettings : public UAudioSynesthesiaSettings
{ 
public:
	float                                              StartingFrequencyHz;                                        // 0x0028   (0x0004)  
	int32_t                                            NumBands;                                                   // 0x002C   (0x0004)  
	float                                              NumBandsPerOctave;                                          // 0x0030   (0x0004)  
	float                                              AnalysisPeriodInSeconds;                                    // 0x0034   (0x0004)  
	bool                                               bDownmixToMono;                                             // 0x0038   (0x0001)  
	EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0039   (0x0001)  
	EFFTWindowType                                     windowType;                                                 // 0x003A   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x003B   (0x0001)  
	float                                              BandWidthStretch;                                           // 0x003C   (0x0004)  
	EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0044   (0x0004)  
};

/// Class /Script/AudioSynesthesia.ConstantQAnalyzer
/// Size: 0x00F8 (248 bytes) (0x0000A0 - 0x0000F8) align 8 MaxSize: 0x00F8
class UConstantQAnalyzer : public UAudioAnalyzer
{ 
public:
	class UConstantQSettings*                          Settings;                                                   // 0x00A0   (0x0008)  
	SDK_UNDEFINED(16,360) /* FMulticastInlineDelegate */ __um(OnConstantQResults);                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,361) /* FMulticastInlineDelegate */ __um(OnLatestConstantQResults);                           // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x00E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQAnalyzer.GetNumCenterFrequencies
	// int32_t GetNumCenterFrequencies();                                                                                       // [0x883a270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQAnalyzer.GetCenterFrequencies
	// void GetCenterFrequencies(TArray<float>& OutCenterFrequencies);                                                          // [0x88393b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              StartingFrequency;                                          // 0x0028   (0x0004)  
	int32_t                                            NumBands;                                                   // 0x002C   (0x0004)  
	float                                              NumBandsPerOctave;                                          // 0x0030   (0x0004)  
	float                                              AnalysisPeriod;                                             // 0x0034   (0x0004)  
	bool                                               bDownmixToMono;                                             // 0x0038   (0x0001)  
	EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0039   (0x0001)  
	EFFTWindowType                                     windowType;                                                 // 0x003A   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x003B   (0x0001)  
	float                                              BandWidthStretch;                                           // 0x003C   (0x0004)  
	EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0044   (0x0004)  
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UConstantQNRTSettings*                       Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	// void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);               // [0x8839c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	// void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);                         // [0x88395f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.LoudnessSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULoudnessSettings : public UAudioSynesthesiaSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x002C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0030   (0x0004)  
	ELoudnessCurveTypeEnum                             CurveType;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0038   (0x0004)  
	float                                              ExpectedMaxLoudness;                                        // 0x003C   (0x0004)  
};

/// Class /Script/AudioSynesthesia.LoudnessAnalyzer
/// Size: 0x00E8 (232 bytes) (0x0000A0 - 0x0000E8) align 8 MaxSize: 0x00E8
class ULoudnessAnalyzer : public UAudioAnalyzer
{ 
public:
	class ULoudnessSettings*                           Settings;                                                   // 0x00A0   (0x0008)  
	SDK_UNDEFINED(16,362) /* FMulticastInlineDelegate */ __um(OnOverallLoudnessResults);                           // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,363) /* FMulticastInlineDelegate */ __um(OnPerChannelLoudnessResults);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,364) /* FMulticastInlineDelegate */ __um(OnLatestOverallLoudnessResults);                     // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,365) /* FMulticastInlineDelegate */ __um(OnLatestPerChannelLoudnessResults);                  // 0x00D8   (0x0010)  
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x002C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0030   (0x0004)  
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
public:
	class ULoudnessNRTSettings*                        Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	// void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);                                                   // [0x883a180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	// void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                         // [0x8839d90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	// void GetLoudnessAtTime(float InSeconds, float& OutLoudness);                                                             // [0x8839b60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	// void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                                   // [0x88397c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.MeterSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMeterSettings : public UAudioSynesthesiaSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	EMeterPeakType                                     PeakMode;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            MeterAttackTime;                                            // 0x0030   (0x0004)  
	int32_t                                            MeterReleaseTime;                                           // 0x0034   (0x0004)  
	int32_t                                            PeakHoldTime;                                               // 0x0038   (0x0004)  
	float                                              ClippingThreshold;                                          // 0x003C   (0x0004)  
};

/// Class /Script/AudioSynesthesia.MeterAnalyzer
/// Size: 0x0148 (328 bytes) (0x0000A0 - 0x000148) align 8 MaxSize: 0x0148
class UMeterAnalyzer : public UAudioAnalyzer
{ 
public:
	class UMeterSettings*                              Settings;                                                   // 0x00A0   (0x0008)  
	SDK_UNDEFINED(16,366) /* FMulticastInlineDelegate */ __um(OnOverallMeterResults);                              // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,367) /* FMulticastInlineDelegate */ __um(OnPerChannelMeterResults);                           // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00E0   (0x0018)  MISSED
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(OnLatestOverallMeterResults);                        // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0108   (0x0018)  MISSED
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(OnLatestPerChannelMeterResults);                     // 0x0120   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0130   (0x0018)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	bool                                               bDownmixToMono;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              GranularityInSeconds;                                       // 0x002C   (0x0004)  
	float                                              Sensitivity;                                                // 0x0030   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0034   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UOnsetNRTSettings*                           Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	// void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x8839eb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	// void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x88398e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	EFFTSize                                           FFTSize;                                                    // 0x002C   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x002D   (0x0001)  
	EFFTWindowType                                     windowType;                                                 // 0x002E   (0x0001)  
	bool                                               bDownmixToMono;                                             // 0x002F   (0x0001)  
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer
/// Size: 0x00F8 (248 bytes) (0x0000A0 - 0x0000F8) align 8 MaxSize: 0x00F8
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{ 
public:
	class USynesthesiaSpectrumAnalysisSettings*        Settings;                                                   // 0x00A0   (0x0008)  
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(OnSpectrumResults);                                  // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(OnLatestSpectrumResults);                            // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x00E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
	// int32_t GetNumCenterFrequencies();                                                                                       // [0x883a2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
	// void GetCenterFrequencies(float InSampleRate, TArray<float>& OutCenterFrequencies);                                      // [0x8839500] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AudioSynesthesia.ConstantQResults
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FConstantQResults
{ 
	float                                              TimeSeconds;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      SpectrumValues;                                             // 0x0008   (0x0010)  
};

/// Struct /Script/AudioSynesthesia.LoudnessResults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FLoudnessResults
{ 
	float                                              Loudness;                                                   // 0x0000   (0x0004)  
	float                                              NormalizedLoudness;                                         // 0x0004   (0x0004)  
	float                                              PerceptualEnergy;                                           // 0x0008   (0x0004)  
	float                                              TimeSeconds;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/AudioSynesthesia.MeterResults
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMeterResults
{ 
	float                                              TimeSeconds;                                                // 0x0000   (0x0004)  
	float                                              MeterValue;                                                 // 0x0004   (0x0004)  
	float                                              PeakValue;                                                  // 0x0008   (0x0004)  
	int32_t                                            NumSamplesClipping;                                         // 0x000C   (0x0004)  
	float                                              ClippingValue;                                              // 0x0010   (0x0004)  
};

/// Struct /Script/AudioSynesthesia.SynesthesiaSpectrumResults
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSynesthesiaSpectrumResults
{ 
	float                                              TimeSeconds;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      SpectrumValues;                                             // 0x0008   (0x0010)  
};

#pragma pack(pop)


