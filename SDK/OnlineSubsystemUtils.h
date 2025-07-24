
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x01 (1 bytes)
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3
};

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x01 (1 bytes)
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x01 (1 bytes)
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x01 (1 bytes)
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6,
	EClientRequestType__AddOrUpdateReservation                                       = 7
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x01 (1 bytes)
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x01 (1 bytes)
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x01 (1 bytes)
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress); // [0x60550a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // [0x6054db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1147) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1148) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x60508d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x60507e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1149) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1150) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0x6055d20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1151) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1152) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x60509c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1153) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1154) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN, bool bUseLobbiesIfAvailable); // [0x6053f80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1155) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1156) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x60541d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1157) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1158) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0x6054330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1159) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1160) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0x6054640] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1161) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1162) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// FString GetServerName(FBlueprintSessionResult& Result);                                                                  // [0x6055710] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                    // [0x6055580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                                  // [0x60553f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                              // [0x6055260] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0x60548c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1163) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1164) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0x6054ac0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1165) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1166) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController); // [0x60533f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController); // [0x6052290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0x6050f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UInAppPurchaseCheckoutCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1167) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1168) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0048   (0x0058)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy.CreateProxyObjectForInAppPurchaseCheckout
	// class UInAppPurchaseCheckoutCallbackProxy* CreateProxyObjectForInAppPurchaseCheckout(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0x6051560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseFinalizeProxy
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInAppPurchaseFinalizeProxy : public UObject
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseFinalizeProxy.CreateProxyObjectForInAppPurchaseFinalize
	// class UInAppPurchaseFinalizeProxy* CreateProxyObjectForInAppPurchaseFinalize(FInAppPurchaseReceiptInfo2& InAppPurchaseReceipt, class APlayerController* PlayerController); // [0x6051700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1169) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1170) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x6051e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UInAppPurchaseReceiptsCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1171) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1172) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseRestoreOwnedProducts
	// class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(class APlayerController* PlayerController); // [0x6052fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseQueryOwnedProducts
	// class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseQueryOwnedProducts(class APlayerController* PlayerController); // [0x6052690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseGetKnownReceipts
	// class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseGetKnownReceipts(class APlayerController* PlayerController); // [0x6051ae0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1173) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1174) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0048   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x6052ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x1E90 (7824 bytes) (0x001E00 - 0x001E90) align 8 MaxSize: 0x1E90
class UIpConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_8[0x74];                                      // 0x1E00   (0x0074)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1E74   (0x0004)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x1E78   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x0978 (2424 bytes) (0x0008C8 - 0x000978) align 8 MaxSize: 0x0978
class UIpNetDriver : public UNetDriver
{ 
public:
	bool                                               LogPortUnreach : 1;                                         // 0x08C8:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach : 1;                                 // 0x08C8:1 (0x0001)  
	bool                                               bExitOnBindFailure : 1;                                     // 0x08C8:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x08C9   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x08CC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x08D0   (0x0004)  MISSED
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x08D4   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x08D8   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x08DC   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x08E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x08E4   (0x0004)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x08E8   (0x0008)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x08F0   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x08F4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x80];                                      // 0x08F8   (0x0080)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0198 (408 bytes) (0x000030 - 0x000198) align 8 MaxSize: 0x0198
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1175) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1176) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x148];                                     // 0x0050   (0x0148)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0x6055920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32_t StatValue);              // [0x6055eb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1177) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1178) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName); // [0x6050b20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1179) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1180) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName); // [0x60538a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1181) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1182) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);        // [0x6055bc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x02C0 (704 bytes) (0x000290 - 0x0002C0) align 8 MaxSize: 0x02C0
class AOnlineBeacon : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0290   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0298   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x029C   (0x0004)  
	class UNetDriver*                                  NetDriver;                                                  // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x02A8   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0320 (800 bytes) (0x0002C0 - 0x000320) align 8 MaxSize: 0x0320
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                                // 0x02C0   (0x0008)  
	class UNetConnection*                              BeaconConnection;                                           // 0x02C8   (0x0008)  
	EBeaconConnectionState                             ConnectionState;                                            // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4F];                                      // 0x02D1   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// void ClientOnConnected();                                                                                                // [0x579d560] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x03D0 (976 bytes) (0x0002C0 - 0x0003D0) align 8 MaxSize: 0x03D0
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x02C0   (0x0004)  
	bool                                               bReuseAddressAndPort;                                       // 0x02C4   (0x0001)  
	bool                                               bAuthRequired;                                              // 0x02C5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x02C6   (0x0002)  MISSED
	uint32_t                                           MaxAuthTokenSize;                                           // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x02CC   (0x0054)  MISSED
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0320   (0x0010)  
	unsigned char                                      UnknownData02_7[0xA0];                                      // 0x0330   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x02B8 (696 bytes) (0x000290 - 0x0002B8) align 8 MaxSize: 0x02B8
class AOnlineBeaconHostObject : public AActor
{ 
public:
	FString                                            BeaconTypeName;                                             // 0x0290   (0x0010)  
	class UClass*                                      ClientBeaconActorClass;                                     // 0x02A0   (0x0008)  
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x02A8   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0188 (392 bytes) (0x000028 - 0x000188) align 8 MaxSize: 0x0188
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
	TMap<FName, FName>                                 MappedUniqueNetIdTypes;                                     // 0x0028   (0x0050)  
	TArray<FName>                                      CompatibleUniqueNetIdTypes;                                 // 0x0078   (0x0010)  
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_7[0xF8];                                      // 0x0090   (0x00F8)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPIELoginSettingsInternal
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Token;                                                      // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01E0 (480 bytes) (0x000028 - 0x0001E0) align 8 MaxSize: 0x01E0
class UOnlineSessionClient : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_8[0x1B0];                                     // 0x0028   (0x01B0)  MISSED
	bool                                               bIsFromInvite;                                              // 0x01D8   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x01DA   (0x0006)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueID;                                                   // 0x0000   (0x0030)  
	FString                                            ValidationStr;                                              // 0x0030   (0x0010)  
	FString                                            Platform;                                                   // 0x0040   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x0054   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0030)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0038   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0048   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x03E8 (1000 bytes) (0x000320 - 0x0003E8) align 8 MaxSize: 0x03E8
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0320   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x0350   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x0360   (0x0058)  
	EClientRequestType                                 RequestType;                                                // 0x03B8   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x03B9   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x03BA   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x03BB   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                             // [0x6070be0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                         // [0x60706f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                   // [0x6070460] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                       // [0x60702b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	// void ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation Reservation);                              // [0x6070020] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0x606f520] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0x5f4f010] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0x606f420] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0x606f320] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0330 (816 bytes) (0x0002B8 - 0x000330) align 8 MaxSize: 0x0330
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class UPartyBeaconState*                           State;                                                      // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x02C0   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x0320   (0x0001)  
	bool                                               bIsValidationStrRequired;                                   // 0x0321   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0322   (0x0002)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x0324   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x032C   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPartyBeaconCrossplayPlatformMapping
{ 
	FString                                            PlatformName;                                               // 0x0000   (0x0010)  
	FString                                            PlatformType;                                               // 0x0010   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPartyBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FString>                                    PlatformCrossplayRestrictions;                              // 0x0058   (0x0010)  
	TArray<FPartyBeaconCrossplayPlatformMapping>       PlatformTypeMapping;                                        // 0x0068   (0x0010)  
	bool                                               bEnableRemovalRequests;                                     // 0x0078   (0x0001)  
	bool                                               bRespectCompetitiveIntegrity;                               // 0x0079   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x007A   (0x0006)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1183) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1184) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0x606fba0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1185) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1186) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController); // [0x6070e70] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0030)  
	FPlayerReservation                                 Spectator;                                                  // 0x0030   (0x0058)  
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x0418 (1048 bytes) (0x000320 - 0x000418) align 8 MaxSize: 0x0418
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0320   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x0350   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x0360   (0x0088)  
	ESpectatorClientRequestType                        RequestType;                                                // 0x03E8   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x03E9   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x03EA   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x03EB   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);                                     // [0x6070980] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                         // [0x60702b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0x606f5b0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0x527d790] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                            // [0x606f4a0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                      // [0x606f3a0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0330 (816 bytes) (0x0002B8 - 0x000330) align 8 MaxSize: 0x0330
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class USpectatorBeaconState*                       State;                                                      // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x02C0   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x0320   (0x0001)  
	bool                                               bIsValidationStrRequired;                                   // 0x0321   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0322   (0x0002)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x0324   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x032C   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USpectatorBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// void ServerPong();                                                                                                       // [0x6070410] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// void ClientPing();                                                                                                       // [0x5507280] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x02B8 (696 bytes) (0x0002B8 - 0x0002B8) align 8 MaxSize: 0x02B8
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object); // [0x606fe50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t playerIndex, FString& PlayerDisplayName); // [0x606f9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t& playerIndex); // [0x606f7f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn); // [0x606f640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x08F0 (2288 bytes) (0x000890 - 0x0008F0) align 16 MaxSize: 0x08F0
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0890   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// bool IsIdling();                                                                                                         // [0x60723f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 8 MaxSize: 0x0120
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_2[0x120];                                     // 0x0000   (0x0120)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FOnlineProxyStoreOffer
{ 
	FString                                            OfferId;                                                    // 0x0000   (0x0010)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Description;                                                // 0x0020   (0x0018)  
	FText                                              LongDescription;                                            // 0x0030   (0x0018)  
	FText                                              RegularPriceText;                                           // 0x0040   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FText                                              PriceText;                                                  // 0x0058   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0070   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x0080   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x0088   (0x0008)  
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	TMap<FString, FString>                             DynamicFields;                                              // 0x0098   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseRestoreInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FInAppPurchaseReceiptInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
	FString                                            TransactionIdentifier;                                      // 0x0030   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInAppPurchaseProductRequest2
{ 
	FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FInAppPurchaseProductInfo2
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)  
	FString                                            DisplayName;                                                // 0x0020   (0x0010)  
	FString                                            DisplayDescription;                                         // 0x0030   (0x0010)  
	FString                                            DisplayPrice;                                               // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0058   (0x0010)  
	FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)  
	FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)  
	FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)  
	FString                                            ReceiptData;                                                // 0x0098   (0x0010)  
	TMap<FString, FString>                             DynamicFields;                                              // 0x00A8   (0x0050)  
};

#pragma pack(pop)


