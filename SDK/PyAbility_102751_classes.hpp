﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102751

#include "Basic.hpp"

#include "PyAbility_102741_classes.hpp"
#include "Hero_1027_classes.hpp"
#include "DeclarativeUnreal_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102751.PyAbility_102751
// 0x0000 (0x25F8 - 0x25F8)
class UPyAbility_102751 : public UPyAbility_102741
{
public:
	void TrySwitchBuildingMode();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102751">();
	}
	static class UPyAbility_102751* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102751>();
	}
};

// PythonClass PyAbility_102751.PyUIController_102751
// 0x0000 (0x0C50 - 0x0C50)
class UPyUIController_102751 final : public UUIC_Ability
{
public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void OnDestruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_102751">();
	}
	static class UPyUIController_102751* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_102751>();
	}
};

// PythonClass PyAbility_102751.PyCue_Summoner_Loop_10275101
// 0x0010 (0x12F0 - 0x12E0)
class APyCue_Summoner_Loop_10275101 final : public ACue_Summoner_Loop_10275101
{
public:
	struct FDeclarationHolder                     ViewerSideWatcher;                                 // 0x12E0(0x0010)(NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	class UMarvelUserWidget* GetUIWidget();
	void OnWallDefenceApply(const struct FWallDefendNotify& NewWallDefendNotify);
	void OnWallActivateStateChange_ThreadSafe(bool bNewState);
	void OnWallActivateStateChangeForWidgetUpdate(bool bNewState);
	void OnWallDefenceApplyForWidgetUpdate(int32 LastAttackActorUID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Summoner_Loop_10275101">();
	}
	static class APyCue_Summoner_Loop_10275101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Summoner_Loop_10275101>();
	}
};

}

