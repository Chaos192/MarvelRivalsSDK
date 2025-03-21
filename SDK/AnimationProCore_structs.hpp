﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationProCore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimationCore_structs.hpp"


namespace SDK
{

// ScriptStruct AnimationProCore.AimIKChainLink
// 0x0140 (0x0140 - 0x0000)
struct alignas(0x10) FAimIKChainLink final
{
public:
	uint8                                         Pad_0[0x140];                                      // 0x0000(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationProCore.AimIKConfig
// 0x00F0 (0x00F0 - 0x0000)
struct FAimIKConfig final
{
public:
	struct FTransform                             AimSocketOffset;                                   // 0x0000(0x0060)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                  AimAxis;                                           // 0x0060(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         TipBone;                                           // 0x0080(0x0014)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         RootBone;                                          // 0x0094(0x0014)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Tolerance;                                         // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxIterations;                                     // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRotateLimit;                                // 0x00B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterpolationSpeed;                                // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 RotationLimitPerJoints;                            // 0x00B8(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bUseLookUpAxis;                                    // 0x00C8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAxis                                  UpAxis;                                            // 0x00D0(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

}

