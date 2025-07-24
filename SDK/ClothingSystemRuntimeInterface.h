
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UClothingAssetBase : public UObject
{ 
public:
	FString                                            ImportedFilePath;                                           // 0x0028   (0x0010)  
	FGuid                                              AssetGuid;                                                  // 0x0038   (0x0010)  
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UClothConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UClothSharedSimConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UClothingSimulationFactory : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingInteractor
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UClothingInteractor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UClothingSimulationInteractor : public UObject
{ 
public:
	TMap<FName, class UClothingInteractor*>            ClothingInteractors;                                        // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	// void SetNumSubsteps(int32_t NumSubsteps);                                                                                // [0x3cdcbc0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	// void SetNumIterations(int32_t NumIterations);                                                                            // [0x3cdcb30] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
	// void SetMaxNumIterations(int32_t MaxNumIterations);                                                                      // [0x3cdcaa0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	// void SetAnimDriveSpringStiffness(float InStiffness);                                                                     // [0x3cdca10] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// void PhysicsAssetUpdated();                                                                                              // [0x3cdc9f0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	// float GetSimulationTime();                                                                                               // [0x3cdc9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	// int32_t GetNumSubsteps();                                                                                                // [0x3cdc9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	// int32_t GetNumKinematicParticles();                                                                                      // [0x3cdc990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	// int32_t GetNumIterations();                                                                                              // [0x3cdc970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	// int32_t GetNumDynamicParticles();                                                                                        // [0x3cdc950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	// int32_t GetNumCloths();                                                                                                  // [0x3cdc930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	// class UClothingInteractor* GetClothingInteractor(FString ClothingAssetName);                                             // [0x3cdc7d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	// void EnableGravityOverride(FVector& InVector);                                                                           // [0x3cdc730] RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	// void DisableGravityOverride();                                                                                           // [0x3cdc710] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// void ClothConfigUpdated();                                                                                               // [0x3cdc6f0] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 MaxSize: 0x004C
struct FClothVertBoneData
{ 
	int32_t                                            NumInfluences;                                              // 0x0000   (0x0004)  
	uint16_t                                           BoneIndices[12];                                            // 0x0004   (0x0018)  
	float                                              BoneWeights[12];                                            // 0x001C   (0x0030)  
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
public:
	TArray<FVector3f>                                  Vertices;                                                   // 0x0028   (0x0010)  
	TArray<FVector3f>                                  Normals;                                                    // 0x0038   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0048   (0x0010)  
	TArray<float>                                      InverseMasses;                                              // 0x0058   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0068   (0x0010)  
	int32_t                                            NumFixedVerts;                                              // 0x0078   (0x0004)  
	int32_t                                            MaxBoneWeights;                                             // 0x007C   (0x0004)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0090   (0x0050)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FClothCollisionPrim_Sphere
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	FVector                                            LocalPosition;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FClothCollisionPrim_SphereConnection
{ 
	int32_t                                            SphereIndices[2];                                           // 0x0000   (0x0008)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FClothCollisionPrim_ConvexFace
{ 
	FPlane                                             Plane;                                                      // 0x0000   (0x0020)  
	TArray<int32_t>                                    Indices;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FClothCollisionPrim_Convex
{ 
	TArray<FClothCollisionPrim_ConvexFace>             Faces;                                                      // 0x0000   (0x0010)  
	TArray<FVector>                                    SurfacePoints;                                              // 0x0010   (0x0010)  
	int32_t                                            BoneIndex;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FClothCollisionPrim_Box
{ 
	FVector                                            LocalPosition;                                              // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              LocalRotation;                                              // 0x0020   (0x0020)  
	FVector                                            HalfExtents;                                                // 0x0040   (0x0018)  
	int32_t                                            BoneIndex;                                                  // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FClothCollisionData
{ 
	TArray<FClothCollisionPrim_Sphere>                 Spheres;                                                    // 0x0000   (0x0010)  
	TArray<FClothCollisionPrim_SphereConnection>       SphereConnections;                                          // 0x0010   (0x0010)  
	TArray<FClothCollisionPrim_Convex>                 Convexes;                                                   // 0x0020   (0x0010)  
	TArray<FClothCollisionPrim_Box>                    Boxes;                                                      // 0x0030   (0x0010)  
};

#pragma pack(pop)


