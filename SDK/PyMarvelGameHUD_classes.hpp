﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelGameHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyMarvelHUD_classes.hpp"


namespace SDK
{

// PythonClass PyMarvelGameHUD.PyMarvelGameHUD
// 0x0000 (0x0700 - 0x0700)
class APyMarvelGameHUD final : public APyMarvelHUD
{
public:
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason Reason);
	void ShowTransitionPanel(float TransTime, float BlackTime);
	void HideTransitionPanel();
	class UPyBattlePanel* GetBattleHud();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelGameHUD">();
	}
	static class APyMarvelGameHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyMarvelGameHUD>();
	}
};

}

