
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: RigVM

#pragma pack(push, 0x1)

/// Enum /Script/PBIK.EPBIKLimitType
/// Size: 0x01 (1 bytes)
enum class EPBIKLimitType : uint8_t
{
	EPBIKLimitType__Free                                                             = 0,
	EPBIKLimitType__Limited                                                          = 1,
	EPBIKLimitType__Locked                                                           = 2
};

/// Enum /Script/PBIK.EPBIKRootBehavior
/// Size: 0x01 (1 bytes)
enum class EPBIKRootBehavior : uint8_t
{
	EPBIKRootBehavior__PrePull                                                       = 0,
	EPBIKRootBehavior__PinToInput                                                    = 1,
	EPBIKRootBehavior__Free                                                          = 2
};

/// Struct /Script/PBIK.PBIKBoneSetting
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPBIKBoneSetting
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	float                                              RotationStiffness;                                          // 0x0008   (0x0004)  
	float                                              PositionStiffness;                                          // 0x000C   (0x0004)  
	EPBIKLimitType                                     X;                                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              minX;                                                       // 0x0014   (0x0004)  
	float                                              maxX;                                                       // 0x0018   (0x0004)  
	EPBIKLimitType                                     Y;                                                          // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              minY;                                                       // 0x0020   (0x0004)  
	float                                              maxY;                                                       // 0x0024   (0x0004)  
	EPBIKLimitType                                     Z;                                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              MinZ;                                                       // 0x002C   (0x0004)  
	float                                              MaxZ;                                                       // 0x0030   (0x0004)  
	bool                                               bUsePreferredAngles;                                        // 0x0034   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FVector                                            PreferredAngles;                                            // 0x0038   (0x0018)  
};

/// Struct /Script/PBIK.RootPrePullSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FRootPrePullSettings
{ 
	float                                              RotationAlpha;                                              // 0x0000   (0x0004)  
	float                                              RotationAlphaX;                                             // 0x0004   (0x0004)  
	float                                              RotationAlphaY;                                             // 0x0008   (0x0004)  
	float                                              RotationAlphaZ;                                             // 0x000C   (0x0004)  
	float                                              PositionAlpha;                                              // 0x0010   (0x0004)  
	float                                              PositionAlphaX;                                             // 0x0014   (0x0004)  
	float                                              PositionAlphaY;                                             // 0x0018   (0x0004)  
	float                                              PositionAlphaZ;                                             // 0x001C   (0x0004)  
};

/// Struct /Script/PBIK.PBIKSolverSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FPBIKSolverSettings
{ 
	int32_t                                            Iterations;                                                 // 0x0000   (0x0004)  
	int32_t                                            SubIterations;                                              // 0x0004   (0x0004)  
	float                                              MassMultiplier;                                             // 0x0008   (0x0004)  
	bool                                               bAllowStretch;                                              // 0x000C   (0x0001)  
	EPBIKRootBehavior                                  RootBehavior;                                               // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	FRootPrePullSettings                               PrePullRootSettings;                                        // 0x0010   (0x0020)  
	float                                              GlobalPullChainAlpha;                                       // 0x0030   (0x0004)  
	float                                              MaxAngle;                                                   // 0x0034   (0x0004)  
	float                                              OverRelaxation;                                             // 0x0038   (0x0004)  
	bool                                               bStartSolveFromInputPose;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/PBIK.PBIKSolver
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPBIKSolver
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/PBIK.PBIKDebug
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPBIKDebug
{ 
	float                                              DrawScale;                                                  // 0x0000   (0x0004)  
	bool                                               bDrawDebug;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/PBIK.PBIKEffector
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FPBIKEffector
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	float                                              PositionAlpha;                                              // 0x0070   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0074   (0x0004)  
	float                                              StrengthAlpha;                                              // 0x0078   (0x0004)  
	int32_t                                            ChainDepth;                                                 // 0x007C   (0x0004)  
	float                                              PullChainAlpha;                                             // 0x0080   (0x0004)  
	float                                              PinRotation;                                                // 0x0084   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/PBIK.PBIKWorkData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FPBIKWorkData
{ 
	bool                                               bNeedsInit;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           HashInitializedWith;                                        // 0x0004   (0x0004)  
	TArray<int32_t>                                    BoneSettingToSolverBoneIndex;                               // 0x0008   (0x0010)  
	TArray<int32_t>                                    SolverBoneToElementIndex;                                   // 0x0018   (0x0010)  
	FPBIKSolver                                        Solver;                                                     // 0x0028   (0x0058)  
};

/// Struct /Script/PBIK.RigUnit_PBIK
/// Size: 0x02E0 (736 bytes) (0x0001D0 - 0x0002E0) align 16 MaxSize: 0x02E0
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Root;                                                       // 0x01D0   (0x0008)  
	TArray<FPBIKEffector>                              Effectors;                                                  // 0x01D8   (0x0010)  
	TArray<int32_t>                                    EffectorSolverIndices;                                      // 0x01E8   (0x0010)  
	TArray<FPBIKBoneSetting>                           BoneSettings;                                               // 0x01F8   (0x0010)  
	TArray<FName>                                      ExcludedBones;                                              // 0x0208   (0x0010)  
	FPBIKSolverSettings                                Settings;                                                   // 0x0218   (0x0040)  
	FPBIKDebug                                         Debug;                                                      // 0x0258   (0x0008)  
	FPBIKWorkData                                      WorkData;                                                   // 0x0260   (0x0080)  
};

#pragma pack(pop)


