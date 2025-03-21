﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tether

#include "Basic.hpp"

#include "Tether_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class Tether.TetherCableActor
// 0x01C0 (0x0650 - 0x0490)
class ATetherCableActor final : public AActor
{
public:
	struct FTetherCableProperties                 CableProperties;                                   // 0x0490(0x00A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          bLockCurrentState;                                 // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSynchronousRealtime;                              // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_53A[0x2];                                      // 0x053A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RealtimeInEditorTimeDilation;                      // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugVisualizeSimulationParticles;                // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugVisualizeSimulationCollision;                // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugVisualizeBuiltStaticMeshPoints;              // 0x0542(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugVisualizeContactPoints;                      // 0x0543(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugVisualizeComponentLocations;                 // 0x0544(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugVisualizeTangents;                           // 0x0545(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisible;                                          // 0x0546(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_547[0x1];                                      // 0x0547(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SceneRoot;                                         // 0x0548(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0550(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                              TimeCreated;                                       // 0x0558(0x0008)(ZeroConstructor, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTetherGuideSplineComponent*            GuideSpline;                                       // 0x0560(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_568[0x8];                                      // 0x0568(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTetherSimulationModel                 ActiveSimulationModel;                             // 0x0570(0x0080)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                            StaticMesh;                                        // 0x05F0(0x0008)(ZeroConstructor, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCableMeshGenerationCurveDescription   BuiltCurveDescriptionLocalSpaceSimplified;         // 0x05F8(0x0040)(NativeAccessSpecifierPrivate)
	class UTetherCableMeshComponent*              DynamicPreviewMesh;                                // 0x0638(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTetherMeshGenerator*                   MeshGenerator;                                     // 0x0640(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_648[0x8];                                      // 0x0648(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TetherCableActor">();
	}
	static class ATetherCableActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATetherCableActor>();
	}
};

// Class Tether.TetherCableMeshComponent
// 0x0050 (0x0990 - 0x0940)
class UTetherCableMeshComponent final : public UMeshComponent
{
public:
	uint8                                         Pad_938[0x58];                                     // 0x0938(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TetherCableMeshComponent">();
	}
	static class UTetherCableMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetherCableMeshComponent>();
	}
};

// Class Tether.TetherGuideSplineMetadata
// 0x0010 (0x0040 - 0x0030)
class UTetherGuideSplineMetadata final : public USplineMetadata
{
public:
	TArray<class UTetherPointSegmentDefinition*>  PointSegmentDefinitions;                           // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TetherGuideSplineMetadata">();
	}
	static class UTetherGuideSplineMetadata* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetherGuideSplineMetadata>();
	}
};

// Class Tether.TetherGuideSplineComponent
// 0x0030 (0x0A00 - 0x09D0)
class UTetherGuideSplineComponent final : public USplineComponent
{
public:
	uint8                                         Pad_9C8[0x30];                                     // 0x09C8(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class UTetherGuideSplineMetadata*             MetaData;                                          // 0x09F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TetherGuideSplineComponent">();
	}
	static class UTetherGuideSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetherGuideSplineComponent>();
	}
};

// Class Tether.TetherMeshGenerator
// 0x0000 (0x0030 - 0x0030)
class UTetherMeshGenerator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TetherMeshGenerator">();
	}
	static class UTetherMeshGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetherMeshGenerator>();
	}
};

// Class Tether.TetherPointSegmentDefinition
// 0x0008 (0x0038 - 0x0030)
class UTetherPointSegmentDefinition final : public UObject
{
public:
	float                                         Slack;                                             // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTetherSegmentSimulationOptions        SimulationOptions;                                 // 0x0034(0x0002)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TetherPointSegmentDefinition">();
	}
	static class UTetherPointSegmentDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetherPointSegmentDefinition>();
	}
};

// Class Tether.TMG_Basic
// 0x0020 (0x0050 - 0x0030)
class UTMG_Basic final : public UTetherMeshGenerator
{
public:
	struct FBasicMeshProperties                   Properties;                                        // 0x0030(0x001C)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TMG_Basic">();
	}
	static class UTMG_Basic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTMG_Basic>();
	}
};

// Class Tether.TMG_CustomMesh
// 0x0040 (0x0070 - 0x0030)
class UTMG_CustomMesh final : public UTetherMeshGenerator
{
public:
	struct FCustomMeshProperties                  Properties;                                        // 0x0030(0x0040)(Edit, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TMG_CustomMesh">();
	}
	static class UTMG_CustomMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTMG_CustomMesh>();
	}
};

}

