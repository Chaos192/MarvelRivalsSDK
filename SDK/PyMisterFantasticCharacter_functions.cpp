﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMisterFantasticCharacter

#include "Basic.hpp"

#include "PyMisterFantasticCharacter_classes.hpp"
#include "PyMisterFantasticCharacter_parameters.hpp"


namespace SDK
{

// PythonFunction PyMisterFantasticCharacter.PyMisterFantasticCharacter.ReceiveBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyMisterFantasticCharacter::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMisterFantasticCharacter", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMisterFantasticCharacter.PyMisterFantasticCharacter.ReceiveEndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyMisterFantasticCharacter::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMisterFantasticCharacter", "ReceiveEndPlay");

	Params::PyMisterFantasticCharacter_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMisterFantasticCharacter.PyMisterFantasticCharacter.OnHeroReviving
// (Native, Public, BlueprintCallable)
// Parameters:
// EPlayerLivingState                      State                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyMisterFantasticCharacter::OnHeroReviving(EPlayerLivingState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMisterFantasticCharacter", "OnHeroReviving");

	Params::PyMisterFantasticCharacter_OnHeroReviving Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMisterFantasticCharacter.PyMisterFantasticCharacter.K2_ClearScheduleTimer
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyMisterFantasticCharacter::K2_ClearScheduleTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMisterFantasticCharacter", "K2_ClearScheduleTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMisterFantasticCharacter.PyMisterFantasticCharacter.OnScheduleTimeout
// (Native, Public, BlueprintCallable)

void APyMisterFantasticCharacter::OnScheduleTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMisterFantasticCharacter", "OnScheduleTimeout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMisterFantasticCharacter.PyMisterFantasticCharacter.OnPreDeath
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      InSource                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InSourceAvatar                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FAttributeModifierHandle&  ModifierParameter                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void APyMisterFantasticCharacter::OnPreDeath(class AController* InSource, class AActor* InSourceAvatar, const struct FAttributeModifierHandle& ModifierParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMisterFantasticCharacter", "OnPreDeath");

	Params::PyMisterFantasticCharacter_OnPreDeath Parms{};

	Parms.InSource = InSource;
	Parms.InSourceAvatar = InSourceAvatar;
	Parms.ModifierParameter = std::move(ModifierParameter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMisterFantasticCharacter.PyMisterFantasticCharacter.OnReborn
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FCharacterRebornParam&     RebornParameter                                        (ConstParm, Parm, OutParm, ReferenceParm)

void APyMisterFantasticCharacter::OnReborn(const struct FCharacterRebornParam& RebornParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMisterFantasticCharacter", "OnReborn");

	Params::PyMisterFantasticCharacter_OnReborn Parms{};

	Parms.RebornParameter = std::move(RebornParameter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

