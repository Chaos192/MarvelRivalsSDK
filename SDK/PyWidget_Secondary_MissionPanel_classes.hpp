﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Secondary_MissionPanel

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Secondary_MissionPanel.PyWidget_Secondary_MissionPanel
// 0x0000 (0x0618 - 0x0618)
class UPyWidget_Secondary_MissionPanel : public UPyWidget_ModuleMainPanel
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Secondary_MissionPanel">();
	}
	static class UPyWidget_Secondary_MissionPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Secondary_MissionPanel>();
	}
};

}

