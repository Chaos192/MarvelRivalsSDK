﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroVoiceLines

#include "Basic.hpp"

#include "WBP_HeroVoiceLines_classes.hpp"
#include "WBP_HeroVoiceLines_parameters.hpp"


namespace SDK
{

// Function WBP_HeroVoiceLines.WBP_HeroVoiceLines_C.CombineToString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FString&                    Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString*                          Out                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_HeroVoiceLines_C::CombineToString(class AActor* Character, const class FString& Text, class FString* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroVoiceLines_C", "CombineToString");

	Params::WBP_HeroVoiceLines_C_CombineToString Parms{};

	Parms.Character = Character;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function WBP_HeroVoiceLines.WBP_HeroVoiceLines_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HeroVoiceLines_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroVoiceLines_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HeroVoiceLines.WBP_HeroVoiceLines_C.ExecuteUbergraph_WBP_HeroVoiceLines
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroVoiceLines_C::ExecuteUbergraph_WBP_HeroVoiceLines(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroVoiceLines_C", "ExecuteUbergraph_WBP_HeroVoiceLines");

	Params::WBP_HeroVoiceLines_C_ExecuteUbergraph_WBP_HeroVoiceLines Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HeroVoiceLines.WBP_HeroVoiceLines_C.OnVoiceFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FString&                    FailedCallStack                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Cooldown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroVoiceLines_C::OnVoiceFailed(class AActor* Character, const class FString& FailedCallStack, float Cooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroVoiceLines_C", "OnVoiceFailed");

	Params::WBP_HeroVoiceLines_C_OnVoiceFailed Parms{};

	Parms.Character = Character;
	Parms.FailedCallStack = std::move(FailedCallStack);
	Parms.Cooldown = Cooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HeroVoiceLines.WBP_HeroVoiceLines_C.OnVoicePosted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarvelVoiceType                        VoiceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   VoiceID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      VoiceLine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                           ToCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroVoiceLines_C::OnVoicePosted(EMarvelVoiceType VoiceType, class AActor* Character, int32 VoiceID, const class FText& VoiceLine, class AActor* ToCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroVoiceLines_C", "OnVoicePosted");

	Params::WBP_HeroVoiceLines_C_OnVoicePosted Parms{};

	Parms.VoiceType = VoiceType;
	Parms.Character = Character;
	Parms.VoiceID = VoiceID;
	Parms.VoiceLine = std::move(VoiceLine);
	Parms.ToCharacter = ToCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HeroVoiceLines.WBP_HeroVoiceLines_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroVoiceLines_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroVoiceLines_C", "PreConstruct");

	Params::WBP_HeroVoiceLines_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HeroVoiceLines.WBP_HeroVoiceLines_C.ReachCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FString&                    Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                                  Cooldown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroVoiceLines_C::ReachCooldown(class AActor* Character, const class FString& Text, double Cooldown, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroVoiceLines_C", "ReachCooldown");

	Params::WBP_HeroVoiceLines_C_ReachCooldown Parms{};

	Parms.Character = Character;
	Parms.Text = std::move(Text);
	Parms.Cooldown = Cooldown;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

