﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyCue_AbilityLoop_Cable_Base

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.BeforeCableUpdate_PY
// 0x0004 (0x0004 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.AfterCableUpdate_PY
// 0x0004 (0x0004 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

