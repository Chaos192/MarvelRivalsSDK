﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HeadMountedDisplay_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Class HeadMountedDisplay.HandKeypointConversion
// 0x0000 (0x0030 - 0x0030)
class UHandKeypointConversion final : public UBlueprintFunctionLibrary
{
public:
	static int32 Conv_HandKeypointToInt32(EHandKeypoint Input);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HandKeypointConversion">();
	}
	static class UHandKeypointConversion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHandKeypointConversion>();
	}
};

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0180 (0x0A50 - 0x08D0)
class UMotionControllerComponent final : public UPrimitiveComponent
{
public:
	int32                                         PlayerIndex;                                       // 0x08C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MotionSource;                                      // 0x08CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDisableLowLatencyUpdate : 1;                      // 0x08D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_8D9[0x3];                                      // 0x08D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ETrackingStatus                               CurrentTrackingStatus;                             // 0x08DC(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayDeviceModel;                               // 0x08DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8DE[0x2];                                      // 0x08DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DisplayModelSource;                                // 0x08E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8EC[0x4];                                      // 0x08EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            CustomDisplayMesh;                                 // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             DisplayMeshMaterialOverrides;                      // 0x08F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    DisplayComponent;                                  // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_910[0x140];                                    // 0x0910(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector GetHandJointPosition(int32 jointIndex, bool* bValueFound);
	float GetParameterValue(class FName InName, bool* bValueFound);
	void OnMotionControllerUpdated();
	void SetAssociatedPlayerIndex(const int32 NewPlayer);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetDisplayModelSource(const class FName NewDisplayModelSource);
	void SetShowDeviceModel(const bool bShowControllerModel);
	void SetTrackingMotionSource(const class FName NewSource);
	void SetTrackingSource(const EControllerHand NewSource);

	bool GetAngularVelocity(struct FRotator* OutAngularVelocity) const;
	bool GetLinearAcceleration(struct FVector* OutLinearAcceleration) const;
	bool GetLinearVelocity(struct FVector* OutLinearVelocity) const;
	EControllerHand GetTrackingSource() const;
	bool IsTracked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionControllerComponent">();
	}
	static class UMotionControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionControllerComponent>();
	}
};

}

