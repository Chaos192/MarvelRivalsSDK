﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangePipelines

#include "Basic.hpp"


namespace SDK
{

// Enum InterchangePipelines.EInterchangeForceMeshType
// NumValues: 0x0004
enum class EInterchangeForceMeshType : uint8
{
	IFMT_None                                = 0,
	IFMT_StaticMesh                          = 1,
	IFMT_SkeletalMesh                        = 2,
	IFMT_MAX                                 = 3,
};

// Enum InterchangePipelines.EInterchangeVertexColorImportOption
// NumValues: 0x0004
enum class EInterchangeVertexColorImportOption : uint8
{
	IVCIO_Replace                            = 0,
	IVCIO_Ignore                             = 1,
	IVCIO_Override                           = 2,
	IVCIO_MAX                                = 3,
};

// Enum InterchangePipelines.EInterchangeMaterialXShaders
// NumValues: 0x0006
enum class EInterchangeMaterialXShaders : uint8
{
	StandardSurface                          = 0,
	StandardSurfaceTransmission              = 1,
	SurfaceUnlit                             = 2,
	UsdPreviewSurface                        = 3,
	MaxShaderCount                           = 4,
	EInterchangeMaterialXShaders_MAX         = 5,
};

// Enum InterchangePipelines.EInterchangeAnimationRange
// NumValues: 0x0004
enum class EInterchangeAnimationRange : uint8
{
	Timeline                                 = 0,
	Animated                                 = 1,
	SetRange                                 = 2,
	MAX                                      = 3,
};

// Enum InterchangePipelines.EInterchangeMaterialImportOption
// NumValues: 0x0003
enum class EInterchangeMaterialImportOption : uint8
{
	ImportAsMaterials                        = 0,
	ImportAsMaterialInstances                = 1,
	EInterchangeMaterialImportOption_MAX     = 2,
};

// ScriptStruct InterchangePipelines.InterchangeLodSceneNodeContainer
// 0x0010 (0x0010 - 0x0000)
struct FInterchangeLodSceneNodeContainer final
{
public:
	TArray<class UInterchangeSceneNode*>          SceneNodes;                                        // 0x0000(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct InterchangePipelines.InterchangeMeshInstance
// 0x0080 (0x0080 - 0x0000)
struct FInterchangeMeshInstance final
{
public:
	class FString                                 MeshInstanceUid;                                   // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSceneNode*                  LodGroupNode;                                      // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReferenceSkinnedMesh;                             // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReferenceMorphTarget;                             // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasMorphTargets;                                  // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, struct FInterchangeLodSceneNodeContainer> SceneNodePerLodIndex;                      // 0x0020(0x0050)(Edit, NativeAccessSpecifierPublic)
	TArray<class FString>                         ReferencingMeshGeometryUids;                       // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct InterchangePipelines.InterchangeMeshGeometry
// 0x0038 (0x0038 - 0x0000)
struct FInterchangeMeshGeometry final
{
public:
	class FString                                 MeshUid;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeMeshNode*                   MeshNode;                                          // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         ReferencingMeshInstanceUids;                       // 0x0018(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         AttachedSocketUids;                                // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
// 0x0005 (0x0005 - 0x0000)
struct FInterchangePipelineMeshesUtilitiesContext final
{
public:
	bool                                          bConvertStaticMeshToSkeletalMesh;                  // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bConvertSkeletalMeshToStaticMesh;                  // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bConvertStaticsWithMorphTargetsToSkeletals;        // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImportMeshesInBoneHierarchy;                      // 0x0003(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bQueryGeometryOnlyIfNoInstance;                    // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

