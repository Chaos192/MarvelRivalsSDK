﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelAIController

#include "Basic.hpp"

#include "MarvelAI_classes.hpp"


namespace SDK
{

// PythonClass PyMarvelAIController.PyMarvelAIController
// 0x0010 (0x0A40 - 0x0A30)
class APyMarvelAIController final : public AMarvelAIController
{
public:
	class UBehaviorTree*                          BTAsset;                                           // 0x0A30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoRunBT;                                         // 0x0A38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static void PyDebugCameraCalculate_2(class AMarvelBaseCharacter* InPawn);

	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveLoadHeroConfig();
	void ReceiveUnPossess(class APawn* UnpossessedPawn);
	bool IsFlyAI();
	void OnAIDeath(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParameterHandle);
	void OnAIReborn(class AActor* TargetActor, const struct FCharacterRebornParam& RebornParam);
	void OnAIExitRound();
	void OnAIMayNeedChangeHero(class AMarvelPlayerState* PlayerState_0);
	void UpdatePreviewHeroID(int32 NewHeroID, bool Immediate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelAIController">();
	}
	static class APyMarvelAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyMarvelAIController>();
	}
};

}

