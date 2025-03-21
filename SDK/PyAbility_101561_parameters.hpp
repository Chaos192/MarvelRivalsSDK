﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101561

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101561.PyCue_Ability_Loop_10156102.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10156102_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_101561.PyCue_Ability_Loop_10156102.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_10156102_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101561.PyBondEnhanceSourceResolver_101561.GetEnhanceSource
// 0x00F8 (0x00F8 - 0x0000)
struct PyBondEnhanceSourceResolver_101561_GetEnhanceSource final
{
public:
	class AMarvelBaseCharacter*                   InOwnerCharacter;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnerAbilityID;                                  // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBondInstance                          InBondInstance;                                    // 0x0010(0x00E0)(ConstParm, Parm, OutParm, ReferenceParm)
	class AMarvelBaseCharacter*                   ReturnValue;                                       // 0x00F0(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

}

