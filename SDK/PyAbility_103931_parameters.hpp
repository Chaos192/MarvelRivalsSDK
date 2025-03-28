﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103931

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103931.PyScope_10393101.TraceResults
// 0x0018 (0x0018 - 0x0000)
struct PyScope_10393101_TraceResults final
{
public:
	class UObject*                                TraceSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103931.PyCue_Scope_Loop_10393101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_Loop_10393101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103931.PyCue_Scope_Loop_10393101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_Loop_10393101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103931.PyAbility_103931.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103931_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103931.PyAbility_103931.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103931_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

