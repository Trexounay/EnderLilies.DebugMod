// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineAnimNotify_PlayParticleEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAnimNotify_PlayParticleEffect() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SPINEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone();
// End Cross Module References
	static FName NAME_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect = FName(TEXT("CustomizeParticleEffect"));
	void USpineAnimNotify_PlayParticleEffect::CustomizeParticleEffect(UParticleSystemComponent* ParticleSystem) const
	{
		SpineAnimNotify_PlayParticleEffect_eventCustomizeParticleEffect_Parms Parms;
		Parms.ParticleSystem=ParticleSystem;
		const_cast<USpineAnimNotify_PlayParticleEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect),&Parms);
	}
	void USpineAnimNotify_PlayParticleEffect::StaticRegisterNativesUSpineAnimNotify_PlayParticleEffect()
	{
	}
	struct Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotify_PlayParticleEffect_eventCustomizeParticleEffect_Parms, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::NewProp_ParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::NewProp_ParticleSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect, nullptr, "CustomizeParticleEffect", nullptr, nullptr, sizeof(SpineAnimNotify_PlayParticleEffect_eventCustomizeParticleEffect_Parms), Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_NoRegister()
	{
		return USpineAnimNotify_PlayParticleEffect::StaticClass();
	}
	struct Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachToBone_MetaData[];
#endif
		static void NewProp_bAttachToBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachToBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollowBoneRotation_MetaData[];
#endif
		static void NewProp_bFollowBoneRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowBoneRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegisterAsRunningFX_MetaData[];
#endif
		static void NewProp_bRegisterAsRunningFX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsRunningFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpineAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect, "CustomizeParticleEffect" }, // 1262887104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SpineAnimNotify_PlayParticleEffect.h" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlayParticleEffect, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlayParticleEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlayParticleEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlayParticleEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlayParticleEffect, Bone), Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_CustomBone_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_CustomBone = { "CustomBone", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify_PlayParticleEffect, CustomBone), METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_CustomBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_CustomBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bAttachToBone_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	void Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bAttachToBone_SetBit(void* Obj)
	{
		((USpineAnimNotify_PlayParticleEffect*)Obj)->bAttachToBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bAttachToBone = { "bAttachToBone", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineAnimNotify_PlayParticleEffect), &Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bAttachToBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bAttachToBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bAttachToBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bFollowBoneRotation_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	void Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bFollowBoneRotation_SetBit(void* Obj)
	{
		((USpineAnimNotify_PlayParticleEffect*)Obj)->bFollowBoneRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bFollowBoneRotation = { "bFollowBoneRotation", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineAnimNotify_PlayParticleEffect), &Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bFollowBoneRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bFollowBoneRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bFollowBoneRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bRegisterAsRunningFX_MetaData[] = {
		{ "Category", "SpineAnimNotify_PlayParticleEffect" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify_PlayParticleEffect.h" },
	};
#endif
	void Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bRegisterAsRunningFX_SetBit(void* Obj)
	{
		((USpineAnimNotify_PlayParticleEffect*)Obj)->bRegisterAsRunningFX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bRegisterAsRunningFX = { "bRegisterAsRunningFX", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineAnimNotify_PlayParticleEffect), &Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bRegisterAsRunningFX_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bRegisterAsRunningFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bRegisterAsRunningFX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_CustomBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bAttachToBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bFollowBoneRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::NewProp_bRegisterAsRunningFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAnimNotify_PlayParticleEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::ClassParams = {
		&USpineAnimNotify_PlayParticleEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::PropPointers),
		0,
		0x009120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAnimNotify_PlayParticleEffect, 2065884413);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineAnimNotify_PlayParticleEffect>()
	{
		return USpineAnimNotify_PlayParticleEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAnimNotify_PlayParticleEffect(Z_Construct_UClass_USpineAnimNotify_PlayParticleEffect, &USpineAnimNotify_PlayParticleEffect::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineAnimNotify_PlayParticleEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAnimNotify_PlayParticleEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
