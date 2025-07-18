
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
/// Size: 0x01 (1 bytes)
enum class EGLTFTextureImageFormat : uint8_t
{
	EGLTFTextureImageFormat__None                                                    = 0,
	EGLTFTextureImageFormat__PNG                                                     = 1,
	EGLTFTextureImageFormat__JPEG                                                    = 2
};

/// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
/// Size: 0x01 (1 bytes)
enum class EGLTFMaterialVariantMode : uint8_t
{
	EGLTFMaterialVariantMode__None                                                   = 0,
	EGLTFMaterialVariantMode__Simple                                                 = 1,
	EGLTFMaterialVariantMode__UseMeshData                                            = 2
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
/// Size: 0x01 (1 bytes)
enum class EGLTFMaterialBakeMode : uint8_t
{
	EGLTFMaterialBakeMode__Disabled                                                  = 0,
	EGLTFMaterialBakeMode__Simple                                                    = 1,
	EGLTFMaterialBakeMode__UseMeshData                                               = 2
};

/// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
/// Size: 0x01 (1 bytes)
enum class EGLTFMaterialPropertyGroup : uint8_t
{
	EGLTFMaterialPropertyGroup__None                                                 = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity                                     = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness                                    = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor                                        = 3,
	EGLTFMaterialPropertyGroup__Normal                                               = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion                                     = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness                                   = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal                                = 7
};

/// Struct /Script/GLTFExporter.GLTFMaterialBakeSize
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGLTFMaterialBakeSize
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	bool                                               bAutoDetect;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGLTFOverrideMaterialBakeSettings
{ 
	bool                                               bOverrideSize;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGLTFMaterialBakeSize                              Size;                                                       // 0x0004   (0x000C)  
	bool                                               bOverrideFilter;                                            // 0x0010   (0x0001)  
	TEnumAsByte<TextureFilter>                         Filter;                                                     // 0x0011   (0x0001)  
	bool                                               bOverrideTiling;                                            // 0x0012   (0x0001)  
	TEnumAsByte<TextureAddress>                        Tiling;                                                     // 0x0013   (0x0001)  
};

/// Class /Script/GLTFExporter.GLTFExportOptions
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UGLTFExportOptions : public UObject
{ 
public:
	float                                              ExportUniformScale;                                         // 0x0028   (0x0004)  
	bool                                               bExportPreviewMesh;                                         // 0x002C   (0x0001)  
	bool                                               bSkipNearDefaultValues;                                     // 0x002D   (0x0001)  
	bool                                               bIncludeCopyrightNotice;                                    // 0x002E   (0x0001)  
	bool                                               bExportProxyMaterials;                                      // 0x002F   (0x0001)  
	bool                                               bUseImporterMaterialMapping;                                // 0x0030   (0x0001)  
	bool                                               bExportUnlitMaterials;                                      // 0x0031   (0x0001)  
	bool                                               bExportClearCoatMaterials;                                  // 0x0032   (0x0001)  
	bool                                               bExportClothMaterials;                                      // 0x0033   (0x0001)  
	bool                                               bExportThinTranslucentMaterials;                            // 0x0034   (0x0001)  
	bool                                               bExportSpecularGlossinessMaterials;                         // 0x0035   (0x0001)  
	bool                                               bExportEmissiveStrength;                                    // 0x0036   (0x0001)  
	EGLTFMaterialBakeMode                              BakeMaterialInputs;                                         // 0x0037   (0x0001)  
	FGLTFMaterialBakeSize                              DefaultMaterialBakeSize;                                    // 0x0038   (0x000C)  
	TEnumAsByte<TextureFilter>                         DefaultMaterialBakeFilter;                                  // 0x0044   (0x0001)  
	TEnumAsByte<TextureAddress>                        DefaultMaterialBakeTiling;                                  // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                  // 0x0048   (0x0050)  
	int32_t                                            DefaultLevelOfDetail;                                       // 0x0098   (0x0004)  
	bool                                               bExportVertexColors;                                        // 0x009C   (0x0001)  
	bool                                               bExportVertexSkinWeights;                                   // 0x009D   (0x0001)  
	bool                                               bMakeSkinnedMeshesRoot;                                     // 0x009E   (0x0001)  
	bool                                               bUseMeshQuantization;                                       // 0x009F   (0x0001)  
	bool                                               bExportLevelSequences;                                      // 0x00A0   (0x0001)  
	bool                                               bExportAnimationSequences;                                  // 0x00A1   (0x0001)  
	EGLTFTextureImageFormat                            TextureImageFormat;                                         // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00A3   (0x0001)  MISSED
	int32_t                                            TextureImageQuality;                                        // 0x00A4   (0x0004)  
	bool                                               bExportTextureTransforms;                                   // 0x00A8   (0x0001)  
	bool                                               bAdjustNormalmaps;                                          // 0x00A9   (0x0001)  
	bool                                               bExportHiddenInGame;                                        // 0x00AA   (0x0001)  
	bool                                               bExportLights;                                              // 0x00AB   (0x0001)  
	bool                                               bExportCameras;                                             // 0x00AC   (0x0001)  
	EGLTFMaterialVariantMode                           ExportMaterialVariants;                                     // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x00AE   (0x0002)  MISSED


	/// Functions
	// Function /Script/GLTFExporter.GLTFExportOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x7fce620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFExporter : public UExporter
{ 
public:


	/// Functions
	// Function /Script/GLTFExporter.GLTFExporter.ExportToGLTF
	// bool ExportToGLTF(class UObject* Object, FString FilePath, class UGLTFExportOptions* OPTIONS, TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages); // [0x7fce2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFAnimSequenceExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFAnimSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFLevelExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelSequenceExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFLevelSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelVariantSetsExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFMaterialExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFMaterialExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFSkeletalMeshExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFStaticMeshExporter
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UGLTFStaticMeshExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFProxyOptions
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UGLTFProxyOptions : public UObject
{ 
public:
	bool                                               bBakeMaterialInputs;                                        // 0x0028   (0x0001)  
	bool                                               bUseThinTranslucentShadingModel;                            // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	FGLTFMaterialBakeSize                              DefaultMaterialBakeSize;                                    // 0x002C   (0x000C)  
	TEnumAsByte<TextureFilter>                         DefaultMaterialBakeFilter;                                  // 0x0038   (0x0001)  
	TEnumAsByte<TextureAddress>                        DefaultMaterialBakeTiling;                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x003A   (0x0006)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                  // 0x0040   (0x0050)  


	/// Functions
	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x7fce6b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFMaterialExportOptions
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UGLTFMaterialExportOptions : public UAssetUserData
{ 
public:
	class UMaterialInterface*                          Proxy;                                                      // 0x0028   (0x0008)  
	FGLTFOverrideMaterialBakeSettings                  Default;                                                    // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> Inputs;                                    // 0x0048   (0x0050)  
};

/// Struct /Script/GLTFExporter.GLTFExportMessages
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGLTFExportMessages
{ 
	TArray<FString>                                    Suggestions;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    Warnings;                                                   // 0x0010   (0x0010)  
	TArray<FString>                                    Errors;                                                     // 0x0020   (0x0010)  
};

#pragma pack(pop)


