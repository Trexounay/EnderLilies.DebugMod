// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineBoneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineBoneComponent() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineBoneComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineBoneComponent();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UBaseBoneComponent();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
// End Cross Module References
	void USpineBoneComponent::StaticRegisterNativesUSpineBoneComponent()
	{
	}
	UClass* Z_Construct_UClass_USpineBoneComponent_NoRegister()
	{
		return USpineBoneComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineBoneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFollowers_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneFollowers_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneFollowers_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneFollowers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFollowers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneFollowers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatedBoneFollowers_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotatedBoneFollowers_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotatedBoneFollowers_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotatedBoneFollowers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatedBoneFollowers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RotatedBoneFollowers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineAnimComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpineAnimComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneFeetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneFeetComponent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneNames_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneNames_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneNames_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineBoneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseBoneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SpineBoneComponent.h" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_ValueProp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_ValueProp = { "BoneFollowers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_Key_KeyProp = { "BoneFollowers_Key", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers = { "BoneFollowers", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneComponent, BoneFollowers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_ValueProp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_ValueProp = { "RotatedBoneFollowers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_Key_KeyProp = { "RotatedBoneFollowers_Key", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers = { "RotatedBoneFollowers", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneComponent, RotatedBoneFollowers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SpineAnimComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SpineAnimComponent = { "SpineAnimComponent", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneComponent, SpineAnimComponent), Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SpineAnimComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SpineAnimComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_NavMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_NavMovementComponent = { "NavMovementComponent", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneComponent, NavMovementComponent), Z_Construct_UClass_UNavMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_NavMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_NavMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SceneFeetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SceneFeetComponent = { "SceneFeetComponent", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneComponent, SceneFeetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SceneFeetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SceneFeetComponent_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_ValueProp = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_Key_KeyProp = { "BoneNames_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "SpineBoneComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneComponent, BoneNames), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineBoneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneFollowers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_RotatedBoneFollowers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SpineAnimComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_NavMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_SceneFeetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneComponent_Statics::NewProp_BoneNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineBoneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineBoneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineBoneComponent_Statics::ClassParams = {
		&USpineBoneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineBoneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpineBoneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineBoneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineBoneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineBoneComponent, 2535508834);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineBoneComponent>()
	{
		return USpineBoneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineBoneComponent(Z_Construct_UClass_USpineBoneComponent, &USpineBoneComponent::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineBoneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineBoneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
