// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/BaseBoneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBoneComponent() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UBaseBoneComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UBaseBoneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	SPINEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UBaseBoneComponent::execGetAttachComponent)
	{
		P_GET_ENUM(ESpineBone,Z_Param_Bone);
		P_GET_UBOOL(Z_Param_bFollowRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetAttachComponent_Implementation(ESpineBone(Z_Param_Bone),Z_Param_bFollowRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseBoneComponent::execGetAttachComponentByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bFollowRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetAttachComponentByName_Implementation(Z_Param_BoneName,Z_Param_bFollowRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseBoneComponent::execGetBoneTransform)
	{
		P_GET_ENUM(ESpineBone,Z_Param_Bone);
		P_GET_UBOOL(Z_Param_bFollowRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransform_Implementation(ESpineBone(Z_Param_Bone),Z_Param_bFollowRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseBoneComponent::execGetBoneTransformByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bFollowRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransformByName_Implementation(Z_Param_BoneName,Z_Param_bFollowRotation);
		P_NATIVE_END;
	}
	static FName NAME_UBaseBoneComponent_GetAttachComponent = FName(TEXT("GetAttachComponent"));
	USceneComponent* UBaseBoneComponent::GetAttachComponent(ESpineBone Bone, bool bFollowRotation)
	{
		BaseBoneComponent_eventGetAttachComponent_Parms Parms;
		Parms.Bone=Bone;
		Parms.bFollowRotation=bFollowRotation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseBoneComponent_GetAttachComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseBoneComponent_GetAttachComponentByName = FName(TEXT("GetAttachComponentByName"));
	USceneComponent* UBaseBoneComponent::GetAttachComponentByName(const FString& BoneName, bool bFollowRotation)
	{
		BaseBoneComponent_eventGetAttachComponentByName_Parms Parms;
		Parms.BoneName=BoneName;
		Parms.bFollowRotation=bFollowRotation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseBoneComponent_GetAttachComponentByName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseBoneComponent_GetBoneTransform = FName(TEXT("GetBoneTransform"));
	FTransform UBaseBoneComponent::GetBoneTransform(ESpineBone Bone, bool bFollowRotation)
	{
		BaseBoneComponent_eventGetBoneTransform_Parms Parms;
		Parms.Bone=Bone;
		Parms.bFollowRotation=bFollowRotation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseBoneComponent_GetBoneTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseBoneComponent_GetBoneTransformByName = FName(TEXT("GetBoneTransformByName"));
	FTransform UBaseBoneComponent::GetBoneTransformByName(const FString& BoneName, bool bFollowRotation)
	{
		BaseBoneComponent_eventGetBoneTransformByName_Parms Parms;
		Parms.BoneName=BoneName;
		Parms.bFollowRotation=bFollowRotation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseBoneComponent_GetBoneTransformByName),&Parms);
		return Parms.ReturnValue;
	}
	void UBaseBoneComponent::StaticRegisterNativesUBaseBoneComponent()
	{
		UClass* Class = UBaseBoneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachComponent", &UBaseBoneComponent::execGetAttachComponent },
			{ "GetAttachComponentByName", &UBaseBoneComponent::execGetAttachComponentByName },
			{ "GetBoneTransform", &UBaseBoneComponent::execGetBoneTransform },
			{ "GetBoneTransformByName", &UBaseBoneComponent::execGetBoneTransformByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static void NewProp_bFollowRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowRotation;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetAttachComponent_Parms, Bone), Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_bFollowRotation_SetBit(void* Obj)
	{
		((BaseBoneComponent_eventGetAttachComponent_Parms*)Obj)->bFollowRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_bFollowRotation = { "bFollowRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseBoneComponent_eventGetAttachComponent_Parms), &Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_bFollowRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetAttachComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_bFollowRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseBoneComponent, nullptr, "GetAttachComponent", nullptr, nullptr, sizeof(BaseBoneComponent_eventGetAttachComponent_Parms), Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneName;
		static void NewProp_bFollowRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowRotation;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetAttachComponentByName_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_BoneName_MetaData)) };
	void Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_bFollowRotation_SetBit(void* Obj)
	{
		((BaseBoneComponent_eventGetAttachComponentByName_Parms*)Obj)->bFollowRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_bFollowRotation = { "bFollowRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseBoneComponent_eventGetAttachComponentByName_Parms), &Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_bFollowRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetAttachComponentByName_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_bFollowRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseBoneComponent, nullptr, "GetAttachComponentByName", nullptr, nullptr, sizeof(BaseBoneComponent_eventGetAttachComponentByName_Parms), Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static void NewProp_bFollowRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetBoneTransform_Parms, Bone), Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_bFollowRotation_SetBit(void* Obj)
	{
		((BaseBoneComponent_eventGetBoneTransform_Parms*)Obj)->bFollowRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_bFollowRotation = { "bFollowRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseBoneComponent_eventGetBoneTransform_Parms), &Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_bFollowRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetBoneTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_bFollowRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseBoneComponent, nullptr, "GetBoneTransform", nullptr, nullptr, sizeof(BaseBoneComponent_eventGetBoneTransform_Parms), Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneName;
		static void NewProp_bFollowRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_BoneName_MetaData)) };
	void Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_bFollowRotation_SetBit(void* Obj)
	{
		((BaseBoneComponent_eventGetBoneTransformByName_Parms*)Obj)->bFollowRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_bFollowRotation = { "bFollowRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseBoneComponent_eventGetBoneTransformByName_Parms), &Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_bFollowRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseBoneComponent_eventGetBoneTransformByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_bFollowRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseBoneComponent, nullptr, "GetBoneTransformByName", nullptr, nullptr, sizeof(BaseBoneComponent_eventGetBoneTransformByName_Parms), Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseBoneComponent_NoRegister()
	{
		return UBaseBoneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseBoneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseBoneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseBoneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponent, "GetAttachComponent" }, // 1449718395
		{ &Z_Construct_UFunction_UBaseBoneComponent_GetAttachComponentByName, "GetAttachComponentByName" }, // 3372989892
		{ &Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransform, "GetBoneTransform" }, // 3687634877
		{ &Z_Construct_UFunction_UBaseBoneComponent_GetBoneTransformByName, "GetBoneTransformByName" }, // 3209733823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBoneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BaseBoneComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseBoneComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseBoneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseBoneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseBoneComponent_Statics::ClassParams = {
		&UBaseBoneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseBoneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBoneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseBoneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseBoneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseBoneComponent, 3473207412);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<UBaseBoneComponent>()
	{
		return UBaseBoneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseBoneComponent(Z_Construct_UClass_UBaseBoneComponent, &UBaseBoneComponent::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("UBaseBoneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseBoneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
