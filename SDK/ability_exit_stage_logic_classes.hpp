﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ability_exit_stage_logic

#include "Basic.hpp"

#include "MarvelAI_structs.hpp"
#include "MarvelAI_classes.hpp"
#include "Marvel_structs.hpp"


namespace SDK
{

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStageLogicBase
// 0x0000 (0x0038 - 0x0038)
class UPyAIAbilityExitStageLogicBase : public UAIAbilityExitStageLogic
{
public:
	void InitLogic();
	bool CheckLogic(const struct FAIAbilityUsage& AbilityUsage, class AMarvelAIController* Controller);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStageLogicBase">();
	}
	static class UPyAIAbilityExitStageLogicBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStageLogicBase>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_CanNotSeeTarget
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_CanNotSeeTarget final : public UPyAIAbilityExitStageLogicBase
{
public:
	bool                                          bShouldHaveSeenTarget;                             // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_CanNotSeeTarget">();
	}
	static class UPyAIAbilityExitStage_CanNotSeeTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_CanNotSeeTarget>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_AbilityBreak
// 0x0000 (0x0038 - 0x0038)
class UPyAIAbilityExitStage_AbilityBreak : public UPyAIAbilityExitStageLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_AbilityBreak">();
	}
	static class UPyAIAbilityExitStage_AbilityBreak* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_AbilityBreak>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_CanNotExecute
// 0x0000 (0x0038 - 0x0038)
class UPyAIAbilityExitStage_CanNotExecute final : public UPyAIAbilityExitStageLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_CanNotExecute">();
	}
	static class UPyAIAbilityExitStage_CanNotExecute* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_CanNotExecute>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_AbilityPreMissile
// 0x0000 (0x0038 - 0x0038)
class UPyAIAbilityExitStage_AbilityPreMissile final : public UPyAIAbilityExitStageLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_AbilityPreMissile">();
	}
	static class UPyAIAbilityExitStage_AbilityPreMissile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_AbilityPreMissile>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_NoEnemy
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_NoEnemy final : public UPyAIAbilityExitStageLogicBase
{
public:
	struct FRange_FloatValue                      CheckRadius;                                       // 0x0038(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_NoEnemy">();
	}
	static class UPyAIAbilityExitStage_NoEnemy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_NoEnemy>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_AbilityMissile
// 0x0000 (0x0038 - 0x0038)
class UPyAIAbilityExitStage_AbilityMissile final : public UPyAIAbilityExitStageLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_AbilityMissile">();
	}
	static class UPyAIAbilityExitStage_AbilityMissile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_AbilityMissile>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_AbilityEnd
// 0x0000 (0x0038 - 0x0038)
class UPyAIAbilityExitStage_AbilityEnd : public UPyAIAbilityExitStageLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_AbilityEnd">();
	}
	static class UPyAIAbilityExitStage_AbilityEnd* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_AbilityEnd>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_CanNotSeeTargetTimeLimit
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_CanNotSeeTargetTimeLimit final : public UPyAIAbilityExitStageLogicBase
{
public:
	float                                         TimeLimit;                                         // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldHaveSeenTarget;                             // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_CanNotSeeTargetTimeLimit">();
	}
	static class UPyAIAbilityExitStage_CanNotSeeTargetTimeLimit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_CanNotSeeTargetTimeLimit>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_CanNotSeeEnemy
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_CanNotSeeEnemy : public UPyAIAbilityExitStageLogicBase
{
public:
	bool                                          bShouldHaveSeenEnemy;                              // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_CanNotSeeEnemy">();
	}
	static class UPyAIAbilityExitStage_CanNotSeeEnemy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_CanNotSeeEnemy>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_CanSeeEnemy
// 0x0000 (0x0038 - 0x0038)
class UPyAIAbilityExitStage_CanSeeEnemy final : public UPyAIAbilityExitStageLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_CanSeeEnemy">();
	}
	static class UPyAIAbilityExitStage_CanSeeEnemy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_CanSeeEnemy>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_CanNotSeeEnemyTimeLimit
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_CanNotSeeEnemyTimeLimit final : public UPyAIAbilityExitStageLogicBase
{
public:
	float                                         TimeLimit;                                         // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldHaveSeenEnemy;                              // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_CanNotSeeEnemyTimeLimit">();
	}
	static class UPyAIAbilityExitStage_CanNotSeeEnemyTimeLimit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_CanNotSeeEnemyTimeLimit>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_NearTarget
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_NearTarget : public UPyAIAbilityExitStageLogicBase
{
public:
	float                                         AccessRange;                                       // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_NearTarget">();
	}
	static class UPyAIAbilityExitStage_NearTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_NearTarget>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_TooCloseToEnemy
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_TooCloseToEnemy : public UPyAIAbilityExitStageLogicBase
{
public:
	float                                         AccessRange;                                       // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_TooCloseToEnemy">();
	}
	static class UPyAIAbilityExitStage_TooCloseToEnemy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_TooCloseToEnemy>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_VelocityLessThan
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_VelocityLessThan : public UPyAIAbilityExitStageLogicBase
{
public:
	float                                         Velocity;                                          // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_VelocityLessThan">();
	}
	static class UPyAIAbilityExitStage_VelocityLessThan* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_VelocityLessThan>();
	}
};

// PythonClass ability_exit_stage_logic.PyAIAbilityExitStage_AmmoNumCheck
// 0x0008 (0x0040 - 0x0038)
class UPyAIAbilityExitStage_AmmoNumCheck : public UPyAIAbilityExitStageLogicBase
{
public:
	float                                         AmmoNumThreshold;                                  // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAmmoClipType                                 AmmoType;                                          // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InverseResult;                                     // 0x003D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIAbilityExitStage_AmmoNumCheck">();
	}
	static class UPyAIAbilityExitStage_AmmoNumCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIAbilityExitStage_AmmoNumCheck>();
	}
};

}

