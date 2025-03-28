﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DropDownList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_DropDownList.PyWidget_DropDownList
// 0x0E20 (0x1570 - 0x0750)
class UPyWidget_DropDownList : public UPyWidget_Button
{
public:
	bool                                          IsExpandUp;                                        // 0x0750(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_751[0x7];                                      // 0x0751(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           ItemTextList;                                      // 0x0758(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                     ItemIconList;                                      // 0x0768(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<int32>                                 ItemHeroIDList;                                    // 0x0778(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                   ItemColorList;                                     // 0x0788(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                   ItemLeftColorList;                                 // 0x0798(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                         ItemCustomeTagList;                                // 0x07A8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<bool>                                  ItemEnableList;                                    // 0x07B8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                ItemIconWidget;                                    // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                HeroIconWidget;                                    // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                PlatformIconWidget;                                // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 ItemPlatformList;                                  // 0x07E0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                Title_Padding;                                     // 0x07F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FButtonStyle                           Title_BtnStyle;                                    // 0x0800(0x0400)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                              Title_BtnSize;                                     // 0x0C00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                Title_TexturePadding;                              // 0x0C10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                            Title_TextColor;                                   // 0x0C20(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_C34[0xC];                                      // 0x0C34(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Arrow_Brush;                                       // 0x0C40(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                                Arrow_Padding;                                     // 0x0D10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                            Title_TipsBrush;                                   // 0x0D20(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                         Item_FadeInTime;                                   // 0x0DF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                Item_Padding;                                      // 0x0DF4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_E04[0xC];                                      // 0x0E04(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Item_BGBrush;                                      // 0x0E10(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FButtonStyle                           Item_BtnStyle;                                     // 0x0EE0(0x0400)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                              Item_BtnSize;                                      // 0x12E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                Item_BtnPadding;                                   // 0x12F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                            Item_TextDefaultColor;                             // 0x1300(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Item_TextSelectedColor;                            // 0x1314(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Item_TextHoveredColor;                             // 0x1328(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_133C[0x4];                                     // 0x133C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Item_TipsBrush;                                    // 0x1340(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                            Item_CheckBrush;                                   // 0x1410(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                                Item_ScrollPadding;                                // 0x14E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          IsExtended;                                        // 0x14F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14F1[0x3];                                     // 0x14F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DefaultItemID;                                     // 0x14F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemId;                                            // 0x14F8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinScrollItemThreshold;                            // 0x14FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IconColorAutoChange;                               // 0x1500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MonitorScrollBox;                                  // 0x1501(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsPreShowTips;                                     // 0x1502(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1503[0x5];                                     // 0x1503(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AllHeroText;                                       // 0x1508(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                             AllHeroIcon;                                       // 0x1520(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DontSetDefaultItemIDOnUpdateStyle;                 // 0x1528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1529[0x7];                                     // 0x1529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool IsExtended)> OnExtendChanged;                                 // 0x1530(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 ItemId)>  OnItemIDChanged;                                   // 0x1540(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 HeroID)>  OnHeroIDChanged;                                   // 0x1550(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& CustomeTag)> OnCustomeTagChanged;             // 0x1560(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	class UWidget* OnGetMenuContent();
	bool ShouldEnableInput();
	void OnCascadingVisibleChanged(bool Visible);
	void SetIsExtend(bool IsExtended_0);
	void SetEnabled(bool Enabled);
	int32 GetItemID();
	void SetItemID(int32 ItemId_0);
	void SetItemTextList(const TArray<class FText>& ItemTextList_0);
	void SetItemIconList(const TArray<class UTexture2D*>& ItemIconList_0);
	void SetItemHeroIDList(const TArray<int32>& ItemHeroIDList_0);
	void SetItemColorList(const TArray<struct FLinearColor>& ItemColorList_0);
	void SetItemLeftColorList(const TArray<struct FLinearColor>& ItemLeftColorList_0);
	void SetItemCustomeTagList(const TArray<class FString>& ItemCustomeTagList_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_DropDownList">();
	}
	static class UPyWidget_DropDownList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_DropDownList>();
	}
};

}

