﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WindowModeAndResolutionLogic

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryWindowModeOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionHandler.BP_OnApply
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryResolutionHandler_BP_OnApply final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryResolutionHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.HardcodeSyncTargetMoniter
// 0x0050 (0x0050 - 0x0000)
struct UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter final
{
public:
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.BP_OnApply
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryWindowModeHandler_BP_OnApply final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryWindowModeHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      O;                                                 // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryWindowModeHandler_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionAspectHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryResolutionAspectHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionAspectHandler.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryResolutionAspectHandler_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionAspectOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryResolutionAspectOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryResolutionOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelectionOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelection.BP_OnApply
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryMonitorSelection_BP_OnApply final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelection.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryMonitorSelection_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      O;                                                 // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelection.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryMonitorSelection_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};

}

