﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelFog

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyLevelFog.PyLevelFog
// 0x0088 (0x0518 - 0x0490)
class APyLevelFog final : public AMarvelLevelActorBase
{
public:
	float                                         FoggyProgress;                                     // 0x0490(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         State;                                             // 0x0494(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DefaultActive;                                     // 0x0498(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_499[0x3];                                      // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BlindBuffID;                                       // 0x049C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HiddenBuffID;                                      // 0x04A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeInTime;                                        // 0x04A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeoutTime;                                       // 0x04A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayTime;                                         // 0x04AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DurationTime;                                      // 0x04B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4B4[0x4];                                      // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AEnvironmentStaticActor*>        AtlasMeshList;                                     // 0x04B8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                           CueTag;                                            // 0x04C8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RadiusMax;                                         // 0x04D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RadiusMin;                                         // 0x04D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CameraLengthMax;                                   // 0x04DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CameraLengthMin;                                   // 0x04E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecalRaius;                                        // 0x04E4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 NewState)> FogStateChangedDispatcher;                        // 0x04E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnStopTakeEffect;                                  // 0x04F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool Enable, class AActor* OtherActor)> ClientToggleBlindBuff;     // 0x0508(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void ReceiveInit();
	void ReceiveBeginPlay();
	void PostRewindForReplay();
	void OnLevelStart();
	void ReceiveTick(float DeltaSeconds);
	void OnPlayerSpawn(class AMarvelPlayerState* PlayerState);
	void OnRep_State();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelFog">();
	}
	static class APyLevelFog* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyLevelFog>();
	}
};

// PythonClass PyLevelFog.PyCue_Summoner_Loop_20020902
// 0x0000 (0x11A8 - 0x11A8)
class APyCue_Summoner_Loop_20020902 final : public ACueNotify_Stealth
{
public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Summoner_Loop_20020902">();
	}
	static class APyCue_Summoner_Loop_20020902* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Summoner_Loop_20020902>();
	}
};

}

