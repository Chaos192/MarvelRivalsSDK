﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlastNiagara

#include "Basic.hpp"

#include "BlastNiagara_structs.hpp"
#include "Niagara_structs.hpp"
#include "Niagara_classes.hpp"


namespace SDK
{

// Class BlastNiagara.NiagaraDataInterfaceBlastDynamicFragments
// 0x0050 (0x00E8 - 0x0098)
class UNiagaraDataInterfaceBlastDynamicFragments final : public UNiagaraDataInterfaceDynamicMeshesArrayBase
{
public:
	TArray<struct FBlastBigChunkState>            CurrentFrameBigChunksState;                        // 0x0098(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBlastFXChunkParticleData>      CurrentFrameFXChunksParticleData;                  // 0x00A8(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FNiagaraEmitterScalabilityOverrides    ScalabilityOverrides;                              // 0x00B8(0x0010)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                         SpawnCountScale;                                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         ReceiveEventNum;                                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         FXChunksParticlesNum;                              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBlastBigChunkBrokenMessage>    PerFrameMessages;                                  // 0x00D8(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceBlastDynamicFragments">();
	}
	static class UNiagaraDataInterfaceBlastDynamicFragments* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceBlastDynamicFragments>();
	}
};

}

