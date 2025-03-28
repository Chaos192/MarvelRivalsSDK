﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelActorMoveComponent

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyLevelActorMoveComponent.PyLevelActorMoveComponent
// 0x0070 (0x05F0 - 0x0580)
#pragma pack(push, 0x1)
class alignas(0x10) UPyLevelActorMoveComponent : public ULevelActorMoveComponent
{
public:
	uint8                                         Pad_578[0x8];                                      // 0x0578(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APyPayloadTrace*>                TraceList;                                         // 0x0580(0x0010)(Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic)
	bool                                          bUseOwner;                                         // 0x0590(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FaceToMove;                                        // 0x0591(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_592[0x2];                                      // 0x0592(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MoveSpeed;                                         // 0x0594(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TraceName;                                         // 0x0598(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurProgress;                                       // 0x05A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BackwordProgress;                                  // 0x05AC(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IsInAutoMove;                                      // 0x05B0(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5B4[0x4];                                      // 0x05B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              StartAutoMove;                                     // 0x05B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              StopAutoMove;                                      // 0x05C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float MoveSpeed)> EventMoveSpeedChanged;                           // 0x05D8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void ReceiveInitializeComponent();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnRep_CurProgress();
	void OnRep_TraceName();
	void OnRep_MoveSpeed();
	void OnRep_IsInAutoMove();
	void PyTimelineUpdate(float DeltaTime);
	void FollowTraceMoveStart(const class FString& TraceName_0, float StartPercent);
	void SetCampMoveSpeed(float move_speed);
	float GetCurLength();
	void ReachCheckPoint(const class FString& EventName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelActorMoveComponent">();
	}
	static class UPyLevelActorMoveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelActorMoveComponent>();
	}
};
#pragma pack(pop)

}

