﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyVenomCharacter

#include "Basic.hpp"

#include "PyVenomCharacter_classes.hpp"
#include "PyVenomCharacter_parameters.hpp"


namespace SDK
{

// PythonFunction PyVenomCharacter.PyVenomChildActor.ReceivePoolBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyVenomChildActor::ReceivePoolBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVenomChildActor", "ReceivePoolBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVenomCharacter.PyVenomChildActor.OnGenericGameplayTagUpdate
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              InTag                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyVenomChildActor::OnGenericGameplayTagUpdate(const struct FGameplayTag& InTag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVenomChildActor", "OnGenericGameplayTagUpdate");

	Params::PyVenomChildActor_OnGenericGameplayTagUpdate Parms{};

	Parms.InTag = std::move(InTag);
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVenomCharacter.PyVenomCharacter.ReceiveBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyVenomCharacter::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVenomCharacter", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVenomCharacter.PyVenomCharacter.OnAbilityInit
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AbilityID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyVenomCharacter::OnAbilityInit(int32 AbilityID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVenomCharacter", "OnAbilityInit");

	Params::PyVenomCharacter_OnAbilityInit Parms{};

	Parms.AbilityID = AbilityID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVenomCharacter.PyVenomCharacter.OnLaunched
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   LaunchVelocity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bXYOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bZOverride                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyVenomCharacter::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVenomCharacter", "OnLaunched");

	Params::PyVenomCharacter_OnLaunched Parms{};

	Parms.LaunchVelocity = std::move(LaunchVelocity);
	Parms.bXYOverride = bXYOverride;
	Parms.bZOverride = bZOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVenomCharacter.PyVenomCharacter.ReceiveUnpossessed
// (BlueprintAuthorityOnly, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      OldController                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyVenomCharacter::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVenomCharacter", "ReceiveUnpossessed");

	Params::PyVenomCharacter_ReceiveUnpossessed Parms{};

	Parms.OldController = OldController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

