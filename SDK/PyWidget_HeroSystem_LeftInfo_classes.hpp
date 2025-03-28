﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_LeftInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_HeroSystem_LeftInfo.PyWidget_HeroSystem_LeftInfo
// 0x0098 (0x0688 - 0x05F0)
class UPyWidget_HeroSystem_LeftInfo : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Role_Unknown;                                      // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Role_Tank;                                         // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Role_Damage;                                       // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Role_Support;                                      // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           RedInkHeroColor;                                   // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            DarkBgRelativeTextColor;                           // 0x0620(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            DarkBgRealNameColor;                               // 0x0634(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                           DarkBgShadowColor;                                 // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           LightBgShadowColor;                                // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   DescText;                                          // 0x0668(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_HeroSign;                                      // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HeroSystem_LeftInfo">();
	}
	static class UPyWidget_HeroSystem_LeftInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HeroSystem_LeftInfo>();
	}
};

}

