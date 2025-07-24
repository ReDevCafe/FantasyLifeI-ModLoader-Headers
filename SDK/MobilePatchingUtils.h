
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

/// Class /Script/MobilePatchingUtils.MobileInstalledContent
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMobileInstalledContent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.mount
	// bool mount(int32_t PakOrder, FString MountPoint);                                                                        // [0x889bb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	// float GetInstalledContentSize();                                                                                         // [0x889b970] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	// float GetDiskFreeSpace();                                                                                                // [0x889b750] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePendingContent
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
class UMobilePendingContent : public UMobileInstalledContent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePendingContent.StartInstall
	// void StartInstall(FDelegateProperty OnSucceeded, FDelegateProperty OnFailed);                                            // [0x889be60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	// float GetTotalDownloadedSize();                                                                                          // [0x889bb20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	// float GetRequiredDiskSpace();                                                                                            // [0x889b9d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	// float GetInstallProgress();                                                                                              // [0x889b880] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	// FText GetDownloadStatusText();                                                                                           // [0x889b810] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	// float GetDownloadSpeed();                                                                                                // [0x889b7b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	// float GetDownloadSize();                                                                                                 // [0x889b780] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePatchingLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	// void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FDelegateProperty OnSucceeded, FDelegateProperty OnFailed); // [0x889bc70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	// bool HasActiveWiFiConnection();                                                                                          // [0x4dd99c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	// TArray<FString> GetSupportedPlatformNames();                                                                             // [0x889ba30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	// class UMobileInstalledContent* GetInstalledContent(FString InstallDirectory);                                            // [0x889b8d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	// FString GetActiveDeviceProfileName();                                                                                    // [0x889b6b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


