// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCVLibrary/Public/WebcamReaderClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebcamReaderClass() {}
// Cross Module References
	OPENCVLIBRARY_API UClass* Z_Construct_UClass_AWebcamReaderClass_NoRegister();
	OPENCVLIBRARY_API UClass* Z_Construct_UClass_AWebcamReaderClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OpenCVLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FName NAME_AWebcamReaderClass_OnNextVideoFrame = FName(TEXT("OnNextVideoFrame"));
	void AWebcamReaderClass::OnNextVideoFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWebcamReaderClass_OnNextVideoFrame),NULL);
	}
	void AWebcamReaderClass::StaticRegisterNativesAWebcamReaderClass()
	{
	}
	struct Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// Blueprint Event called every time the video frame is updated\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "Blueprint Event called every time the video frame is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebcamReaderClass, nullptr, "OnNextVideoFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWebcamReaderClass_NoRegister()
	{
		return AWebcamReaderClass::StaticClass();
	}
	struct Z_Construct_UClass_AWebcamReaderClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldResize_MetaData[];
#endif
		static void NewProp_ShouldResize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldResize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeDeminsions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResizeDeminsions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStreamOpen_MetaData[];
#endif
		static void NewProp_isStreamOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStreamOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWebcamReaderClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWebcamReaderClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWebcamReaderClass_OnNextVideoFrame, "OnNextVideoFrame" }, // 1090312934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebcamReaderClass.h" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_CameraID_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// The device ID opened by the Video Stream\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "The device ID opened by the Video Stream" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_CameraID = { "CameraID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWebcamReaderClass, CameraID), METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_CameraID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_CameraID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ShouldResize_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// If the webcam images should be resized every frame\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "If the webcam images should be resized every frame" },
	};
#endif
	void Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ShouldResize_SetBit(void* Obj)
	{
		((AWebcamReaderClass*)Obj)->ShouldResize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ShouldResize = { "ShouldResize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWebcamReaderClass), &Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ShouldResize_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ShouldResize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ShouldResize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ResizeDeminsions_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// The targeted resize width and height (width, height)\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "The targeted resize width and height (width, height)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ResizeDeminsions = { "ResizeDeminsions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWebcamReaderClass, ResizeDeminsions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ResizeDeminsions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ResizeDeminsions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshRate_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// The rate at which the color data array and video texture is updated (in frames per second)\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "The rate at which the color data array and video texture is updated (in frames per second)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshRate = { "RefreshRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWebcamReaderClass, RefreshRate), METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshTimer_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// The refresh timer\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "The refresh timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshTimer = { "RefreshTimer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWebcamReaderClass, RefreshTimer), METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_isStreamOpen_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// If the stream has succesfully opened yet\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "If the stream has succesfully opened yet" },
	};
#endif
	void Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_isStreamOpen_SetBit(void* Obj)
	{
		((AWebcamReaderClass*)Obj)->isStreamOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_isStreamOpen = { "isStreamOpen", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWebcamReaderClass), &Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_isStreamOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_isStreamOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_isStreamOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoSize_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// The videos width and height (width, height)\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "The videos width and height (width, height)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoSize = { "VideoSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWebcamReaderClass, VideoSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoTexture_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// The current video frame's corresponding texture\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "The current video frame's corresponding texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoTexture = { "VideoTexture", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWebcamReaderClass, VideoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoTexture_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Webcam" },
		{ "Comment", "// The current data array\n" },
		{ "ModuleRelativePath", "Public/WebcamReaderClass.h" },
		{ "ToolTip", "The current data array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWebcamReaderClass, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWebcamReaderClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_CameraID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ShouldResize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_ResizeDeminsions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_RefreshTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_isStreamOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_VideoTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamReaderClass_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWebcamReaderClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWebcamReaderClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWebcamReaderClass_Statics::ClassParams = {
		&AWebcamReaderClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWebcamReaderClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWebcamReaderClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWebcamReaderClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWebcamReaderClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWebcamReaderClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWebcamReaderClass, 710130338);
	template<> OPENCVLIBRARY_API UClass* StaticClass<AWebcamReaderClass>()
	{
		return AWebcamReaderClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWebcamReaderClass(Z_Construct_UClass_AWebcamReaderClass, &AWebcamReaderClass::StaticClass, TEXT("/Script/OpenCVLibrary"), TEXT("AWebcamReaderClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWebcamReaderClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
