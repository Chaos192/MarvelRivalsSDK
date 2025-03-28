﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeMessages

#include "Basic.hpp"

#include "InterchangeCore_classes.hpp"


namespace SDK
{

// Class InterchangeMessages.InterchangeResultMeshWarning
// 0x0010 (0x0078 - 0x0068)
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{
public:
	class FString                                 MeshName;                                          // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshWarning">();
	}
	static class UInterchangeResultMeshWarning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshWarning>();
	}
};

// Class InterchangeMessages.InterchangeResultTextureWarning
// 0x0010 (0x0078 - 0x0068)
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{
public:
	class FString                                 TextureName;                                       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultTextureWarning">();
	}
	static class UInterchangeResultTextureWarning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultTextureWarning>();
	}
};

// Class InterchangeMessages.InterchangeResultMeshError
// 0x0010 (0x0078 - 0x0068)
class UInterchangeResultMeshError : public UInterchangeResultError
{
public:
	class FString                                 MeshName;                                          // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshError">();
	}
	static class UInterchangeResultMeshError* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshError>();
	}
};

// Class InterchangeMessages.InterchangeResultMeshWarning_Generic
// 0x0018 (0x0090 - 0x0078)
class UInterchangeResultMeshWarning_Generic final : public UInterchangeResultMeshWarning
{
public:
	class FText                                   Text;                                              // 0x0078(0x0018)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshWarning_Generic">();
	}
	static class UInterchangeResultMeshWarning_Generic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshWarning_Generic>();
	}
};

// Class InterchangeMessages.InterchangeResultMeshError_Generic
// 0x0018 (0x0090 - 0x0078)
class UInterchangeResultMeshError_Generic final : public UInterchangeResultMeshError
{
public:
	class FText                                   Text;                                              // 0x0078(0x0018)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshError_Generic">();
	}
	static class UInterchangeResultMeshError_Generic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshError_Generic>();
	}
};

// Class InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
// 0x0008 (0x0080 - 0x0078)
class UInterchangeResultMeshWarning_TooManyUVs final : public UInterchangeResultMeshWarning
{
public:
	int32                                         ExcessUVs;                                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshWarning_TooManyUVs">();
	}
	static class UInterchangeResultMeshWarning_TooManyUVs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshWarning_TooManyUVs>();
	}
};

// Class InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
// 0x0028 (0x00A0 - 0x0078)
class UInterchangeResultTextureWarning_TextureFileDoNotExist final : public UInterchangeResultTextureWarning
{
public:
	class FText                                   Text;                                              // 0x0078(0x0018)(NativeAccessSpecifierPublic)
	class FString                                 MaterialName;                                      // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultTextureWarning_TextureFileDoNotExist">();
	}
	static class UInterchangeResultTextureWarning_TextureFileDoNotExist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultTextureWarning_TextureFileDoNotExist>();
	}
};

}

