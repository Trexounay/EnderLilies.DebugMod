// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventActorInterface() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventActorInterface_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
// End Cross Module References
	void UEventActorInterface::StaticRegisterNativesUEventActorInterface()
	{
	}
	UClass* Z_Construct_UClass_UEventActorInterface_NoRegister()
	{
		return UEventActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEventActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventActorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEventActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventActorInterface_Statics::ClassParams = {
		&UEventActorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventActorInterface, 3192067996);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventActorInterface>()
	{
		return UEventActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventActorInterface(Z_Construct_UClass_UEventActorInterface, &UEventActorInterface::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventActorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
