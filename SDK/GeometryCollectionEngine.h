
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: DataflowEngine
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosRemovalSortMethod : uint8_t
{
	EChaosRemovalSortMethod__SortNone                                                = 0,
	EChaosRemovalSortMethod__SortByHighestMass                                       = 1,
	EChaosRemovalSortMethod__SortByNearestFirst                                      = 2,
	EChaosRemovalSortMethod__Count                                                   = 3
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x01 (1 bytes)
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryCollectionBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionBlueprintLibrary.SetISMPoolCustomInstanceData
	// void SetISMPoolCustomInstanceData(class UGeometryCollectionComponent* GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // [0x49ff0f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryCollectionExternalRenderInterface : public UInterface
{ 
public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem.OnActorEndPlay
	// void OnActorEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                         // [0x49fde70] Final|Native|Protected 
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChaosCollisionEventRequestSettings
{ 
	int32_t                                            MaxNumberResults;                                           // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosCollisionSortMethod                          SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChaosBreakingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinRadius;                                                  // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinMass;                                                    // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosBreakingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChaosTrailingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinAngularSpeed;                                            // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosTrailingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FChaosRemovalEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MaxDistance;                                                // 0x0008   (0x0004)  
	EChaosRemovalSortMethod                            SortMethod;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x04E0 (1248 bytes) (0x000230 - 0x0004E0) align 16 MaxSize: 0x04E0
class UChaosDestructionListener : public USceneComponent
{ 
public:
	bool                                               bIsCollisionEventListeningEnabled : 1;                      // 0x0230:0 (0x0001)  
	bool                                               bIsBreakingEventListeningEnabled : 1;                       // 0x0230:1 (0x0001)  
	bool                                               bIsTrailingEventListeningEnabled : 1;                       // 0x0230:2 (0x0001)  
	bool                                               bIsRemovalEventListeningEnabled : 1;                        // 0x0230:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0231   (0x0003)  MISSED
	FChaosCollisionEventRequestSettings                CollisionEventRequestSettings;                              // 0x0234   (0x0018)  
	FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings;                               // 0x024C   (0x0018)  
	FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings;                               // 0x0264   (0x0018)  
	FChaosRemovalEventRequestSettings                  RemovalEventRequestSettings;                                // 0x027C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	SDK_UNDEFINED(80,642) /* TSet<AChaosSolverActor*> */ __um(ChaosSolverActors);                                  // 0x0290   (0x0050)  
	SDK_UNDEFINED(80,643) /* TSet<AGeometryCollectionActor*> */ __um(GeometryCollectionActors);                    // 0x02E0   (0x0050)  
	SDK_UNDEFINED(16,644) /* FMulticastInlineDelegate */ __um(OnCollisionEvents);                                  // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,645) /* FMulticastInlineDelegate */ __um(OnBreakingEvents);                                   // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,646) /* FMulticastInlineDelegate */ __um(OnTrailingEvents);                                   // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,647) /* FMulticastInlineDelegate */ __um(OnRemovalEvents);                                    // 0x0360   (0x0010)  
	unsigned char                                      UnknownData02_7[0x170];                                     // 0x0370   (0x0170)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x4a00570] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	// void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);               // [0x4a00460] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x4a00350] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x4a00240] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x4a00030] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x49fff90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	// void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);                                      // [0x49ffc00] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	// void SetRemovalEventEnabled(bool bIsEnabled);                                                                            // [0x49ffb60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x49feae0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x49fea40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x49fe980] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x49fe8e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x49fe2d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0x49fc7a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                                 // [0x49fde20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                                // [0x49fc810] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                     // [0x49fc7a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AGeometryCollectionActor : public AActor
{ 
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                                // 0x0290   (0x0008)  
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                       // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x49fdfe0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UGeometryCollectionCache : public UObject
{ 
public:
	FRecordedTransformTrack                            RecordedData;                                               // 0x0028   (0x0010)  
	class UGeometryCollection*                         SupportedCollection;                                        // 0x0038   (0x0008)  
	FGuid                                              CompatibleCollectionState;                                  // 0x0040   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryCollectionDamagePropagationData
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BreakDamagePropagationFactor;                               // 0x0004   (0x0004)  
	float                                              ShockDamagePropagationFactor;                               // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGeomComponentCacheParameters
{ 
	EGeometryCollectionCacheType                       CacheMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UGeometryCollectionCache*                    TargetCache;                                                // 0x0008   (0x0008)  
	float                                              ReverseCacheBeginTime;                                      // 0x0010   (0x0004)  
	bool                                               SaveCollisionData;                                          // 0x0014   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            CollisionDataSizeMax;                                       // 0x0018   (0x0004)  
	bool                                               DoCollisionDataSpatialHash;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              CollisionDataSpatialHashRadius;                             // 0x0020   (0x0004)  
	int32_t                                            MaxCollisionPerCell;                                        // 0x0024   (0x0004)  
	bool                                               SaveBreakingData;                                           // 0x0028   (0x0001)  
	bool                                               DoGenerateBreakingData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BreakingDataSizeMax;                                        // 0x002C   (0x0004)  
	bool                                               DoBreakingDataSpatialHash;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              BreakingDataSpatialHashRadius;                              // 0x0034   (0x0004)  
	int32_t                                            MaxBreakingPerCell;                                         // 0x0038   (0x0004)  
	bool                                               SaveTrailingData;                                           // 0x003C   (0x0001)  
	bool                                               DoGenerateTrailingData;                                     // 0x003D   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            TrailingDataSizeMax;                                        // 0x0040   (0x0004)  
	float                                              TrailingMinSpeedThreshold;                                  // 0x0044   (0x0004)  
	float                                              TrailingMinVolumeThreshold;                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGeometryCollectionRepData
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepStateData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGeometryCollectionRepStateData
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepDynamicData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryCollectionRepDynamicData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0A50 (2640 bytes) (0x000550 - 0x000A50) align 16 MaxSize: 0x0A50
class UGeometryCollectionComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0550   (0x0008)  MISSED
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x0558   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0560   (0x0008)  MISSED
	class UGeometryCollection*                         RestCollection;                                             // 0x0568   (0x0008)  
	TArray<class AFieldSystemActor*>                   InitializationFields;                                       // 0x0570   (0x0010)  
	bool                                               Simulating;                                                 // 0x0580   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0581   (0x0001)  MISSED
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x0582   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0583   (0x0001)  MISSED
	int32_t                                            GravityGroupIndex;                                          // 0x0584   (0x0004)  
	int32_t                                            OneWayInteractionLevel;                                     // 0x0588   (0x0004)  
	bool                                               bDensityFromPhysicsMaterial;                                // 0x058C   (0x0001)  
	bool                                               bForceMotionBlur;                                           // 0x058D   (0x0001)  
	bool                                               EnableClustering;                                           // 0x058E   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x058F   (0x0001)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x0590   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0594   (0x0004)  
	int32_t                                            MaxSimulatedLevel;                                          // 0x0598   (0x0004)  
	EDamageModelTypeEnum                               DamageModel;                                                // 0x059C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x059D   (0x0003)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x05A0   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x05B0   (0x0001)  
	bool                                               bUseMaterialDamageModifiers;                                // 0x05B1   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x05B2   (0x0002)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x05B4   (0x000C)  
	bool                                               bEnableDamageFromCollision;                                 // 0x05C0   (0x0001)  
	bool                                               bAllowRemovalOnSleep;                                       // 0x05C1   (0x0001)  
	bool                                               bAllowRemovalOnBreak;                                       // 0x05C2   (0x0001)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x05C3   (0x0001)  
	int32_t                                            CollisionGroup;                                             // 0x05C4   (0x0004)  
	float                                              CollisionSampleFraction;                                    // 0x05C8   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x05CC   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x05D0   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x05D4   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x05D8   (0x0008)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x05E1   (0x0007)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x05E8   (0x0018)  
	FVector                                            InitialAngularVelocity;                                     // 0x0600   (0x0018)  
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                   // 0x0618   (0x0008)  
	FGeomComponentCacheParameters                      CacheParameters;                                            // 0x0620   (0x0050)  
	TArray<FTransform>                                 RestTransforms;                                             // 0x0670   (0x0010)  
	SDK_UNDEFINED(16,648) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsStateChange);         // 0x0680   (0x0010)  
	SDK_UNDEFINED(16,649) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsLoadingStateChange);  // 0x0690   (0x0010)  
	unsigned char                                      UnknownData09_6[0x18];                                      // 0x06A0   (0x0018)  MISSED
	SDK_UNDEFINED(16,650) /* FMulticastInlineDelegate */ __um(OnChaosBreakEvent);                                  // 0x06B8   (0x0010)  
	SDK_UNDEFINED(16,651) /* FMulticastInlineDelegate */ __um(OnChaosRemovalEvent);                                // 0x06C8   (0x0010)  
	SDK_UNDEFINED(16,652) /* FMulticastInlineDelegate */ __um(OnChaosCrumblingEvent);                              // 0x06D8   (0x0010)  
	unsigned char                                      UnknownData10_6[0x48];                                      // 0x06E8   (0x0048)  MISSED
	float                                              DesiredCacheTime;                                           // 0x0730   (0x0004)  
	bool                                               CachePlayback;                                              // 0x0734   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0735   (0x0003)  MISSED
	SDK_UNDEFINED(16,653) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                            // 0x0738   (0x0010)  
	bool                                               bNotifyBreaks;                                              // 0x0748   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x0749   (0x0001)  
	bool                                               bNotifyTrailing;                                            // 0x074A   (0x0001)  
	bool                                               bNotifyRemovals;                                            // 0x074B   (0x0001)  
	bool                                               bNotifyCrumblings;                                          // 0x074C   (0x0001)  
	bool                                               bCrumblingEventIncludesChildren;                            // 0x074D   (0x0001)  
	bool                                               bNotifyGlobalBreaks;                                        // 0x074E   (0x0001)  
	bool                                               bNotifyGlobalCollisions;                                    // 0x074F   (0x0001)  
	bool                                               bNotifyGlobalRemovals;                                      // 0x0750   (0x0001)  
	bool                                               bNotifyGlobalCrumblings;                                    // 0x0751   (0x0001)  
	bool                                               bGlobalCrumblingEventIncludesChildren;                      // 0x0752   (0x0001)  
	bool                                               bStoreVelocities;                                           // 0x0753   (0x0001)  
	bool                                               bIsCurrentlyNavigationRelevant;                             // 0x0754   (0x0001)  
	bool                                               bShowBoneColors;                                            // 0x0755   (0x0001)  
	bool                                               bUpdateComponentTransformToRootBone;                        // 0x0756   (0x0001)  
	bool                                               bUseRootProxyForNavigation;                                 // 0x0757   (0x0001)  
	bool                                               bUpdateNavigationInTick;                                    // 0x0758   (0x0001)  
	unsigned char                                      UnknownData12_6[0x7];                                       // 0x0759   (0x0007)  MISSED
	class AGeometryCollectionISMPoolActor*             ISMPool;                                                    // 0x0760   (0x0008)  
	bool                                               bAutoAssignISMPool;                                         // 0x0768   (0x0001)  
	bool                                               bOverrideCustomRenderer;                                    // 0x0769   (0x0001)  
	unsigned char                                      UnknownData13_6[0x6];                                       // 0x076A   (0x0006)  MISSED
	class UClass*                                      CustomRendererType;                                         // 0x0770   (0x0008)  
	bool                                               bEnableRootProxyForCustomRenderer;                          // 0x0778   (0x0001)  
	unsigned char                                      UnknownData14_6[0x7];                                       // 0x0779   (0x0007)  MISSED
	SDK_UNDEFINED(16,654) /* TScriptInterface<Class> */ __um(CustomRenderer);                                      // 0x0780   (0x0010)  
	bool                                               bEnableReplication;                                         // 0x0790   (0x0001)  
	bool                                               bEnableAbandonAfterLevel;                                   // 0x0791   (0x0001)  
	unsigned char                                      UnknownData15_6[0x2];                                       // 0x0792   (0x0002)  MISSED
	FName                                              AbandonedCollisionProfileName;                              // 0x0794   (0x0008)  
	unsigned char                                      UnknownData16_6[0x4];                                       // 0x079C   (0x0004)  MISSED
	TArray<FName>                                      CollisionProfilePerLevel;                                   // 0x07A0   (0x0010)  
	unsigned char                                      UnknownData17_6[0x10];                                      // 0x07B0   (0x0010)  MISSED
	int32_t                                            ReplicationAbandonClusterLevel;                             // 0x07C0   (0x0004)  
	int32_t                                            ReplicationAbandonAfterLevel;                               // 0x07C4   (0x0004)  
	int32_t                                            ReplicationMaxPositionAndVelocityCorrectionLevel;           // 0x07C8   (0x0004)  
	unsigned char                                      UnknownData18_6[0x4];                                       // 0x07CC   (0x0004)  MISSED
	FGeometryCollectionRepData                         RepData;                                                    // 0x07D0   (0x0038)  
	FGeometryCollectionRepStateData                    RepStateData;                                               // 0x0808   (0x0040)  
	FGeometryCollectionRepDynamicData                  RepDynamicData;                                             // 0x0848   (0x0018)  
	unsigned char                                      UnknownData19_6[0x120];                                     // 0x0860   (0x0120)  MISSED
	class UBodySetup*                                  DummyBodySetup;                                             // 0x0980   (0x0008)  
	class UChaosGameplayEventDispatcher*               EventDispatcher;                                            // 0x0988   (0x0008)  
	TArray<class UInstancedStaticMeshComponent*>       EmbeddedGeometryComponents;                                 // 0x0990   (0x0010)  
	bool                                               bUseStaticMeshCollisionForTraces;                           // 0x09A0   (0x0001)  
	unsigned char                                      UnknownData20_7[0xAF];                                      // 0x09A1   (0x00AF)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetUseStaticMeshCollisionForTraces
	// void SetUseStaticMeshCollisionForTraces(bool bInUseStaticMeshCollisionForTraces);                                        // [0x4a00190] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetUseMaterialDamageModifiers
	// void SetUseMaterialDamageModifiers(bool bInUseMaterialDamageModifiers);                                                  // [0x4a000f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	// void SetRestCollection(class UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);                           // [0x49ffcb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerParticleCollisionProfileName
	// void SetPerParticleCollisionProfileName(TArray<int32_t>& BoneIds, FName ProfileName);                                    // [0x49ffa50] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerLevelCollisionProfileNames
	// void SetPerLevelCollisionProfileNames(TArray<FName>& ProfileNames);                                                      // [0x49ff990] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetOneWayInteractionLevel
	// void SetOneWayInteractionLevel(int32_t InOneWayInteractionLevel);                                                        // [0x49ff8f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	// void SetNotifyRemovals(bool bNewNotifyRemovals);                                                                         // [0x49ff830] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalRemovals
	// void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals);                                                             // [0x49ff750] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCrumblings
	// void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren);          // [0x49ff650] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCollision
	// void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions);                                                          // [0x49ff580] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalBreaks
	// void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks);                                                                 // [0x49ff4d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	// void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);                            // [0x49ff3c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x49ff300] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetLocalRestTransforms
	// void SetLocalRestTransforms(TArray<FTransform>& Transforms, bool bOnlyLeaves);                                           // [0x49ff200] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetGravityGroupIndex
	// void SetGravityGroupIndex(int32_t InGravityGroupIndex);                                                                  // [0x49ff050] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	// void SetEnableDamageFromCollision(bool bValue);                                                                          // [0x49fef20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDensityFromPhysicsMaterial
	// void SetDensityFromPhysicsMaterial(bool bInDensityFromPhysicsMaterial);                                                  // [0x49fee70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamageThreshold
	// void SetDamageThreshold(TArray<float>& InDamageThreshold);                                                               // [0x49feda0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamagePropagationData
	// void SetDamagePropagationData(FGeometryCollectionDamagePropagationData& InDamagePropagationData);                        // [0x49fecc0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamageModel
	// void SetDamageModel(EDamageModelTypeEnum InDamageModel);                                                                 // [0x49fec30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	// void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel);                      // [0x49fe6b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	// void SetAnchoredByIndex(int32_t Index, bool bAnchored);                                                                  // [0x49fe5d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	// void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel);                                             // [0x49fe430] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAbandonedParticleCollisionProfileName
	// void SetAbandonedParticleCollisionProfileName(FName CollisionProfile);                                                   // [0x49fe390] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	// void RemoveAllAnchors();                                                                                                 // [0x49fe2a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x2fd44f0] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepStateData
	// void OnRep_RepStateData();                                                                                               // [0x49fdfc0] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepDynamicData
	// void OnRep_RepDynamicData();                                                                                             // [0x49fdfa0] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	// void OnRep_RepData();                                                                                                    // [0x49fdf80] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x2fd44f0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x2fd44f0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.IsRootBroken
	// bool IsRootBroken();                                                                                                     // [0x49fde50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetUseStaticMeshCollisionForTraces
	// bool GetUseStaticMeshCollisionForTraces();                                                                               // [0x49fde00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootInitialTransform
	// FTransform GetRootInitialTransform();                                                                                    // [0x49fdd90] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	// int32_t GetRootIndex();                                                                                                  // [0x49fdd50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootCurrentTransform
	// FTransform GetRootCurrentTransform();                                                                                    // [0x49fdce0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	// void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents);                                             // [0x49fdba0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	// FBox GetLocalBounds();                                                                                                   // [0x49fdb50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLocalRestTransforms
	// TArray<FTransform> GetInitialLocalRestTransforms();                                                                      // [0x49fdad0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	// int32_t GetInitialLevel(int32_t ItemIndex);                                                                              // [0x49fda30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	// FString GetDebugInfo();                                                                                                  // [0x49fd9b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDamageThreshold
	// TArray<float> GetDamageThreshold();                                                                                      // [0x49fd8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.EnableRootProxyForCustomRenderer
	// void EnableRootProxyForCustomRenderer(bool bEnable);                                                                     // [0x49fd850] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	// void CrumbleCluster(int32_t ItemIndex);                                                                                  // [0x49fd780] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	// void CrumbleActiveClusters();                                                                                            // [0x49fd750] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x49fd2d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	// void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                                    // [0x49fd1e0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector Position);                                                                // [0x49fd040] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	// void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x49fce50] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	// void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x49fcc60] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	// void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                            // [0x49fcb70] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	// void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                          // [0x49fca80] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAssetDefaults
	// void ApplyAssetDefaults();                                                                                               // [0x49fca60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	// void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                                  // [0x49fc970] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryCollectionDebugDrawWarningMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AChaosSolverActor*                           Solver;                                                     // 0x0008   (0x0008)  
	class AGeometryCollectionActor*                    GeometryCollection;                                         // 0x0010   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x0350 (848 bytes) (0x000290 - 0x000350) align 8 MaxSize: 0x0350
class AGeometryCollectionDebugDrawActor : public AActor
{ 
public:
	FGeometryCollectionDebugDrawWarningMessage         WarningMessage;                                             // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                          // 0x0298   (0x0018)  
	bool                                               bDebugDrawWholeCollection;                                  // 0x02B0   (0x0001)  
	bool                                               bDebugDrawHierarchy;                                        // 0x02B1   (0x0001)  
	bool                                               bDebugDrawClustering;                                       // 0x02B2   (0x0001)  
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                               // 0x02B3   (0x0001)  
	bool                                               bShowRigidBodyId;                                           // 0x02B4   (0x0001)  
	bool                                               bShowRigidBodyCollision;                                    // 0x02B5   (0x0001)  
	bool                                               bCollisionAtOrigin;                                         // 0x02B6   (0x0001)  
	bool                                               bShowRigidBodyTransform;                                    // 0x02B7   (0x0001)  
	bool                                               bShowRigidBodyInertia;                                      // 0x02B8   (0x0001)  
	bool                                               bShowRigidBodyVelocity;                                     // 0x02B9   (0x0001)  
	bool                                               bShowRigidBodyForce;                                        // 0x02BA   (0x0001)  
	bool                                               bShowRigidBodyInfos;                                        // 0x02BB   (0x0001)  
	bool                                               bShowTransformIndex;                                        // 0x02BC   (0x0001)  
	bool                                               bShowTransform;                                             // 0x02BD   (0x0001)  
	bool                                               bShowParent;                                                // 0x02BE   (0x0001)  
	bool                                               bShowLevel;                                                 // 0x02BF   (0x0001)  
	bool                                               bShowConnectivityEdges;                                     // 0x02C0   (0x0001)  
	bool                                               bShowGeometryIndex;                                         // 0x02C1   (0x0001)  
	bool                                               bShowGeometryTransform;                                     // 0x02C2   (0x0001)  
	bool                                               bShowBoundingBox;                                           // 0x02C3   (0x0001)  
	bool                                               bShowFaces;                                                 // 0x02C4   (0x0001)  
	bool                                               bShowFaceIndices;                                           // 0x02C5   (0x0001)  
	bool                                               bShowFaceNormals;                                           // 0x02C6   (0x0001)  
	bool                                               bShowSingleFace;                                            // 0x02C7   (0x0001)  
	int32_t                                            SingleFaceIndex;                                            // 0x02C8   (0x0004)  
	bool                                               bShowVertices;                                              // 0x02CC   (0x0001)  
	bool                                               bShowVertexIndices;                                         // 0x02CD   (0x0001)  
	bool                                               bShowVertexNormals;                                         // 0x02CE   (0x0001)  
	bool                                               bUseActiveVisualization;                                    // 0x02CF   (0x0001)  
	float                                              PointThickness;                                             // 0x02D0   (0x0004)  
	float                                              LineThickness;                                              // 0x02D4   (0x0004)  
	bool                                               bTextShadow;                                                // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02D9   (0x0003)  MISSED
	float                                              TextScale;                                                  // 0x02DC   (0x0004)  
	float                                              NormalScale;                                                // 0x02E0   (0x0004)  
	float                                              AxisScale;                                                  // 0x02E4   (0x0004)  
	float                                              ArrowScale;                                                 // 0x02E8   (0x0004)  
	FColor                                             RigidBodyIdColor;                                           // 0x02EC   (0x0004)  
	float                                              RigidBodyTransformScale;                                    // 0x02F0   (0x0004)  
	FColor                                             RigidBodyCollisionColor;                                    // 0x02F4   (0x0004)  
	FColor                                             RigidBodyInertiaColor;                                      // 0x02F8   (0x0004)  
	FColor                                             RigidBodyVelocityColor;                                     // 0x02FC   (0x0004)  
	FColor                                             RigidBodyForceColor;                                        // 0x0300   (0x0004)  
	FColor                                             RigidBodyInfoColor;                                         // 0x0304   (0x0004)  
	FColor                                             TransformIndexColor;                                        // 0x0308   (0x0004)  
	float                                              TransformScale;                                             // 0x030C   (0x0004)  
	FColor                                             LevelColor;                                                 // 0x0310   (0x0004)  
	FColor                                             ParentColor;                                                // 0x0314   (0x0004)  
	float                                              ConnectivityEdgeThickness;                                  // 0x0318   (0x0004)  
	FColor                                             GeometryIndexColor;                                         // 0x031C   (0x0004)  
	float                                              GeometryTransformScale;                                     // 0x0320   (0x0004)  
	FColor                                             BoundingBoxColor;                                           // 0x0324   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x0328   (0x0004)  
	FColor                                             FaceIndexColor;                                             // 0x032C   (0x0004)  
	FColor                                             FaceNormalColor;                                            // 0x0330   (0x0004)  
	FColor                                             SingleFaceColor;                                            // 0x0334   (0x0004)  
	FColor                                             VertexColor;                                                // 0x0338   (0x0004)  
	FColor                                             VertexIndexColor;                                           // 0x033C   (0x0004)  
	FColor                                             VertexNormalColor;                                          // 0x0340   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0344   (0x0004)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0348   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                           // 0x00A0   (0x0008)  
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                      // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AGeometryCollectionISMPoolActor : public AActor
{ 
public:
	class UGeometryCollectionISMPoolComponent*         ISMPoolComp;                                                // 0x0290   (0x0008)  
	class UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;                                      // 0x0298   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
/// Size: 0x0360 (864 bytes) (0x000230 - 0x000360) align 16 MaxSize: 0x0360
class UGeometryCollectionISMPoolComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x130];                                     // 0x0230   (0x0130)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 16 MaxSize: 0x00E0
class UGeometryCollectionISMPoolRenderer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class AGeometryCollectionISMPoolActor*             ISMPoolActor;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0xA8];                                      // 0x0038   (0x00A8)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGeometryCollectionEmbeddedExemplar
{ 
	FSoftObjectPath                                    StaticMeshExemplar;                                         // 0x0000   (0x0020)  
	float                                              StartCullDistance;                                          // 0x0020   (0x0004)  
	float                                              EndCullDistance;                                            // 0x0024   (0x0004)  
	int32_t                                            InstanceCount;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionProxyMeshData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryCollectionProxyMeshData
{ 
	TArray<class UStaticMesh*>                         ProxyMeshes;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGeometryCollectionAutoInstanceMesh
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0008   (0x0010)  
	int32_t                                            NumInstances;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      CustomData;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGeometryCollectionLevelSetData
{ 
	int32_t                                            MinLevelSetResolution;                                      // 0x0000   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0008   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x000C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryCollectionCollisionParticleData
{ 
	float                                              CollisionParticlesFraction;                                 // 0x0000   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FGeometryCollectionCollisionTypeData
{ 
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0000   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FGeometryCollectionLevelSetData                    LevelSet;                                                   // 0x0004   (0x0010)  
	FGeometryCollectionCollisionParticleData           CollisionParticles;                                         // 0x0014   (0x0008)  
	float                                              CollisionObjectReductionPercentage;                         // 0x001C   (0x0004)  
	float                                              CollisionMarginFraction;                                    // 0x0020   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGeometryCollectionSizeSpecificData
{ 
	float                                              MaxSize;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGeometryCollectionCollisionTypeData>       CollisionShapes;                                            // 0x0008   (0x0010)  
	int32_t                                            DamageThreshold;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x0218 (536 bytes) (0x000028 - 0x000218) align 8 MaxSize: 0x0218
class UGeometryCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	bool                                               EnableClustering;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x003C   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0040   (0x0004)  
	EDamageModelTypeEnum                               DamageModel;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0048   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x0058   (0x0001)  
	bool                                               bUseMaterialDamageModifiers;                                // 0x0059   (0x0001)  
	bool                                               PerClusterOnlyDamageThreshold;                              // 0x005A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x005B   (0x0001)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x005C   (0x000C)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              ConnectionGraphBoundsFilteringMargin;                       // 0x006C   (0x0004)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0070   (0x0010)  
	TArray<FGeometryCollectionEmbeddedExemplar>        EmbeddedGeometryExemplar;                                   // 0x0080   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0090   (0x0001)  
	bool                                               bStripOnCook;                                               // 0x0091   (0x0001)  
	bool                                               bStripRenderDataOnCook;                                     // 0x0092   (0x0001)  
	unsigned char                                      UnknownData05_6[0x5];                                       // 0x0093   (0x0005)  MISSED
	class UClass*                                      CustomRendererType;                                         // 0x0098   (0x0008)  
	FGeometryCollectionProxyMeshData                   RootProxyData;                                              // 0x00A0   (0x0010)  
	TArray<FGeometryCollectionAutoInstanceMesh>        AutoInstanceMeshes;                                         // 0x00B0   (0x0010)  
	bool                                               EnableNanite;                                               // 0x00C0   (0x0001)  
	bool                                               bConvertVertexColorsToSRGB;                                 // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData06_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
	class UPhysicalMaterial*                           PhysicsMaterial;                                            // 0x00C8   (0x0008)  
	bool                                               bDensityFromPhysicsMaterial;                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              CachedDensityFromPhysicsMaterialInGCm3;                     // 0x00D4   (0x0004)  
	bool                                               bMassAsDensity;                                             // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x00DC   (0x0004)  
	float                                              MinimumMassClamp;                                           // 0x00E0   (0x0004)  
	bool                                               bImportCollisionFromSource;                                 // 0x00E4   (0x0001)  
	bool                                               bOptimizeConvexes;                                          // 0x00E5   (0x0001)  
	bool                                               bScaleOnRemoval;                                            // 0x00E6   (0x0001)  
	bool                                               bRemoveOnMaxSleep;                                          // 0x00E7   (0x0001)  
	FVector2D                                          MaximumSleepTime;                                           // 0x00E8   (0x0010)  
	FVector2D                                          RemovalDuration;                                            // 0x00F8   (0x0010)  
	bool                                               bSlowMovingAsSleeping;                                      // 0x0108   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              SlowMovingVelocityThreshold;                                // 0x010C   (0x0004)  
	TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData;                                           // 0x0110   (0x0010)  
	bool                                               EnableRemovePiecesOnFracture;                               // 0x0120   (0x0001)  
	unsigned char                                      UnknownData10_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                  // 0x0128   (0x0010)  
	class UDataflow*                                   DataflowAsset;                                              // 0x0138   (0x0008)  
	FString                                            DataflowTerminal;                                           // 0x0140   (0x0010)  
	TMap<FString, FString>                             Overrides;                                                  // 0x0150   (0x0050)  
	FGuid                                              PersistentGuid;                                             // 0x01A0   (0x0010)  
	FGuid                                              StateGuid;                                                  // 0x01B0   (0x0010)  
	int32_t                                            RootIndex;                                                  // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x01C4   (0x0004)  MISSED
	TArray<int32_t>                                    BreadthFirstTransformIndices;                               // 0x01C8   (0x0010)  
	TArray<int32_t>                                    AutoInstanceTransformRemapIndices;                          // 0x01D8   (0x0010)  
	int32_t                                            BoneSelectedMaterialIndex;                                  // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData12_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
	class UMaterialInterface*                          BoneSelectedMaterial;                                       // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData13_6[0x10];                                      // 0x01F8   (0x0010)  MISSED
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0208   (0x0010)  


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetEnableNanite
	// void SetEnableNanite(bool bValue);                                                                                       // [0x49fefc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetConvertVertexColorsToSRGB
	// void SetConvertVertexColorsToSRGB(bool bValue);                                                                          // [0x49feba0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x0380 (896 bytes) (0x000290 - 0x000380) align 16 MaxSize: 0x0380
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                        // 0x0290   (0x0008)  
	class UMaterial*                                   RayMarchMaterial;                                           // 0x0298   (0x0008)  
	float                                              SurfaceTolerance;                                           // 0x02A0   (0x0004)  
	float                                              Isovalue;                                                   // 0x02A4   (0x0004)  
	bool                                               Enabled;                                                    // 0x02A8   (0x0001)  
	bool                                               RenderVolumeBoundingBox;                                    // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0xD6];                                      // 0x02AA   (0x00D6)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
/// Size: 0x0580 (1408 bytes) (0x000568 - 0x000580) align 16 MaxSize: 0x0580
class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{ 
public:
	bool                                               bShowGlobalStats;                                           // 0x0568   (0x0001)  
	bool                                               bShowStats;                                                 // 0x0569   (0x0001)  
	bool                                               bShowBounds;                                                // 0x056A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x056B   (0x0005)  MISSED
	class UInstancedStaticMeshComponent*               SelectedComponent;                                          // 0x0570   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0578   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FChaosBreakingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	float                                              Mass;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FChaosCollisionEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FVector                                            Velocity1;                                                  // 0x0030   (0x0018)  
	FVector                                            Velocity2;                                                  // 0x0048   (0x0018)  
	float                                              Mass1;                                                      // 0x0060   (0x0004)  
	float                                              Mass2;                                                      // 0x0064   (0x0004)  
	FVector                                            Impulse;                                                    // 0x0068   (0x0018)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FChaosRemovalEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x001C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FChaosTrailingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FGeometryCollectionSource
{ 
	FSoftObjectPath                                    SourceGeometryObject;                                       // 0x0000   (0x0020)  
	FTransform                                         LocalTransform;                                             // 0x0020   (0x0060)  
	TArray<class UMaterialInterface*>                  SourceMaterial;                                             // 0x0080   (0x0010)  
	TArray<float>                                      InstanceCustomData;                                         // 0x0090   (0x0010)  
	bool                                               bAddInternalMaterials;                                      // 0x00A0   (0x0001)  
	bool                                               bSplitComponents;                                           // 0x00A1   (0x0001)  
	bool                                               bSetInternalFromMaterialIndex;                              // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData00_7[0xD];                                       // 0x00A3   (0x000D)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRenderResourceSizeInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryCollectionRenderResourceSizeInfo
{ 
	uint64_t                                           MeshResourcesSize;                                          // 0x0000   (0x0008)  
	uint64_t                                           NaniteResourcesSize;                                        // 0x0008   (0x0008)  
};

#pragma pack(pop)


