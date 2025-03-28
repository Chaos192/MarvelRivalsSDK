﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTabData_1047

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyTabData_1047.PyTabData_1047
// 0x0000 (0x0050 - 0x0050)
class UPyTabData_1047 final : public UHeroTabDataBase
{
public:
	void K2_Initialize();
	void K2_Shutdown();
	void OnActivateCount(class UGameplayAbility* Ability);
	void OnEndAbility(int32 AbilityID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTabData_1047">();
	}
	static class UPyTabData_1047* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTabData_1047>();
	}
};

}

