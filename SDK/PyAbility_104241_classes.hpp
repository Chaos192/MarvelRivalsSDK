﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104241

#include "Basic.hpp"

#include "Hero_1042_structs.hpp"
#include "Hero_1042_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104241.PySummonedComp_10424101
// 0x0030 (0x0CD0 - 0x0CA0)
class UPySummonedComp_10424101 : public USummonedComp_10424101
{
public:
	EState_10424101                               State;                                             // 0x0CA0(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEvent_10424101                               Event;                                             // 0x0CA1(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CA2[0x6];                                      // 0x0CA2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnElectronicNestEndTask;                           // 0x0CA8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(EState_10424101 NewState)> OnStateChange;                          // 0x0CB8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void EndPlay();
	void SetState(EState_10424101 NewState);
	void UpdateState();
	void OnRep_State();
	void OnRep_Event();
	void OnWebActivated();
	void SetEvent(EEvent_10424101 NewEvent);
	void K2_OnBeginAgentTask();
	void K2_OnEndAgentTask();
	void K2_OnRecycleAgentTask();
	void MulticastLaunch(const struct FVector& StartLocation, const struct FVector& Velocity);
	void OnProjectileHit(const struct FHitResult& Hit);
	void OnAttachActorDestroyed(class UGeometryCollectionComponent* Component, class FName Name_0);
	void OnChaosBroken(const struct FChaosBreakEvent& BreakEvent);
	void OnAttachComponentFracture(const struct FVector& Point, const struct FVector& Direction);
	void OnPresetDestuctionBegin(class FName LevelName);
	void OnMovementPlaced();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_10424101">();
	}
	static class UPySummonedComp_10424101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_10424101>();
	}
};

// PythonClass PyAbility_104241.PyConfig_104241
// 0x2F60 (0x3020 - 0x00C0)
class UPyConfig_104241 final : public UConfig_PeniParkerExlosiveSpider
{
public:
	int32                                         NestSummonedId;                                    // 0x00C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SpiderSummonedId;                                  // 0x00C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WebSummonedId;                                     // 0x00C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InVincibleBuffId;                                  // 0x00CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMarvelAbilityTraceContext             ThrowTraceContext;                                 // 0x00D0(0x0F90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMarvelAbilityTraceContext             SummonedValidSpaceTraceParam;                      // 0x1060(0x0F90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         ProjectileSpeed;                                   // 0x1FF0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ProjectileGravityScale;                            // 0x1FF4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpreadValidDegree;                                 // 0x1FF8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxToleranceShirnkTime;                            // 0x1FFC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseIntervalTime;                               // 0x2000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReleaseSpiderCount;                                // 0x2004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReleaseSpiderOffset;                               // 0x2008(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxIndicatingRange;                                // 0x2020(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseWebTime;                                    // 0x2024(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpreadTotalTime;                                   // 0x2028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTotalTime;                                  // 0x202C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTime;                                       // 0x2030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2034[0xC];                                     // 0x2034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFindGroundParam                       TargetTraceParam;                                  // 0x2040(0x0FD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                           TraceActorCueTag;                                  // 0x3010(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104241">();
	}
	static class UPyConfig_104241* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104241>();
	}
};

// PythonClass PyAbility_104241.PyAbility_104241
// 0x0000 (0x2588 - 0x2588)
class UPyAbility_104241 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void OnActivateActionPressed(float TimeWaited);
	void OnConfirmEvent(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnCancelEvent(const struct FGameplayAbilityTargetDataHandle& Data);
	void NativeOnMontageCancelled(const class FString& Tag);
	void MissileEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104241">();
	}
	static class UPyAbility_104241* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104241>();
	}
};

// PythonClass PyAbility_104241.PyExplosiveSpiderManager
// 0x0000 (0x0470 - 0x0470)
class UPyExplosiveSpiderManager final : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyExplosiveSpiderManager">();
	}
	static class UPyExplosiveSpiderManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyExplosiveSpiderManager>();
	}
};

// PythonClass PyAbility_104241.PySummoned_10424101
// 0x0010 (0x08D0 - 0x08C0)
#pragma pack(push, 0x1)
class alignas(0x10) APySummoned_10424101 : public ASummoned_10424101
{
public:
	class UPyExplosiveSpiderManager*              SpiderManager;                                     // 0x08C0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	EState_10424101 GetCurrentState();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummoned_10424101">();
	}
	static class APySummoned_10424101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APySummoned_10424101>();
	}
};
#pragma pack(pop)

// PythonClass PyAbility_104241.PyExplosiveSpiderMeshComponent
// 0x0000 (0x0B20 - 0x0B20)
class UPyExplosiveSpiderMeshComponent final : public UInstancedStaticMeshComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyExplosiveSpiderMeshComponent">();
	}
	static class UPyExplosiveSpiderMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyExplosiveSpiderMeshComponent>();
	}
};

// PythonClass PyAbility_104241.PySummonedComp_10424102
// 0x0000 (0x0CA0 - 0x0CA0)
class UPySummonedComp_10424102 : public USummonedComp_10424102
{
public:
	void K2_OnBeginAgentTask();
	void OnNestEndTask();
	void K2_OnEndAgentTask();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_10424102">();
	}
	static class UPySummonedComp_10424102* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_10424102>();
	}
};

// PythonClass PyAbility_104241.PyCue_Ability_Loop_10424101
// 0x0000 (0x0E50 - 0x0E50)
class APyCue_Ability_Loop_10424101 final : public AMarvelCueNotify_Ability
{
public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10424101">();
	}
	static class APyCue_Ability_Loop_10424101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10424101>();
	}
};

// PythonClass PyAbility_104241.PySummonerLoop_10424101_Cue
// 0x0010 (0x0EA0 - 0x0E90)
class APySummonerLoop_10424101_Cue final : public AMarvelCueNotify_Summoned
{
public:
	class USkeletalMeshComponent*                 NestMesh;                                          // 0x0E90(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                        FXNestMeshAnim;                                    // 0x0E98(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonerLoop_10424101_Cue">();
	}
	static class APySummonerLoop_10424101_Cue* GetDefaultObj()
	{
		return GetDefaultObjImpl<APySummonerLoop_10424101_Cue>();
	}
};

// PythonClass PyAbility_104241.PySummonerLoop_10424102_Cue
// 0x0028 (0x0EB8 - 0x0E90)
class APySummonerLoop_10424102_Cue : public AMarvelCueNotify_Summoned
{
public:
	int32                                         MoveStateAudioID;                                  // 0x0E90(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E94[0x4];                                      // 0x0E94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnStopMoveDelegate;                                // 0x0E98(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnBeginMoveDelegate;                               // 0x0EA8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void WhileActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnExecuteAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonerLoop_10424102_Cue">();
	}
	static class APySummonerLoop_10424102_Cue* GetDefaultObj()
	{
		return GetDefaultObjImpl<APySummonerLoop_10424102_Cue>();
	}
};

// PythonClass PyAbility_104241.PySummonerLoop_10424103_Cue
// 0x0018 (0x0ED0 - 0x0EB8)
class APySummonerLoop_10424103_Cue final : public APySummonerLoop_10424102_Cue
{
public:
	class UStaticMesh*                            IdleStaticMesh;                                    // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                            RunStaticMesh;                                     // 0x0EC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   SummonedStaticMesh;                                // 0x0EC8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonerLoop_10424103_Cue">();
	}
	static class APySummonerLoop_10424103_Cue* GetDefaultObj()
	{
		return GetDefaultObjImpl<APySummonerLoop_10424103_Cue>();
	}
};

// PythonClass PyAbility_104241.PyCue_Summoner_Loop_10424105
// 0x00C0 (0x1068 - 0x0FA8)
class APyCue_Summoner_Loop_10424105 final : public ACue_Summoner_Loop_10424105
{
public:
	class UMarvelTimelineComponent*               TimelineComponent;                                 // 0x0FA8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                           WebScaleCurve;                                     // 0x0FB0(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WebAlphaCurve;                                     // 0x0FB8(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AlphaParmName;                                     // 0x0FC0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WebWPOCurve;                                       // 0x0FD0(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 WPOParmName;                                       // 0x0FD8(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WebEmissiveCuerve;                                 // 0x0FE8(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 EmissiveParmName;                                  // 0x0FF0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           NormalLinkColor;                                   // 0x1000(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SecondLinkColor;                                   // 0x1010(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ThirdLinkColor;                                    // 0x1020(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         WebSpawnFXAsset;                                   // 0x1030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WevSpawnFXOffset;                                  // 0x1038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WebSpawnFXDelay;                                   // 0x1050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1054[0x4];                                     // 0x1054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnStartWebTimelines;                               // 0x1058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_OnWebActivated();
	void StartWebTimelines();
	void UpdateWebScale(const struct FVector& OutValue);
	void UpdateWebAlpha(class FName TrackName, class FName PropertyName, float OutValue);
	void UpdateWebWPO(class FName TrackName, class FName PropertyName, float OutValue);
	void UpdateWebEmissive(class FName TrackName, class FName PropertyName, float OutValue);
	void OnScaleFinished();
	void OnAlphaFinished();
	void OnWPOFinished();
	void OnEmissiveFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Summoner_Loop_10424105">();
	}
	static class APyCue_Summoner_Loop_10424105* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Summoner_Loop_10424105>();
	}
};

// PythonClass PyAbility_104241.PyCue_SummonerLoop_10424104
// 0x0000 (0x0E90 - 0x0E90)
class APyCue_SummonerLoop_10424104 final : public AMarvelCueNotify_Summoned
{
public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnSummonedEnd(class AActor* Summoned);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_SummonerLoop_10424104">();
	}
	static class APyCue_SummonerLoop_10424104* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_SummonerLoop_10424104>();
	}
};

// PythonClass PyAbility_104241.PySummonedComp_10424103
// 0x0020 (0x0CC0 - 0x0CA0)
class UPySummonedComp_10424103 : public USummonedComp_10424103
{
public:
	TMulticastInlineDelegate<void()>              OnLinkStateChanged;                                // 0x0CA0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              GenMeshReformDispatcher;                           // 0x0CB0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void K2_OnWebActive();
	void K2_OnEndAgentTask();
	void K2_OnGenMeshReform();
	void K2_OnGenMeshDestroy();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_10424103">();
	}
	static class UPySummonedComp_10424103* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_10424103>();
	}
};

}

