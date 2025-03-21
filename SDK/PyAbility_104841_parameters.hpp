﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104841

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Hero_1048_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104841.PyCue_Ability_Loop_10484101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10484101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104841.PyCue_Ability_Loop_10484101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10484101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104841.PyCue_Ability_Loop_10484101.OnPsylockeStateChange
// 0x0001 (0x0001 - 0x0000)
struct PyCue_Ability_Loop_10484101_OnPsylockeStateChange final
{
public:
	EPsylockeState                                NewState;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104841.PyAbility_104841.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104841_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104841.PyAbility_104841.OnDashFinish
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104841_OnDashFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

