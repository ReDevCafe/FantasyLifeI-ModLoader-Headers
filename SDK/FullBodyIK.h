
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

/// Enum /Script/FullBodyIK.EFBIKBoneLimitType
/// Size: 0x01 (1 bytes)
enum class EFBIKBoneLimitType : uint8_t
{
	EFBIKBoneLimitType__Free                                                         = 0,
	EFBIKBoneLimitType__Limit                                                        = 1,
	EFBIKBoneLimitType__Locked                                                       = 2
};

/// Enum /Script/FullBodyIK.EPoleVectorOption
/// Size: 0x01 (1 bytes)
enum class EPoleVectorOption : uint8_t
{
	EPoleVectorOption__Direction                                                     = 0,
	EPoleVectorOption__Location                                                      = 1
};

/// Struct /Script/FullBodyIK.FBIKBoneLimit
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFBIKBoneLimit
{ 
	EFBIKBoneLimitType                                 LimitType_X;                                                // 0x0000   (0x0001)  
	EFBIKBoneLimitType                                 LimitType_Y;                                                // 0x0001   (0x0001)  
	EFBIKBoneLimitType                                 LimitType_Z;                                                // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0003   (0x0005)  MISSED
	FVector                                            Limit;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/FullBodyIK.FBIKConstraintOption
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FFBIKConstraintOption
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	bool                                               bEnabled;                                                   // 0x000C   (0x0001)  
	bool                                               bUseStiffness;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	FVector                                            LinearStiffness;                                            // 0x0010   (0x0018)  
	FVector                                            AngularStiffness;                                           // 0x0028   (0x0018)  
	bool                                               bUseAngularLimit;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FFBIKBoneLimit                                     AngularLimit;                                               // 0x0048   (0x0020)  
	bool                                               bUsePoleVector;                                             // 0x0068   (0x0001)  
	EPoleVectorOption                                  PoleVectorOption;                                           // 0x0069   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x006A   (0x0006)  MISSED
	FVector                                            PoleVector;                                                 // 0x0070   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0088   (0x0018)  
};

/// Struct /Script/FullBodyIK.MotionProcessInput
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FMotionProcessInput
{ 
	bool                                               bForceEffectorRotationTarget;                               // 0x0000   (0x0001)  
	bool                                               bOnlyApplyWhenReachedToTarget;                              // 0x0001   (0x0001)  
};

/// Struct /Script/FullBodyIK.FBIKDebugOption
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FFBIKDebugOption
{ 
	bool                                               bDrawDebugHierarchy;                                        // 0x0000   (0x0001)  
	bool                                               bColorAngularMotionStrength;                                // 0x0001   (0x0001)  
	bool                                               bColorLinearMotionStrength;                                 // 0x0002   (0x0001)  
	bool                                               bDrawDebugAxes;                                             // 0x0003   (0x0001)  
	bool                                               bDrawDebugEffector;                                         // 0x0004   (0x0001)  
	bool                                               bDrawDebugConstraints;                                      // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0006   (0x000A)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x0010   (0x0060)  
	float                                              DrawSize;                                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/FullBodyIK.SolverInput
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSolverInput
{ 
	float                                              LinearMotionStrength;                                       // 0x0000   (0x0004)  
	float                                              MinLinearMotionStrength;                                    // 0x0004   (0x0004)  
	float                                              AngularMotionStrength;                                      // 0x0008   (0x0004)  
	float                                              MinAngularMotionStrength;                                   // 0x000C   (0x0004)  
	float                                              DefaultTargetClamp;                                         // 0x0010   (0x0004)  
	float                                              Precision;                                                  // 0x0014   (0x0004)  
	float                                              Damping;                                                    // 0x0018   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x001C   (0x0004)  
	bool                                               bUseJacobianTranspose;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/FullBodyIK.FBIKEndEffector
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FFBIKEndEffector
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0010   (0x0018)  
	float                                              PositionAlpha;                                              // 0x0028   (0x0004)  
	int32_t                                            PositionDepth;                                              // 0x002C   (0x0004)  
	FQuat                                              Rotation;                                                   // 0x0030   (0x0020)  
	float                                              RotationAlpha;                                              // 0x0050   (0x0004)  
	int32_t                                            RotationDepth;                                              // 0x0054   (0x0004)  
	float                                              Pull;                                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
/// Size: 0x0198 (408 bytes) (0x000000 - 0x000198) align 8 MaxSize: 0x0198
struct FRigUnit_FullbodyIK_WorkData
{ 
	unsigned char                                      UnknownData00_2[0x198];                                     // 0x0000   (0x0198)  MISSED
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK
/// Size: 0x0450 (1104 bytes) (0x0001D0 - 0x000450) align 16 MaxSize: 0x0450
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Root;                                                       // 0x01D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FFBIKEndEffector>                           Effectors;                                                  // 0x01E0   (0x0010)  
	TArray<FFBIKConstraintOption>                      Constraints;                                                // 0x01F0   (0x0010)  
	FSolverInput                                       SolverProperty;                                             // 0x0200   (0x0024)  
	FMotionProcessInput                                MotionProperty;                                             // 0x0224   (0x0002)  
	bool                                               bPropagateToChildren;                                       // 0x0226   (0x0001)  
	unsigned char                                      UnknownData01_6[0x9];                                       // 0x0227   (0x0009)  MISSED
	FFBIKDebugOption                                   DebugOption;                                                // 0x0230   (0x0080)  
	FRigUnit_FullbodyIK_WorkData                       WorkData;                                                   // 0x02B0   (0x0198)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0448   (0x0008)  MISSED
};

#pragma pack(pop)


