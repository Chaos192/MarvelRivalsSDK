﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySynergy_100001

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PySynergy_100001.PyAbility_10000101
// 0x0000 (0x2588 - 0x2588)
class UPyAbility_10000101 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void EndPlay();
	bool CanActivate();
	void K2_ActivateAbility();
	void OnHeroChanged(class AMarvelPlayerState* player_state, int32 hero_id);
	void OnBondStateChanged(const struct FBondInstance& bind, const TArray<class AMarvelBaseCharacter*>& Triggers);
	void OnPlayerKilled(const struct FAttributeModifierParameter& Param);
	void MulticastStopReplay();
	void OnCharacterDeath(class AActor* DamageCauser, class AActor* TargetActor, const struct FAttributeModifierHandle& ParameterHandle);
	void OnSummonedSpawned(class AActor* SpawnActor);
	void OnSummonedEndTask(class AActor* SpawnActor);
	void OnSpawnCharacter(class AMarvelBaseCharacter* TargetCharacter, ESpawnMethod SpawnMethod);
	void PreMissileEventNotify();
	void MissileEventNotify();
	void BreakEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);
	void NativeOnMontageBlendOut(const class FString& Tag);
	void NativeOnMontageEvent(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_10000101">();
	}
	static class UPyAbility_10000101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_10000101>();
	}
};

}

