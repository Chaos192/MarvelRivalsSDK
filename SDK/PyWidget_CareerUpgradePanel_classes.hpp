﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CareerUpgradePanel

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_CareerUpgradePanel.PyWidget_CareerUpgradePanel
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_CareerUpgradePanel : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerUpgradePanel">();
	}
	static class UPyWidget_CareerUpgradePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerUpgradePanel>();
	}
};

}

