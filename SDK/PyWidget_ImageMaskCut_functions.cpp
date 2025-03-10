﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_ImageMaskCut

#include "Basic.hpp"

#include "PyWidget_ImageMaskCut_classes.hpp"
#include "PyWidget_ImageMaskCut_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_ImageMaskCut::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "PreConstruct");

	Params::PyWidget_ImageMaskCut_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_ImageMaskCut::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_ImageMaskCut::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.SetMaskMap
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FVector2D&                 Mask_Map_0                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut::SetMaskMap(const struct FVector2D& Mask_Map_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "SetMaskMap");

	Params::PyWidget_ImageMaskCut_SetMaskMap Parms{};

	Parms.Mask_Map_0 = std::move(Mask_Map_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.SetImageData
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FVector2D&                 Image_Location_0                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 Image_Size_0                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut::SetImageData(const struct FVector2D& Image_Location_0, const struct FVector2D& Image_Size_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "SetImageData");

	Params::PyWidget_ImageMaskCut_SetImageData Parms{};

	Parms.Image_Location_0 = std::move(Image_Location_0);
	Parms.Image_Size_0 = std::move(Image_Size_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.SetImgMask
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                       img_mask_0                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Img_Mask_Soft                                          (Parm, UObjectWrapper, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut::SetImgMask(class UTexture2D* img_mask_0, TSoftObjectPtr<class UTexture2D> Img_Mask_Soft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "SetImgMask");

	Params::PyWidget_ImageMaskCut_SetImgMask Parms{};

	Parms.img_mask_0 = img_mask_0;
	Parms.Img_Mask_Soft = Img_Mask_Soft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.SetLoadImgMask
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          img_mask_0                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut::SetLoadImgMask(class UObject* img_mask_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "SetLoadImgMask");

	Params::PyWidget_ImageMaskCut_SetLoadImgMask Parms{};

	Parms.img_mask_0 = img_mask_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.SetImgPicture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                       Img_Picture_0                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Img_Picture_Soft                                       (Parm, UObjectWrapper, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut::SetImgPicture(class UTexture2D* Img_Picture_0, TSoftObjectPtr<class UTexture2D> Img_Picture_Soft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "SetImgPicture");

	Params::PyWidget_ImageMaskCut_SetImgPicture Parms{};

	Parms.Img_Picture_0 = Img_Picture_0;
	Parms.Img_Picture_Soft = Img_Picture_Soft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.SetLoadimgPicture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          Img_Picture_0                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut::SetLoadimgPicture(class UObject* Img_Picture_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "SetLoadimgPicture");

	Params::PyWidget_ImageMaskCut_SetLoadimgPicture Parms{};

	Parms.Img_Picture_0 = Img_Picture_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut.UpdateMaterial
// (Native, Public, BlueprintCallable)

void UPyWidget_ImageMaskCut::UpdateMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut", "UpdateMaterial");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut_Gradient.SetImgPicture2
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                       Img_Picture_2_0                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Img_Picture_Soft_2                                     (Parm, UObjectWrapper, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut_Gradient::SetImgPicture2(class UTexture2D* Img_Picture_2_0, TSoftObjectPtr<class UTexture2D> Img_Picture_Soft_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut_Gradient", "SetImgPicture2");

	Params::PyWidget_ImageMaskCut_Gradient_SetImgPicture2 Parms{};

	Parms.Img_Picture_2_0 = Img_Picture_2_0;
	Parms.Img_Picture_Soft_2 = Img_Picture_Soft_2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut_Gradient.SetLoadimgPicture2
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          Img_Picture_2_0                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ImageMaskCut_Gradient::SetLoadimgPicture2(class UObject* Img_Picture_2_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut_Gradient", "SetLoadimgPicture2");

	Params::PyWidget_ImageMaskCut_Gradient_SetLoadimgPicture2 Parms{};

	Parms.Img_Picture_2_0 = Img_Picture_2_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ImageMaskCut.PyWidget_ImageMaskCut_Gradient.UpdateMaterial
// (Native, Protected, BlueprintCallable)

void UPyWidget_ImageMaskCut_Gradient::UpdateMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ImageMaskCut_Gradient", "UpdateMaterial");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

