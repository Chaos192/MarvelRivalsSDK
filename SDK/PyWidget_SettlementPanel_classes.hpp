﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SettlementPanel

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SettlementPanel.PyWidget_Settlement_Like_MVPIcon
// 0x0010 (0x08B0 - 0x08A0)
class UPyWidget_Settlement_Like_MVPIcon : public UMarvel3DWidget
{
public:
	uint8                                         Pad_898[0x8];                                      // 0x0898(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSlateBrush>                    ChampionIamge;                                     // 0x08A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Settlement_Like_MVPIcon">();
	}
	static class UPyWidget_Settlement_Like_MVPIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Settlement_Like_MVPIcon>();
	}
};

// PythonClass PyWidget_SettlementPanel.PyWidget_SettlementPanel
// 0x00D8 (0x06F0 - 0x0618)
class UPyWidget_SettlementPanel : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_611[0x7];                                      // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuideTipsStyle>                ScoreboardGuideTipsStyle;                          // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                SkipGuideTipsStyle;                                // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                HightlightTipsStyle;                               // 0x0638(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                ShareTipsStyle;                                    // 0x0648(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UInputAction*                           Show_Personal_Progress_PressAction;                // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           Show_Scoreboard_PressAction;                       // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           OpenChatAction;                                    // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSlateBrush>                    ResultIamge;                                       // 0x0670(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                         BlendToMVPCamTime;                                 // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MVPToLikeTime;                                     // 0x0684(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                BGPanel;                                           // 0x0688(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMarvelVideoCaptureSettings            VideoCaptureSetting;                               // 0x0690(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnBecomeTop();
	void MarvelSetVisible(bool Visible);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettlementPanel">();
	}
	static class UPyWidget_SettlementPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettlementPanel>();
	}
};

// PythonClass PyWidget_SettlementPanel.PyWidget_Settlement_Like_Button
// 0x0058 (0x0648 - 0x05F0)
class UPyWidget_Settlement_Like_Button : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_OnLikeThree;                               // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnLikeFive;                                // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnLikeSix;                                 // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           AllyColor1;                                        // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           AllyColor2;                                        // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           EnermyColor1;                                      // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           EnermyColor2;                                      // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Settlement_Like_Button">();
	}
	static class UPyWidget_Settlement_Like_Button* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Settlement_Like_Button>();
	}
};

// PythonClass PyWidget_SettlementPanel.PyWidget_Settlement_Like_PlayerInfo
// 0x0030 (0x08D0 - 0x08A0)
class UPyWidget_Settlement_Like_PlayerInfo : public UMarvel3DWidget
{
public:
	uint8                                         Pad_898[0x8];                                      // 0x0898(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           OwnTextColor;                                      // 0x08A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           AllyTextColor;                                     // 0x08B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           EnemyTextColor;                                    // 0x08C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Settlement_Like_PlayerInfo">();
	}
	static class UPyWidget_Settlement_Like_PlayerInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Settlement_Like_PlayerInfo>();
	}
};

// PythonClass PyWidget_SettlementPanel.PyWidget_HighLight_Text_Vx
// 0x0030 (0x0620 - 0x05F0)
class UPyWidget_HighLight_Text_Vx final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_OnPlayAnimFadeIn;                          // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnPlayAnimFadeOut;                         // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           OwnTextColor;                                      // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           OtherTextColor;                                    // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HighLight_Text_Vx">();
	}
	static class UPyWidget_HighLight_Text_Vx* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HighLight_Text_Vx>();
	}
};

}

