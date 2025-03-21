﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattleCommunication

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel
// 0x0148 (0x0738 - 0x05F0)
class UPyWidget_BattleCommunicationPanel : public UPyMarvelUserWidget
{
public:
	bool                                          IsSignalResponsePanel;                             // 0x05E9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsPersonalPanel;                                   // 0x05EA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5EB[0x5];                                      // 0x05EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   GamepadRightThumbstick;                            // 0x05F0(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GamepadDeadZone;                                   // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_614[0x4];                                      // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUIActionData                          CancelActionData;                                  // 0x0618(0x0058)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                              TriggerSignalScale4;                               // 0x0670(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              TriggerSignalScale8;                               // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnHovered;                                 // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TArray<int32>>      ActivitySignalPanelInfo;                           // 0x0698(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 idx)>     OnCommIDChangedDispatcher;                         // 0x06E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 idx)>     OnPersonaliseIDChangedDispatcher;                  // 0x06F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FGameplayTag& Tag)> OnSignalTagChangedDispatcher;     // 0x0708(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 idx)>     OnClickBtnListen;                                  // 0x0718(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool IsVisible)> OnSignalPanelVisibleChanged;                      // 0x0728(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void MarvelSetVisible(bool Visible);
	void OnInitialized();
	void SetVisible(bool Invisible);
	void SetEnable(bool InEnabled);
	void SetHoveringIdx(int32 idx);
	void SetIsBattleMode(bool bIsBattleMode);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattleCommunicationPanel">();
	}
	static class UPyWidget_BattleCommunicationPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattleCommunicationPanel>();
	}
};

// PythonClass PyWidget_BattleCommunication.PyWidget_SignalResponsePanel
// 0x0018 (0x0608 - 0x05F0)
class UPyWidget_SignalResponsePanel : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           YesSignalTag;                                      // 0x05EC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           NoSignalTag;                                       // 0x05F8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void SetVisible(bool Invisible);
	void SetState(int32 State);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SignalResponsePanel">();
	}
	static class UPyWidget_SignalResponsePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SignalResponsePanel>();
	}
};

// PythonClass PyWidget_BattleCommunication.PyWidget_CommunicationMenuItem
// 0x01F8 (0x05B0 - 0x03B8)
class UPyWidget_CommunicationMenuItem : public UUserWidget
{
public:
	float                                         Angle;                                             // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         YOffset;                                           // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         XOffset;                                           // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C4[0xC];                                      // 0x03C4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            HoveredStyle;                                      // 0x03D0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            NormalStyle;                                       // 0x04A0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         CommID;                                            // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           HoverColor;                                        // 0x0574(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           NormalColor;                                       // 0x0584(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           FadeSelectColor;                                   // 0x0594(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A4[0x4];                                      // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelKeyUIAsset*                      KeyAsset;                                          // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommunicationMenuItem">();
	}
	static class UPyWidget_CommunicationMenuItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommunicationMenuItem>();
	}
};

}

