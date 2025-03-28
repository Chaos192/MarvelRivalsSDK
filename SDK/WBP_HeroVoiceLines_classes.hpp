﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroVoiceLines

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroVoiceLines.WBP_HeroVoiceLines_C
// 0x0070 (0x0428 - 0x03B8)
class UWBP_HeroVoiceLines_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_1;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                UnitMargin;                                        // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<class FString, double>                   LastPostTime;                                      // 0x03D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void CombineToString(class AActor* Character, const class FString& Text, class FString* Out);
	void Construct();
	void ExecuteUbergraph_WBP_HeroVoiceLines(int32 EntryPoint);
	void OnVoiceFailed(class AActor* Character, const class FString& FailedCallStack, float Cooldown);
	void OnVoicePosted(EMarvelVoiceType VoiceType, class AActor* Character, int32 VoiceID, const class FText& VoiceLine, class AActor* ToCharacter);
	void PreConstruct(bool IsDesignTime);
	void ReachCooldown(class AActor* Character, const class FString& Text, double Cooldown, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroVoiceLines_C">();
	}
	static class UWBP_HeroVoiceLines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroVoiceLines_C>();
	}
};

}

