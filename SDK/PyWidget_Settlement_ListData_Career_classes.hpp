﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Settlement_ListData_Career

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Settlement_ListData_Career.PyWidget_Settlement_ListData_Career
// 0x0000 (0x0618 - 0x0618)
class UPyWidget_Settlement_ListData_Career : public UPyWidget_ModuleMainPanel
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnBecomeTop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Settlement_ListData_Career">();
	}
	static class UPyWidget_Settlement_ListData_Career* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Settlement_ListData_Career>();
	}
};

}

