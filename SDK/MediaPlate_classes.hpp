﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaPlate

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "MediaAssets_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class MediaPlate.MediaPlate
// 0x0010 (0x04A0 - 0x0490)
class AMediaPlate final : public AActor
{
public:
	class UMediaPlateComponent*                   MediaPlateComponent;                               // 0x0490(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0498(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlate">();
	}
	static class AMediaPlate* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMediaPlate>();
	}
};

// Class MediaPlate.MediaPlateAssetUserData
// 0x0010 (0x0040 - 0x0030)
class UMediaPlateAssetUserData final : public UAssetUserData
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlateAssetUserData">();
	}
	static class UMediaPlateAssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlateAssetUserData>();
	}
};

// Class MediaPlate.MediaPlateComponent
// 0x00C8 (0x01B8 - 0x00F0)
class UMediaPlateComponent final : public UActorComponent
{
public:
	uint8                                         Pad_F0[0x8];                                       // 0x00F0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bPlayOnOpen;                                       // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoPlay;                                         // 0x00F9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableAudio;                                      // 0x00FA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FB[0x1];                                       // 0x00FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTime;                                         // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                   SoundComponent;                                    // 0x0100(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0108(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>           Letterboxes;                                       // 0x0110(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMediaPlaylist*                         MediaPlaylist;                                     // 0x0120(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlaylistIndex;                                     // 0x0128(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaSourceCacheSettings              CacheSettings;                                     // 0x012C(0x0008)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          bIsMediaPlatePlaying;                              // 0x0134(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_135[0x7];                                      // 0x0135(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bPlayOnlyWhenVisible;                              // 0x013C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bLoop;                                             // 0x013D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMediaTextureVisibleMipsTiles                 VisibleMipsTilesCalculations;                      // 0x013E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_13F[0x1];                                      // 0x013F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MipMapBias;                                        // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsAspectRatioAuto;                                // 0x0144(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnableMipMapUpscaling;                            // 0x0145(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_146[0x2];                                      // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MipLevelToUpscale;                                 // 0x0148(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         LetterboxAspectRatio;                              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_150[0x8];                                      // 0x0150(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MeshRange;                                         // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMediaTexture*>                  MediaTextures;                                     // 0x0168(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0178(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_180[0x38];                                     // 0x0180(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Close();
	float GetLetterboxAspectRatio();
	bool GetLoop();
	class UMediaPlayer* GetMediaPlayer();
	class UMediaTexture* GetMediaTexture(int32 Index_0);
	void OnMediaEnd();
	void OnMediaOpened(const class FString& DeviceUrl);
	void Open();
	void Pause();
	void Play();
	bool Rewind();
	bool Seek(const struct FTimespan& Time);
	void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);
	void SetLetterboxAspectRatio(float AspectRatio);
	void SetLoop(bool bInLoop);
	void SetMeshRange(const struct FVector2D& InMeshRange);
	void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);

	bool GetIsAspectRatioAuto() const;
	struct FVector2D GetMeshRange() const;
	bool IsMediaPlatePlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlateComponent">();
	}
	static class UMediaPlateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlateComponent>();
	}
};

}

