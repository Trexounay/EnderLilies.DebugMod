// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineAnimNotify_PlaySound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAnimNotify_PlaySound() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify_PlaySound_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify_PlaySound();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USpineAnimNotify_PlaySound::StaticRegisterNativesUSpineAnimNotify_PlaySound()
	{
	}
	UClass* Z_Construct_UClass_USpineAnimNotify_PlaySound_NoRegister()
	{
		return USpineAnimNotify_PlaySound::StaticClass();
	}
	struct Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[];
#endif
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpineAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SpineAnimNotify_PlaySound.h" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlaySound.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlaySound" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlaySound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlaySound, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlaySound" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlaySound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlaySound, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlaySound" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlaySound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlaySound, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlaySound" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlaySound.h" },
	};
#endif
	void Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((USpineAnimNotify_PlaySound*)Obj)->bFollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpineAnimNotify_PlaySound), &Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::NewProp_bFollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAnimNotify_PlaySound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::ClassParams = {
		&USpineAnimNotify_PlaySound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::PropPointers),
		0,
		0x009120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAnimNotify_PlaySound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAnimNotify_PlaySound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAnimNotify_PlaySound, 215264018);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineAnimNotify_PlaySound>()
	{
		return USpineAnimNotify_PlaySound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAnimNotify_PlaySound(Z_Construct_UClass_USpineAnimNotify_PlaySound, &USpineAnimNotify_PlaySound::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineAnimNotify_PlaySound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAnimNotify_PlaySound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
