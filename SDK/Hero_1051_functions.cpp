﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1051

#include "Basic.hpp"

#include "Hero_1051_classes.hpp"
#include "Hero_1051_parameters.hpp"


namespace SDK
{

// Function Hero_1051.Ability_105131.OnDashFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAbility_105131::OnDashFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105131", "OnDashFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Hero_1051.Ability_105141.EndMovement
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UAbility_105141::EndMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "EndMovement");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.Ability_105141.GetPortalFromHitResult
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// const struct FHitResult&                HitResult                                              (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbility_105141::GetPortalFromHitResult(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "GetPortalFromHitResult");

	Params::Ability_105141_GetPortalFromHitResult Parms{};

	Parms.HitResult = std::move(HitResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Hero_1051.Ability_105141.OnServerReceiveClientEndMovement
// (Final, Native, Protected)

void UAbility_105141::OnServerReceiveClientEndMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "OnServerReceiveClientEndMovement");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.Ability_105141.OnTargetActorChangedByPortal
// (Final, Native, Private)
// Parameters:
// class APortalViewActor*                 InPortal                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbility_105141::OnTargetActorChangedByPortal(class APortalViewActor* InPortal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "OnTargetActorChangedByPortal");

	Params::Ability_105141_OnTargetActorChangedByPortal Parms{};

	Parms.InPortal = InPortal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.Ability_105141.ResetMovementComp
// (Final, Native, Protected, BlueprintCallable)

void UAbility_105141::ResetMovementComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "ResetMovementComp");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.Ability_105141.SetInitVelocity
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FVector&                   ClientJumpEndPoint                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   ClientMiddlePoint                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbility_105141::SetInitVelocity(const struct FVector& ClientJumpEndPoint, const struct FVector& ClientMiddlePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "SetInitVelocity");

	Params::Ability_105141_SetInitVelocity Parms{};

	Parms.ClientJumpEndPoint = std::move(ClientJumpEndPoint);
	Parms.ClientMiddlePoint = std::move(ClientMiddlePoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.Ability_105141.SetupStartVelocity
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FVector&                   TargetVelocity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   MaxSpeed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbility_105141::SetupStartVelocity(const struct FVector& TargetVelocity, float MaxSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "SetupStartVelocity");

	Params::Ability_105141_SetupStartVelocity Parms{};

	Parms.TargetVelocity = std::move(TargetVelocity);
	Parms.MaxSpeed = MaxSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.Ability_105141.UpdateTargetLocation
// (Final, Native, Protected, BlueprintCallable)

void UAbility_105141::UpdateTargetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105141", "UpdateTargetLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.TraceComponent_10515101.DoTrace
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// const TArray<struct FVector>&           ValidPoints                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTraceComponent_10515101::DoTrace(const TArray<struct FVector>& ValidPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TraceComponent_10515101", "DoTrace");

	Params::TraceComponent_10515101_DoTrace Parms{};

	Parms.ValidPoints = std::move(ValidPoints);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.Ability_105151.GetPointRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FVector&                   InNormal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FTransform&                StandardTransform                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UAbility_105151::GetPointRotation(const struct FVector& InNormal, const struct FTransform& StandardTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105151", "GetPointRotation");

	Params::Ability_105151_GetPointRotation Parms{};

	Parms.InNormal = std::move(InNormal);
	Parms.StandardTransform = std::move(StandardTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Hero_1051.Ability_105162.SwitchTimelineTask
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const class FName&                      SectionName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbility_105162::SwitchTimelineTask(const class FName& SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_105162", "SwitchTimelineTask");

	Params::Ability_105162_SwitchTimelineTask Parms{};

	Parms.SectionName = SectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.BenjaminGrimAnimInstance.GetSynergyRideAnimation
// (Final, Native, Protected, HasOutParams)
// Parameters:
// const struct FAnimUpdateContext&        PoseContext                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBenjaminGrimAnimInstance::GetSynergyRideAnimation(const struct FAnimUpdateContext& PoseContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BenjaminGrimAnimInstance", "GetSynergyRideAnimation");

	Params::BenjaminGrimAnimInstance_GetSynergyRideAnimation Parms{};

	Parms.PoseContext = std::move(PoseContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.BenjaminGrimAnimInstance.GetSynergyRideStartAnimation
// (Final, Native, Protected, HasOutParams)
// Parameters:
// const struct FAnimUpdateContext&        PoseContext                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBenjaminGrimAnimInstance::GetSynergyRideStartAnimation(const struct FAnimUpdateContext& PoseContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BenjaminGrimAnimInstance", "GetSynergyRideStartAnimation");

	Params::BenjaminGrimAnimInstance_GetSynergyRideStartAnimation Parms{};

	Parms.PoseContext = std::move(PoseContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.BenjaminGrimAnimInstance.OnTagUpdated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              TagUpdated                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    TagExists                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBenjaminGrimAnimInstance::OnTagUpdated(const struct FGameplayTag& TagUpdated, bool TagExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BenjaminGrimAnimInstance", "OnTagUpdated");

	Params::BenjaminGrimAnimInstance_OnTagUpdated Parms{};

	Parms.TagUpdated = std::move(TagUpdated);
	Parms.TagExists = TagExists;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.BenjaminGrimAnimInstance.UpdateSynergyRideStartNode
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FAnimUpdateContext&        Context                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UBenjaminGrimAnimInstance::UpdateSynergyRideStartNode(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BenjaminGrimAnimInstance", "UpdateSynergyRideStartNode");

	Params::BenjaminGrimAnimInstance_UpdateSynergyRideStartNode Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.BanjaminAnimInstance_105161.OnGroundDetailPostBecomeRelevant
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FAnimUpdateContext&        Context                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UBanjaminAnimInstance_105161::OnGroundDetailPostBecomeRelevant(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BanjaminAnimInstance_105161", "OnGroundDetailPostBecomeRelevant");

	Params::BanjaminAnimInstance_105161_OnGroundDetailPostBecomeRelevant Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.BanjaminAnimInstance_105161.OnReleantSynergyRideNode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FAnimUpdateContext&        Context                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UBanjaminAnimInstance_105161::OnReleantSynergyRideNode(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BanjaminAnimInstance_105161", "OnReleantSynergyRideNode");

	Params::BanjaminAnimInstance_105161_OnReleantSynergyRideNode Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1051.BenjaminGrimCharacter.SetSynergyExtraCapsuleComponentEnabled
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                                    bEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABenjaminGrimCharacter::SetSynergyExtraCapsuleComponentEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BenjaminGrimCharacter", "SetSynergyExtraCapsuleComponentEnabled");

	Params::BenjaminGrimCharacter_SetSynergyExtraCapsuleComponentEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

