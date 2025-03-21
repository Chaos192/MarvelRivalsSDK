﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyHulkBannerCharacter

#include "Basic.hpp"

#include "PyHulkBannerCharacter_classes.hpp"
#include "PyHulkBannerCharacter_parameters.hpp"


namespace SDK
{

// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.ReceiveBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyHulkBannerCharacter::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.ReceiveEndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyHulkBannerCharacter::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "ReceiveEndPlay");

	Params::PyHulkBannerCharacter_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.OnHeroReviving
// (Native, Public, BlueprintCallable)
// Parameters:
// EPlayerLivingState                      State                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyHulkBannerCharacter::OnHeroReviving(EPlayerLivingState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "OnHeroReviving");

	Params::PyHulkBannerCharacter_OnHeroReviving Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.OnPreDeath
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      InSource                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InSourceAvatar                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FAttributeModifierHandle&  ModifierParameter                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void APyHulkBannerCharacter::OnPreDeath(class AController* InSource, class AActor* InSourceAvatar, const struct FAttributeModifierHandle& ModifierParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "OnPreDeath");

	Params::PyHulkBannerCharacter_OnPreDeath Parms{};

	Parms.InSource = InSource;
	Parms.InSourceAvatar = InSourceAvatar;
	Parms.ModifierParameter = std::move(ModifierParameter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.K2_OnSculptChanged
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SculptID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyHulkBannerCharacter::K2_OnSculptChanged(int32 SculptID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "K2_OnSculptChanged");

	Params::PyHulkBannerCharacter_K2_OnSculptChanged Parms{};

	Parms.SculptID = SculptID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.OnLevelForceKill
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           kill_target                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyHulkBannerCharacter::OnLevelForceKill(class AActor* kill_target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "OnLevelForceKill");

	Params::PyHulkBannerCharacter_OnLevelForceKill Parms{};

	Parms.kill_target = kill_target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.OnTagUpdate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FGameplayTag&              Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyHulkBannerCharacter::OnTagUpdate(const struct FGameplayTag& Tag, bool Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "OnTagUpdate");

	Params::PyHulkBannerCharacter_OnTagUpdate Parms{};

	Parms.Tag = std::move(Tag);
	Parms.Exist = Exist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.OnCharacterReborn
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           TargetActor                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FCharacterRebornParam&     Param                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void APyHulkBannerCharacter::OnCharacterReborn(class AActor* TargetActor, const struct FCharacterRebornParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "OnCharacterReborn");

	Params::PyHulkBannerCharacter_OnCharacterReborn Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkBannerCharacter.OnActivateAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AbilityID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyHulkBannerCharacter::OnActivateAbility(int32 AbilityID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkBannerCharacter", "OnActivateAbility");

	Params::PyHulkBannerCharacter_OnActivateAbility Parms{};

	Parms.AbilityID = AbilityID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyBannerBaseChildActor.ReceivePoolBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyBannerBaseChildActor::ReceivePoolBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBannerBaseChildActor", "ReceivePoolBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyBannerBaseChildActor.ReceivePoolEndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyBannerBaseChildActor::ReceivePoolEndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBannerBaseChildActor", "ReceivePoolEndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyBannerBaseChildActor.OnGenericGameplayTagUpdate
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              InTag                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyBannerBaseChildActor::OnGenericGameplayTagUpdate(const struct FGameplayTag& InTag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBannerBaseChildActor", "OnGenericGameplayTagUpdate");

	Params::PyBannerBaseChildActor_OnGenericGameplayTagUpdate Parms{};

	Parms.InTag = std::move(InTag);
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkMonsterChildActor.ReceivePoolBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyHulkMonsterChildActor::ReceivePoolBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkMonsterChildActor", "ReceivePoolBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyHulkBannerCharacter.PyHulkMonsterChildActor.ReceivePoolEndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyHulkMonsterChildActor::ReceivePoolEndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyHulkMonsterChildActor", "ReceivePoolEndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

