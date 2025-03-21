﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputRecord

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "InputRecord_structs.hpp"


namespace SDK
{

// Class InputRecord.InputRecordComponent
// 0x0530 (0x0620 - 0x00F0)
class alignas(0x10) UInputRecordComponent final : public UActorComponent
{
public:
	uint8                                         Pad_F0[0x410];                                     // 0x00F0(0x0410)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      PlayerController;                                  // 0x0500(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                            OwnerController;                                   // 0x0508(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_510[0xF8];                                     // 0x0510(0x00F8)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class AController* Owner)> OnInputRecordFinishedPlaying;           // 0x0608(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_618[0x8];                                      // 0x0618(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Client_LoadRecord(const class FString& RecordName, EInputRecordPath RecordPath);
	void Client_LockDeltaTime(const class FString& InDeltaTime);
	void Client_LockFPS(const class FString& InFPS);
	void Client_LoopPlay(bool InLoopPlay);
	void Client_PlayRecord();
	void Client_SaveRecord(const class FString& RecordName, EInputRecordPath RecordPath);
	void Client_Setting(const struct FInputRecordSetting& Setting);
	void Client_StartRecord();
	void Client_StopPlayRecord();
	void Client_StopRecord();
	void Client_ToggleCorrection(bool bCorrection);
	void DiscardAILocationCorrection(bool bDiscard);
	float GetCurrentLockDeltaTime();
	bool HasFrameCounterData();
	bool IsUseFrameCounter();
	void LoadRecord(const class FString& RecordName, EInputRecordPath RecordPath);
	void LockDeltaTime(const float InDeltaTime);
	void LockDeltaTimeDependOnFPS();
	void PawnPossessed(class APawn* OldPawn, class APawn* NewPawn);
	void PlayRecord();
	void SaveRecord(const class FString& RecordName, EInputRecordPath RecordPath);
	void ServerSetActorTransform(const struct FTransform& NewTransform);
	void SetEnableCorrectionWhenLockDeltaTime(bool bEnable);
	void SetLockActorTickDeltaTimeEnabled(bool bLock);
	void SetLockCompTickDeltaTimeEnabled(bool bLock);
	void SetLockCoreTickerDeltaTimeEnabled(bool bLock);
	void SetLockDeltaTimeEnabled(bool bLock);
	void SetLockFPSEnabled(bool bLock);
	void SetLockInputDeltaTimeEnabled(bool bLock);
	void SetRecordPath(const EInputRecordPath InPathType, const class FString& InNewPath);
	void SetRecordSetting(const struct FInputRecordSetting& InRecordSetting);
	void StartRecord();
	void StopPlayRecord();
	void StopRecord();
	void ToggleCorrection(bool bCorrection);
	void ToggleLoopPlay(bool InLoopPlay);

	class FString GetRecordFileName() const;
	float GetRecordMaxTime() const;
	float GetRecordPlayTime() const;
	const struct FInputRecordSetting GetRecordSetting() const;
	bool IsCorrection() const;
	bool IsEnableCorrectionWhenLockDeltaTime() const;
	bool IsInitialize() const;
	bool IsLoading() const;
	bool IsLockActorTickDeltaTimeEnabled() const;
	bool IsLockCompTickDeltaTimeEnabled() const;
	bool IsLockCoreTickerDeltaTimeEnabled() const;
	bool IsLockDeltaTimeEnabled() const;
	bool IsLockFPSEnabled() const;
	bool IsLockInputDeltaTimeEnabled() const;
	bool IsPlaying() const;
	bool IsRecording() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputRecordComponent">();
	}
	static class UInputRecordComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputRecordComponent>();
	}
};

// Class InputRecord.InputRecordLibrary
// 0x0000 (0x0030 - 0x0030)
class UInputRecordLibrary final : public UBlueprintFunctionLibrary
{
public:
	static TArray<class AMarvelPlayerController*> GetPlayerControllers(class UWorld* WC);
	static class UInputRecordComponent* NewRecordComponent(class AActor* Owner);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputRecordLibrary">();
	}
	static class UInputRecordLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputRecordLibrary>();
	}
};

// Class InputRecord.InputRecordSubsystem
// 0x0438 (0x0470 - 0x0038)
class UInputRecordSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_38[0x438];                                     // 0x0038(0x0438)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UInputRecordSubsystem* Get();

	class FString GetCurRecordPath();
	void LoadRecord(const class FString& RecordName);
	void LoadRecordSync(const class FString& RecordName);
	void PlayRecord();
	void SaveRecord(const class FString& RecordName);
	void SaveRecordSync(const class FString& RecordName);
	void SetRecordPath(const EInputRecordPath InPathType, const class FString& InNewPath);
	void SetRecordPathType(EInputRecordPath InRecordType);
	void StartRecord();
	void StopPlayRecord();
	void StopRecord();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputRecordSubsystem">();
	}
	static class UInputRecordSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputRecordSubsystem>();
	}
};

}

