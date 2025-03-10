﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104991

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104991.PyAbility_104991.K2_ActivateAbilityFromEvent
// 0x0290 (0x0290 - 0x0000)
struct PyAbility_104991_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104991.PyAbility_104991.OnDashTaskFinish
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104991_OnDashTaskFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104991.PyAbility_104991.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104991_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104991.PyAbility_104991.IsAbilityNormalEnd
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104991_IsAbilityNormalEnd final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

