﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_BondTips

#include "Basic.hpp"

#include "PyWidget_CommonTipsBase_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_BondTips.PyWidget_Common_BondTips
// 0x0000 (0x0608 - 0x0608)
class UPyWidget_Common_BondTips : public UPyWidget_CommonTipsBase
{
public:
	void OnInitialized();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_BondTips">();
	}
	static class UPyWidget_Common_BondTips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_BondTips>();
	}
};

}

