﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyPositionProgressControl

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "PyBTNodeBase_classes.hpp"


namespace SDK
{

// PythonClass BTS_PyPositionProgressControl.BTS_PyPositionProgressControl
// 0x00F0 (0x0198 - 0x00A8)
class UBTS_PyPositionProgressControl : public UBTService_PyBase
{
public:
	struct FBlackboardKeySelector                 InFocusActor;                                      // 0x00A8(0x0030)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 InAllyPlayerStart;                                 // 0x00D8(0x0030)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 InEnemyPlayerStart;                                // 0x0108(0x0030)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 InFrontier;                                        // 0x0138(0x0030)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 OutPositionProgress;                               // 0x0168(0x0030)(Edit, NativeAccessSpecifierPublic)

public:
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTS_PyPositionProgressControl">();
	}
	static class UBTS_PyPositionProgressControl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_PyPositionProgressControl>();
	}
};

}

