﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Squad_MainPanel

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_LobbyChildPanel_classes.hpp"
#include "PyWidget_Common_Button_classes.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Squad_MainPanel.PyWidget_Squad_MainPanel
// 0x0060 (0x0678 - 0x0618)
class UPyWidget_Squad_MainPanel : public UPyWidget_LobbyChildPanel
{
public:
	class UMarvelOverlay*                         Overlay_SquadRecruit;                              // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                StartMatchStyles;                                  // 0x0620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                MoreModeStyles;                                    // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                ViewMoreModeStyles;                                // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                CancelMatchStyles;                                 // 0x0650(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UInputAction*                           WBP_Squad_Open_Personnal_Panel_Press;              // 0x0660(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                EmoteTip_Styles;                                   // 0x0668(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	void OnNameplatePositioned();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Squad_MainPanel">();
	}
	static class UPyWidget_Squad_MainPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Squad_MainPanel>();
	}
};

// PythonClass PyWidget_Squad_MainPanel.PyWidget_Squad_TrainingBtn
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Squad_TrainingBtn : public UPyMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Squad_TrainingBtn">();
	}
	static class UPyWidget_Squad_TrainingBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Squad_TrainingBtn>();
	}
};

// PythonClass PyWidget_Squad_MainPanel.PyWidget_Squad_Nameplate
// 0x0080 (0x0970 - 0x08F0)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_Squad_Nameplate : public UPyWidget_BaseCommonButton
{
public:
	class UAkAudioEvent*                          AKEvent_HoverAddPlayer;                            // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AKEvent_ClickAddFriend;                            // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_InvitationSucceeded;                       // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                MenuGuideTips;                                     // 0x0900(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UWidget*                                WBP_Nameplate;                                     // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                Overlay_Empty;                                     // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                Overlay_Nameplate;                                 // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                Text_Score;                                        // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                CanvasPanel_Hover;                                 // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Hover_FadeIn;                                 // 0x0938(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            PlayerNameColor_Own;                               // 0x0940(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            PlayerNameColor_TeamMate;                          // 0x0954(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Squad_Nameplate">();
	}
	static class UPyWidget_Squad_Nameplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Squad_Nameplate>();
	}
};
#pragma pack(pop)

// PythonClass PyWidget_Squad_MainPanel.PyWidget_Squad_SwitchHeroBtn
// 0x0048 (0x0638 - 0x05F0)
class UPyWidget_Squad_SwitchHeroBtn : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            Color_Hovered;                                     // 0x05EC(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            Color_Normal;                                      // 0x0600(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            Color_Pressed;                                     // 0x0614(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnClicked;                                         // 0x0628(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Squad_SwitchHeroBtn">();
	}
	static class UPyWidget_Squad_SwitchHeroBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Squad_SwitchHeroBtn>();
	}
};

// PythonClass PyWidget_Squad_MainPanel.PyWidget_Squad_BeginnerBtn
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Squad_BeginnerBtn final : public UPyMarvelUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Squad_BeginnerBtn">();
	}
	static class UPyWidget_Squad_BeginnerBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Squad_BeginnerBtn>();
	}
};

}

