﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101751

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101751.PyAbility_101751.HintLackOfFlameDomain
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_101751_HintLackOfFlameDomain final
{
public:
	int32                                         CurNum;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101751.PyUIController_101751.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_101751_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

