﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyEscortPartStatistics

#include "Basic.hpp"

#include "PyLevelPartStatistics_classes.hpp"


namespace SDK
{

// PythonClass PyEscortPartStatistics.PyEscortPartStatistics
// 0x0000 (0x0038 - 0x0038)
class UPyEscortPartStatistics final : public UPyLevelPartStatistics
{
public:
	void Initialize();
	void Shutdown();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyEscortPartStatistics">();
	}
	static class UPyEscortPartStatistics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyEscortPartStatistics>();
	}
};

}

