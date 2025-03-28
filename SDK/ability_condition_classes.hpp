﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ability_condition

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "MarvelAI_structs.hpp"
#include "MarvelAI_classes.hpp"
#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// PythonClass ability_condition.PyAIConditionBase
// 0x0000 (0x0038 - 0x0038)
class UPyAIConditionBase : public UAIAbilityCondition
{
public:
	bool CouldPass(const struct FRequiredAIDataForAutoAbility& AIAutoAbilityContext);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAIConditionBase">();
	}
	static class UPyAIConditionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAIConditionBase>();
	}
};

// PythonClass ability_condition.PyAICondition_StormWeatherTypeIs
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_StormWeatherTypeIs final : public UPyAIConditionBase
{
public:
	int32                                         TargetWhetherType;                                 // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_StormWeatherTypeIs">();
	}
	static class UPyAICondition_StormWeatherTypeIs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_StormWeatherTypeIs>();
	}
};

// PythonClass ability_condition.PyAICondition_SurroundCharacterCheck
// 0x0068 (0x00A0 - 0x0038)
class UPyAICondition_SurroundCharacterCheck : public UPyAIConditionBase
{
public:
	struct FRange_Int32Value                      CharacterNum;                                      // 0x0038(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRange_FloatValue                      CharacterDistRange;                                // 0x0040(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	EAICharacterSide                              CharacterSide;                                     // 0x0048(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAICharacterLifeStatus                        CharacterAlive;                                    // 0x0049(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NeedVisible;                                       // 0x004A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ScreenByHeroID;                                    // 0x004B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<int32>                                   CharacterList;                                     // 0x0050(0x0050)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_SurroundCharacterCheck">();
	}
	static class UPyAICondition_SurroundCharacterCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_SurroundCharacterCheck>();
	}
};

// PythonClass ability_condition.PyAICondition_StormWeatherTypeIsNot
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_StormWeatherTypeIsNot final : public UPyAIConditionBase
{
public:
	int32                                         TargetWhetherType;                                 // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_StormWeatherTypeIsNot">();
	}
	static class UPyAICondition_StormWeatherTypeIsNot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_StormWeatherTypeIsNot>();
	}
};

// PythonClass ability_condition.PyAICondition_AmmoNumCheck
// 0x0010 (0x0048 - 0x0038)
class UPyAICondition_AmmoNumCheck final : public UPyAIConditionBase
{
public:
	bool                                          DoCheckForProportion;                              // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DoCheckForNum;                                     // 0x0039(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AmmoProportionThreshold;                           // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AmmoNumThreshold;                                  // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseWeaponAmmo;                                     // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseReloadSkillAmmo;                                // 0x0045(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAmmoClipType                                 AmmoType;                                          // 0x0046(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_AmmoNumCheck">();
	}
	static class UPyAICondition_AmmoNumCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_AmmoNumCheck>();
	}
};

// PythonClass ability_condition.PyAICondition_LokiPhantomNumCheck
// 0x0010 (0x0048 - 0x0038)
class UPyAICondition_LokiPhantomNumCheck final : public UPyAIConditionBase
{
public:
	int32                                         MinPhantomNum;                                     // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPhantomNum;                                     // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RequiredPhantomRange;                              // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequireIsVisible;                                  // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_LokiPhantomNumCheck">();
	}
	static class UPyAICondition_LokiPhantomNumCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_LokiPhantomNumCheck>();
	}
};

// PythonClass ability_condition.PyAICondition_HasDarkMana
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_HasDarkMana final : public UPyAIConditionBase
{
public:
	float                                         TargetDarkManaValue;                               // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_HasDarkMana">();
	}
	static class UPyAICondition_HasDarkMana* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_HasDarkMana>();
	}
};

// PythonClass ability_condition.PyAICondition_1018_ShieldCheck
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_1018_ShieldCheck final : public UPyAIConditionBase
{
public:
	float                                         HeroHealthPropThreshold;                           // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ShieldHealthPropThreshold;                         // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_1018_ShieldCheck">();
	}
	static class UPyAICondition_1018_ShieldCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_1018_ShieldCheck>();
	}
};

// PythonClass ability_condition.PyAICondition_LunaSnowCheckIsUsingUltimateSkill
// 0x0000 (0x0038 - 0x0038)
class UPyAICondition_LunaSnowCheckIsUsingUltimateSkill final : public UPyAIConditionBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_LunaSnowCheckIsUsingUltimateSkill">();
	}
	static class UPyAICondition_LunaSnowCheckIsUsingUltimateSkill* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_LunaSnowCheckIsUsingUltimateSkill>();
	}
};

// PythonClass ability_condition.PyAICondition_GrootSetWoodWall_Defend
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_GrootSetWoodWall_Defend final : public UPyAIConditionBase
{
public:
	float                                         LowHealthPercent;                                  // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeammateRange;                                     // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_GrootSetWoodWall_Defend">();
	}
	static class UPyAICondition_GrootSetWoodWall_Defend* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_GrootSetWoodWall_Defend>();
	}
};

// PythonClass ability_condition.PyAICondition_GrootSetWoodWall_Distrub
// 0x0000 (0x0038 - 0x0038)
class UPyAICondition_GrootSetWoodWall_Distrub final : public UPyAIConditionBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_GrootSetWoodWall_Distrub">();
	}
	static class UPyAICondition_GrootSetWoodWall_Distrub* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_GrootSetWoodWall_Distrub>();
	}
};

// PythonClass ability_condition.PyAICondition_IronManCheckHasEnemyUnder
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_IronManCheckHasEnemyUnder final : public UPyAIConditionBase
{
public:
	float                                         AccessAngle;                                       // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_IronManCheckHasEnemyUnder">();
	}
	static class UPyAICondition_IronManCheckHasEnemyUnder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_IronManCheckHasEnemyUnder>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckAbilityCompHasTag
// 0x0068 (0x00A0 - 0x0038)
class UPyAICondition_CheckAbilityCompHasTag final : public UPyAIConditionBase
{
public:
	struct FGameplayTagContainer                  TagsToCheck;                                       // 0x0038(0x0068)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckAbilityCompHasTag">();
	}
	static class UPyAICondition_CheckAbilityCompHasTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckAbilityCompHasTag>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckAIInfoHasTag
// 0x0068 (0x00A0 - 0x0038)
class UPyAICondition_CheckAIInfoHasTag final : public UPyAIConditionBase
{
public:
	struct FGameplayTagContainer                  TagsToCheck;                                       // 0x0038(0x0068)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckAIInfoHasTag">();
	}
	static class UPyAICondition_CheckAIInfoHasTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckAIInfoHasTag>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckSkillTimeTrigger
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckSkillTimeTrigger final : public UPyAIConditionBase
{
public:
	int32                                         SkillID;                                           // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckSkillTimeTrigger">();
	}
	static class UPyAICondition_CheckSkillTimeTrigger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckSkillTimeTrigger>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckObjectiveDistance
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckObjectiveDistance final : public UPyAIConditionBase
{
public:
	float                                         Distance;                                          // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckObjectiveDistance">();
	}
	static class UPyAICondition_CheckObjectiveDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckObjectiveDistance>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckTeamPower
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckTeamPower final : public UPyAIConditionBase
{
public:
	int32                                         MinDiffPower;                                      // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxDiffPower;                                      // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckTeamPower">();
	}
	static class UPyAICondition_CheckTeamPower* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckTeamPower>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckAbilityCD
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckAbilityCD final : public UPyAIConditionBase
{
public:
	int32                                         AbilityID;                                         // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckAbilityCD">();
	}
	static class UPyAICondition_CheckAbilityCD* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckAbilityCD>();
	}
};

// PythonClass ability_condition.PyAICondition_TargetHasTag
// 0x0070 (0x00A8 - 0x0038)
class UPyAICondition_TargetHasTag final : public UPyAIConditionBase
{
public:
	bool                                          EnemyOrTeammate;                                   // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TagsToCheck;                                       // 0x0040(0x0068)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_TargetHasTag">();
	}
	static class UPyAICondition_TargetHasTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_TargetHasTag>();
	}
};

// PythonClass ability_condition.PyAICondition_ForbidUsageByType
// 0x0000 (0x0038 - 0x0038)
class UPyAICondition_ForbidUsageByType final : public UPyAIConditionBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_ForbidUsageByType">();
	}
	static class UPyAICondition_ForbidUsageByType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_ForbidUsageByType>();
	}
};

// PythonClass ability_condition.PyAICondition_TeammateTakingDamage
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_TeammateTakingDamage final : public UPyAIConditionBase
{
public:
	float                                         Radius;                                            // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IncludeSelf;                                       // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_TeammateTakingDamage">();
	}
	static class UPyAICondition_TeammateTakingDamage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_TeammateTakingDamage>();
	}
};

// PythonClass ability_condition.PyAICondition_InTeamFormation
// 0x0000 (0x0038 - 0x0038)
class UPyAICondition_InTeamFormation final : public UPyAIConditionBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_InTeamFormation">();
	}
	static class UPyAICondition_InTeamFormation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_InTeamFormation>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckFloatAbilityAttribute
// 0x0048 (0x0080 - 0x0038)
class UPyAICondition_CheckFloatAbilityAttribute final : public UPyAIConditionBase
{
public:
	struct FGameplayAttribute                     ToCheckAttribute;                                  // 0x0038(0x0040)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CompareValue;                                      // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EArithmeticKeyOperation                       OperationType;                                     // 0x007C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckFloatAbilityAttribute">();
	}
	static class UPyAICondition_CheckFloatAbilityAttribute* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckFloatAbilityAttribute>();
	}
};

// PythonClass ability_condition.PyAICondition_IsHoldingPhysicalWeapon
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_IsHoldingPhysicalWeapon final : public UPyAIConditionBase
{
public:
	bool                                          ShouldHoldingWeapon;                               // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_IsHoldingPhysicalWeapon">();
	}
	static class UPyAICondition_IsHoldingPhysicalWeapon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_IsHoldingPhysicalWeapon>();
	}
};

// PythonClass ability_condition.PyAICondition_HasNearbyPhysicalInteractions
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_HasNearbyPhysicalInteractions final : public UPyAIConditionBase
{
public:
	int32                                         RequiredInteractionsNum;                           // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShouldSetInteractionAsTarget;                      // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_HasNearbyPhysicalInteractions">();
	}
	static class UPyAICondition_HasNearbyPhysicalInteractions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_HasNearbyPhysicalInteractions>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckTeammateHealth
// 0x0010 (0x0048 - 0x0038)
class UPyAICondition_CheckTeammateHealth final : public UPyAIConditionBase
{
public:
	float                                         CheckRange;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMarvelArithmeticOperation                    CheckType;                                         // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LowHealthThreshold;                                // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CheckAll;                                          // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckTeammateHealth">();
	}
	static class UPyAICondition_CheckTeammateHealth* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckTeammateHealth>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckEscapeDistance
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckEscapeDistance final : public UPyAIConditionBase
{
public:
	float                                         AllowDistance;                                     // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckEscapeDistance">();
	}
	static class UPyAICondition_CheckEscapeDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckEscapeDistance>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckSkillEnergyRemain
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckSkillEnergyRemain final : public UPyAIConditionBase
{
public:
	float                                         EnergyCost;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnergyKeep;                                        // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckSkillEnergyRemain">();
	}
	static class UPyAICondition_CheckSkillEnergyRemain* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckSkillEnergyRemain>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckHasBuff
// 0x0010 (0x0048 - 0x0038)
class UPyAICondition_CheckHasBuff final : public UPyAIConditionBase
{
public:
	TArray<int32>                                 BuffIDList;                                        // 0x0038(0x0010)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckHasBuff">();
	}
	static class UPyAICondition_CheckHasBuff* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckHasBuff>();
	}
};

// PythonClass ability_condition.PyAICondition_HasVerifySummonedTarget
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_HasVerifySummonedTarget : public UPyAIConditionBase
{
public:
	int32                                         SummonedID;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_HasVerifySummonedTarget">();
	}
	static class UPyAICondition_HasVerifySummonedTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_HasVerifySummonedTarget>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckDistanceToNextPathPoint
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckDistanceToNextPathPoint : public UPyAIConditionBase
{
public:
	float                                         PassRange;                                         // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckDistanceToNextPathPoint">();
	}
	static class UPyAICondition_CheckDistanceToNextPathPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckDistanceToNextPathPoint>();
	}
};

// PythonClass ability_condition.PyAICondition_CheckDistanceToPathEndPoint
// 0x0008 (0x0040 - 0x0038)
class UPyAICondition_CheckDistanceToPathEndPoint : public UPyAIConditionBase
{
public:
	float                                         PassRange;                                         // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAICondition_CheckDistanceToPathEndPoint">();
	}
	static class UPyAICondition_CheckDistanceToPathEndPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAICondition_CheckDistanceToPathEndPoint>();
	}
};

}

