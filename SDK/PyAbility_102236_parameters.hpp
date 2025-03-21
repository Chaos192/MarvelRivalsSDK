﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102236

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102236.PyAbility_102236.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102236_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102236_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102236_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102236_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102236_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102236_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102236_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.OnTaskTick
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_102236_OnTaskTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102236.PyAbility_102236.OnDashFinsh
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102236_OnDashFinsh final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

