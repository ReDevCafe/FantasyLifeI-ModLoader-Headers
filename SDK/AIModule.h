
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: NavigationSystem

#pragma pack(push, 0x1)

/// Enum /Script/AIModule.EPathFollowingResult
/// Size: 0x01 (1 bytes)
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success                                                    = 0,
	EPathFollowingResult__Blocked                                                    = 1,
	EPathFollowingResult__OffPath                                                    = 2,
	EPathFollowingResult__Aborted                                                    = 3,
	EPathFollowingResult__Skipped_DEPRECATED                                         = 4,
	EPathFollowingResult__Invalid                                                    = 5
};

/// Enum /Script/AIModule.EEnvQueryStatus
/// Size: 0x01 (1 bytes)
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing                                                      = 0,
	EEnvQueryStatus__Success                                                         = 1,
	EEnvQueryStatus__Failed                                                          = 2,
	EEnvQueryStatus__Aborted                                                         = 3,
	EEnvQueryStatus__OwnerLost                                                       = 4,
	EEnvQueryStatus__MissingParam                                                    = 5
};

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x01 (1 bytes)
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default                                                           = 0,
	EAIOptionFlag__Enable                                                            = 1,
	EAIOptionFlag__Disable                                                           = 2
};

/// Enum /Script/AIModule.FAIDistanceType
/// Size: 0x01 (1 bytes)
enum class FAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D                                                      = 0,
	FAIDistanceType__Distance2D                                                      = 1,
	FAIDistanceType__DistanceZ                                                       = 2
};

/// Enum /Script/AIModule.EPawnActionAbortState
/// Size: 0x01 (1 bytes)
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted                                              = 0,
	EPawnActionAbortState__NotBeingAborted                                           = 1,
	EPawnActionAbortState__MarkPendingAbort                                          = 2,
	EPawnActionAbortState__LatentAbortInProgress                                     = 3,
	EPawnActionAbortState__AbortDone                                                 = 4
};

/// Enum /Script/AIModule.EPawnActionResult
/// Size: 0x01 (1 bytes)
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted                                                    = 0,
	EPawnActionResult__InProgress                                                    = 1,
	EPawnActionResult__Success                                                       = 2,
	EPawnActionResult__Failed                                                        = 3,
	EPawnActionResult__Aborted                                                       = 4
};

/// Enum /Script/AIModule.EPawnActionEventType
/// Size: 0x01 (1 bytes)
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid                                                    = 0,
	EPawnActionEventType__FailedToStart                                              = 1,
	EPawnActionEventType__InstantAbort                                               = 2,
	EPawnActionEventType__FinishedAborting                                           = 3,
	EPawnActionEventType__FinishedExecution                                          = 4,
	EPawnActionEventType__Push                                                       = 5
};

/// Enum /Script/AIModule.EAIRequestPriority
/// Size: 0x01 (1 bytes)
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript                                                   = 0,
	EAIRequestPriority__Logic                                                        = 1,
	EAIRequestPriority__HardScript                                                   = 2,
	EAIRequestPriority__Reaction                                                     = 3,
	EAIRequestPriority__Ultimate                                                     = 4
};

/// Enum /Script/AIModule.EAILockSource
/// Size: 0x01 (1 bytes)
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation                                                         = 0,
	EAILockSource__Logic                                                             = 1,
	EAILockSource__Script                                                            = 2,
	EAILockSource__Gameplay                                                          = 3
};

/// Enum /Script/AIModule.EGenericAICheck
/// Size: 0x01 (1 bytes)
enum class EGenericAICheck : uint8_t
{
	EGenericAICheck__Less                                                            = 0,
	EGenericAICheck__LessOrEqual                                                     = 1,
	EGenericAICheck__Equal                                                           = 2,
	EGenericAICheck__NotEqual                                                        = 3,
	EGenericAICheck__GreaterOrEqual                                                  = 4,
	EGenericAICheck__Greater                                                         = 5,
	EGenericAICheck__IsTrue                                                          = 6
};

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x01 (1 bytes)
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set                                                          = 0,
	EBasicKeyOperation__NotSet                                                       = 1
};

/// Enum /Script/AIModule.EArithmeticKeyOperation
/// Size: 0x01 (1 bytes)
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal                                                   = 0,
	EArithmeticKeyOperation__NotEqual                                                = 1,
	EArithmeticKeyOperation__Less                                                    = 2,
	EArithmeticKeyOperation__LessOrEqual                                             = 3,
	EArithmeticKeyOperation__Greater                                                 = 4,
	EArithmeticKeyOperation__GreaterOrEqual                                          = 5
};

/// Enum /Script/AIModule.ETextKeyOperation
/// Size: 0x01 (1 bytes)
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal                                                         = 0,
	ETextKeyOperation__NotEqual                                                      = 1,
	ETextKeyOperation__Contain                                                       = 2,
	ETextKeyOperation__NotContain                                                    = 3
};

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x01 (1 bytes)
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter                                                          = 0,
	EEnvTestPurpose__Score                                                           = 1,
	EEnvTestPurpose__FilterAndScore                                                  = 2
};

/// Enum /Script/AIModule.EEnvTestFilterType
/// Size: 0x01 (1 bytes)
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum                                                      = 0,
	EEnvTestFilterType__Maximum                                                      = 1,
	EEnvTestFilterType__Range                                                        = 2,
	EEnvTestFilterType__Match                                                        = 3
};

/// Enum /Script/AIModule.EEnvTestScoreEquation
/// Size: 0x01 (1 bytes)
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear                                                    = 0,
	EEnvTestScoreEquation__Square                                                    = 1,
	EEnvTestScoreEquation__InverseLinear                                             = 2,
	EEnvTestScoreEquation__SquareRoot                                                = 3,
	EEnvTestScoreEquation__Constant                                                  = 4
};

/// Enum /Script/AIModule.EEnvTestWeight
/// Size: 0x01 (1 bytes)
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None                                                             = 0,
	EEnvTestWeight__Square                                                           = 1,
	EEnvTestWeight__Inverse                                                          = 2,
	EEnvTestWeight__Unused                                                           = 3,
	EEnvTestWeight__Constant                                                         = 4,
	EEnvTestWeight__Skip                                                             = 5
};

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x01 (1 bytes)
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low                                                                = 0,
	EEnvTestCost__Medium                                                             = 1,
	EEnvTestCost__High                                                               = 2
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x01 (1 bytes)
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass                                                  = 0,
	EEnvTestFilterOperator__AnyPass                                                  = 1
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x01 (1 bytes)
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore                                              = 0,
	EEnvTestScoreOperator__MinScore                                                  = 1,
	EEnvTestScoreOperator__MaxScore                                                  = 2,
	EEnvTestScoreOperator__Multiply                                                  = 3
};

/// Enum /Script/AIModule.EEnvQueryRunMode
/// Size: 0x01 (1 bytes)
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult                                                   = 0,
	EEnvQueryRunMode__RandomBest5Pct                                                 = 1,
	EEnvQueryRunMode__RandomBest25Pct                                                = 2,
	EEnvQueryRunMode__AllMatching                                                    = 3
};

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x01 (1 bytes)
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float                                                            = 0,
	EEnvQueryParam__Int                                                              = 1,
	EEnvQueryParam__Bool                                                             = 2
};

/// Enum /Script/AIModule.EAIParamType
/// Size: 0x01 (1 bytes)
enum class EAIParamType : uint8_t
{
	EAIParamType__Float                                                              = 0,
	EAIParamType__Int                                                                = 1,
	EAIParamType__Bool                                                               = 2
};

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x01 (1 bytes)
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None                                                             = 0,
	EEnvQueryTrace__Navigation                                                       = 1,
	EEnvQueryTrace__GeometryByChannel                                                = 2,
	EEnvQueryTrace__GeometryByProfile                                                = 3,
	EEnvQueryTrace__NavigationOverLedges                                             = 4
};

/// Enum /Script/AIModule.EEnvTraceShape
/// Size: 0x01 (1 bytes)
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line                                                             = 0,
	EEnvTraceShape__Box                                                              = 1,
	EEnvTraceShape__Sphere                                                           = 2,
	EEnvTraceShape__Capsule                                                          = 3
};

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x01 (1 bytes)
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box                                                            = 0,
	EEnvOverlapShape__Sphere                                                         = 1,
	EEnvOverlapShape__Capsule                                                        = 2
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x01 (1 bytes)
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints                                                         = 0,
	EEnvDirection__Rotation                                                          = 1
};

/// Enum /Script/AIModule.EEnvQueryTestClamping
/// Size: 0x01 (1 bytes)
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None                                                      = 0,
	EEnvQueryTestClamping__SpecifiedValue                                            = 1,
	EEnvQueryTestClamping__FilterThreshold                                           = 2
};

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x01 (1 bytes)
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly                                                          = 0,
	ETeamAttitude__Neutral                                                           = 1,
	ETeamAttitude__Hostile                                                           = 2
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x01 (1 bytes)
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering                             = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances                                   = 1
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x01 (1 bytes)
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess                                          = 0,
	EPawnActionFailHandling__IgnoreFailure                                           = 1
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x01 (1 bytes)
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding                                              = 0,
	EPawnActionMoveMode__StraightLine                                                = 1
};

/// Enum /Script/AIModule.EBTNodeResult
/// Size: 0x01 (1 bytes)
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded                                                         = 0,
	EBTNodeResult__Failed                                                            = 1,
	EBTNodeResult__Aborted                                                           = 2,
	EBTNodeResult__InProgress                                                        = 3
};

/// Enum /Script/AIModule.EBTFlowAbortMode
/// Size: 0x01 (1 bytes)
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None                                                           = 0,
	EBTFlowAbortMode__LowerPriority                                                  = 1,
	EBTFlowAbortMode__Self                                                           = 2,
	EBTFlowAbortMode__Both                                                           = 3
};

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x01 (1 bytes)
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode                                                         = 0,
	EBTChildIndex__TaskNode                                                          = 1
};

/// Enum /Script/AIModule.EBTDecoratorLogic
/// Size: 0x01 (1 bytes)
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid                                                       = 0,
	EBTDecoratorLogic__Test                                                          = 1,
	EBTDecoratorLogic__And                                                           = 2,
	EBTDecoratorLogic__Or                                                            = 3,
	EBTDecoratorLogic__Not                                                           = 4
};

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x01 (1 bytes)
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground                                                 = 0,
	EBTParallelMode__WaitForBackground                                               = 1
};

/// Enum /Script/AIModule.EBTBlackboardRestart
/// Size: 0x01 (1 bytes)
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange                                                = 0,
	EBTBlackboardRestart__ResultChange                                               = 1
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison
/// Size: 0x01 (1 bytes)
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal                                                = 0,
	EBlackBoardEntryComparison__NotEqual                                             = 1
};

/// Enum /Script/AIModule.EPathExistanceQueryType
/// Size: 0x01 (1 bytes)
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D                                        = 0,
	EPathExistanceQueryType__HierarchicalQuery                                       = 1,
	EPathExistanceQueryType__RegularPathFinding                                      = 2
};

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x01 (1 bytes)
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute                                                  = 0,
	EEQSNormalizationType__RelativeToScores                                          = 1
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode
/// Size: 0x01 (1 bytes)
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All                                                     = 0,
	EEnvQueryHightlightMode__Best5Pct                                                = 1,
	EEnvQueryHightlightMode__Best25Pct                                               = 2
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x01 (1 bytes)
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween                                      = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints                                    = 1
};

/// Enum /Script/AIModule.EEnvTestDistance
/// Size: 0x01 (1 bytes)
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D                                                     = 0,
	EEnvTestDistance__Distance2D                                                     = 1,
	EEnvTestDistance__DistanceZ                                                      = 2,
	EEnvTestDistance__DistanceAbsoluteZ                                              = 3
};

/// Enum /Script/AIModule.EEnvTestDot
/// Size: 0x01 (1 bytes)
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D                                                               = 0,
	EEnvTestDot__Dot2D                                                               = 1
};

/// Enum /Script/AIModule.EEnvTestPathfinding
/// Size: 0x01 (1 bytes)
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist                                                   = 0,
	EEnvTestPathfinding__PathCost                                                    = 1,
	EEnvTestPathfinding__PathLength                                                  = 2
};

/// Enum /Script/AIModule.EPathFollowingStatus
/// Size: 0x01 (1 bytes)
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle                                                       = 0,
	EPathFollowingStatus__Waiting                                                    = 1,
	EPathFollowingStatus__Paused                                                     = 2,
	EPathFollowingStatus__Moving                                                     = 3
};

/// Enum /Script/AIModule.EPathFollowingAction
/// Size: 0x01 (1 bytes)
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error                                                      = 0,
	EPathFollowingAction__NoMove                                                     = 1,
	EPathFollowingAction__DirectMove                                                 = 2,
	EPathFollowingAction__PartialPath                                                = 3,
	EPathFollowingAction__PathToGoal                                                 = 4
};

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x01 (1 bytes)
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed                                              = 0,
	EPathFollowingRequestResult__AlreadyAtGoal                                       = 1,
	EPathFollowingRequestResult__RequestSuccessful                                   = 2
};

/// Enum /Script/AIModule.EAISenseNotifyType
/// Size: 0x01 (1 bytes)
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception                                            = 0,
	EAISenseNotifyType__OnPerceptionChange                                           = 1
};

/// Enum /Script/AIModule.EAITaskPriority
/// Size: 0x01 (1 bytes)
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest                                                          = 0,
	EAITaskPriority__Low                                                             = 64,
	EAITaskPriority__AutonomousAI                                                    = 127,
	EAITaskPriority__High                                                            = 192,
	EAITaskPriority__Ultimate                                                        = 254
};

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,344) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,345) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x6275f50] Final|RequiredAPI|Native|Public 
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAIResourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UAISenseConfig : public UObject
{ 
public:
	FColor                                             DebugColor;                                                 // 0x0028   (0x0004)  
	float                                              MaxAge;                                                     // 0x002C   (0x0004)  
	bool                                               bStartsEnabled : 1;                                         // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0031   (0x0017)  MISSED
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAISenseAffiliationFilter
{ 
	bool                                               bDetectEnemies : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               bDetectNeutrals : 1;                                        // 0x0000:1 (0x0001)  
	bool                                               bDetectFriendlies : 1;                                      // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
	float                                              HearingRange;                                               // 0x0050   (0x0004)  
	float                                              LoSHearingRange;                                            // 0x0054   (0x0004)  
	bool                                               bUseLoSHearing : 1;                                         // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x005C   (0x0004)  
};

/// Class /Script/AIModule.AISenseConfig_Prediction
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UAISenseConfig_Prediction : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Sight
/// Size: 0x0070 (112 bytes) (0x000048 - 0x000070) align 8 MaxSize: 0x0070
class UAISenseConfig_Sight : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
	float                                              SightRadius;                                                // 0x0050   (0x0004)  
	float                                              LoseSightRadius;                                            // 0x0054   (0x0004)  
	float                                              PeripheralVisionAngleDegrees;                               // 0x0058   (0x0004)  
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x005C   (0x0004)  
	float                                              AutoSuccessRangeFromLastSeenLocation;                       // 0x0060   (0x0004)  
	float                                              PointOfViewBackwardOffset;                                  // 0x0064   (0x0004)  
	float                                              NearClippingRadius;                                         // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.AISenseConfig_Team
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UAISenseConfig_Team : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Touch
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UAISenseConfig_Touch : public UAISenseConfig
{ 
public:
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/AIModule.AISenseEvent
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAISenseEvent : public UObject
{ 
public:
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAIDamageEvent
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            HitLocation;                                                // 0x0020   (0x0018)  
	class AActor*                                      DamagedActor;                                               // 0x0038   (0x0008)  
	class AActor*                                      Instigator;                                                 // 0x0040   (0x0008)  
	FName                                              Tag;                                                        // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.AISenseEvent_Damage
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UAISenseEvent_Damage : public UAISenseEvent
{ 
public:
	FAIDamageEvent                                     Event;                                                      // 0x0028   (0x0050)  
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FAINoiseEvent
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FVector                                            NoiseLocation;                                              // 0x0008   (0x0018)  
	float                                              Loudness;                                                   // 0x0020   (0x0004)  
	float                                              MaxRange;                                                   // 0x0024   (0x0004)  
	class AActor*                                      Instigator;                                                 // 0x0028   (0x0008)  
	FName                                              Tag;                                                        // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
public:
	FAINoiseEvent                                      Event;                                                      // 0x0028   (0x0040)  
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCrowdAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.EnvQueryTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnvQueryTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.EQSQueryResultSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEQSQueryResultSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGenericTeamAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UPawnAction : public UObject
{ 
public:
	class UPawnAction*                                 ChildAction;                                                // 0x0028   (0x0008)  
	class UPawnAction*                                 ParentAction;                                               // 0x0030   (0x0008)  
	class UPawnActionsComponent*                       OwnerComponent;                                             // 0x0038   (0x0008)  
	class UObject*                                     Instigator;                                                 // 0x0040   (0x0008)  
	class UBrainComponent*                             BrainComp;                                                  // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED
	bool                                               bAllowNewSameClassInstance : 1;                             // 0x0080:0 (0x0001)  
	bool                                               bReplaceActiveSameClassInstance : 1;                        // 0x0080:1 (0x0001)  
	bool                                               bShouldPauseMovement : 1;                                   // 0x0080:2 (0x0001)  
	bool                                               bAlwaysNotifyOnFinished : 1;                                // 0x0080:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0081   (0x000F)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnAction.GetActionPriority
	// TEnumAsByte<EAIRequestPriority> GetActionPriority();                                                                     // [0x4f6e760] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.PawnAction.Finish
	// void Finish(TEnumAsByte<EPawnActionResult> WithResult);                                                                  // [0x6274f40] RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.PawnAction.CreateActionInstance
	// class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);                   // [0x6274d10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPawnActionStack
{ 
	class UPawnAction*                                 TopAction;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPawnActionEvent
{ 
	class UPawnAction*                                 Action;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x00D8 (216 bytes) (0x0000A0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPawnActionsComponent : public UActorComponent
{ 
public:
	class APawn*                                       ControlledPawn;                                             // 0x00A0   (0x0008)  
	TArray<FPawnActionStack>                           ActionStacks;                                               // 0x00A8   (0x0010)  
	TArray<FPawnActionEvent>                           ActionEvents;                                               // 0x00B8   (0x0010)  
	class UPawnAction*                                 CurrentAction;                                              // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction
	// bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);   // [0x6275670] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
	// bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);           // [0x6275460] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);                                // [0x6275330] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);                                     // [0x6275250] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UPawnAction_BlueprintBase : public UPawnAction
{ 
public:


	/// Functions
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick
	// void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);                                                        // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart
	// void ActionStart(class APawn* ControlledPawn);                                                                           // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume
	// void ActionResume(class APawn* ControlledPawn);                                                                          // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause
	// void ActionPause(class APawn* ControlledPawn);                                                                           // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished
	// void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);                             // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x00F0 (240 bytes) (0x000090 - 0x0000F0) align 8 MaxSize: 0x00F0
class UPawnAction_Move : public UPawnAction
{ 
public:
	class AActor*                                      GoalActor;                                                  // 0x0090   (0x0008)  
	FVector                                            GoalLocation;                                               // 0x0098   (0x0018)  
	float                                              AcceptableRadius;                                           // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00B8   (0x0008)  
	bool                                               bAllowStrafe : 1;                                           // 0x00C0:0 (0x0001)  
	bool                                               bFinishOnOverlap : 1;                                       // 0x00C0:1 (0x0001)  
	bool                                               bUsePathfinding : 1;                                        // 0x00C0:2 (0x0001)  
	bool                                               bAllowPartialPath : 1;                                      // 0x00C0:3 (0x0001)  
	bool                                               bProjectGoalToNavigation : 1;                               // 0x00C0:4 (0x0001)  
	bool                                               bUpdatePathToGoal : 1;                                      // 0x00C0:5 (0x0001)  
	bool                                               bAbortSubActionOnPathChange : 1;                            // 0x00C0:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2F];                                      // 0x00C1   (0x002F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x00B0 (176 bytes) (0x000090 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPawnAction_Repeat : public UPawnAction
{ 
public:
	class UPawnAction*                                 ActionToRepeat;                                             // 0x0090   (0x0008)  
	class UPawnAction*                                 RecentActionCopy;                                           // 0x0098   (0x0008)  
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x00B8 (184 bytes) (0x000090 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPawnAction_Sequence : public UPawnAction
{ 
public:
	TArray<class UPawnAction*>                         ActionSequence;                                             // 0x0090   (0x0010)  
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class UPawnAction*                                 RecentActionCopy;                                           // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x00A0 (160 bytes) (0x000090 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPawnAction_Wait : public UPawnAction
{ 
public:
	float                                              TimeToWait;                                                 // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Class /Script/AIModule.AIController
/// Size: 0x03B8 (952 bytes) (0x000328 - 0x0003B8) align 8 MaxSize: 0x03B8
class AAIController : public AController
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0328   (0x0038)  MISSED
	bool                                               bStartAILogicOnPossess : 1;                                 // 0x0360:0 (0x0001)  
	bool                                               bStopAILogicOnUnposses : 1;                                 // 0x0360:1 (0x0001)  
	bool                                               bLOSflag : 1;                                               // 0x0360:2 (0x0001)  
	bool                                               bSkipExtraLOSChecks : 1;                                    // 0x0360:3 (0x0001)  
	bool                                               bAllowStrafe : 1;                                           // 0x0360:4 (0x0001)  
	bool                                               bWantsPlayerState : 1;                                      // 0x0360:5 (0x0001)  
	bool                                               bSetControlRotationFromPawnOrientation : 1;                 // 0x0360:6 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	class UPathFollowingComponent*                     PathFollowingComponent;                                     // 0x0368   (0x0008)  
	class UBrainComponent*                             BrainComponent;                                             // 0x0370   (0x0008)  
	class UAIPerceptionComponent*                      PerceptionComponent;                                        // 0x0378   (0x0008)  
	class UPawnActionsComponent*                       ActionsComp;                                                // 0x0380   (0x0008)  
	class UBlackboardComponent*                        Blackboard;                                                 // 0x0388   (0x0008)  
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                               // 0x0390   (0x0008)  
	class UClass*                                      DefaultNavigationFilterClass;                               // 0x0398   (0x0008)  
	SDK_UNDEFINED(16,346) /* FMulticastInlineDelegate */ __um(ReceiveMoveCompleted);                               // 0x03A0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x03B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.AIController.UseBlackboard
	// bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent*& BlackboardComponent);            // [0x6276370] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIController.UnclaimTaskResource
	// void UnclaimTaskResource(class UClass* ResourceClass);                                                                   // [0x62761f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetPathFollowingComponent
	// void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);                                           // [0x6276150] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetMoveBlockDetection
	// void SetMoveBlockDetection(bool bEnable);                                                                                // [0x62760c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.RunBehaviorTree
	// bool RunBehaviorTree(class UBehaviorTree* BTAsset);                                                                      // [0x6276020] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.OnUsingBlackBoard
	// void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);              // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
	// void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);            // [0x6275e80] RequiredAPI|Native|Public 
	// Function /Script/AIModule.AIController.MoveToLocation
	// TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x6275bd0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.MoveToActor
	// TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x6275980] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocus
	// void K2_SetFocus(class AActor* NewFocus);                                                                                // [0x62758f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocalPoint
	// void K2_SetFocalPoint(FVector FP);                                                                                       // [0x6275850] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_ClearFocus
	// void K2_ClearFocus();                                                                                                    // [0x6275300] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.HasPartialPath
	// bool HasPartialPath();                                                                                                   // [0x6275200] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetPathFollowingComponent
	// class UPathFollowingComponent* GetPathFollowingComponent();                                                              // [0x62751e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetMoveStatus
	// TEnumAsByte<EPathFollowingStatus> GetMoveStatus();                                                                       // [0x62751a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetImmediateMoveDestination
	// FVector GetImmediateMoveDestination();                                                                                   // [0x6275120] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocusActor
	// class AActor* GetFocusActor();                                                                                           // [0x62750f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPointOnActor
	// FVector GetFocalPointOnActor(class AActor* Actor);                                                                       // [0x6275040] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPoint
	// FVector GetFocalPoint();                                                                                                 // [0x6275000] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetDeprecatedActionsComponent
	// class UPawnActionsComponent* GetDeprecatedActionsComponent();                                                            // [0x6274fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetAIPerceptionComponent
	// class UAIPerceptionComponent* GetAIPerceptionComponent();                                                                // [0x6274fc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIController.ClaimTaskResource
	// void ClaimTaskResource(class UClass* ResourceClass);                                                                     // [0x6274b60] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIResource_Movement
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIResource_Movement : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AIResource_Logic
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIResource_Logic : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AISubsystem
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UAISubsystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UAISystem*                                   AISystem;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.AISystem
/// Size: 0x01A0 (416 bytes) (0x000060 - 0x0001A0) align 8 MaxSize: 0x01A0
class UAISystem : public UAISystemBase
{ 
public:
	FSoftClassPath                                     PerceptionSystemClassName;                                  // 0x0060   (0x0020)  
	FSoftClassPath                                     HotSpotManagerClassName;                                    // 0x0080   (0x0020)  
	FSoftClassPath                                     EnvQueryManagerClassName;                                   // 0x00A0   (0x0020)  
	float                                              AcceptanceRadius;                                           // 0x00C0   (0x0004)  
	float                                              PathfollowingRegularPathPointAcceptanceRadius;              // 0x00C4   (0x0004)  
	float                                              PathfollowingNavLinkAcceptanceRadius;                       // 0x00C8   (0x0004)  
	bool                                               bFinishMoveOnGoalOverlap;                                   // 0x00CC   (0x0001)  
	bool                                               bAcceptPartialPaths;                                        // 0x00CD   (0x0001)  
	bool                                               bAllowStrafing;                                             // 0x00CE   (0x0001)  
	bool                                               bAllowControllersAsEQSQuerier;                              // 0x00CF   (0x0001)  
	bool                                               bEnableDebuggerPlugin;                                      // 0x00D0   (0x0001)  
	bool                                               bForgetStaleActors;                                         // 0x00D1   (0x0001)  
	bool                                               bAddBlackboardSelfKey;                                      // 0x00D2   (0x0001)  
	bool                                               bClearBBEntryOnBTEQSFail;                                   // 0x00D3   (0x0001)  
	bool                                               bBlackboardKeyDecoratorAllowsNoneAsValue;                   // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	TWeakObjectPtr<class UBlackboardData*>             DefaultBlackboard;                                          // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00E0   (0x0020)  MISSED
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                               // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0101   (0x0007)  MISSED
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                        // 0x0108   (0x0008)  
	class UEnvQueryManager*                            EnvironmentQueryManager;                                    // 0x0110   (0x0008)  
	class UAIPerceptionSystem*                         PerceptionSystem;                                           // 0x0118   (0x0008)  
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                            // 0x0120   (0x0010)  
	class UAIHotSpotManager*                           HotSpotManager;                                             // 0x0130   (0x0008)  
	class UNavLocalGridManager*                        NavLocalGrids;                                              // 0x0138   (0x0008)  
	unsigned char                                      UnknownData03_7[0x60];                                      // 0x0140   (0x0060)  MISSED


	/// Functions
	// Function /Script/AIModule.AISystem.AILoggingVerbose
	// void AILoggingVerbose();                                                                                                 // [0x516c3f0] RequiredAPI|Exec|Native|Public 
	// Function /Script/AIModule.AISystem.AIIgnorePlayers
	// void AIIgnorePlayers();                                                                                                  // [0x3cdca20] RequiredAPI|Exec|Native|Public 
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FBTDecoratorLogic
{ 
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           Number;                                                     // 0x0002   (0x0002)  
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UBehaviorTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UBTCompositeNode*                            RootNode;                                                   // 0x0030   (0x0008)  
	class UBlackboardData*                             BlackboardAsset;                                            // 0x0038   (0x0008)  
	TArray<class UBTDecorator*>                        RootDecorators;                                             // 0x0040   (0x0010)  
	TArray<FBTDecoratorLogic>                          RootDecoratorOps;                                           // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x00F8 (248 bytes) (0x0000A0 - 0x0000F8) align 8 MaxSize: 0x00F8
class UBrainComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A0   (0x0008)  MISSED
	class UBlackboardComponent*                        BlackboardComp;                                             // 0x00A8   (0x0008)  
	class AAIController*                               AIOwner;                                                    // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x00B8   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.BrainComponent.StopLogic
	// void StopLogic(FString Reason);                                                                                          // [0x62cb9c0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.StartLogic
	// void StartLogic();                                                                                                       // [0x5757a50] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.RestartLogic
	// void RestartLogic();                                                                                                     // [0x4f725e0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.IsRunning
	// bool IsRunning();                                                                                                        // [0x62ca7d0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BrainComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x62ca7a0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x0290 (656 bytes) (0x0000F8 - 0x000290) align 8 MaxSize: 0x0290
class UBehaviorTreeComponent : public UBrainComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x00F8   (0x0020)  MISSED
	TArray<class UBTNode*>                             NodeInstances;                                              // 0x0118   (0x0010)  
	unsigned char                                      UnknownData01_6[0x148];                                     // 0x0128   (0x0148)  MISSED
	class UBehaviorTree*                               DefaultBehaviorTreeAsset;                                   // 0x0270   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0278   (0x0018)  MISSED


	/// Functions
	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// void SetDynamicSubtree(FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset);                                      // [0x629b750] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// double GetTagCooldownEndTime(FGameplayTag CooldownTag);                                                                  // [0x6299b80] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);              // [0x6298100] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBehaviorTreeTemplateInfo
{ 
	class UBehaviorTree*                               Asset;                                                      // 0x0000   (0x0008)  
	class UBTCompositeNode*                            Template;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UBehaviorTreeManager : public UObject
{ 
public:
	int32_t                                            MaxDebuggerSteps;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FBehaviorTreeTemplateInfo>                  LoadedTemplates;                                            // 0x0030   (0x0010)  
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                           // 0x0040   (0x0010)  
};

/// Class /Script/AIModule.BehaviorTreeTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBehaviorTreeTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.BlackboardAssetProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBlackboardAssetProvider : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AIModule.BlackboardAssetProvider.GetBlackboardAsset
	// class UBlackboardData* GetBlackboardAsset();                                                                             // [0x6298550] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x01A8 (424 bytes) (0x0000A0 - 0x0001A8) align 8 MaxSize: 0x01A8
class UBlackboardComponent : public UActorComponent
{ 
public:
	class UBrainComponent*                             BrainComp;                                                  // 0x00A0   (0x0008)  
	class UBlackboardData*                             DefaultBlackboardAsset;                                     // 0x00A8   (0x0008)  
	class UBlackboardData*                             BlackboardAsset;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00B8   (0x0020)  MISSED
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                               // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0xC0];                                      // 0x00E8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector
	// void SetValueAsVector(FName& KeyName, FVector VectorValue);                                                              // [0x629c130] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsString
	// void SetValueAsString(FName& KeyName, FString StringValue);                                                              // [0x629bfc0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
	// void SetValueAsRotator(FName& KeyName, FRotator VectorValue);                                                            // [0x629beb0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject
	// void SetValueAsObject(FName& KeyName, class UObject* ObjectValue);                                                       // [0x629bdc0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsName
	// void SetValueAsName(FName& KeyName, FName NameValue);                                                                    // [0x629bcd0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt
	// void SetValueAsInt(FName& KeyName, int32_t IntValue);                                                                    // [0x629bbe0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
	// void SetValueAsFloat(FName& KeyName, float FloatValue);                                                                  // [0x629baf0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
	// void SetValueAsEnum(FName& KeyName, char EnumValue);                                                                     // [0x629ba00] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass
	// void SetValueAsClass(FName& KeyName, class UClass* ClassValue);                                                          // [0x629b910] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool
	// void SetValueAsBool(FName& KeyName, bool BoolValue);                                                                     // [0x629b820] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
	// bool IsVectorValueSet(FName& KeyName);                                                                                   // [0x629a520] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector
	// FVector GetValueAsVector(FName& KeyName);                                                                                // [0x629a300] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsString
	// FString GetValueAsString(FName& KeyName);                                                                                // [0x629a200] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
	// FRotator GetValueAsRotator(FName& KeyName);                                                                              // [0x629a140] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject
	// class UObject* GetValueAsObject(FName& KeyName);                                                                         // [0x629a090] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsName
	// FName GetValueAsName(FName& KeyName);                                                                                    // [0x6299ff0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt
	// int32_t GetValueAsInt(FName& KeyName);                                                                                   // [0x6299f40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
	// float GetValueAsFloat(FName& KeyName);                                                                                   // [0x6299e90] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
	// char GetValueAsEnum(FName& KeyName);                                                                                     // [0x6299de0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass
	// class UClass* GetValueAsClass(FName& KeyName);                                                                           // [0x6299d30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool
	// bool GetValueAsBool(FName& KeyName);                                                                                     // [0x6299c80] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
	// bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);                                                     // [0x6299990] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
	// bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);                                                      // [0x6299610] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.ClearValue
	// void ClearValue(FName& KeyName);                                                                                         // [0x62984a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBlackboardEntry
{ 
	FName                                              EntryName;                                                  // 0x0000   (0x0008)  
	class UBlackboardKeyType*                          KeyType;                                                    // 0x0008   (0x0008)  
	bool                                               bInstanceSynced : 1;                                        // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBlackboardData : public UDataAsset
{ 
public:
	class UBlackboardData*                             Parent;                                                     // 0x0030   (0x0008)  
	TArray<FBlackboardEntry>                           Keys;                                                       // 0x0038   (0x0010)  
	bool                                               bHasSynchronizedKeys : 1;                                   // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UBlackboardKeyType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Bool
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{ 
public:
	bool                                               bDefaultValue;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Class
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UBlackboardKeyType_Class : public UBlackboardKeyType
{ 
public:
	class UClass*                                      BaseClass;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
public:
	class UEnum*                                       EnumType;                                                   // 0x0030   (0x0008)  
	FString                                            EnumName;                                                   // 0x0038   (0x0010)  
	bool                                               bIsEnumNameValid : 1;                                       // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Float
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UBlackboardKeyType_Float : public UBlackboardKeyType
{ 
public:
	float                                              DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Int
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UBlackboardKeyType_Int : public UBlackboardKeyType
{ 
public:
	int32_t                                            DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Name
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UBlackboardKeyType_Name : public UBlackboardKeyType
{ 
public:
	FName                                              DefaultValue;                                               // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_NativeEnum
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{ 
public:
	FString                                            EnumName;                                                   // 0x0030   (0x0010)  
	class UEnum*                                       EnumType;                                                   // 0x0040   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
public:
	class UClass*                                      BaseClass;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Rotator
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{ 
public:
	FRotator                                           DefaultValue;                                               // 0x0030   (0x0018)  
	bool                                               bUseDefaultValue;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_String
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBlackboardKeyType_String : public UBlackboardKeyType
{ 
public:
	FString                                            StringValue;                                                // 0x0030   (0x0010)  
	FString                                            DefaultValue;                                               // 0x0040   (0x0010)  
};

/// Class /Script/AIModule.BlackboardKeyType_Vector
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{ 
public:
	FVector                                            DefaultValue;                                               // 0x0030   (0x0018)  
	bool                                               bUseDefaultValue;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTNode
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UBTNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            NodeName;                                                   // 0x0030   (0x0010)  
	class UBehaviorTree*                               TreeAsset;                                                  // 0x0040   (0x0008)  
	class UBTCompositeNode*                            ParentNode;                                                 // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTAuxiliaryNode
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UBTAuxiliaryNode : public UBTNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FBTCompositeChild
{ 
	class UBTCompositeNode*                            ChildComposite;                                             // 0x0000   (0x0008)  
	class UBTTaskNode*                                 ChildTask;                                                  // 0x0008   (0x0008)  
	TArray<class UBTDecorator*>                        Decorators;                                                 // 0x0010   (0x0010)  
	TArray<FBTDecoratorLogic>                          DecoratorOps;                                               // 0x0020   (0x0010)  
};

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align 8 MaxSize: 0x0080
class UBTCompositeNode : public UBTNode
{ 
public:
	TArray<FBTCompositeChild>                          Children;                                                   // 0x0058   (0x0010)  
	TArray<class UBTService*>                          Services;                                                   // 0x0068   (0x0010)  
	bool                                               bApplyDecoratorScope : 1;                                   // 0x0078:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UBTDecorator : public UBTAuxiliaryNode
{ 
public:
	bool                                               bInverseCondition : 1;                                      // 0x0060:7 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                              // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// void StopUsingExternalEvent(class UBTNode* NodeOwner);                                                                   // [0x49fc7a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);                                       // [0x5a333a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// void SetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector Value);                   // [0x629b5a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// void SetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString Value);                   // [0x629b380] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator Value);                 // [0x629b1d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// void SetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UObject* Value);            // [0x629b020] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// void SetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName Value);                       // [0x629ae90] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// void SetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t Value);                      // [0x629ace0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, float Value);                      // [0x629ab20] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, char Value);                        // [0x629a970] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// void SetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UClass* Value);              // [0x629a7c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// void SetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool Value);                        // [0x629a610] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);                                               // [0x62998c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent
	// class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);                                               // [0x6299800] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x6299470] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// FString GetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x6299270] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                             // [0x62990d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                        // [0x6298f70] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// FName GetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                   // [0x6298df0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// int32_t GetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                  // [0x6298c90] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                  // [0x6298b30] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                    // [0x62989d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                          // [0x6298870] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                    // [0x6298710] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                          // [0x6298580] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                // [0x6298330] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue
	// void ClearBlackboardValue(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                        // [0x6298330] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BTService
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UBTService : public UBTAuxiliaryNode
{ 
public:
	float                                              Interval;                                                   // 0x0060   (0x0004)  
	float                                              RandomDeviation;                                            // 0x0064   (0x0004)  
	bool                                               bCallTickOnSearchStart : 1;                                 // 0x0068:0 (0x0001)  
	bool                                               bRestartTimerOnEachActivation : 1;                          // 0x0068:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0070 (112 bytes) (0x000058 - 0x000070) align 8 MaxSize: 0x0070
class UBTTaskNode : public UBTNode
{ 
public:
	TArray<class UBTService*>                          Services;                                                   // 0x0058   (0x0010)  
	bool                                               bIgnoreRestartSelf : 1;                                     // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UBTComposite_Selector : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UBTComposite_Sequence : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
public:
	TEnumAsByte<EBTParallelMode>                       FinishMode;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FBlackboardKeySelector
{ 
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                               // 0x0000   (0x0010)  
	FName                                              SelectedKeyName;                                            // 0x0010   (0x0008)  
	class UClass*                                      SelectedKeyType;                                            // 0x0018   (0x0008)  
	int32_t                                            SelectedKeyID;                                              // 0x0020   (0x0004)  
	bool                                               bNoneIsAllowedValue : 1;                                    // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0068   (0x0028)  
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x00C0 (192 bytes) (0x000090 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
public:
	int32_t                                            IntValue;                                                   // 0x0090   (0x0004)  
	float                                              FloatValue;                                                 // 0x0094   (0x0004)  
	FString                                            StringValue;                                                // 0x0098   (0x0010)  
	FString                                            CachedDescription;                                          // 0x00A8   (0x0010)  
	char                                               OperationType;                                              // 0x00B8   (0x0001)  
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                             // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0068   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0070   (0x0008)  
	TArray<FName>                                      ObservedKeyNames;                                           // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0088   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0098:0 (0x0001)  
	bool                                               bCheckConditionOnlyBlackBoardChanges : 1;                   // 0x0098:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                    // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(class AActor* OwnerActor);                                                               // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                      // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(class AActor* OwnerActor);                                                                 // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(class AActor* OwnerActor);                                                                    // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                            // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(class AActor* OwnerActor);                                                                    // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                        // [0x629a490] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                       // [0x629a3c0] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             ActorToCheck;                                               // 0x0068   (0x0028)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0098   (0x0020)  
	FString                                            CachedDescription;                                          // 0x00B8   (0x0010)  
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0070   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0098   (0x0028)  
};

/// Class /Script/AIModule.BTDecorator_ConditionalLoop
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_ConeCheck
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
class UBTDecorator_ConeCheck : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)  
	FBlackboardKeySelector                             ConeDirection;                                              // 0x0098   (0x0028)  
	FBlackboardKeySelector                             Observed;                                                   // 0x00C0   (0x0028)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UBTDecorator_Cooldown : public UBTDecorator
{ 
public:
	float                                              CoolDownTime;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0068   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0090   (0x0028)  
	bool                                               bUseSelf : 1;                                               // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                              // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00C0   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_ForceSuccess
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UBTDecorator_ForceSuccess : public UBTDecorator
{ 
public:
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UAIDataProvider*                             DataBinding;                                                // 0x0010   (0x0008)  
	FName                                              DataField;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000030) align 8 MaxSize: 0x0030
struct FAIDataProviderTypedValue : FAIDataProviderValue
{ 
	class UClass*                                      PropertyType;                                               // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{ 
	float                                              DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_IsAtLocation
/// Size: 0x00D8 (216 bytes) (0x000090 - 0x0000D8) align 8 MaxSize: 0x00D8
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FAIDataProviderFloatValue                          ParametrizedAcceptableRadius;                               // 0x0098   (0x0038)  
	FAIDistanceType                                    GeometricDistanceType;                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	bool                                               bUseParametrizedRadius : 1;                                 // 0x00D4:0 (0x0001)  
	bool                                               bUseNavAgentGoalLocation : 1;                               // 0x00D4:1 (0x0001)  
	bool                                               bPathFindingBasedTest : 1;                                  // 0x00D4:2 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x00D5   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0098 (152 bytes) (0x000090 - 0x000098) align 8 MaxSize: 0x0098
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
public:
	class UClass*                                      TestClass;                                                  // 0x0090   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)  
	FBlackboardKeySelector                             Observed;                                                   // 0x0098   (0x0028)  
	bool                                               bUseSelfAsOrigin : 1;                                       // 0x00C0:0 (0x0001)  
	bool                                               bUseSelfAsObserved : 1;                                     // 0x00C0:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align 8 MaxSize: 0x0078
class UBTDecorator_Loop : public UBTDecorator
{ 
public:
	int32_t                                            NumLoops;                                                   // 0x0068   (0x0004)  
	bool                                               bInfiniteLoop;                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              InfiniteLoopTimeoutTime;                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_ReachedMoveGoal
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_SetTagCooldown
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align 8 MaxSize: 0x0078
class UBTDecorator_SetTagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)  
	float                                              CooldownDuration;                                           // 0x0070   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0075   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align 8 MaxSize: 0x0078
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)  
	float                                              CooldownDuration;                                           // 0x0070   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)  
	bool                                               bActivatesCooldown;                                         // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0076   (0x0002)  MISSED
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
public:
	float                                              timeLimit;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UBTService_BlackboardBase : public UBTService
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)  
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UBTService_BlueprintBase : public UBTService
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0080   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0090:0 (0x0001)  
	bool                                               bShowEventDetails : 1;                                      // 0x0090:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                            // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(class AActor* OwnerActor);                                                                       // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                           // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(class AActor* OwnerActor);                                                                      // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                             // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
	// void ReceiveActivation(class AActor* OwnerActor);                                                                        // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
	// bool IsServiceActive();                                                                                                  // [0x62ca800] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
public:
	char                                               FocusPriority;                                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAIDynamicParam
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0008)  
	EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Value;                                                      // 0x000C   (0x0004)  
	FBlackboardKeySelector                             BBKey;                                                      // 0x0010   (0x0028)  
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FEQSParametrizedQueryExecutionRequest
{ 
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0008   (0x0010)  
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x0018   (0x0028)  
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	bool                                               bUseBBKeyForQueryTemplate : 1;                              // 0x0044:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x00F8 (248 bytes) (0x000098 - 0x0000F8) align 8 MaxSize: 0x00F8
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0098   (0x0048)  
	bool                                               bUpdateBBOnFail;                                            // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x00E1   (0x0017)  MISSED
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)  
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FIntervalCountdown
{ 
	float                                              Interval;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x00A8 (168 bytes) (0x000070 - 0x0000A8) align 8 MaxSize: 0x00A8
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0078   (0x0008)  
	FIntervalCountdown                                 TickInterval;                                               // 0x0080   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0088   (0x0018)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);                                                     // [0x62cb3c0] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// void SetFinishOnMessage(FName MessageName);                                                                              // [0x62cb300] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
	// void ReceiveExecute(class AActor* OwnerActor);                                                                           // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                  // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
	// void ReceiveAbort(class AActor* OwnerActor);                                                                             // [0x2fd44f0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// bool IsTaskExecuting();                                                                                                  // [0x62ca8b0] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
	// bool IsTaskAborting();                                                                                                   // [0x62ca880] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
	// void FinishExecute(bool bSuccess);                                                                                       // [0x62c9a30] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
	// void FinishAbort();                                                                                                      // [0x62c99a0] Final|RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
public:
	TEnumAsByte<EBTNodeResult>                         Result;                                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
public:
	bool                                               bWaitForGameplayTask : 1;                                   // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBTTask_MakeNoise : public UBTTaskNode
{ 
public:
	float                                              Loudnes;                                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00A0   (0x0008)  
	float                                              ObservedBlackboardValueTolerance;                           // 0x00A8   (0x0004)  
	bool                                               bObserveBlackboardValue : 1;                                // 0x00AC:0 (0x0001)  
	bool                                               bAllowStrafe : 1;                                           // 0x00AC:1 (0x0001)  
	bool                                               bAllowPartialPath : 1;                                      // 0x00AC:2 (0x0001)  
	bool                                               bTrackMovingGoal : 1;                                       // 0x00AC:3 (0x0001)  
	bool                                               bRequireNavigableEndLocation : 1;                           // 0x00AC:4 (0x0001)  
	bool                                               bProjectGoalLocation : 1;                                   // 0x00AC:5 (0x0001)  
	bool                                               bReachTestIncludesAgentRadius : 1;                          // 0x00AC:6 (0x0001)  
	bool                                               bReachTestIncludesGoalRadius : 1;                           // 0x00AC:7 (0x0001)  
	bool                                               bStopOnOverlap : 1;                                         // 0x00AD:0 (0x0001)  
	bool                                               bStopOnOverlapNeedsUpdate : 1;                              // 0x00AD:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00AE   (0x0002)  MISSED
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
public:
	bool                                               bDisablePathUpdateOnGoalLocationChange : 1;                 // 0x00B0:0 (0x0001)  
	bool                                               bProjectVectorGoalToNavigation : 1;                         // 0x00B0:1 (0x0001)  
	bool                                               bUpdatedDeprecatedProperties : 1;                           // 0x00B0:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_PawnActionBase
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UBTTask_PawnActionBase : public UBTTaskNode
{ 
public:
};

/// Class /Script/AIModule.BTTask_PlayAnimation
/// Size: 0x00B0 (176 bytes) (0x000070 - 0x0000B0) align 8 MaxSize: 0x00B0
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
public:
	class UAnimationAsset*                             AnimationToPlay;                                            // 0x0070   (0x0008)  
	bool                                               bLooping : 1;                                               // 0x0078:0 (0x0001)  
	bool                                               bNonBlocking : 1;                                           // 0x0078:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	class UBehaviorTreeComponent*                      MyOwnerComp;                                                // 0x0080   (0x0008)  
	class USkeletalMeshComponent*                      CachedSkelMesh;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0090   (0x0020)  MISSED
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBTTask_PlaySound : public UBTTaskNode
{ 
public:
	class USoundCue*                                   SoundToPlay;                                                // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
public:
	class UPawnAction*                                 Action;                                                     // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
public:
	float                                              Precision;                                                  // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBTTask_RunBehavior : public UBTTaskNode
{ 
public:
	class UBehaviorTree*                               BehaviorAsset;                                              // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
public:
	FGameplayTag                                       InjectionTag;                                               // 0x0070   (0x0008)  
	class UBehaviorTree*                               DefaultBehaviorAsset;                                       // 0x0078   (0x0008)  
	class UBehaviorTree*                               BehaviorAsset;                                              // 0x0080   (0x0008)  
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FEnvNamedValue
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0008)  
	EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Value;                                                      // 0x000C   (0x0004)  
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x0158 (344 bytes) (0x000098 - 0x000158) align 8 MaxSize: 0x0158
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
public:
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0098   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x00A0   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x00B0   (0x0010)  
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x00C8   (0x0028)  
	bool                                               bUseBBKey;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x00F8   (0x0048)  
	bool                                               bUpdateBBOnFail;                                            // 0x0140   (0x0001)  
	unsigned char                                      UnknownData02_7[0x17];                                      // 0x0141   (0x0017)  MISSED
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0070   (0x0008)  
	bool                                               bAddToExistingDuration;                                     // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              CooldownDuration;                                           // 0x007C   (0x0004)  
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBTTask_Wait : public UBTTaskNode
{ 
public:
	float                                              WaitTime;                                                   // 0x0070   (0x0004)  
	float                                              RandomDeviation;                                            // 0x0074   (0x0004)  
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0078   (0x0028)  
};

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);        // [0x62cba60] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, class AActor* Owner); // [0x62cb740] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                                 // [0x62cb670] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                               // [0x62cb5b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// void SendAIMessage(class APawn* Target, FName Message, class UObject* MessageSource, bool bSuccess);                     // [0x62cb140] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);              // [0x62cabd0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// bool IsValidAIRotation(FRotator Rotation);                                                                               // [0x62cab20] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// bool IsValidAILocation(FVector Location);                                                                                // [0x62caa30] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// bool IsValidAIDirection(FVector DirectionVector);                                                                        // [0x62ca930] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	// int32_t GetNextNavLinkIndex(class AController* Controller);                                                              // [0x62ca120] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	// TArray<FVector> GetCurrentPathPoints(class AController* Controller);                                                     // [0x62c9fb0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	// int32_t GetCurrentPathIndex(class AController* Controller);                                                              // [0x62c9ed0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// class UNavigationPath* GetCurrentPath(class AController* Controller);                                                    // [0x62c9cf0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// class UBlackboardComponent* GetBlackboard(class AActor* Target);                                                         // [0x62c9c10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController
	// class AAIController* GetAIController(class AActor* ControlledActor);                                                     // [0x62c9b30] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, FVector destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // [0x62c97c0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAIDataProvider : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
public:
	FName                                              ParamName;                                                  // 0x0028   (0x0008)  
	float                                              FloatValue;                                                 // 0x0030   (0x0004)  
	int32_t                                            IntValue;                                                   // 0x0034   (0x0004)  
	bool                                               BoolValue;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
public:
	float                                              Min;                                                        // 0x0040   (0x0004)  
	float                                              Max;                                                        // 0x0044   (0x0004)  
	bool                                               bInteger : 1;                                               // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x03B8 (952 bytes) (0x0003B8 - 0x0003B8) align 8 MaxSize: 0x03B8
class ADetourCrowdAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnvQueryContext : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);        // [0x2fd44f0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor*& ResultingActor);        // [0x2fd44f0] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<FVector>& ResultingLocationSet); // [0x2fd44f0] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet);    // [0x2fd44f0] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/AIModule.EnvQueryContext_Item
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnvQueryContext_Item : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_Querier
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnvQueryContext_Querier : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UEnvQuery : public UDataAsset
{ 
public:
	FName                                              QueryName;                                                  // 0x0030   (0x0008)  
	TArray<class UEnvQueryOption*>                     OPTIONS;                                                    // 0x0038   (0x0010)  
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnvQueryDebugHelpers : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryNode
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryNode : public UObject
{ 
public:
	int32_t                                            VerNum;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UEnvQueryGenerator : public UEnvQueryNode
{ 
public:
	FString                                            OptionName;                                                 // 0x0030   (0x0010)  
	class UClass*                                      ItemType;                                                   // 0x0040   (0x0008)  
	bool                                               bAutoSortTests : 1;                                         // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	int32_t                                            QueryID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x0034   (0x0024)  MISSED
	class UClass*                                      ItemType;                                                   // 0x0058   (0x0008)  
	int32_t                                            OptionIndex;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	SDK_UNDEFINED(16,347) /* FMulticastInlineDelegate */ __um(OnQueryFinishedEvent);                               // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// void SetNamedParam(FName ParamName, float Value);                                                                        // [0x62cb4d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// TArray<FVector> GetResultsAsLocations();                                                                                 // [0x62ca690] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// TArray<AActor*> GetResultsAsActors();                                                                                    // [0x62ca500] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	// bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);                                                       // [0x62ca3c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	// bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);                                                             // [0x62ca300] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// float GetItemScore(int32_t ItemIndex);                                                                                   // [0x62ca060] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x2fd44f0] MulticastDelegate|Public|Delegate 
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0180 (384 bytes) (0x000000 - 0x000180) align 8 MaxSize: 0x0180
struct FEnvQueryInstanceCache
{ 
	class UEnvQuery*                                   Template;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x178];                                     // 0x0008   (0x0178)  MISSED
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0158 (344 bytes) (0x000038 - 0x000158) align 8 MaxSize: 0x0158
class UEnvQueryManager : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0038   (0x0070)  MISSED
	TArray<FEnvQueryInstanceCache>                     InstanceCache;                                              // 0x00A8   (0x0010)  
	TArray<class UEnvQueryContext*>                    LocalContexts;                                              // 0x00B8   (0x0010)  
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x00D8   (0x0054)  MISSED
	float                                              MaxAllowedTestingTime;                                      // 0x012C   (0x0004)  
	bool                                               bTestQueriesUsingBreadth;                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	int32_t                                            QueryCountWarningThreshold;                                 // 0x0134   (0x0004)  
	double                                             QueryCountWarningInterval;                                  // 0x0138   (0x0008)  
	double                                             ExecutionTimeWarningSeconds;                                // 0x0140   (0x0008)  
	double                                             HandlingResultTimeWarningSeconds;                           // 0x0148   (0x0008)  
	double                                             GenerationTimeWarningSeconds;                               // 0x0150   (0x0008)  


	/// Functions
	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery
	// class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass); // [0x62cad50] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UEnvQueryOption : public UObject
{ 
public:
	class UEnvQueryGenerator*                          Generator;                                                  // 0x0028   (0x0008)  
	TArray<class UEnvQueryTest*>                       Tests;                                                      // 0x0030   (0x0010)  
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{ 
	bool                                               DefaultValue;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x01F8 (504 bytes) (0x000030 - 0x0001F8) align 8 MaxSize: 0x01F8
class UEnvQueryTest : public UEnvQueryNode
{ 
public:
	int32_t                                            TestOrder;                                                  // 0x0030   (0x0004)  
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                                // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            TestComment;                                                // 0x0038   (0x0010)  
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                    // 0x0048   (0x0001)  
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                     // 0x0049   (0x0001)  
	TEnumAsByte<EEnvTestFilterType>                    filterType;                                                 // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x004B   (0x0005)  MISSED
	FAIDataProviderBoolValue                           BoolValue;                                                  // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          FloatValueMin;                                              // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          FloatValueMax;                                              // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x00F8   (0x0001)  MISSED
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                            // 0x00F9   (0x0001)  
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                               // 0x00FA   (0x0001)  
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                               // 0x00FB   (0x0001)  
	EEQSNormalizationType                              NormalizationType;                                          // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FAIDataProviderFloatValue                          ScoreClampMin;                                              // 0x0100   (0x0038)  
	FAIDataProviderFloatValue                          ScoreClampMax;                                              // 0x0138   (0x0038)  
	FAIDataProviderFloatValue                          ScoringFactor;                                              // 0x0170   (0x0038)  
	FAIDataProviderFloatValue                          ReferenceValue;                                             // 0x01A8   (0x0038)  
	bool                                               bDefineReferenceValue;                                      // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData04_6[0xF];                                       // 0x01E1   (0x000F)  MISSED
	bool                                               bWorkOnFloatValues : 1;                                     // 0x01F0:0 (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x01F1   (0x0007)  MISSED
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x05A0 (1440 bytes) (0x000568 - 0x0005A0) align 16 MaxSize: 0x05A0
class UEQSRenderingComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0568   (0x0038)  MISSED
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x0710 (1808 bytes) (0x000668 - 0x000710) align 16 MaxSize: 0x0710
class AEQSTestingPawn : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0668   (0x0008)  MISSED
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0670   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x0678   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0688   (0x0010)  
	float                                              TimeLimitPerStep;                                           // 0x0698   (0x0004)  
	int32_t                                            StepToDebugDraw;                                            // 0x069C   (0x0004)  
	EEnvQueryHightlightMode                            HighlightMode;                                              // 0x06A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x06A1   (0x0003)  MISSED
	bool                                               bDrawLabels : 1;                                            // 0x06A4:0 (0x0001)  
	bool                                               bDrawFailedItems : 1;                                       // 0x06A4:1 (0x0001)  
	bool                                               bReRunQueryOnlyOnFinishedMove : 1;                          // 0x06A4:2 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x06A4:3 (0x0001)  
	bool                                               bTickDuringGame : 1;                                        // 0x06A4:4 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x06A5   (0x0003)  MISSED
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                               // 0x06A8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x06A9   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProperties;                                         // 0x06B0   (0x0038)  
	unsigned char                                      UnknownData04_7[0x28];                                      // 0x06E8   (0x0028)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x00D0 (208 bytes) (0x000050 - 0x0000D0) align 8 MaxSize: 0x00D0
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      SearchedActorClass;                                         // 0x0050   (0x0008)  
	FAIDataProviderBoolValue                           GenerateOnlyActorsInRadius;                                 // 0x0058   (0x0038)  
	FAIDataProviderFloatValue                          SearchRadius;                                               // 0x0090   (0x0038)  
	class UClass*                                      SearchCenter;                                               // 0x00C8   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
public:
	FText                                              GeneratorsActionDescription;                                // 0x0050   (0x0018)  
	class UClass*                                      Context;                                                    // 0x0060   (0x0008)  
	class UClass*                                      GeneratedItemType;                                          // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// class UObject* GetQuerier();                                                                                             // [0x62ca2c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
	// void DoItemGenerationFromActors(TArray<AActor*>& ContextActors);                                                         // [0x2fd44f0] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// void DoItemGeneration(TArray<FVector>& ContextLocations);                                                                // [0x2fd44f0] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// void AddGeneratedVector(FVector GeneratedVector);                                                                        // [0x62c96b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// void AddGeneratedActor(class AActor* GeneratedActor);                                                                    // [0x62c9510] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0070 (112 bytes) (0x000050 - 0x000070) align 8 MaxSize: 0x0070
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                                 // 0x0050   (0x0010)  
	bool                                               bAllowDifferentItemTypes : 1;                               // 0x0060:0 (0x0001)  
	bool                                               bHasMatchingItemType : 1;                                   // 0x0060:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	class UClass*                                      ForcedItemType;                                             // 0x0068   (0x0008)  
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FEnvTraceData
{ 
	int32_t                                            VersionNum;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      NavigationFilter;                                           // 0x0008   (0x0008)  
	float                                              ProjectDown;                                                // 0x0010   (0x0004)  
	float                                              ProjectUp;                                                  // 0x0014   (0x0004)  
	float                                              ExtentX;                                                    // 0x0018   (0x0004)  
	float                                              ExtentY;                                                    // 0x001C   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0020   (0x0004)  
	float                                              PostProjectionVerticalOffset;                               // 0x0024   (0x0004)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x0028   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	FName                                              TraceProfileName;                                           // 0x002C   (0x0008)  
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                                 // 0x0034   (0x0001)  
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                  // 0x0035   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	bool                                               bTraceComplex : 1;                                          // 0x0038:0 (0x0001)  
	bool                                               bOnlyBlockingHits : 1;                                      // 0x0038:1 (0x0001)  
	bool                                               bCanTraceOnNavMesh : 1;                                     // 0x0038:2 (0x0001)  
	bool                                               bCanTraceOnGeometry : 1;                                    // 0x0038:3 (0x0001)  
	bool                                               bCanDisableTrace : 1;                                       // 0x0038:4 (0x0001)  
	bool                                               bCanProjectDown : 1;                                        // 0x0038:5 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0090 (144 bytes) (0x000050 - 0x000090) align 8 MaxSize: 0x0090
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x0050   (0x0040)  
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x0180 (384 bytes) (0x000090 - 0x000180) align 8 MaxSize: 0x0180
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          AlignedPointsDistance;                                      // 0x0090   (0x0038)  
	FAIDataProviderFloatValue                          ConeDegrees;                                                // 0x00C8   (0x0038)  
	FAIDataProviderFloatValue                          AngleStep;                                                  // 0x0100   (0x0038)  
	FAIDataProviderFloatValue                          Range;                                                      // 0x0138   (0x0038)  
	class UClass*                                      CenterActor;                                                // 0x0170   (0x0008)  
	bool                                               bIncludeContextLocation : 1;                                // 0x0178:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0179   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      QueryContext;                                               // 0x0050   (0x0008)  
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{ 
	int32_t                                            DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FEnvDirection
{ 
	class UClass*                                      LineFrom;                                                   // 0x0000   (0x0008)  
	class UClass*                                      LineTo;                                                     // 0x0008   (0x0008)  
	class UClass*                                      Rotation;                                                   // 0x0010   (0x0008)  
	TEnumAsByte<EEnvDirection>                         DirMode;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x01E0 (480 bytes) (0x000090 - 0x0001E0) align 8 MaxSize: 0x01E0
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          InnerRadius;                                                // 0x0090   (0x0038)  
	FAIDataProviderFloatValue                          OuterRadius;                                                // 0x00C8   (0x0038)  
	FAIDataProviderIntValue                            NumberOfRings;                                              // 0x0100   (0x0038)  
	FAIDataProviderIntValue                            PointsPerRing;                                              // 0x0138   (0x0038)  
	FEnvDirection                                      ArcDirection;                                               // 0x0170   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0190   (0x0038)  
	bool                                               bUseSpiralPattern;                                          // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	class UClass*                                      Center;                                                     // 0x01D0   (0x0008)  
	bool                                               bDefineArc : 1;                                             // 0x01D8:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x01D9   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0230 (560 bytes) (0x000090 - 0x000230) align 8 MaxSize: 0x0230
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          CircleRadius;                                               // 0x0090   (0x0038)  
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                                 // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00D0   (0x0038)  
	FAIDataProviderIntValue                            NumberOfPoints;                                             // 0x0108   (0x0038)  
	FEnvDirection                                      ArcDirection;                                               // 0x0140   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0160   (0x0038)  
	float                                              AngleRadians;                                               // 0x0198   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	class UClass*                                      CircleCenter;                                               // 0x01A0   (0x0008)  
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;                // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01A9   (0x0007)  MISSED
	FAIDataProviderFloatValue                          CircleCenterZOffset;                                        // 0x01B0   (0x0038)  
	FEnvTraceData                                      TraceData;                                                  // 0x01E8   (0x0040)  
	bool                                               bDefineArc : 1;                                             // 0x0228:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0229   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0108 (264 bytes) (0x000090 - 0x000108) align 8 MaxSize: 0x0108
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          GridSize;                                                   // 0x0090   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00C8   (0x0038)  
	class UClass*                                      GenerateAround;                                             // 0x0100   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0180 (384 bytes) (0x000108 - 0x000180) align 8 MaxSize: 0x0180
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
public:
	FAIDataProviderBoolValue                           PathToItem;                                                 // 0x0108   (0x0038)  
	class UClass*                                      NavigationFilter;                                           // 0x0140   (0x0008)  
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0148   (0x0038)  
};

/// Class /Script/AIModule.EnvQueryGenerator_PerceivedActors
/// Size: 0x00A8 (168 bytes) (0x000050 - 0x0000A8) align 8 MaxSize: 0x00A8
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      AllowedActorClass;                                          // 0x0050   (0x0008)  
	FAIDataProviderFloatValue                          SearchRadius;                                               // 0x0058   (0x0038)  
	class UClass*                                      ListenerContext;                                            // 0x0090   (0x0008)  
	class UClass*                                      SenseToUse;                                                 // 0x0098   (0x0008)  
	bool                                               bIncludeKnownActors;                                        // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryItemType
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryItemType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.EnvQueryItemType_VectorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_ActorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Actor
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Direction
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0208 (520 bytes) (0x0001F8 - 0x000208) align 8 MaxSize: 0x0208
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      DistanceTo;                                                 // 0x0200   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0240 (576 bytes) (0x0001F8 - 0x000240) align 8 MaxSize: 0x0240
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
public:
	FEnvDirection                                      LineA;                                                      // 0x01F8   (0x0020)  
	FEnvDirection                                      LineB;                                                      // 0x0218   (0x0020)  
	EEnvTestDot                                        TestMode;                                                   // 0x0238   (0x0001)  
	bool                                               bAbsoluteValue;                                             // 0x0239   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x023A   (0x0006)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0268 (616 bytes) (0x0001F8 - 0x000268) align 8 MaxSize: 0x0268
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  TagQueryToMatch;                                            // 0x01F8   (0x0048)  
	bool                                               bRejectIncompatibleItems;                                   // 0x0240   (0x0001)  
	bool                                               bUpdatedToUseQuery;                                         // 0x0241   (0x0001)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0242   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0243   (0x0005)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0248   (0x0020)  
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FEnvOverlapData
{ 
	float                                              ExtentX;                                                    // 0x0000   (0x0004)  
	float                                              ExtentY;                                                    // 0x0004   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            ShapeOffset;                                                // 0x0010   (0x0018)  
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x0028   (0x0001)  
	TEnumAsByte<EEnvOverlapShape>                      OverlapShape;                                               // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	bool                                               bOnlyBlockingHits : 1;                                      // 0x002C:0 (0x0001)  
	bool                                               bOverlapComplex : 1;                                        // 0x002C:1 (0x0001)  
	bool                                               bSkipOverlapQuerier : 1;                                    // 0x002C:2 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0228 (552 bytes) (0x0001F8 - 0x000228) align 8 MaxSize: 0x0228
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    OverlapData;                                                // 0x01F8   (0x0030)  
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align 8 MaxSize: 0x0280
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      Context;                                                    // 0x0200   (0x0008)  
	FAIDataProviderBoolValue                           PathFromContext;                                            // 0x0208   (0x0038)  
	FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0240   (0x0038)  
	class UClass*                                      FilterClass;                                                // 0x0278   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x02B8 (696 bytes) (0x000280 - 0x0002B8) align 8 MaxSize: 0x02B8
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
public:
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0280   (0x0038)  
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0238 (568 bytes) (0x0001F8 - 0x000238) align 8 MaxSize: 0x0238
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x01F8   (0x0040)  
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x02E8 (744 bytes) (0x0001F8 - 0x0002E8) align 8 MaxSize: 0x02E8
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      TraceData;                                                  // 0x01F8   (0x0040)  
	FAIDataProviderBoolValue                           TraceFromContext;                                           // 0x0238   (0x0038)  
	FAIDataProviderFloatValue                          ItemHeightOffset;                                           // 0x0270   (0x0038)  
	FAIDataProviderFloatValue                          ContextHeightOffset;                                        // 0x02A8   (0x0038)  
	class UClass*                                      Context;                                                    // 0x02E0   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 8 MaxSize: 0x0210
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
public:
	class UClass*                                      VolumeContext;                                              // 0x01F8   (0x0008)  
	class UClass*                                      VolumeClass;                                                // 0x0200   (0x0008)  
	bool                                               bDoComplexVolumeTest : 1;                                   // 0x0208:0 (0x0001)  
	bool                                               bSkipTestIfNoVolumes : 1;                                   // 0x0208:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0209   (0x0007)  MISSED
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x03B8 (952 bytes) (0x0003B8 - 0x0003B8) align 8 MaxSize: 0x03B8
class AGridPathAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAIHotSpotManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x02E0 (736 bytes) (0x0000A0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UPathFollowingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x00A0   (0x0038)  MISSED
	class UNavMovementComponent*                       MovementComp;                                               // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00E0   (0x0010)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x1E8];                                     // 0x00F8   (0x01E8)  MISSED


	/// Functions
	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
	// void OnNavDataRegistered(class ANavigationData* NavData);                                                                // [0x62f46a0] Final|RequiredAPI|Native|Protected 
	// Function /Script/AIModule.PathFollowingComponent.OnActorBump
	// void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);             // [0x62f44c0] RequiredAPI|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination
	// FVector GetPathDestination();                                                                                            // [0x62f43a0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType
	// TEnumAsByte<EPathFollowingAction> GetPathActionType();                                                                   // [0x62f42e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0330 (816 bytes) (0x0002E0 - 0x000330) align 8 MaxSize: 0x0330
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x02E0   (0x0018)  MISSED
	FVector                                            CrowdAgentMoveDirection;                                    // 0x02F8   (0x0018)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0310   (0x0020)  MISSED


	/// Functions
	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// void SuspendCrowdSteering(bool bSuspend);                                                                                // [0x62f4c80] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FCrowdAvoidanceConfig
{ 
	float                                              VelocityBias;                                               // 0x0000   (0x0004)  
	float                                              DesiredVelocityWeight;                                      // 0x0004   (0x0004)  
	float                                              CurrentVelocityWeight;                                      // 0x0008   (0x0004)  
	float                                              SideBiasWeight;                                             // 0x000C   (0x0004)  
	float                                              ImpactTimeWeight;                                           // 0x0010   (0x0004)  
	float                                              ImpactTimeRange;                                            // 0x0014   (0x0004)  
	char                                               CustomPatternIdx;                                           // 0x0018   (0x0001)  
	char                                               AdaptiveDivisions;                                          // 0x0019   (0x0001)  
	char                                               AdaptiveRings;                                              // 0x001A   (0x0001)  
	char                                               AdaptiveDepth;                                              // 0x001B   (0x0001)  
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCrowdAvoidanceSamplingPattern
{ 
	TArray<float>                                      Angles;                                                     // 0x0000   (0x0010)  
	TArray<float>                                      Radii;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UCrowdManager : public UCrowdManagerBase
{ 
public:
	class ANavigationData*                             MyNavData;                                                  // 0x0028   (0x0008)  
	TArray<FCrowdAvoidanceConfig>                      AvoidanceConfig;                                            // 0x0030   (0x0010)  
	TArray<FCrowdAvoidanceSamplingPattern>             SamplingPatterns;                                           // 0x0040   (0x0010)  
	int32_t                                            MaxAgents;                                                  // 0x0050   (0x0004)  
	float                                              MaxAgentRadius;                                             // 0x0054   (0x0004)  
	int32_t                                            MaxAvoidedAgents;                                           // 0x0058   (0x0004)  
	int32_t                                            MaxAvoidedWalls;                                            // 0x005C   (0x0004)  
	float                                              NavmeshCheckInterval;                                       // 0x0060   (0x0004)  
	float                                              PathOptimizationInterval;                                   // 0x0064   (0x0004)  
	float                                              SeparationDirClamp;                                         // 0x0068   (0x0004)  
	float                                              PathOffsetRadiusMultiplier;                                 // 0x006C   (0x0004)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0070:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0070:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0070:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit03 : 1;                                           // 0x0070:3 (0x0001)  MISSED
	bool                                               bResolveCollisions : 1;                                     // 0x0070:4 (0x0001)  
	unsigned char                                      UnknownData04_7[0x7F];                                      // 0x0071   (0x007F)  MISSED
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0310 (784 bytes) (0x0002E0 - 0x000310) align 8 MaxSize: 0x0310
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
public:
	class UNavLocalGridManager*                        GridManager;                                                // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x02E8   (0x0028)  MISSED
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AIModule.NavLinkProxy
/// Size: 0x02E0 (736 bytes) (0x000290 - 0x0002E0) align 8 MaxSize: 0x02E0
class ANavLinkProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0290   (0x0010)  MISSED
	TArray<FNavigationLink>                            PointLinks;                                                 // 0x02A0   (0x0010)  
	TArray<FNavigationSegmentLink>                     SegmentLinks;                                               // 0x02B0   (0x0010)  
	class UNavLinkCustomComponent*                     SmartLinkComp;                                              // 0x02C0   (0x0008)  
	bool                                               bSmartLinkIsRelevant;                                       // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02C9   (0x0007)  MISSED
	SDK_UNDEFINED(16,348) /* FMulticastInlineDelegate */ __um(OnSmartLinkReached);                                 // 0x02D0   (0x0010)  


	/// Functions
	// Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled
	// void SetSmartLinkEnabled(bool bEnabled);                                                                                 // [0x62f4bf0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ResumePathFollowing
	// void ResumePathFollowing(class AActor* Agent);                                                                           // [0x62f49d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached
	// void ReceiveSmartLinkReached(class AActor* Agent, FVector& destination);                                                 // [0x2fd44f0] RequiredAPI|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled
	// bool IsSmartLinkEnabled();                                                                                               // [0x62f4490] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.NavLinkProxy.HasMovingAgents
	// bool HasMovingAgents();                                                                                                  // [0x62f4450] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UNavLocalGridManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED


	/// Functions
	// Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);                                   // [0x62f4af0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);                   // [0x62f4880] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// bool FindLocalNavigationGridPath(class UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints); // [0x62f4120] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// int32_t AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x62f3d70] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// int32_t AddLocalNavigationGridForPoint(class UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x62f3ae0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// int32_t AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x62f36f0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// int32_t AddLocalNavigationGridForBox(class UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x62f3390] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.PathFollowingManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPathFollowingManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x0190 (400 bytes) (0x0000A0 - 0x000190) align 8 MaxSize: 0x0190
class UAIPerceptionComponent : public UActorComponent
{ 
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                               // 0x00A0   (0x0010)  
	class UClass*                                      DominantSense;                                              // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B8   (0x0010)  MISSED
	class AAIController*                               AIOwner;                                                    // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x00D0   (0x0080)  MISSED
	SDK_UNDEFINED(16,349) /* FMulticastInlineDelegate */ __um(OnPerceptionUpdated);                                // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,350) /* FMulticastInlineDelegate */ __um(OnTargetPerceptionForgotten);                        // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,351) /* FMulticastInlineDelegate */ __um(OnTargetPerceptionUpdated);                          // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,352) /* FMulticastInlineDelegate */ __um(OnTargetPerceptionInfoUpdated);                      // 0x0180   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
	// void SetSenseEnabled(class UClass* SenseClass, bool bEnable);                                                            // [0x630f180] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// void RequestStimuliListenerUpdate();                                                                                     // [0x630eee0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                     // [0x630d710] Final|RequiredAPI|Native|Public 
	// Function /Script/AIModule.AIPerceptionComponent.IsSenseEnabled
	// bool IsSenseEnabled(class UClass* SenseClass);                                                                           // [0x630d490] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	// void GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<AActor*>& OutActors);                             // [0x630d130] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// void GetPerceivedHostileActors(TArray<AActor*>& OutActors);                                                              // [0x630d080] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                      // [0x630cf70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                  // [0x630ce60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
	// bool GetActorsPerception(class AActor* Actor, FActorPerceptionBlueprintInfo& Info);                                      // [0x630c910] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.ForgetAll
	// void ForgetAll();                                                                                                        // [0x630c8f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAIPerceptionListenerInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
public:
	bool                                               bAutoRegisterAsSource : 1;                                  // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                  // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// void UnregisterFromSense(class UClass* SenseClass);                                                                      // [0x630f670] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// void UnregisterFromPerceptionSystem();                                                                                   // [0x630f580] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// void RegisterWithPerceptionSystem();                                                                                     // [0x630dcd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// void RegisterForSense(class UClass* SenseClass);                                                                         // [0x630d8c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x0138 (312 bytes) (0x000038 - 0x000138) align 8 MaxSize: 0x0138
class UAIPerceptionSystem : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0038   (0x0050)  MISSED
	TArray<class UAISense*>                            Senses;                                                     // 0x0088   (0x0010)  
	float                                              PerceptionAgingRate;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_7[0x9C];                                      // 0x009C   (0x009C)  MISSED


	/// Functions
	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);                     // [0x630e6c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent
	// void ReportEvent(class UAISenseEvent* PerceptionEvent);                                                                  // [0x630e230] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);      // [0x630daf0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                   // [0x630d7f0] Final|RequiredAPI|Native|Protected 
	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, FAIStimulus& Stimulus);                        // [0x630d2a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.AISense
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UAISense : public UObject
{ 
public:
	EAISenseNotifyType                                 NotifyType;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	bool                                               bWantsNewPawnNotification : 1;                              // 0x002C:0 (0x0001)  
	bool                                               bAutoRegisterAllPawnsAsSources : 1;                         // 0x002C:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0038   (0x0040)  MISSED
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UAISenseConfig_Damage : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAISense_Blueprint : public UAISense
{ 
public:
	class UClass*                                      ListenerDataType;                                           // 0x0078   (0x0008)  
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                          // 0x0080   (0x0010)  
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                          // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Blueprint.OnUpdate
	// float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);                                                                 // [0x2fd44f0] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
	// void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);                  // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
	// void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);             // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
	// void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);               // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
	// void K2_OnNewPawn(class APawn* NewPawn);                                                                                 // [0x2fd44f0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
	// void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);                                      // [0x630cd60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
	// void GetAllListenerActors(TArray<AActor*>& ListenerActors);                                                              // [0x630cc20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
class UAISense_Damage : public UAISense
{ 
public:
	TArray<FAIDamageEvent>                             RegisteredEvents;                                           // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent
	// void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag); // [0x630dcf0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x00E0 (224 bytes) (0x000078 - 0x0000E0) align 8 MaxSize: 0x00E0
class UAISense_Hearing : public UAISense
{ 
public:
	TArray<FAINoiseEvent>                              NoiseEvents;                                                // 0x0078   (0x0010)  
	float                                              SpeedOfSoundSq;                                             // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x008C   (0x0054)  MISSED


	/// Functions
	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
	// void ReportNoiseEvent(class UObject* WorldContextObject, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName Tag); // [0x630e360] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAIPredictionEvent
{ 
	class AActor*                                      Requestor;                                                  // 0x0000   (0x0008)  
	class AActor*                                      PredictedActor;                                             // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
class UAISense_Prediction : public UAISense
{ 
public:
	TArray<FAIPredictionEvent>                         RegisteredEvents;                                           // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);             // [0x630ed20] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime); // [0x630eb70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x01A8 (424 bytes) (0x000078 - 0x0001A8) align 8 MaxSize: 0x01A8
class UAISense_Sight : public UAISense
{ 
public:
	unsigned char                                      UnknownData00_8[0xD8];                                      // 0x0078   (0x00D8)  MISSED
	int32_t                                            MaxTracesPerTick;                                           // 0x0150   (0x0004)  
	int32_t                                            MaxAsyncTracesPerTick;                                      // 0x0154   (0x0004)  
	int32_t                                            MinQueriesPerTimeSliceCheck;                                // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED
	double                                             MaxTimeSlicePerTick;                                        // 0x0160   (0x0008)  
	float                                              HighImportanceQueryDistanceThreshold;                       // 0x0168   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x016C   (0x0004)  MISSED
	float                                              MaxQueryImportance;                                         // 0x0170   (0x0004)  
	float                                              SightLimitQueryImportance;                                  // 0x0174   (0x0004)  
	float                                              PendingQueriesBudgetReductionRatio;                         // 0x0178   (0x0004)  
	bool                                               bUseAsynchronousTraceForDefaultSightQueries;                // 0x017C   (0x0001)  
	unsigned char                                      UnknownData03_7[0x2B];                                      // 0x017D   (0x002B)  MISSED
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAITeamStimulusEvent
{ 
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0000   (0x0040)  MISSED
	class AActor*                                      Broadcaster;                                                // 0x0040   (0x0008)  
	class AActor*                                      Enemy;                                                      // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
class UAISense_Team : public UAISense
{ 
public:
	TArray<FAITeamStimulusEvent>                       RegisteredEvents;                                           // 0x0078   (0x0010)  
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAITouchEvent
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	class AActor*                                      TouchReceiver;                                              // 0x0018   (0x0008)  
	class AActor*                                      OtherActor;                                                 // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x00D8 (216 bytes) (0x000078 - 0x0000D8) align 8 MaxSize: 0x00D8
class UAISense_Touch : public UAISense
{ 
public:
	TArray<FAITouchEvent>                              RegisteredEvents;                                           // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0088   (0x0050)  MISSED


	/// Functions
	// Function /Script/AIModule.AISense_Touch.ReportTouchEvent
	// void ReportTouchEvent(class UObject* WorldContextObject, class AActor* TouchReceiver, class AActor* OtherActor, FVector Location); // [0x630e890] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAISightTargetInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x00E8 (232 bytes) (0x0000A0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UPawnSensingComponent : public UActorComponent
{ 
public:
	float                                              HearingThreshold;                                           // 0x00A0   (0x0004)  
	float                                              LOSHearingThreshold;                                        // 0x00A4   (0x0004)  
	float                                              SightRadius;                                                // 0x00A8   (0x0004)  
	float                                              SensingInterval;                                            // 0x00AC   (0x0004)  
	float                                              HearingMaxSoundAge;                                         // 0x00B0   (0x0004)  
	bool                                               bEnableSensingUpdates : 1;                                  // 0x00B4:0 (0x0001)  
	bool                                               bOnlySensePlayers : 1;                                      // 0x00B4:1 (0x0001)  
	bool                                               bSeePawns : 1;                                              // 0x00B4:2 (0x0001)  
	bool                                               bHearNoises : 1;                                            // 0x00B4:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x00B5   (0x000B)  MISSED
	SDK_UNDEFINED(16,353) /* FMulticastInlineDelegate */ __um(OnSeePawn);                                          // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,354) /* FMulticastInlineDelegate */ __um(OnHearNoise);                                        // 0x00D0   (0x0010)  
	float                                              PeripheralVisionAngle;                                      // 0x00E0   (0x0004)  
	float                                              PeripheralVisionCosine;                                     // 0x00E4   (0x0004)  


	/// Functions
	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// void SetSensingUpdatesEnabled(bool bEnabled);                                                                            // [0x630f4f0] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
	// void SetSensingInterval(float NewSensingInterval);                                                                       // [0x630f460] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);                                                           // [0x630f0f0] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// void SeePawnDelegate__DelegateSignature(class APawn* Pawn);                                                              // [0x2fd44f0] MulticastDelegate|Public|Delegate 
	// Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, FVector& Location, float Volume);                     // [0x2fd44f0] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// float GetPeripheralVisionCosine();                                                                                       // [0x630d280] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// float GetPeripheralVisionAngle();                                                                                        // [0x630d260] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AITask
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UAITask : public UGameplayTask
{ 
public:
	class AAIController*                               OwnerController;                                            // 0x0068   (0x0008)  
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAITask_LockLogic : public UAITask
{ 
public:
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAIMoveRequest
{ 
	TWeakObjectPtr<class AActor*>                      GoalActor;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0008   (0x0048)  MISSED
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x0120 (288 bytes) (0x000070 - 0x000120) align 8 MaxSize: 0x0120
class UAITask_MoveTo : public UAITask
{ 
public:
	SDK_UNDEFINED(16,355) /* FMulticastInlineDelegate */ __um(OnRequestFailed);                                    // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,356) /* FMulticastInlineDelegate */ __um(OnMoveFinished);                                     // 0x0080   (0x0010)  
	FAIMoveRequest                                     MoveRequest;                                                // 0x0090   (0x0050)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x00E0   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo
	// class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, FVector GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation, TEnumAsByte<EAIOptionFlag> RequireNavigableEndLocation); // [0x630c5a0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x00E8 (232 bytes) (0x000070 - 0x0000E8) align 8 MaxSize: 0x00E8
class UAITask_RunEQS : public UAITask
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0070   (0x0078)  MISSED


	/// Functions
	// Function /Script/AIModule.AITask_RunEQS.RunEQS
	// class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);                           // [0x630ef00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVisualLoggerExtension : public UObject
{ 
public:
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FAIStimulus
{ 
	float                                              Age;                                                        // 0x0000   (0x0004)  
	float                                              ExpirationAge;                                              // 0x0004   (0x0004)  
	float                                              Strength;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            StimulusLocation;                                           // 0x0010   (0x0018)  
	FVector                                            ReceiverLocation;                                           // 0x0028   (0x0018)  
	FName                                              Tag;                                                        // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0048   (0x000C)  MISSED
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0054:0 (0x0001)  MISSED
	bool                                               bSuccessfullySensed : 1;                                    // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionUpdateInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FActorPerceptionUpdateInfo
{ 
	int32_t                                            TargetID;                                                   // 0x0000   (0x0004)  
	TWeakObjectPtr<class AActor*>                      Target;                                                     // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAIStimulus                                        Stimulus;                                                   // 0x0010   (0x0058)  
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAIRequestID
{ 
	uint32_t                                           RequestID;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FEnvQueryResult
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UClass*                                      ItemType;                                                   // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0018   (0x0014)  MISSED
	int32_t                                            OptionIndex;                                                // 0x002C   (0x0004)  
	int32_t                                            QueryID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGenericTeamId
{ 
	char                                               TeamID;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/AIModule.SimpleIndexedHandleBase
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSimpleIndexedHandleBase
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/AIModule.IndexedHandleBase
/// Size: 0x0008 (8 bytes) (0x000004 - 0x000008) align 4 MaxSize: 0x0008
struct FIndexedHandleBase : FSimpleIndexedHandleBase
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Struct /Script/AIModule.CompactIndexedHandleBase
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FCompactIndexedHandleBase
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/AIModule.SequentialIDBase
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSequentialIDBase
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000030) align 8 MaxSize: 0x0030
struct FAIDataProviderStructValue : FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/AIModule.EnvQueryManagerConfig
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FEnvQueryManagerConfig
{ 
	float                                              MaxAllowedTestingTime;                                      // 0x0000   (0x0004)  
	bool                                               bTestQueriesUsingBreadth;                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            QueryCountWarningThreshold;                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             QueryCountWarningInterval;                                  // 0x0010   (0x0008)  
	double                                             ExecutionTimeWarningSeconds;                                // 0x0018   (0x0008)  
	double                                             HandlingResultTimeWarningSeconds;                           // 0x0020   (0x0008)  
	double                                             GenerationTimeWarningSeconds;                               // 0x0028   (0x0008)  
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FEnvQueryRequest
{ 
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)  
	class UObject*                                     Owner;                                                      // 0x0008   (0x0008)  
	class UWorld*                                      World;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0018   (0x0050)  MISSED
};

/// Struct /Script/AIModule.RecastGraphWrapper
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRecastGraphWrapper
{ 
	class ARecastNavMesh*                              RecastNavMeshActor;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0xB0];                                      // 0x0008   (0x00B0)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FActorPerceptionBlueprintInfo
{ 
	class AActor*                                      Target;                                                     // 0x0000   (0x0008)  
	TArray<FAIStimulus>                                LastSensedStimuli;                                          // 0x0008   (0x0010)  
	bool                                               bIsHostile : 1;                                             // 0x0018:0 (0x0001)  
	bool                                               bIsFriendly : 1;                                            // 0x0018:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAISightEvent
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SeenActor;                                                  // 0x0008   (0x0008)  
	class AActor*                                      Observer;                                                   // 0x0010   (0x0008)  
};

#pragma pack(pop)


