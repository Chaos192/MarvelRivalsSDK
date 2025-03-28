﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104131

#include "Basic.hpp"

#include "PyAbility_104131_classes.hpp"
#include "PyAbility_104131_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_104131.PyProjectile_10413102.K2_OnInitializeData
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_10413102::K2_OnInitializeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413102", "K2_OnInitializeData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413102.K2_OnBeginAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_10413102::K2_OnBeginAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413102", "K2_OnBeginAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413102.K2_OnEndAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_10413102::K2_OnEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413102", "K2_OnEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413102.OnBackwardProjectileStop
// (Native, Public, BlueprintCallable)

void APyProjectile_10413102::OnBackwardProjectileStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413102", "OnBackwardProjectileStop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413101.K2_OnInitializeData
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_10413101::K2_OnInitializeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413101", "K2_OnInitializeData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413101.K2_OnBeginAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_10413101::K2_OnBeginAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413101", "K2_OnBeginAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413101.OnProjectileStop
// (Native, Public, BlueprintCallable)

void APyProjectile_10413101::OnProjectileStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413101", "OnProjectileStop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413101.K2_OnEndAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_10413101::K2_OnEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413101", "K2_OnEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413101.K2_OnProcessHit
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHitResult&                ImpactResult                                           (ConstParm, Parm, OutParm, ReferenceParm)

void APyProjectile_10413101::K2_OnProcessHit(const struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413101", "K2_OnProcessHit");

	Params::PyProjectile_10413101_K2_OnProcessHit Parms{};

	Parms.ImpactResult = std::move(ImpactResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyProjectile_10413101.K2_OnRecycleAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_10413101::K2_OnRecycleAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10413101", "K2_OnRecycleAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyEffectiveComponent_10413101.K2_OnPreApplyContainer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const TArray<struct FHitResult>&        HitResults                                             (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>               ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FHitResult> UPyEffectiveComponent_10413101::K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyEffectiveComponent_10413101", "K2_OnPreApplyContainer");

	Params::PyEffectiveComponent_10413101_K2_OnPreApplyContainer Parms{};

	Parms.HitResults = std::move(HitResults);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104131.PyAbility_104131.BeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104131::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.CanActivate
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_104131::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "CanActivate");

	Params::PyAbility_104131_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104131.PyAbility_104131.K2_ActivateGameplay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104131::K2_ActivateGameplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "K2_ActivateGameplay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.OnPressCancle
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   Useless                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104131::OnPressCancle(float Useless)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "OnPressCancle");

	Params::PyAbility_104131_OnPressCancle Parms{};

	Parms.Useless = Useless;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.K2_TriggerGameplay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HoldTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104131::K2_TriggerGameplay(float HoldTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "K2_TriggerGameplay");

	Params::PyAbility_104131_K2_TriggerGameplay Parms{};

	Parms.HoldTime = HoldTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.K2_MaxHoldTimeGameplay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HoldTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104131::K2_MaxHoldTimeGameplay(float HoldTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "K2_MaxHoldTimeGameplay");

	Params::PyAbility_104131_K2_MaxHoldTimeGameplay Parms{};

	Parms.HoldTime = HoldTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.MissileEventNotify
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104131::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "MissileEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.HandleAnimSocketInfo
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SocketId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FMarvelAbilitySocketInfo&  SocketInfo                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UPyAbility_104131::HandleAnimSocketInfo(int32 SocketId, const struct FMarvelAbilitySocketInfo& SocketInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "HandleAnimSocketInfo");

	Params::PyAbility_104131_HandleAnimSocketInfo Parms{};

	Parms.SocketId = SocketId;
	Parms.SocketInfo = std::move(SocketInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.BreakEventNotify
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104131::BreakEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "BreakEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.K2_OnEndAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104131::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "K2_OnEndAbility");

	Params::PyAbility_104131_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.OnWaitServerSyncOvertime
// (Native, Public, BlueprintCallable)

void UPyAbility_104131::OnWaitServerSyncOvertime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "OnWaitServerSyncOvertime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.OnNetSync
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&Data                                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_104131::OnNetSync(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "OnNetSync");

	Params::PyAbility_104131_OnNetSync Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.OnProjectileTaskSuccess
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           SpawnActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayAbilityTargetDataHandle&Data                                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_104131::OnProjectileTaskSuccess(class AActor* SpawnActor, const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "OnProjectileTaskSuccess");

	Params::PyAbility_104131_OnProjectileTaskSuccess Parms{};

	Parms.SpawnActor = SpawnActor;
	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.BackwardProjectileSuccess
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           SpawnActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayAbilityTargetDataHandle&Data                                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_104131::BackwardProjectileSuccess(class AActor* SpawnActor, const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "BackwardProjectileSuccess");

	Params::PyAbility_104131_BackwardProjectileSuccess Parms{};

	Parms.SpawnActor = SpawnActor;
	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.K2_EnterEndSection
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104131::K2_EnterEndSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "K2_EnterEndSection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.OnBackProjectileEndTask
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Projectile                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104131::OnBackProjectileEndTask(class AActor* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "OnBackProjectileEndTask");

	Params::PyAbility_104131_OnBackProjectileEndTask Parms{};

	Parms.Projectile = Projectile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageCompleted
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104131::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "NativeOnMontageCompleted");

	Params::PyAbility_104131_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageBlendOut
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104131::NativeOnMontageBlendOut(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "NativeOnMontageBlendOut");

	Params::PyAbility_104131_NativeOnMontageBlendOut Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageInterrupted
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104131::NativeOnMontageInterrupted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "NativeOnMontageInterrupted");

	Params::PyAbility_104131_NativeOnMontageInterrupted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageCancelled
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104131::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104131", "NativeOnMontageCancelled");

	Params::PyAbility_104131_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyCue_Projectile_Loop_10413102.WhileActive
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APyCue_Projectile_Loop_10413102::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Projectile_Loop_10413102", "WhileActive");

	Params::PyCue_Projectile_Loop_10413102_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104131.PyUIController_104131.SetAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*                 InAbility                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyUIController_104131::SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_104131", "SetAbility");

	Params::PyUIController_104131_SetAbility Parms{};

	Parms.InAbilityId = InAbilityId;
	Parms.InAbility = InAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyUIController_104131.Destruct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_104131::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_104131", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104131.PyUIController_104131.PlayWarningAnim
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_104131::PlayWarningAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_104131", "PlayWarningAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

