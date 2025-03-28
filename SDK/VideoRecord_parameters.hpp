﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VideoRecord

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction VideoRecord.UISettingVideoRecordParam.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingVideoRecordParam_BP_OnBtnClicked final
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

// PythonFunction VideoRecord.UISettingVideoRecordOpenPath.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingVideoRecordOpenPath_BP_OnBtnClicked final
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

// PythonFunction VideoRecord.UISettingVideoRecordChangePath.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingVideoRecordChangePath_BP_OnBtnClicked final
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

