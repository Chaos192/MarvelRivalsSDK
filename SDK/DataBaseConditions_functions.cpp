﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataBaseConditions

#include "Basic.hpp"

#include "DataBaseConditions_classes.hpp"
#include "DataBaseConditions_parameters.hpp"


namespace SDK
{

// PythonFunction DataBaseConditions.BeAfterSpecialBuff.GetConditionHeroIDsAny
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FString>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TSet<class FString> UBeAfterSpecialBuff::GetConditionHeroIDsAny()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BeAfterSpecialBuff", "GetConditionHeroIDsAny");

	Params::BeAfterSpecialBuff_GetConditionHeroIDsAny Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction DataBaseConditions.BeInSpecialBuff.GetConditionHeroIDsAll
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FString>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TSet<class FString> UBeInSpecialBuff::GetConditionHeroIDsAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BeInSpecialBuff", "GetConditionHeroIDsAll");

	Params::BeInSpecialBuff_GetConditionHeroIDsAll Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction DataBaseConditions.CheckBeInChange.GetConditionHeroIDsAll
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FString>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TSet<class FString> UCheckBeInChange::GetConditionHeroIDsAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBeInChange", "GetConditionHeroIDsAll");

	Params::CheckBeInChange_GetConditionHeroIDsAll Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction DataBaseConditions.BeWithOtherHero.GetConditionHeroIDsAll
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FString>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TSet<class FString> UBeWithOtherHero::GetConditionHeroIDsAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BeWithOtherHero", "GetConditionHeroIDsAll");

	Params::BeWithOtherHero_GetConditionHeroIDsAll Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction DataBaseConditions.BeWithOtherHero.GetConditionHeroIDsAny
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FString>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TSet<class FString> UBeWithOtherHero::GetConditionHeroIDsAny()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BeWithOtherHero", "GetConditionHeroIDsAny");

	Params::BeWithOtherHero_GetConditionHeroIDsAny Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction DataBaseConditions.MapCondition.GetConditionMapIDsAll
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FString>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TSet<class FString> UMapCondition::GetConditionMapIDsAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapCondition", "GetConditionMapIDsAll");

	Params::MapCondition_GetConditionMapIDsAll Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

