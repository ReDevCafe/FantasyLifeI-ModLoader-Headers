
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/BuildPatchServices.SHAHashData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 1 MaxSize: 0x0014
struct FSHAHashData
{ 
	char                                               Hash[20];                                                   // 0x0000   (0x0014)  
};

/// Struct /Script/BuildPatchServices.ChunkPartData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChunkPartData
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	uint32_t                                           Offset;                                                     // 0x0010   (0x0004)  
	uint32_t                                           Size;                                                       // 0x0014   (0x0004)  
};

/// Struct /Script/BuildPatchServices.FileManifestData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FFileManifestData
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FSHAHashData                                       FileHash;                                                   // 0x0010   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FChunkPartData>                             FileChunkParts;                                             // 0x0028   (0x0010)  
	TArray<FString>                                    InstallTags;                                                // 0x0038   (0x0010)  
	bool                                               bIsUnixExecutable;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FString                                            SymlinkTarget;                                              // 0x0050   (0x0010)  
	bool                                               bIsReadOnly;                                                // 0x0060   (0x0001)  
	bool                                               bIsCompressed;                                              // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Struct /Script/BuildPatchServices.ChunkInfoData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FChunkInfoData
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	uint64_t                                           Hash;                                                       // 0x0010   (0x0008)  
	FSHAHashData                                       ShaHash;                                                    // 0x0018   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	int64_t                                            FileSize;                                                   // 0x0030   (0x0008)  
	char                                               GroupNumber;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/BuildPatchServices.CustomFieldData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCustomFieldData
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/BuildPatchServices.BuildPatchManifest
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class UBuildPatchManifest : public UObject
{ 
public:
	char                                               ManifestFileVersion;                                        // 0x0028   (0x0001)  
	bool                                               bIsFileData;                                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	uint32_t                                           AppID;                                                      // 0x002C   (0x0004)  
	FString                                            AppName;                                                    // 0x0030   (0x0010)  
	FString                                            BuildVersion;                                               // 0x0040   (0x0010)  
	FString                                            LaunchExe;                                                  // 0x0050   (0x0010)  
	FString                                            LaunchCommand;                                              // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,638) /* TSet<FString> */          __um(PrereqIds);                                            // 0x0070   (0x0050)  
	FString                                            PrereqName;                                                 // 0x00C0   (0x0010)  
	FString                                            PrereqPath;                                                 // 0x00D0   (0x0010)  
	FString                                            PrereqArgs;                                                 // 0x00E0   (0x0010)  
	TArray<FFileManifestData>                          FileManifestList;                                           // 0x00F0   (0x0010)  
	TArray<FChunkInfoData>                             ChunkList;                                                  // 0x0100   (0x0010)  
	TArray<FCustomFieldData>                           CustomFields;                                               // 0x0110   (0x0010)  
};

#pragma pack(pop)


