﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyUIController_CharacterAbilities

#include "Basic.hpp"

#include "PyUIController_CharacterAbilities_classes.hpp"


namespace SDK
{

// PythonFunction PyUIController_CharacterAbilities.PyUIController_CharacterAbilities.Construct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_CharacterAbilities::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_CharacterAbilities", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyUIController_CharacterAbilities.PyUIController_CharacterAbilities.Destruct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_CharacterAbilities::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_CharacterAbilities", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

