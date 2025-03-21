﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_AbilityCharge_V5

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5
// 0x0028 (0x0618 - 0x05F0)
class UPyWidget_AbilityChargeSingle_v5 : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Anim_FullGlow;                                     // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_UseSkill;                                     // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Charge;                                       // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Percent;                                      // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UpdateInterval;                                    // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Construct();
	void Destruct();
	void SetStyle(const struct FWidgetStyle_AbilityCharge& Style);
	void SetPercent(float Percent);
	void SetChargeSpeed(float Speed);
	void Consume();
	void Restore();
	void MarvelSetVisible(bool Visible);
	void MarvelSetVisibleImmediately(bool bInVisible);
	void DelaySetVisible(float DelayTime, bool Invisible);
	void HideSelf();
	void ShowSelf();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityChargeSingle_v5">();
	}
	static class UPyWidget_AbilityChargeSingle_v5* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityChargeSingle_v5>();
	}
};

// PythonClass PyWidget_AbilityCharge_V5.PyWidget_CommonChargeSingle_V5
// 0x0020 (0x0638 - 0x0618)
class UPyWidget_CommonChargeSingle_V5 final : public UPyWidget_AbilityChargeSingle_v5
{
public:
	class UImage*                                 img_bg;                                            // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 img_frame;                                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Charge;                                        // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Glow_Vx;                                       // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetStyle(const struct FWidgetStyle_AbilityCharge& Style);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonChargeSingle_V5">();
	}
	static class UPyWidget_CommonChargeSingle_V5* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonChargeSingle_V5>();
	}
};

// PythonClass PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5
// 0x0138 (0x06E0 - 0x05A8)
class UPyWidget_AbilityCharge_V5 final : public UWidget_AbilityEnergy_Charge
{
public:
	TSubclassOf<class UUserWidget>                SegmentClass;                                      // 0x05A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetStyle_AbilityCharge             DefaultStyle;                                      // 0x05B0(0x0110)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         FadeInInterval;                                    // 0x06C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SegmentMax;                                        // 0x06C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SegmentCur;                                        // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Percent;                                           // 0x06CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 InCurrentValue)> OnCurSegmentChanged;                        // 0x06D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void SetStyle(const struct FWidgetStyle_AbilityCharge& Style);
	void SetSegmentMax(int32 SegmentMax_0);
	void SetPercent(float InCurrentValue, float InMaxValue);
	void UpdatePercentWithDebounce(float InCurrentValue, float InMaxValue);
	void SetSpeed(float InMaxValue, float InSpeedValue);
	void SetSegmentCur(int32 SegmentCur_0);
	void OnChargeWidgetClassLoaded(class UObject* ChargeWidgetClass);
	void CustomActivate();
	void CustomDeactivate();
	void SetVisible(bool Invisible);
	void SetVisibleImmediately(bool Invisible);
	void PlayUIAudio(int32 AudioID);
	void PlayUIChargeAudio(int32 ChargeSingle, int32 ChargeMax);
	void PostUIAudioCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityCharge_V5">();
	}
	static class UPyWidget_AbilityCharge_V5* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityCharge_V5>();
	}
};

}

