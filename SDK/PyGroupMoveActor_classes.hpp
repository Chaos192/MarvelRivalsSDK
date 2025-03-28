﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyGroupMoveActor

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyGroupMoveActor.PyGroupMoveActor
// 0x0078 (0x0520 - 0x04A8)
class APyGroupMoveActor final : public AModuleControlBase
{
public:
	TMulticastInlineDelegate<void()>              DispatcherCountdownStep;                           // 0x04A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float delay_time)> DispatcherStartDelayWait;                       // 0x04B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float Degree)>  SpeedForward;                                      // 0x04C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float Degree)>  SpeedBackToForward;                                // 0x04D8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float Degree)>  SpeedBack;                                         // 0x04E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x04F8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4F9[0x7];                                      // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MoveFinishTag;                                     // 0x0500(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BackFinishTag;                                     // 0x0510(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void PostRewindForReplay();
	void PyAttachTrace();
	void ReceiveBeginPlay();
	float GetRestTime();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyGroupMoveActor">();
	}
	static class APyGroupMoveActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyGroupMoveActor>();
	}
};

}

