﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CommonItem_V2

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetItemIcon
// 0x0038 (0x0038 - 0x0000)
struct PyWidget_CommonItem_SetItemIcon final
{
public:
	class UTexture2D*                             Img_Icon;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Image_Icon_Soft;                                   // 0x0008(0x0030)(Parm, UObjectWrapper, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsNameVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsNameVisible final
{
public:
	bool                                          IsNameVisible_0;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetItemName
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_CommonItem_SetItemName final
{
public:
	class FText                                   ItemName_0;                                        // 0x0000(0x0018)(Parm)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetConvertNum
// 0x0020 (0x0020 - 0x0000)
struct PyWidget_CommonItem_SetConvertNum final
{
public:
	int32                                         ConvertNum;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencyId;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Small;                                             // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetItemData
// 0x0020 (0x0020 - 0x0000)
struct PyWidget_CommonItem_SetItemData final
{
public:
	class FString                                 ItemId_0;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     ItemType_0;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemNum_0;                                         // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Multiple;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Small;                                             // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetItemObject
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_CommonItem_SetItemObject final
{
public:
	class UObject*                                ItemObject;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_CommonItem_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetItemIconQuality
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetItemIconQuality final
{
public:
	EItemQualityType                              ItemQuality;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsFocusable
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsFocusable final
{
public:
	bool                                          IsFocusable;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.OnFocusReceived
// 0x0100 (0x0100 - 0x0000)
struct PyWidget_CommonItem_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00C0)(Parm, OutParm, ReturnParm)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsHover
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsHover final
{
public:
	bool                                          IsHover_0;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetItemNum
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_CommonItem_SetItemNum final
{
public:
	int32                                         ItemNum_0;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Multiple;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsNumVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsNumVisible final
{
public:
	bool                                          IsNumVisible;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsEmpty
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsEmpty final
{
public:
	bool                                          IsEmpty_0;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsNeedClick
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsNeedClick final
{
public:
	bool                                          IsNeedClick_0;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsNeedTips
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsNeedTips final
{
public:
	bool                                          IsNeedTips_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsSelected
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsSelected final
{
public:
	bool                                          IsSelected_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsSelectedImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsSelectedImmediately final
{
public:
	bool                                          IsSelected_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsGot
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsGot final
{
public:
	bool                                          IsGot_0;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsExpire
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsExpire final
{
public:
	bool                                          IsExpire_0;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsShowRed
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsShowRed final
{
public:
	bool                                          IsShowRed_0;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsActivity
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsActivity final
{
public:
	bool                                          IsActivity;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsLocked
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsLocked final
{
public:
	bool                                          IsLocked_0;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsEquipped
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsEquipped final
{
public:
	bool                                          IsEquipped_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetItemSize
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_CommonItem_SetItemSize final
{
public:
	struct FVector2D                              ItemSize_0;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsOverlay
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsOverlay final
{
public:
	bool                                          IsOverlay;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_CommonItem_V2.PyWidget_CommonItem.SetIsNewReddotType
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CommonItem_SetIsNewReddotType final
{
public:
	bool                                          IsNewReddotType;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

