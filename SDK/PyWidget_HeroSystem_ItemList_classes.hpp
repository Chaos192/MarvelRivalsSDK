﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_ItemList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_HeroSystem_ItemList.PyWidget_HeroSystem_ItemList
// 0x0048 (0x0638 - 0x05F0)
class UPyWidget_HeroSystem_ItemList : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                HeroSystem_ItemUnit;                               // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FixColumnCount;                                    // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemCount;                                         // 0x05FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ListItemSize;                                      // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PreviewItemCount;                                  // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_614[0x4];                                      // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class FString& ItemId)> OnItemSelected;                      // 0x0618(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool IsHover, const class FString& ItemId)> OnItemHovered;         // 0x0628(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void MarvelSetVisible(bool Visible);
	class UWidget* OnTileViewNav(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HeroSystem_ItemList">();
	}
	static class UPyWidget_HeroSystem_ItemList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HeroSystem_ItemList>();
	}
};

}

