﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelDeathMatchAudioComponent

#include "Basic.hpp"

#include "PyModeAudioComponent_classes.hpp"


namespace SDK
{

// PythonClass PyLevelDeathMatchAudioComponent.PyLevelDeathMatchAudioComponent
// 0x0000 (0x0108 - 0x0108)
class UPyLevelDeathMatchAudioComponent : public UPyModeAudioComponent
{
public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelDeathMatchAudioComponent">();
	}
	static class UPyLevelDeathMatchAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelDeathMatchAudioComponent>();
	}
};

}

