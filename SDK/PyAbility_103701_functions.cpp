﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103701

#include "Basic.hpp"

#include "PyAbility_103701_classes.hpp"
#include "PyAbility_103701_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_103701.PyAbility_103701.BeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_103701::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyAbility_103701.CanActivate
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_103701::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "CanActivate");

	Params::PyAbility_103701_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_103701.PyAbility_103701.CheckViewportTarget
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           InTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_103701::CheckViewportTarget(class AActor* InTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "CheckViewportTarget");

	Params::PyAbility_103701_CheckViewportTarget Parms{};

	Parms.InTarget = InTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_103701.PyAbility_103701.OnTraceViewportTarget
// (Native, Public, BlueprintCallable)

void UPyAbility_103701::OnTraceViewportTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "OnTraceViewportTarget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyAbility_103701.ShouldStopTrace
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_103701::ShouldStopTrace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "ShouldStopTrace");

	Params::PyAbility_103701_ShouldStopTrace Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_103701.PyAbility_103701.OnRep_ShootingTarget
// (Native, Public, BlueprintCallable)

void UPyAbility_103701::OnRep_ShootingTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "OnRep_ShootingTarget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyAbility_103701.GetFireIronIndex
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UPyAbility_103701::GetFireIronIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "GetFireIronIndex");

	Params::PyAbility_103701_GetFireIronIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_103701.PyAbility_103701.K2_OnEndAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_103701::K2_OnEndAbility(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103701", "K2_OnEndAbility");

	Params::PyAbility_103701_K2_OnEndAbility Parms{};

	Parms.bCancelled = bCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyUIController_103701.SetAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*                 InAbility                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyUIController_103701::SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_103701", "SetAbility");

	Params::PyUIController_103701_SetAbility Parms{};

	Parms.InAbilityId = InAbilityId;
	Parms.InAbility = InAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyUIController_103701.OnDestruct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_103701::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_103701", "OnDestruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.IronCountChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   IronCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Ability_Loop_10370100::IronCountChanged(int32 IronCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10370100", "IronCountChanged");

	Params::PyCue_Ability_Loop_10370100_IronCountChanged Parms{};

	Parms.IronCount = IronCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.OnRemove
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APyCue_Ability_Loop_10370100::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10370100", "OnRemove");

	Params::PyCue_Ability_Loop_10370100_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.WhileActiveFX
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Ability_Loop_10370100::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10370100", "WhileActiveFX");

	Params::PyCue_Ability_Loop_10370100_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.OnTagUpdate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FGameplayTag&              TagUpdated                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    TagExists                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Ability_Loop_10370100::OnTagUpdate(const struct FGameplayTag& TagUpdated, bool TagExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10370100", "OnTagUpdate");

	Params::PyCue_Ability_Loop_10370100_OnTagUpdate Parms{};

	Parms.TagUpdated = std::move(TagUpdated);
	Parms.TagExists = TagExists;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.OnAbilityShootingTargetChange
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           NewTarget                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyProjectile_103701::OnAbilityShootingTargetChange(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "OnAbilityShootingTargetChange");

	Params::PyProjectile_103701_OnAbilityShootingTargetChange Parms{};

	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.K2_OnInitializeData
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_103701::K2_OnInitializeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "K2_OnInitializeData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.K2_OnBeginAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_103701::K2_OnBeginAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "K2_OnBeginAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.K2_OnEndAgentTask
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyProjectile_103701::K2_OnEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "K2_OnEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.OnHomingComponentEnd
// (Native, Public, BlueprintCallable)

void APyProjectile_103701::OnHomingComponentEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "OnHomingComponentEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.OnHomingTargetDeath
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           InSourceAvatar                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InTargetAvatar                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FAttributeModifierHandle&  ParamHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void APyProjectile_103701::OnHomingTargetDeath(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParamHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "OnHomingTargetDeath");

	Params::PyProjectile_103701_OnHomingTargetDeath Parms{};

	Parms.InSourceAvatar = InSourceAvatar;
	Parms.InTargetAvatar = InTargetAvatar;
	Parms.ParamHandle = std::move(ParamHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.OnHomingTargetEndPlay
// (Native, Public, BlueprintCallable)

void APyProjectile_103701::OnHomingTargetEndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "OnHomingTargetEndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyProjectile_103701.K2_OnProjectileInfoForceChanged_ThreadSafe
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FProjectileForceChangedInfo&InProjectileForceChangedInfo                           (ConstParm, Parm, OutParm, ReferenceParm)

void APyProjectile_103701::K2_OnProjectileInfoForceChanged_ThreadSafe(const struct FProjectileForceChangedInfo& InProjectileForceChangedInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_103701", "K2_OnProjectileInfoForceChanged_ThreadSafe");

	Params::PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe Parms{};

	Parms.InProjectileForceChangedInfo = std::move(InProjectileForceChangedInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityChargeSingle_103701.Consume
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityChargeSingle_103701::Consume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_103701", "Consume");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityChargeSingle_103701.Restore
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityChargeSingle_103701::Restore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_103701", "Restore");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityCharge_103701::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetStyle
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FWidgetStyle_AbilityCharge&Style                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_AbilityCharge_103701::SetStyle(const struct FWidgetStyle_AbilityCharge& Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "SetStyle");

	Params::PyWidget_AbilityCharge_103701_SetStyle Parms{};

	Parms.Style = std::move(Style);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetPercent
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InCurrentValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::SetPercent(float InCurrentValue, float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "SetPercent");

	Params::PyWidget_AbilityCharge_103701_SetPercent Parms{};

	Parms.InCurrentValue = InCurrentValue;
	Parms.InMaxValue = InMaxValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetSpeed
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InMaxValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InSpeedValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::SetSpeed(float InMaxValue, float InSpeedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "SetSpeed");

	Params::PyWidget_AbilityCharge_103701_SetSpeed Parms{};

	Parms.InMaxValue = InMaxValue;
	Parms.InSpeedValue = InSpeedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.UpdatePercentWithDebounce
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   InCurrentValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::UpdatePercentWithDebounce(float InCurrentValue, float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "UpdatePercentWithDebounce");

	Params::PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce Parms{};

	Parms.InCurrentValue = InCurrentValue;
	Parms.InMaxValue = InMaxValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetSegmentCur
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   SegmentCur                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::SetSegmentCur(int32 SegmentCur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "SetSegmentCur");

	Params::PyWidget_AbilityCharge_103701_SetSegmentCur Parms{};

	Parms.SegmentCur = SegmentCur;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.CustomActivate
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityCharge_103701::CustomActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "CustomActivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.CustomDeactivate
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityCharge_103701::CustomDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "CustomDeactivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invisible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::SetVisible(bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "SetVisible");

	Params::PyWidget_AbilityCharge_103701_SetVisible Parms{};

	Parms.Invisible = Invisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetVisibleImmediately
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Invisible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::SetVisibleImmediately(bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "SetVisibleImmediately");

	Params::PyWidget_AbilityCharge_103701_SetVisibleImmediately Parms{};

	Parms.Invisible = Invisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.PlayUIAudio
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AudioID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::PlayUIAudio(int32 AudioID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "PlayUIAudio");

	Params::PyWidget_AbilityCharge_103701_PlayUIAudio Parms{};

	Parms.AudioID = AudioID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.PostUIAudioCallback
// (Native, Public, BlueprintCallable)
// Parameters:
// EAkCallbackType                         CallbackType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*                  CallbackInfo                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_103701::PostUIAudioCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_103701", "PostUIAudioCallback");

	Params::PyWidget_AbilityCharge_103701_PostUIAudioCallback Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

