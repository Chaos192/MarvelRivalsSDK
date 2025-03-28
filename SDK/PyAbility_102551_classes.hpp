﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102551

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102551.PyAbility_102551
// 0x0000 (0x2840 - 0x2840)
class UPyAbility_102551 : public UAbility_109
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102551">();
	}
	static class UPyAbility_102551* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102551>();
	}
};

// PythonClass PyAbility_102551.PyCue_Ability_Loop_10255101
// 0x0010 (0x0E60 - 0x0E50)
class APyCue_Ability_Loop_10255101 final : public AMarvelCueNotify_Ability
{
public:
	class UFXSystemAsset*                         SculptChangeEffect;                                // 0x0E50(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 MeshComponent;                                     // 0x0E58(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void ShowViceMesh(int32 SculptID);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10255101">();
	}
	static class APyCue_Ability_Loop_10255101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10255101>();
	}
};

// PythonClass PyAbility_102551.PyUIController_102551
// 0x0010 (0x0C60 - 0x0C50)
class UPyUIController_102551 final : public UUIC_Ability
{
public:
	class UTexture2D*                             Icon_CloakToDagger;                                // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Icon_DaggerToCloak;                                // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnSwitchAbilityForNewController();
	void OnSwitchAbilityForOldController();
	void OnDestruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_102551">();
	}
	static class UPyUIController_102551* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_102551>();
	}
};

}

