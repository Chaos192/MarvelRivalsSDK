﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103651

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_103651.PyCue_Buff_10365102
// 0x1590 (0x2650 - 0x10C0)
class APyCue_Buff_10365102 : public ACue_Buff_WebTying
{
public:
	class UFXSystemAsset*                         TrajectoryEffectAsset;                             // 0x10C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TrajectoryInitSocketName;                          // 0x10C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         TrajectoryHitEffectAsset;                          // 0x10D8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TrajectoryHitAudioID;                              // 0x10E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StartBundleAudioID;                                // 0x10E4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LoopBundleAudioID;                                 // 0x10E8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EndBundleAudioID;                                  // 0x10EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BundleEffectDuration;                              // 0x10F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayToSpawnBeamEffect;                            // 0x10F4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartPointCenterOffset;                            // 0x10F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10FC[0x4];                                     // 0x10FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, float>                            StartPointCenterOffsetDict;                        // 0x1100(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         StartPointRaiusOffset;                             // 0x1150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartPointMinRaius;                                // 0x1154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartPointRandomHeightThreshold;                   // 0x1158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartPointRandomAngleThreshold;                    // 0x115C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EObjectTypeQuery>                      TraceObjectType;                                   // 0x1160(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         StartPointInMeshLength;                            // 0x1170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1174[0x4];                                     // 0x1174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilityTargetFilter             LineTraceFilter;                                   // 0x1178(0x0500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_1678[0x8];                                     // 0x1678(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilityTraceContext             LineTraceContext;                                  // 0x1680(0x0F90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         EndPointRadiusOffset;                              // 0x2610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndPointRandomRadiusThreshold;                     // 0x2614(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndPointRandomAngleThreshold;                      // 0x2618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_261C[0x4];                                     // 0x261C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     DecalMaterial;                                     // 0x2620(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DecalSize;                                         // 0x2628(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecalFadeOutDuration;                              // 0x2640(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_OnTrajectoryHit();
	void SpawnBeamEffect();
	void TimeToFadeOut();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Buff_10365102">();
	}
	static class APyCue_Buff_10365102* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Buff_10365102>();
	}
};

}

