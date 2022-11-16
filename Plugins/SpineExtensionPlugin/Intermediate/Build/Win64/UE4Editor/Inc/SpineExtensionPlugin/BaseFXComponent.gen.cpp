// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/BaseFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFXComponent() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UBaseFXComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UBaseFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	SPINEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseFXComponent::execGetDefaultFXBone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESpineBone*)Z_Param__Result=P_THIS->GetDefaultFXBone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFXComponent::execSpawnFX)
	{
		P_GET_OBJECT(UParticleSystem,Z_Param_ParticleSystem);
		P_GET_ENUM(ESpineBone,Z_Param_Bone);
		P_GET_PROPERTY(FNameProperty,Z_Param_CustomBone);
		P_GET_STRUCT(FTransform,Z_Param_Offset);
		P_GET_UBOOL(Z_Param_bAttach);
		P_GET_UBOOL(Z_Param_bFollowBoneRotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_TranslucencySortPriority);
		P_GET_ENUM(EPSCPoolMethod,Z_Param_PoolMethod);
		P_GET_UBOOL(Z_Param_bRegisterAsRunningFX);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystemComponent**)Z_Param__Result=P_THIS->SpawnFX_Implementation(Z_Param_ParticleSystem,ESpineBone(Z_Param_Bone),Z_Param_CustomBone,Z_Param_Offset,Z_Param_bAttach,Z_Param_bFollowBoneRotation,Z_Param_TranslucencySortPriority,EPSCPoolMethod(Z_Param_PoolMethod),Z_Param_bRegisterAsRunningFX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFXComponent::execStopAllRunningFXs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllRunningFXs();
		P_NATIVE_END;
	}
	static FName NAME_UBaseFXComponent_SpawnFX = FName(TEXT("SpawnFX"));
	UParticleSystemComponent* UBaseFXComponent::SpawnFX(UParticleSystem* ParticleSystem, ESpineBone Bone, FName CustomBone, FTransform Offset, bool bAttach, bool bFollowBoneRotation, int32 TranslucencySortPriority, EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX)
	{
		BaseFXComponent_eventSpawnFX_Parms Parms;
		Parms.ParticleSystem=ParticleSystem;
		Parms.Bone=Bone;
		Parms.CustomBone=CustomBone;
		Parms.Offset=Offset;
		Parms.bAttach=bAttach ? true : false;
		Parms.bFollowBoneRotation=bFollowBoneRotation ? true : false;
		Parms.TranslucencySortPriority=TranslucencySortPriority;
		Parms.PoolMethod=PoolMethod;
		Parms.bRegisterAsRunningFX=bRegisterAsRunningFX ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseFXComponent_SpawnFX),&Parms);
		return Parms.ReturnValue;
	}
	void UBaseFXComponent::StaticRegisterNativesUBaseFXComponent()
	{
		UClass* Class = UBaseFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultFXBone", &UBaseFXComponent::execGetDefaultFXBone },
			{ "SpawnFX", &UBaseFXComponent::execSpawnFX },
			{ "StopAllRunningFXs", &UBaseFXComponent::execStopAllRunningFXs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics
	{
		struct BaseFXComponent_eventGetDefaultFXBone_Parms
		{
			ESpineBone ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventGetDefaultFXBone_Parms, ReturnValue), Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFXComponent, nullptr, "GetDefaultFXBone", nullptr, nullptr, sizeof(BaseFXComponent_eventGetDefaultFXBone_Parms), Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomBone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static void NewProp_bAttach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttach;
		static void NewProp_bFollowBoneRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowBoneRotation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolMethod;
		static void NewProp_bRegisterAsRunningFX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsRunningFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventSpawnFX_Parms, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventSpawnFX_Parms, Bone), Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_CustomBone = { "CustomBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventSpawnFX_Parms, CustomBone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventSpawnFX_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bAttach_SetBit(void* Obj)
	{
		((BaseFXComponent_eventSpawnFX_Parms*)Obj)->bAttach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bAttach = { "bAttach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFXComponent_eventSpawnFX_Parms), &Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bAttach_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bFollowBoneRotation_SetBit(void* Obj)
	{
		((BaseFXComponent_eventSpawnFX_Parms*)Obj)->bFollowBoneRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bFollowBoneRotation = { "bFollowBoneRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFXComponent_eventSpawnFX_Parms), &Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bFollowBoneRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventSpawnFX_Parms, TranslucencySortPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_PoolMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_PoolMethod = { "PoolMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventSpawnFX_Parms, PoolMethod), Z_Construct_UEnum_Engine_EPSCPoolMethod, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bRegisterAsRunningFX_SetBit(void* Obj)
	{
		((BaseFXComponent_eventSpawnFX_Parms*)Obj)->bRegisterAsRunningFX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bRegisterAsRunningFX = { "bRegisterAsRunningFX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFXComponent_eventSpawnFX_Parms), &Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bRegisterAsRunningFX_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFXComponent_eventSpawnFX_Parms, ReturnValue), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_CustomBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bFollowBoneRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_TranslucencySortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_PoolMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_PoolMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_bRegisterAsRunningFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFXComponent, nullptr, "SpawnFX", nullptr, nullptr, sizeof(BaseFXComponent_eventSpawnFX_Parms), Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFXComponent_SpawnFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseFXComponent_SpawnFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFXComponent, nullptr, "StopAllRunningFXs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseFXComponent_NoRegister()
	{
		return UBaseFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFXBone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFXBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultFXBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseFXComponent_GetDefaultFXBone, "GetDefaultFXBone" }, // 4064285191
		{ &Z_Construct_UFunction_UBaseFXComponent_SpawnFX, "SpawnFX" }, // 677245583
		{ &Z_Construct_UFunction_UBaseFXComponent_StopAllRunningFXs, "StopAllRunningFXs" }, // 3736342079
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BaseFXComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseFXComponent_Statics::NewProp_DefaultFXBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFXComponent_Statics::NewProp_DefaultFXBone_MetaData[] = {
		{ "Category", "BaseFXComponent" },
		{ "ModuleRelativePath", "Public/BaseFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseFXComponent_Statics::NewProp_DefaultFXBone = { "DefaultFXBone", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFXComponent, DefaultFXBone), Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(Z_Construct_UClass_UBaseFXComponent_Statics::NewProp_DefaultFXBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFXComponent_Statics::NewProp_DefaultFXBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFXComponent_Statics::NewProp_DefaultFXBone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFXComponent_Statics::NewProp_DefaultFXBone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseFXComponent_Statics::ClassParams = {
		&UBaseFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFXComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseFXComponent, 3796096339);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<UBaseFXComponent>()
	{
		return UBaseFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseFXComponent(Z_Construct_UClass_UBaseFXComponent, &UBaseFXComponent::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("UBaseFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
