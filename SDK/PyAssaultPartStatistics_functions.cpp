﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAssaultPartStatistics

#include "Basic.hpp"

#include "PyAssaultPartStatistics_classes.hpp"


namespace SDK
{

// PythonFunction PyAssaultPartStatistics.PyAssaultPartStatistics.Initialize
// (Native, Protected, BlueprintCallable)

void UPyAssaultPartStatistics::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAssaultPartStatistics", "Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAssaultPartStatistics.PyAssaultPartStatistics.Shutdown
// (Native, Protected, BlueprintCallable)

void UPyAssaultPartStatistics::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAssaultPartStatistics", "Shutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAssaultPartStatistics.PyAssaultPartStatistics.OnLevelPartStart
// (Native, Protected, BlueprintCallable)

void UPyAssaultPartStatistics::OnLevelPartStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAssaultPartStatistics", "OnLevelPartStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

