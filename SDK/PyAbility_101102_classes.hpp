﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101102

#include "Basic.hpp"

#include "PyAbility_HulkSculpt_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_101102.PyAbility_101102
// 0x0000 (0x2840 - 0x2840)
class UPyAbility_101102 : public UPyAbility_HulkSculpt
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ChangeSculpt();
	void ResetHP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_101102">();
	}
	static class UPyAbility_101102* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_101102>();
	}
};

}

