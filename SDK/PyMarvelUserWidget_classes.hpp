﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelUserWidget

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "EnhancedInput_structs.hpp"


namespace SDK
{

// PythonClass PyMarvelUserWidget.PyMarvelUserWidget
// 0x0048 (0x05F0 - 0x05A8)
#pragma pack(push, 0x1)
class alignas(0x08) UPyMarvelUserWidget : public UMarvelUserWidget
{
public:
	class UAkAudioEvent*                          AkEvent_OnVisible;                                 // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnInvisible;                               // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SwitchPanelState;                                  // 0x05B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelMusicItem*                       MusicItem_OnTop;                                   // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TransitionTime;                                    // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlackTime;                                         // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SystemUIName;                                      // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsOverrideDefaultFocus;                            // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static void WhyIsWidgetInvisible(class UWidget* InWidget);

	void OnInitialized();
	void Construct();
	void Destruct();
	void OnBecomeTop();
	void OnBecomeNoneTop();
	void OnReceiveInputAction(class FName ActionName, const EInputEvent EventType);
	void OnReceiveEnhancedInputAction(const class UInputAction* Action);
	void OnReceiveEnhancedInputActionWithBoolValue(const class UInputAction* Action, bool Value);
	void OnReceiveEnhancedInputActionWithFloatValue(const class UInputAction* Action, float Value);
	void OnReceiveEnhancedInputActionWithV2Value(const class UInputAction* Action, const struct FVector2D& Value);
	void OnReceiveEnhancedInputActionWithV3Value(const class UInputAction* Action, const struct FVector& Value);
	void OnReceiveEnhancedInputActionWithTriggerEvent(const class UInputAction* Action, ETriggerEvent TriggerEvent);
	void OnReceiveInputAxis(class FName Axis, float AxisValue);
	void OnReceiveInputKey(const struct FKey& InKey, const EInputEvent EventType);
	void OnReceiveAxisKey(const struct FKey& InKey, float AxisValue);
	bool ShouldEnableInput();
	void OnCascadingVisibleChanged(bool Visible);
	void MarkGPM();
	bool ShouldBeVisible();
	void MarvelSetVisible(bool Visible);
	void MarvelSetVisibleImmediately(bool Visible);
	void SetAnimationAtTime(class UWidgetAnimation* InAnimation, float Time);
	void PlayAnimationTimeRangeFixed(class UWidgetAnimation* Animation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool RestoreState);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetIsOpenUpdateDefaultFocus(bool is_open);
	void SetDefaultFocusWidget(class UWidget* Widget);
	void SetFocusingWidget(class UWidget* Widget);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void MarvelOnFocusChanging();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelUserWidget">();
	}
	static class UPyMarvelUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyMarvelUserWidget>();
	}
};
#pragma pack(pop)

}

