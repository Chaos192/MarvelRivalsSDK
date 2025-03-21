﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyDoor

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyDoor.PyDoor
// 0x0048 (0x0528 - 0x04E0)
class APyDoor final : public AGameplayActorBase
{
public:
	int32                                         OpenState;                                         // 0x04E0(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DoorProgress;                                      // 0x04E4(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AudioEvent;                                        // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          StartOpenDoorEvent;                                // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          EndOpenDoorEvent;                                  // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          OpenProcessEvent;                                  // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          StartCloseDoorEvent;                               // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          EndCloseDoorEvent;                                 // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          CloseProcessEvent;                                 // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AlwaysOpenCollision;                               // 0x0520(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void DispatchOnOpenStateChanged(class UObject* TaskOwner, int64 Magnitude);
	void OnRep_OpenState();
	void OnRep_DoorProgress();
	void SetDoorsProgress(float Progress);
	void DoorAnimFinish();
	void S_payload_reach(const struct FGameplayTag& event_name, float event_args);
	void OpenDoorForBake();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyDoor">();
	}
	static class APyDoor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyDoor>();
	}
};

}

