﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CombatSituationUnit

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.OnReplayTimelineClickClearChildren
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_CombatSituationPanel_OnReplayTimelineClickClearChildren final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.OnKillEvent
// 0x0030 (0x0030 - 0x0000)
struct PyWidget_CombatSituationPanel_OnKillEvent final
{
public:
	class AActor*                                 Source;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ModifierHandle;                                    // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.ShowUIRebornInfo
// 0x0730 (0x0730 - 0x0000)
struct PyWidget_CombatSituationPanel_ShowUIRebornInfo final
{
public:
	struct FCharacterRebornParam                  RebornParam;                                       // 0x0000(0x0730)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationUnit_V3.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_CombatSituationUnit_V3_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

