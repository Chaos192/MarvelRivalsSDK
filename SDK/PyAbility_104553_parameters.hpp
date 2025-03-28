﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104553

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104553.PyAbility_104553.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104553_OnTagUpdate final
{
public:
	struct FGameplayTag                           TagUpdated;                                        // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104553.PyAbility_104553.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104553_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104553.PyAbility_104553.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104553_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104553.PyAbility_104553.IsOnCooldown
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104553_IsOnCooldown final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

