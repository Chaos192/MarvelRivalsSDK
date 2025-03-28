﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyCue_AbilityLoop_Cable_Base

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base
// 0x0000 (0x1160 - 0x1160)
class APyCue_AbilityLoop_Cable_Base : public AMarvelCueNotify_CableBase
{
public:
	void ResetDefault();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveInternal_PY();
	void OnTimeToReleaseHandWhenNoHit_PY();
	void BeforeCableUpdate_PY(float DeltaTime);
	void AfterCableUpdate_PY(float DeltaTime);
	void OnTimeToStartFadeOut();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_AbilityLoop_Cable_Base">();
	}
	static class APyCue_AbilityLoop_Cable_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_AbilityLoop_Cable_Base>();
	}
};

}

