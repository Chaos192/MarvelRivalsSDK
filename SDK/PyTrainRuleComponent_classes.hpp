﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTrainRuleComponent

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "MarvelLevel_structs.hpp"
#include "MarvelLevel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "PyRuleComponent_classes.hpp"


namespace SDK
{

// PythonClass PyTrainRuleComponent.PyTrainConfig
// 0x01C8 (0x01F8 - 0x0030)
class UPyTrainConfig final : public UMarvelRuleConfig
{
public:
	TMap<ETrainCustomOp, bool>                    CustomOpenMap;                                     // 0x0030(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAction, struct FGameplayTag>       TrainTag;                                          // 0x0080(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAreaType, TArray<int32>>           InTrainBuff;                                       // 0x00D0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAreaType, TArray<int32>>           FriendTrainBuff;                                   // 0x0120(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAction, float>                     IntervalTimeRecord;                                // 0x0170(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<int32>                                 TeleportBuff;                                      // 0x01C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         AIDelayProcess;                                    // 0x01D0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TeleportCD;                                        // 0x01D4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SelectBuffID;                                      // 0x01D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTrainCooperateRespawn>         TrainRespawnList;                                  // 0x01E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         FriendHarmOpenDelay;                               // 0x01F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FriendHarmCloseDelay;                              // 0x01F4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTrainConfig">();
	}
	static class UPyTrainConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTrainConfig>();
	}
};

// PythonClass PyTrainRuleComponent.PyTrainRuleComponent
// 0x01E0 (0x02D0 - 0x00F0)
class UPyTrainRuleComponent final : public UPyRuleComponent
{
public:
	int32                                         HolderUID;                                         // 0x00F0(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ETrainCustomOp, bool>                    CustomOpenMap;                                     // 0x00F8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAction, struct FGameplayTag>       TrainTag;                                          // 0x0148(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAreaType, TArray<int32>>           InTrainBuff;                                       // 0x0198(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAreaType, TArray<int32>>           FriendTrainBuff;                                   // 0x01E8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         SelectBuffID;                                      // 0x0238(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TeleportBuff;                                      // 0x0240(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<ETrainAction, float>                     IntervalTimeRecord;                                // 0x0250(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          bOpenFriendHarm;                                   // 0x02A0(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CloseSkillCDList;                                  // 0x02A8(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	int32                                         AIDelayProcess;                                    // 0x02B8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TeleportCD;                                        // 0x02BC(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTrainCooperateRespawn>         TrainRespawnList;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void NotifyHolderChange(int32 holder_uid);
	void OnRep_HolderUID();
	void CustomSettingChanged(ETrainCustomOp Op, bool change_to);
	void ChangePlayerStateBattleSide(class APlayerState* PS, EBattleSide battle_side);
	void OnRep_OpenFriendHarm();
	void OnRep_CloseSkillCDList();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTrainRuleComponent">();
	}
	static class UPyTrainRuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTrainRuleComponent>();
	}
};

}

