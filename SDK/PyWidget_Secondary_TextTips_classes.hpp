﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Secondary_TextTips

#include "Basic.hpp"

#include "PyWidget_SecondaryChildBase_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Secondary_TextTips.PyWidget_Secondary_TextTips
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Secondary_TextTips : public UPyWidget_SecondaryChildBase
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Secondary_TextTips">();
	}
	static class UPyWidget_Secondary_TextTips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Secondary_TextTips>();
	}
};

}

