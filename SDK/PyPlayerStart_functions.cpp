﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyPlayerStart

#include "Basic.hpp"

#include "PyPlayerStart_classes.hpp"


namespace SDK
{

// PythonFunction PyPlayerStart.PyPlayerStart.PyConstruction
// (Native, Public, BlueprintCallable)

void APyPlayerStart::PyConstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyPlayerStart", "PyConstruction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyPlayerStart.PyPlayerStart.SetRespawnTransform
// (Native, Protected, BlueprintCallable)

void APyPlayerStart::SetRespawnTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyPlayerStart", "SetRespawnTransform");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

