﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104272

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "PyAbility_104251_classes.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104272.PyAbility_104272
// 0x0010 (0x25B0 - 0x25A0)
class UPyAbility_104272 : public UPyAbility_104251
{
public:
	TMulticastInlineDelegate<void()>              OnShowCoolDownUI;                                  // 0x25A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void MissileEventNotify();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104272">();
	}
	static class UPyAbility_104272* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104272>();
	}
};

// PythonClass PyAbility_104272.PyUIController_104272
// 0x0010 (0x0C60 - 0x0C50)
class UPyUIController_104272 final : public UUIC_Ability
{
public:
	struct FGameplayTag                           SpecialAbilityTag;                                 // 0x0C50(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_104272">();
	}
	static class UPyUIController_104272* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_104272>();
	}
};

}

