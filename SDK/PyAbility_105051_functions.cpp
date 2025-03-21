﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_105051

#include "Basic.hpp"

#include "PyAbility_105051_classes.hpp"
#include "PyAbility_105051_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_105051.PyAbility_105051.BeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_105051::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.CanActivate
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_105051::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "CanActivate");

	Params::PyAbility_105051_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_105051.PyAbility_105051.K2_ActivateAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_105051::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.OnCharacterRegisteredProjectileChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMarvelAbilityTargetActor_Projectile*NewProjectile                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_105051::OnCharacterRegisteredProjectileChanged(class AMarvelAbilityTargetActor_Projectile* NewProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "OnCharacterRegisteredProjectileChanged");

	Params::PyAbility_105051_OnCharacterRegisteredProjectileChanged Parms{};

	Parms.NewProjectile = NewProjectile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.MissileEventNotify
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_105051::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "MissileEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.K2_EndAbilityWithChecked
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_105051::K2_EndAbilityWithChecked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "K2_EndAbilityWithChecked");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.OnProjectileSpawn
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           SpawnActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayAbilityTargetDataHandle&Data                                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_105051::OnProjectileSpawn(class AActor* SpawnActor, const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "OnProjectileSpawn");

	Params::PyAbility_105051_OnProjectileSpawn Parms{};

	Parms.SpawnActor = SpawnActor;
	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.OnProjectileEnd
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Value                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_105051::OnProjectileEnd(class AActor* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "OnProjectileEnd");

	Params::PyAbility_105051_OnProjectileEnd Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.OnBindInputPress
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   TimeWaited                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_105051::OnBindInputPress(float TimeWaited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "OnBindInputPress");

	Params::PyAbility_105051_OnBindInputPress Parms{};

	Parms.TimeWaited = TimeWaited;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyAbility_105051.K2_OnEndAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_105051::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_105051", "K2_OnEndAbility");

	Params::PyAbility_105051_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyProjectile_105051.K2_OnBeginAgentTask_GraphAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_105051::K2_OnBeginAgentTask_GraphAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_105051", "K2_OnBeginAgentTask_GraphAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyProjectile_105051.K2_OnEndAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_105051::K2_OnEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_105051", "K2_OnEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyProjectile_105051.K2_OnForceEndAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_105051::K2_OnForceEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_105051", "K2_OnForceEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyProjectile_105051.K2_OnRecycleAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_105051::K2_OnRecycleAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_105051", "K2_OnRecycleAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyProjectile_105051.ReceiveEndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyProjectile_105051::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_105051", "ReceiveEndPlay");

	Params::PyProjectile_105051_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_105051.PyProjectile_105051.K2_OnProjectileInfoForceChanged_ThreadSafe
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FProjectileForceChangedInfo&InProjectileForceChangedInfo                           (ConstParm, Parm, OutParm, ReferenceParm)

void APyProjectile_105051::K2_OnProjectileInfoForceChanged_ThreadSafe(const struct FProjectileForceChangedInfo& InProjectileForceChangedInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_105051", "K2_OnProjectileInfoForceChanged_ThreadSafe");

	Params::PyProjectile_105051_K2_OnProjectileInfoForceChanged_ThreadSafe Parms{};

	Parms.InProjectileForceChangedInfo = std::move(InProjectileForceChangedInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

