﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyRichTextTimeDecorator

#include "Basic.hpp"

#include "PyRichTextTimeDecorator_classes.hpp"
#include "PyRichTextTimeDecorator_parameters.hpp"


namespace SDK
{

// PythonFunction PyRichTextTimeDecorator.PyRichTextTimeDecorator.FormatTimeFromPython
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    TimeString                                             (Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UPyRichTextTimeDecorator::FormatTimeFromPython(const class FString& TimeString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyRichTextTimeDecorator", "FormatTimeFromPython");

	Params::PyRichTextTimeDecorator_FormatTimeFromPython Parms{};

	Parms.TimeString = std::move(TimeString);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

