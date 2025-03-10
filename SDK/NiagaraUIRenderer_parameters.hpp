﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraUIRenderer

#include "Basic.hpp"


namespace SDK::Params
{

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// 0x0008 (0x0008 - 0x0000)
struct NiagaraSystemWidget_GetNiagaraComponent final
{
public:
	class UNiagaraUIComponent*                    ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.OnComponentActivate
// 0x0010 (0x0010 - 0x0000)
struct NiagaraSystemWidget_OnComponentActivate final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReset;                                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.OnComponentDeactivate
// 0x0008 (0x0008 - 0x0000)
struct NiagaraSystemWidget_OnComponentDeactivate final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.OnNiagaraSystemFinished
// 0x0008 (0x0008 - 0x0000)
struct NiagaraSystemWidget_OnNiagaraSystemFinished final
{
public:
	class UNiagaraComponent*                      Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActiveSystem
// 0x0001 (0x0001 - 0x0000)
struct NiagaraSystemWidget_SetIsActiveSystem final
{
public:
	bool                                          bInIsActiveSystem;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
// 0x0008 (0x0008 - 0x0000)
struct NiagaraSystemWidget_UpdateNiagaraSystemReference final
{
public:
	class UNiagaraSystem*                         NewNiagaraSystem;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
// 0x0001 (0x0001 - 0x0000)
struct NiagaraSystemWidget_UpdateTickWhenPaused final
{
public:
	bool                                          NewTickWhenPaused;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

