﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LoadingPanelContainer

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LoadingPanelContainer.PyWidget_LoadingPanelContainer
// 0x0080 (0x0460 - 0x03E0)
class UPyWidget_LoadingPanelContainer : public UWidget_LoadingPanelContainer
{
public:
	class UWidgetAnimation*                       Anim_Loop;                                         // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_FadeIn;                                       // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_FadeOut;                                      // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelButton*                          Btn_Cursor;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNamedSlot*                             ChatPanelSlot;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                            WBP_Common_Panel_Watermark;                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPyWidget_Loading_Base*                 WBP_Loading_Default;                               // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULazyWidget*                            Lazy_WBP_Loading_Game;                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULazyWidget*                            Lazy_WBP_Loading_RankGame;                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULazyWidget*                            Lazy_WBP_Replay_Loading;                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULazyWidget*                            Lazy_WBP_Loading_CareerHighLight;                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULazyWidget*                            Lazy_WBP_Common_Loading;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULazyWidget*                            Lazy_WBP_Loading_Lobby;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULazyWidget*                            Lazy_WBP_Loading_HeroLogo;                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool bInVisible)> OnVisibleChanged;                                // 0x0450(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void MarvelSetVisible(bool bInVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LoadingPanelContainer">();
	}
	static class UPyWidget_LoadingPanelContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LoadingPanelContainer>();
	}
};

}

