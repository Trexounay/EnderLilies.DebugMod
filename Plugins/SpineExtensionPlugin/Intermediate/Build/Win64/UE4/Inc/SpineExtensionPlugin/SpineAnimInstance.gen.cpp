// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineAnimInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAnimInstance() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimInstance_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
// End Cross Module References
	void USpineAnimInstance::StaticRegisterNativesUSpineAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USpineAnimInstance_NoRegister()
	{
		return USpineAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USpineAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineAnimationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpineAnimationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveAnimNotifyState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveAnimNotifyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveAnimNotifyState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpineAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SpineAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SpineAnimationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SpineAnimationComponent = { "SpineAnimationComponent", nullptr, (EPropertyFlags)0x0012000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimInstance, SpineAnimationComponent), Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SpineAnimationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SpineAnimationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SourceSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SourceSequence = { "SourceSequence", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimInstance, SourceSequence), Z_Construct_UClass_USpineAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SourceSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SourceSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_NotifyQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_NotifyQueue = { "NotifyQueue", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimInstance, NotifyQueue), Z_Construct_UScriptStruct_FAnimNotifyQueue, METADATA_PARAMS(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_NotifyQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_NotifyQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_ActiveAnimNotifyState_Inner = { "ActiveAnimNotifyState", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_ActiveAnimNotifyState = { "ActiveAnimNotifyState", nullptr, (EPropertyFlags)0x0010008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimInstance, ActiveAnimNotifyState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SpineAnimationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_SourceSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_NotifyQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_ActiveAnimNotifyState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimInstance_Statics::NewProp_ActiveAnimNotifyState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAnimInstance_Statics::ClassParams = {
		&USpineAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAnimInstance, 2396227607);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineAnimInstance>()
	{
		return USpineAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAnimInstance(Z_Construct_UClass_USpineAnimInstance, &USpineAnimInstance::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
