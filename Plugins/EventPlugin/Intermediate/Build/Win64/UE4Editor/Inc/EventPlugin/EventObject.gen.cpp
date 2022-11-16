// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventObject() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventObject_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
// End Cross Module References
	void UEventObject::StaticRegisterNativesUEventObject()
	{
	}
	UClass* Z_Construct_UClass_UEventObject_NoRegister()
	{
		return UEventObject::StaticClass();
	}
	struct Z_Construct_UClass_UEventObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventObject.h" },
		{ "ModuleRelativePath", "Public/EventObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventObject_Statics::ClassParams = {
		&UEventObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEventObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventObject, 1807358833);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventObject>()
	{
		return UEventObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventObject(Z_Construct_UClass_UEventObject, &UEventObject::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
