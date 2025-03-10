﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_212

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_212.PyAbility_212.TryMakeTriggerContext
// 0x0298 (0x0298 - 0x0000)
struct PyAbility_212_TryMakeTriggerContext final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0290(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_212.PyAbility_212.K2_ActivateAbilityFromEvent
// 0x0290 (0x0290 - 0x0000)
struct PyAbility_212_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_212.PyAbility_212.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_212_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_212.PyAbility_212.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_212_NativeOnMontageCompleted final
{
public:
	class FString                                 EventTag;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_212.PyAbility_212.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_212_NativeOnMontageBlendOut final
{
public:
	class FString                                 EventTag;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_212.PyAbility_212.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_212_NativeOnMontageInterrupted final
{
public:
	class FString                                 EventTag;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_212.PyAbility_212.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_212_NativeOnMontageCancelled final
{
public:
	class FString                                 EventTag;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

