﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkAnimationCore

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class LiveLinkAnimationCore.LiveLinkInstance
// 0x0000 (0x0430 - 0x0430)
class ULiveLinkInstance final : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;                              // 0x0428(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset);
	void SetSubject(const struct FLiveLinkSubjectName& SubjectName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkInstance">();
	}
	static class ULiveLinkInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkInstance>();
	}
};

// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
// 0x0000 (0x0030 - 0x0030)
class ULiveLinkRetargetAsset : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRetargetAsset">();
	}
	static class ULiveLinkRetargetAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRetargetAsset>();
	}
};

// Class LiveLinkAnimationCore.LiveLinkRemapAsset
// 0x00A0 (0x00D0 - 0x0030)
class ULiveLinkRemapAsset final : public ULiveLinkRetargetAsset
{
public:
	uint8                                         Pad_30[0xA0];                                      // 0x0030(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FName GetRemappedBoneName(class FName BoneName) const;
	class FName GetRemappedCurveName(class FName CurveName) const;
	void RemapCurveElements(TMap<class FName, float>& CurveItems) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRemapAsset">();
	}
	static class ULiveLinkRemapAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRemapAsset>();
	}
};

}

