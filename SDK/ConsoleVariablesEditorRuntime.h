
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Struct /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesEditorAssetSaveData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FConsoleVariablesEditorAssetSaveData
{ 
	FString                                            CommandName;                                                // 0x0000   (0x0010)  
	FString                                            CommandValueAsString;                                       // 0x0010   (0x0010)  
	ECheckBoxState                                     CheckedState;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UConsoleVariablesAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            VariableCollectionDescription;                              // 0x0030   (0x0010)  
	TArray<FConsoleVariablesEditorAssetSaveData>       SavedCommands;                                              // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
	// void SetVariableCollectionDescription(FString InVariableCollectionDescription);                                          // [0x78b11c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
	// void ReplaceSavedCommands(TArray<FConsoleVariablesEditorAssetSaveData>& Replacement);                                    // [0x78b10e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
	// bool RemoveConsoleVariable(FString InCommandString);                                                                     // [0x78b1030] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
	// FString GetVariableCollectionDescription();                                                                              // [0x4a7c0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
	// int32_t GetSavedCommandsCount();                                                                                         // [0x54af510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
	// TArray<FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked);                                                 // [0x78b0f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
	// FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked);                                                // [0x78b0d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
	// TArray<FConsoleVariablesEditorAssetSaveData> GetSavedCommands();                                                         // [0x78b0d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
	// bool FindSavedDataByCommandString(FString InCommandString, FConsoleVariablesEditorAssetSaveData& OutValue, TEnumAsByte<ESearchCase> SearchCase); // [0x78b0be0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
	// void ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked);                                  // [0x78b0a40] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
	// void CopyFrom(class UConsoleVariablesAsset* InAssetToCopy);                                                              // [0x78b0910] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
	// void AddOrSetConsoleObjectSavedData(FConsoleVariablesEditorAssetSaveData& InData);                                       // [0x78b0850] Final|Native|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


