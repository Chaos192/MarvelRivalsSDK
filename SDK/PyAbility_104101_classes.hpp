﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104101

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Hero_1041_classes.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104101.PyConfig_104101
// 0x0068 (0x0108 - 0x00A0)
class UPyConfig_104101 final : public UConfig_104101
{
public:
	struct FGameplayTagContainer                  BindAbility;                                       // 0x00A0(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104101">();
	}
	static class UPyConfig_104101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104101>();
	}
};

// PythonClass PyAbility_104101.PyAbility_104101
// 0x0010 (0x2598 - 0x2588)
class UPyAbility_104101 : public UMarvelGameplayAbility
{
public:
	TMulticastInlineDelegate<void()>              OnPassiveAmmoAdd;                                  // 0x2588(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	bool CanActivate();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104101">();
	}
	static class UPyAbility_104101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104101>();
	}
};

// PythonClass PyAbility_104101.PyUIController_104101
// 0x0000 (0x0C50 - 0x0C50)
class UPyUIController_104101 final : public UUIC_Ability
{
public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_104101">();
	}
	static class UPyUIController_104101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_104101>();
	}
};

}

