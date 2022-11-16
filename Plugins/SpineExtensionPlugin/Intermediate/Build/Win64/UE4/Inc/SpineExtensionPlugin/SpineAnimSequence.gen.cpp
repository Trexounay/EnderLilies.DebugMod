// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineAnimSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAnimSequence() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimSequence_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimSequence();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
// End Cross Module References
	void USpineAnimSequence::StaticRegisterNativesUSpineAnimSequence()
	{
	}
	UClass* Z_Construct_UClass_USpineAnimSequence_NoRegister()
	{
		return USpineAnimSequence::StaticClass();
	}
	struct Z_Construct_UClass_USpineAnimSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAnimSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpineAnimSequence.h" },
		{ "ModuleRelativePath", "Public/SpineAnimSequence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAnimSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAnimSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAnimSequence_Statics::ClassParams = {
		&USpineAnimSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAnimSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAnimSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAnimSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAnimSequence, 3791026946);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineAnimSequence>()
	{
		return USpineAnimSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAnimSequence(Z_Construct_UClass_USpineAnimSequence, &USpineAnimSequence::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineAnimSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAnimSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
