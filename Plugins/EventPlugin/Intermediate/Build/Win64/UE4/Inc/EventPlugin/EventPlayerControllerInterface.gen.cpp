// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventPlayerControllerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventPlayerControllerInterface() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventPlayerControllerInterface_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventPlayerControllerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
// End Cross Module References
	void UEventPlayerControllerInterface::StaticRegisterNativesUEventPlayerControllerInterface()
	{
	}
	UClass* Z_Construct_UClass_UEventPlayerControllerInterface_NoRegister()
	{
		return UEventPlayerControllerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEventPlayerControllerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventPlayerControllerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayerControllerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayerControllerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventPlayerControllerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEventPlayerControllerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventPlayerControllerInterface_Statics::ClassParams = {
		&UEventPlayerControllerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEventPlayerControllerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayerControllerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventPlayerControllerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventPlayerControllerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventPlayerControllerInterface, 111606136);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventPlayerControllerInterface>()
	{
		return UEventPlayerControllerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventPlayerControllerInterface(Z_Construct_UClass_UEventPlayerControllerInterface, &UEventPlayerControllerInterface::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventPlayerControllerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventPlayerControllerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
