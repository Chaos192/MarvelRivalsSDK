﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_212

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_212.PyAbility_212
// 0x0000 (0x2668 - 0x2668)
class UPyAbility_212 : public UAbility_212
{
public:
	bool TryMakeTriggerContext(struct FGameplayEventData& EventData);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnRep_RepEmoteAnimInfo();
	void K2_OnEndAbility(bool bWasCancelled);
	void NativeOnMontageCompleted(const class FString& EventTag);
	void NativeOnMontageBlendOut(const class FString& EventTag);
	void NativeOnMontageInterrupted(const class FString& EventTag);
	void NativeOnMontageCancelled(const class FString& EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_212">();
	}
	static class UPyAbility_212* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_212>();
	}
};

}

