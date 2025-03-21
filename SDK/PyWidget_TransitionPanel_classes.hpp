﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_TransitionPanel

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_TransitionPanel.PyWidget_TransitionPanel
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_TransitionPanel : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void MarvelSetVisible(bool Visible);
	void SetVisible(bool Visible);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_TransitionPanel">();
	}
	static class UPyWidget_TransitionPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_TransitionPanel>();
	}
};

}

