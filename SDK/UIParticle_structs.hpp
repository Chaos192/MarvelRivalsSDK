﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIParticle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum UIParticle.ECurveType
// NumValues: 0x0004
enum class ECurveType : uint8
{
	ParticleLifePercent                      = 0,
	ParticleLifeTime                         = 1,
	EmitLifeTime                             = 2,
	ECurveType_MAX                           = 3,
};

// Enum UIParticle.EEmitterType
// NumValues: 0x0004
enum class EEmitterType : uint8
{
	Gravity                                  = 0,
	Radial                                   = 1,
	Curve                                    = 2,
	EEmitterType_MAX                         = 3,
};

// Enum UIParticle.EPositionType
// NumValues: 0x0003
enum class EPositionType : uint8
{
	FREE                                     = 0,
	RELATIVE_0                               = 1,
	EPositionType_MAX                        = 2,
};

// Enum UIParticle.EParticleDrawEffect
// NumValues: 0x000A
enum class EParticleDrawEffect : uint8
{
	None                                     = 0,
	NoBlending                               = 1,
	PreMultipliedAlpha                       = 2,
	NoGamma                                  = 4,
	InvertAlpha                              = 8,
	NoPixelSnapping                          = 16,
	DisabledEffect                           = 32,
	IgnoreTextureAlpha                       = 64,
	ReverseGamma                             = 128,
	EParticleDrawEffect_MAX                  = 129,
};

// Enum UIParticle.EUIParticlePropertyType
// NumValues: 0x0009
enum class EUIParticlePropertyType : uint8
{
	Float                                    = 0,
	FloatRange                               = 1,
	FloatCurve                               = 2,
	FloatCurveRange                          = 3,
	Vector2D                                 = 4,
	Vector2DRange                            = 5,
	LinearColorCurve                         = 6,
	LinearColorCurveRange                    = 7,
	EUIParticlePropertyType_MAX              = 8,
};

// ScriptStruct UIParticle.EasyParticleChildEmitterArray
// 0x0038 (0x0038 - 0x0000)
struct FEasyParticleChildEmitterArray final
{
public:
	class UUIParticleEmitterAsset*                ChildrenAsset;                                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              EmitterStartTime;                                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x28];                                      // 0x0010(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UIParticle.UIParticleEmitterInfo
// 0x0018 (0x0018 - 0x0000)
struct FUIParticleEmitterInfo final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActiveDelay;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZOrder;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIParticleEmitterAsset*                Asset;                                             // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.LerpKeyVector2D
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FLerpKeyVector2D final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UIParticle.LerpKeyColor
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FLerpKeyColor final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UIParticle.UIParticleFloatCurve
// 0x0088 (0x0088 - 0x0000)
struct FUIParticleFloatCurve final
{
public:
	struct FRichCurve                             CurveData;                                         // 0x0000(0x0080)(Edit, NativeAccessSpecifierPublic)
	ECurveType                                    CurveType;                                         // 0x0080(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Loop;                                              // 0x0081(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UIParticle.ChildEmitter
// 0x0018 (0x0018 - 0x0000)
struct FChildEmitter final
{
public:
	float                                         ActivityInParentLifeTime;                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FollowParentPosition;                              // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FollowParentSpeedPercent;                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZOrderOffset;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIParticleEmitterAsset*                ChildrenAsset;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.Range_FloatCurve
// 0x0110 (0x0110 - 0x0000)
struct FRange_FloatCurve final
{
public:
	struct FUIParticleFloatCurve                  Min;                                               // 0x0000(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleFloatCurve                  Max;                                               // 0x0088(0x0088)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.UIParticleLinearColorCurve
// 0x0208 (0x0208 - 0x0000)
struct FUIParticleLinearColorCurve final
{
public:
	struct FRichCurve                             ColorCurves[0x4];                                  // 0x0000(0x0080)(Edit, NativeAccessSpecifierPublic)
	ECurveType                                    CurveType;                                         // 0x0200(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Loop;                                              // 0x0201(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_202[0x6];                                      // 0x0202(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UIParticle.Range_LinearColorCurve
// 0x0410 (0x0410 - 0x0000)
struct FRange_LinearColorCurve final
{
public:
	struct FUIParticleLinearColorCurve            Min;                                               // 0x0000(0x0208)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleLinearColorCurve            Max;                                               // 0x0208(0x0208)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.Range_Float
// 0x0008 (0x0008 - 0x0000)
struct FRange_Float final
{
public:
	float                                         Min;                                               // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Max;                                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.ScalarParamFloat
// 0x0014 (0x0014 - 0x0000)
struct FScalarParamFloat final
{
public:
	class FName                                   ScalarParamName;                                   // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Float                           Value;                                             // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.Range_Vector2D
// 0x0020 (0x0020 - 0x0000)
struct FRange_Vector2D final
{
public:
	struct FVector2D                              Min;                                               // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Max;                                               // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.UIParticleProperty
// 0x07F0 (0x07F0 - 0x0000)
struct FUIParticleProperty final
{
public:
	EUIParticlePropertyType                       Type;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloatValue;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Float                           FloatRangeValue;                                   // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUIParticleFloatCurve                  FloatCurveValue;                                   // 0x0010(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FRange_FloatCurve                      FloatCurveRangeValue;                              // 0x0098(0x0110)(Edit, NativeAccessSpecifierPublic)
	struct FVector2D                              Vector2DValue;                                     // 0x01A8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Vector2D                        Vector2DRangeValue;                                // 0x01B8(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FUIParticleLinearColorCurve            LinearColorCurveValue;                             // 0x01D8(0x0208)(Edit, NativeAccessSpecifierPublic)
	struct FRange_LinearColorCurve                LinearColorCurveRangeValue;                        // 0x03E0(0x0410)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.Posotion_Vector2DCurve
// 0x0FE0 (0x0FE0 - 0x0000)
struct FPosotion_Vector2DCurve final
{
public:
	struct FUIParticleProperty                    X;                                                 // 0x0000(0x07F0)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                    Y;                                                 // 0x07F0(0x07F0)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.Size_Vector2DCurve
// 0x0FE0 (0x0FE0 - 0x0000)
struct FSize_Vector2DCurve final
{
public:
	struct FUIParticleProperty                    Min;                                               // 0x0000(0x07F0)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                    Max;                                               // 0x07F0(0x07F0)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct UIParticle.ScalarParamCurve
// 0x0800 (0x0800 - 0x0000)
struct FScalarParamCurve final
{
public:
	class FName                                   ScalarParamName;                                   // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUIParticleProperty                    Value;                                             // 0x0010(0x07F0)(Edit, NativeAccessSpecifierPublic)
};

}

