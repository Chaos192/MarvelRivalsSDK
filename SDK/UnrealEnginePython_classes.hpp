﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UnrealEnginePython

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_classes.hpp"
#include "UnrealEnginePython_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class UnrealEnginePython.PyActor
// 0x0038 (0x04C8 - 0x0490)
class APyActor final : public AActor
{
public:
	class FString                                 PythonModule;                                      // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PythonClass;                                       // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonTickForceDisabled;                           // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonDisableAutoBinding;                          // 0x04B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4B2[0x16];                                     // 0x04B2(0x0016)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CallPythonActorMethod(class FName Method_Name, const class FString& Args);
	bool CallPythonActorMethodBool(class FName Method_Name, const class FString& Args);
	class FString CallPythonActorMethodString(class FName Method_Name, const class FString& Args);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActor">();
	}
	static class APyActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyActor>();
	}
};

// Class UnrealEnginePython.PyCharacter
// 0x0040 (0x0A50 - 0x0A10)
class APyCharacter final : public ACharacter
{
public:
	class FString                                 PythonModule;                                      // 0x0A10(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PythonClass;                                       // 0x0A20(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonTickForceDisabled;                           // 0x0A30(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonDisableAutoBinding;                          // 0x0A31(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A32[0x1E];                                     // 0x0A32(0x001E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CallPyCharacterMethod(class FName Method_Name, const class FString& Args);
	bool CallPyCharacterMethodBool(class FName Method_Name, const class FString& Args);
	float CallPyCharacterMethodFloat(class FName Method_Name, const class FString& Args);
	class FString CallPyCharacterMethodString(class FName Method_Name, const class FString& Args);
	void SetPythonAttrBool(class FName attr, bool Boolean);
	void SetPythonAttrFloat(class FName attr, float float_0);
	void SetPythonAttrInt(class FName attr, int32 Integer);
	void SetPythonAttrObject(class FName attr, class UObject* Object);
	void SetPythonAttrRotator(class FName attr, const struct FRotator& Rotator);
	void SetPythonAttrString(class FName attr, const class FString& String);
	void SetPythonAttrVector(class FName attr, const struct FVector& Vector);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCharacter">();
	}
	static class APyCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCharacter>();
	}
};

// Class UnrealEnginePython.PyCommandlet
// 0x0000 (0x0088 - 0x0088)
class UPyCommandlet final : public UCommandlet
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCommandlet">();
	}
	static class UPyCommandlet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCommandlet>();
	}
};

// Class UnrealEnginePython.PyHUD
// 0x0038 (0x05B8 - 0x0580)
class APyHUD final : public AHUD
{
public:
	class FString                                 PythonModule;                                      // 0x0580(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PythonClass;                                       // 0x0590(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonTickForceDisabled;                           // 0x05A0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonDisableAutoBinding;                          // 0x05A1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A2[0x16];                                     // 0x05A2(0x0016)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CallPythonHUDMethod(class FName Method_Name, const class FString& Args);
	bool CallPythonHUDMethodBool(class FName Method_Name, const class FString& Args);
	class FString CallPythonHUDMethodString(class FName Method_Name, const class FString& Args);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyHUD">();
	}
	static class APyHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyHUD>();
	}
};

// Class UnrealEnginePython.PyNativeWidgetHost
// 0x0000 (0x01C8 - 0x01C8)
class UPyNativeWidgetHost final : public UNativeWidgetHost
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyNativeWidgetHost">();
	}
	static class UPyNativeWidgetHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyNativeWidgetHost>();
	}
};

// Class UnrealEnginePython.PyPawn
// 0x0038 (0x0568 - 0x0530)
class APyPawn final : public APawn
{
public:
	class FString                                 PythonModule;                                      // 0x0530(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PythonClass;                                       // 0x0540(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonTickForceDisabled;                           // 0x0550(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonDisableAutoBinding;                          // 0x0551(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_552[0x16];                                     // 0x0552(0x0016)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CallPythonPawnMethod(class FName Method_Name);
	bool CallPythonPawnMethodBool(class FName Method_Name);
	class FString CallPythonPawnMethodString(class FName Method_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyPawn">();
	}
	static class APyPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyPawn>();
	}
};

// Class UnrealEnginePython.TestOnlyObject
// 0x0000 (0x0030 - 0x0030)
class UTestOnlyObject final : public UObject
{
public:
	static int32 AddRefCount(struct FTestOnlyRefCount& InOutRefCount);
	static int32 GetOwnedRefs(const struct FTestOnlyRefCount& RefCount);
	static int32 GetTotalRefs();
	static struct FTestOnlyRefCount NewRefCount();
	static struct FTestOnlyRefCount NewRefCount2();
	static void OutRefCount(struct FTestOnlyRefCount* OutRefCount_0);
	static void OutRefCount2(struct FTestOnlyRefCount* OutRefCount);
	static void OutRefCount_NoImpl(struct FTestOnlyRefCount* OutRefCount);

	struct FTestOnlyRefCount BP_NewRefCount();
	struct FTestOnlyRefCount Call_BP_NewRefCount();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestOnlyObject">();
	}
	static class UTestOnlyObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestOnlyObject>();
	}
};

// Class UnrealEnginePython.PythonBlueprintFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UPythonBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ExecutePythonScript(const class FString& Script);
	static void ExecutePythonString(const class FString& PythonCmd);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonBlueprintFunctionLibrary">();
	}
	static class UPythonBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonBlueprintFunctionLibrary>();
	}
};

// Class UnrealEnginePython.PythonClass
// 0x0048 (0x02C8 - 0x0280)
class UPythonClass final : public UClass
{
public:
	uint8                                         Pad_280[0x8];                                      // 0x0280(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 LegacyClass;                                       // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 AuthoritativeClass;                                // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_298[0x28];                                     // 0x0298(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumReplicatedProperties;                           // 0x02C0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonClass">();
	}
	static class UPythonClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonClass>();
	}
};

// Class UnrealEnginePython.PythonComponent
// 0x0040 (0x0130 - 0x00F0)
class UPythonComponent final : public UActorComponent
{
public:
	class FString                                 PythonModule;                                      // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PythonClass;                                       // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonTickForceDisabled;                           // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonDisableAutoBinding;                          // 0x0111(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonTickEnableGenerator;                         // 0x0112(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_113[0x1D];                                     // 0x0113(0x001D)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CallPythonComponentMethod(class FName Method_Name, const class FString& Args);
	bool CallPythonComponentMethodBool(class FName Method_Name, const class FString& Args);
	float CallPythonComponentMethodFloat(class FName Method_Name, const class FString& Args);
	int32 CallPythonComponentMethodInt(class FName Method_Name, const class FString& Args);
	TMap<class FString, class FString> CallPythonComponentMethodMap(class FName Method_Name, const class FString& Args);
	class UObject* CallPythonComponentMethodObject(class FName Method_Name, class UObject* Arg);
	class FString CallPythonComponentMethodString(class FName Method_Name, const class FString& Args);
	void CallPythonComponentMethodStringArray(class FName Method_Name, const class FString& Args, TArray<class FString>* output_strings);
	void InitializePythonComponent();
	void SetPythonAttrBool(class FName attr, bool Boolean);
	void SetPythonAttrFloat(class FName attr, float float_0);
	void SetPythonAttrInt(class FName attr, int32 Integer);
	void SetPythonAttrObject(class FName attr, class UObject* Object);
	void SetPythonAttrRotator(class FName attr, const struct FRotator& Rotator);
	void SetPythonAttrString(class FName attr, const class FString& String);
	void SetPythonAttrVector(class FName attr, const struct FVector& Vector);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonComponent">();
	}
	static class UPythonComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonComponent>();
	}
};

// Class UnrealEnginePython.PythonDelegate
// 0x0028 (0x0058 - 0x0030)
class UPythonDelegate final : public UObject
{
public:
	TWeakObjectPtr<class UObject>                 OwningObject;                                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                 CallerObject;                                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFunction*                              DelegateSignature;                                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_48[0x10];                                      // 0x0048(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void PyFakeCallable();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonDelegate">();
	}
	static class UPythonDelegate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonDelegate>();
	}
};

// Class UnrealEnginePython.PythonEnum
// 0x0008 (0x00D0 - 0x00C8)
class UPythonEnum final : public UUserDefinedEnum
{
public:
	uint8                                         Pad_C8[0x8];                                       // 0x00C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonEnum">();
	}
	static class UPythonEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonEnum>();
	}
};

// Class UnrealEnginePython.PythonFunction
// 0x0018 (0x0108 - 0x00F0)
class UPythonFunction final : public UFunction
{
public:
	uint8                                         Pad_F0[0x18];                                      // 0x00F0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonFunction">();
	}
	static class UPythonFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonFunction>();
	}
};

// Class UnrealEnginePython.PythonScript
// 0x0030 (0x0060 - 0x0030)
class UPythonScript final : public UObject
{
public:
	class FString                                 ScriptPath;                                        // 0x0030(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FunctionToCall;                                    // 0x0040(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         FunctionArgs;                                      // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	void Run();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonScript">();
	}
	static class UPythonScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonScript>();
	}
};

// Class UnrealEnginePython.PythonSettings
// 0x0068 (0x0098 - 0x0030)
class UPythonSettings final : public UObject
{
public:
	bool                                          bWritePycFiles;                                    // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPythonSourceMode                             PySourceMode;                                      // 0x0031(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ScriptPack;                                        // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SourcePath;                                        // 0x0048(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StdLibraryPath;                                    // 0x0058(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         SitePackagePaths;                                  // 0x0068(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         PreImportModules;                                  // 0x0078(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bEnableMainGILHold;                                // 0x0088(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        GILCheckerInterval;                                // 0x0090(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonSettings">();
	}
	static class UPythonSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonSettings>();
	}
};

// Class UnrealEnginePython.PythonEditorSettings
// 0x0030 (0x0060 - 0x0030)
class UPythonEditorSettings final : public UObject
{
public:
	class FString                                 EditorSourcePath;                                  // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         EditorPreImportModules;                            // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         ExcludedImportModules;                             // 0x0050(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonEditorSettings">();
	}
	static class UPythonEditorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonEditorSettings>();
	}
};

// Class UnrealEnginePython.PythonUserSettings
// 0x0008 (0x0038 - 0x0030)
class UPythonUserSettings final : public UObject
{
public:
	bool                                          bHotReloadAll;                                     // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EExceptionNotificationEnabled                 EnableExceptionNotification;                       // 0x0031(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonUserSettings">();
	}
	static class UPythonUserSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonUserSettings>();
	}
};

// Class UnrealEnginePython.PythonStruct
// 0x0020 (0x0138 - 0x0118)
class UPythonStruct final : public UUserDefinedStruct
{
public:
	uint8                                         Pad_118[0x20];                                     // 0x0118(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PythonStruct">();
	}
	static class UPythonStruct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPythonStruct>();
	}
};

// Class UnrealEnginePython.PyUserWidget
// 0x0040 (0x03F8 - 0x03B8)
class UPyUserWidget final : public UUserWidget
{
public:
	class FString                                 PythonModule;                                      // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PythonClass;                                       // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonTickForceDisabled;                           // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PythonPaintForceDisabled;                          // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DA[0x2];                                      // 0x03DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class UPyNativeWidgetHost>     PyNativeWidgetHost;                                // 0x03DC(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E4[0x14];                                     // 0x03E4(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CallPythonUserWidgetMethod(class FName Method_Name, const class FString& Args);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUserWidget">();
	}
	static class UPyUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUserWidget>();
	}
};

// Class UnrealEnginePython.TestInvokeInnerObject
// 0x0000 (0x0030 - 0x0030)
class UTestInvokeInnerObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestInvokeInnerObject">();
	}
	static class UTestInvokeInnerObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestInvokeInnerObject>();
	}
};

// Class UnrealEnginePython.TestInvokeObject
// 0x0060 (0x0090 - 0x0030)
class UTestInvokeObject final : public UObject
{
public:
	int32                                         Int32Val;                                          // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StrVal;                                            // 0x0038(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTestInvokeStruct                      StructValue;                                       // 0x0048(0x0040)(Edit, NativeAccessSpecifierPublic)
	class UTestInvokeInnerObject*                 ObjectValue;                                       // 0x0088(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	int32 Call_int();
	class UTestInvokeObject* Call_obj();
	class FString Call_str();
	struct FTestInvokeStruct Call_struct();
	void Call_void();
	void Call_void_int(int32 InArg1);
	void Call_void_int_int(int32 InArg1, int32 InArg2);
	void Call_void_int_int_float(int32 InArg1, int32 InArg2, float IntArg3);
	void Call_void_object(class UTestInvokeObject* InArg1);
	void Call_void_str(const class FString& InArg1);
	void Call_void_struct(const struct FTestInvokeStruct& InArg1);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestInvokeObject">();
	}
	static class UTestInvokeObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestInvokeObject>();
	}
};

}

