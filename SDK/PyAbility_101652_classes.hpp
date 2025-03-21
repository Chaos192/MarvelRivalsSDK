﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101652

#include "Basic.hpp"

#include "Hero_1016_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_101652.PyAbility_101652
// 0x0000 (0x25A0 - 0x25A0)
class UPyAbility_101652 : public UAbility_101652
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void ClientAckPhantomLocationChange();
	void MissileEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageBlendOut(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_101652">();
	}
	static class UPyAbility_101652* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_101652>();
	}
};

}

