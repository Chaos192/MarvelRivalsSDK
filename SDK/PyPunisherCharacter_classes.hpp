﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyPunisherCharacter

#include "Basic.hpp"

#include "Hero_1014_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "PyUIController_CharacterAbilities_classes.hpp"


namespace SDK
{

// PythonClass PyPunisherCharacter.PyPunisherChildActor
// 0x0000 (0x0A88 - 0x0A88)
class APyPunisherChildActor final : public APunisherChildActor
{
public:
	void ReceivePoolBeginPlay();
	void OnGenericGameplayTagUpdate(const struct FGameplayTag& InTag, int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyPunisherChildActor">();
	}
	static class APyPunisherChildActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyPunisherChildActor>();
	}
};

// PythonClass PyPunisherCharacter.PyPunisherCharacter
// 0x0010 (0x18D0 - 0x18C0)
class APyPunisherCharacter : public APunisherCharacter
{
public:
	struct FGameplayTag                           ShowGatlingTag;                                    // 0x18C0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void SetGatlingMaterialVisible(bool bVisible);
	void OnRep_IsUsingGatling();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyPunisherCharacter">();
	}
	static class APyPunisherCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyPunisherCharacter>();
	}
};

// PythonClass PyPunisherCharacter.PyUIController_PunisherAbilities
// 0x0000 (0x0040 - 0x0040)
class UPyUIController_PunisherAbilities final : public UPyUIController_CharacterAbilities
{
public:
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_PunisherAbilities">();
	}
	static class UPyUIController_PunisherAbilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_PunisherAbilities>();
	}
};

}

