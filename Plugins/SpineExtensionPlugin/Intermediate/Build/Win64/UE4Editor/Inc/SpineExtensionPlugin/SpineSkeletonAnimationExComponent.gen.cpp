// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineSkeletonAnimationExComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineSkeletonAnimationExComponent() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationExComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationExComponent();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_UTrackEntry_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineNotifyAsset_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpineSkeletonAnimationExComponent::execOnAnimationStart)
	{
		P_GET_OBJECT(UTrackEntry,Z_Param_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationStart(Z_Param_Entry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationExComponent::execReplaceSpineData)
	{
		P_GET_OBJECT(USpineAtlasAsset,Z_Param_NewAtlas);
		P_GET_OBJECT(USpineSkeletonDataAsset,Z_Param_NewSkeletonData);
		P_GET_OBJECT(USpineNotifyAsset,Z_Param_NewNotifyAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceSpineData(Z_Param_NewAtlas,Z_Param_NewSkeletonData,Z_Param_NewNotifyAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationExComponent::execSetPlaybackTimeIgnoreTimescale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlaybackTime);
		P_GET_UBOOL(Z_Param_bCallDelegates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackTimeIgnoreTimescale(Z_Param_InPlaybackTime,Z_Param_bCallDelegates);
		P_NATIVE_END;
	}
	void USpineSkeletonAnimationExComponent::StaticRegisterNativesUSpineSkeletonAnimationExComponent()
	{
		UClass* Class = USpineSkeletonAnimationExComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAnimationStart", &USpineSkeletonAnimationExComponent::execOnAnimationStart },
			{ "ReplaceSpineData", &USpineSkeletonAnimationExComponent::execReplaceSpineData },
			{ "SetPlaybackTimeIgnoreTimescale", &USpineSkeletonAnimationExComponent::execSetPlaybackTimeIgnoreTimescale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics
	{
		struct SpineSkeletonAnimationExComponent_eventOnAnimationStart_Parms
		{
			UTrackEntry* Entry;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineSkeletonAnimationExComponent_eventOnAnimationStart_Parms, Entry), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationExComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationExComponent, nullptr, "OnAnimationStart", nullptr, nullptr, sizeof(SpineSkeletonAnimationExComponent_eventOnAnimationStart_Parms), Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics
	{
		struct SpineSkeletonAnimationExComponent_eventReplaceSpineData_Parms
		{
			USpineAtlasAsset* NewAtlas;
			USpineSkeletonDataAsset* NewSkeletonData;
			USpineNotifyAsset* NewNotifyAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAtlas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSkeletonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewNotifyAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::NewProp_NewAtlas = { "NewAtlas", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineSkeletonAnimationExComponent_eventReplaceSpineData_Parms, NewAtlas), Z_Construct_UClass_USpineAtlasAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::NewProp_NewSkeletonData = { "NewSkeletonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineSkeletonAnimationExComponent_eventReplaceSpineData_Parms, NewSkeletonData), Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::NewProp_NewNotifyAsset = { "NewNotifyAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineSkeletonAnimationExComponent_eventReplaceSpineData_Parms, NewNotifyAsset), Z_Construct_UClass_USpineNotifyAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::NewProp_NewAtlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::NewProp_NewSkeletonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::NewProp_NewNotifyAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationExComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationExComponent, nullptr, "ReplaceSpineData", nullptr, nullptr, sizeof(SpineSkeletonAnimationExComponent_eventReplaceSpineData_Parms), Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics
	{
		struct SpineSkeletonAnimationExComponent_eventSetPlaybackTimeIgnoreTimescale_Parms
		{
			float InPlaybackTime;
			bool bCallDelegates;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlaybackTime;
		static void NewProp_bCallDelegates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallDelegates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::NewProp_InPlaybackTime = { "InPlaybackTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineSkeletonAnimationExComponent_eventSetPlaybackTimeIgnoreTimescale_Parms, InPlaybackTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::NewProp_bCallDelegates_SetBit(void* Obj)
	{
		((SpineSkeletonAnimationExComponent_eventSetPlaybackTimeIgnoreTimescale_Parms*)Obj)->bCallDelegates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::NewProp_bCallDelegates = { "bCallDelegates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineSkeletonAnimationExComponent_eventSetPlaybackTimeIgnoreTimescale_Parms), &Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::NewProp_bCallDelegates_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::NewProp_InPlaybackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::NewProp_bCallDelegates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationExComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationExComponent, nullptr, "SetPlaybackTimeIgnoreTimescale", nullptr, nullptr, sizeof(SpineSkeletonAnimationExComponent_eventSetPlaybackTimeIgnoreTimescale_Parms), Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpineSkeletonAnimationExComponent_NoRegister()
	{
		return USpineSkeletonAnimationExComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastAnimInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAnimInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastAnimInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstanceForAnimations_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimInstanceForAnimations_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceForAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimInstanceForAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotifyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpineSkeletonAnimationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineSkeletonAnimationExComponent_OnAnimationStart, "OnAnimationStart" }, // 2058360648
		{ &Z_Construct_UFunction_USpineSkeletonAnimationExComponent_ReplaceSpineData, "ReplaceSpineData" }, // 1145951322
		{ &Z_Construct_UFunction_USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale, "SetPlaybackTimeIgnoreTimescale" }, // 2089893852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SpineSkeletonAnimationExComponent.h" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationExComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_LastAnimInstances_Inner = { "LastAnimInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpineAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_LastAnimInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationExComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_LastAnimInstances = { "LastAnimInstances", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonAnimationExComponent, LastAnimInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_LastAnimInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_LastAnimInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations_ValueProp = { "AnimInstanceForAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USpineAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations_Key_KeyProp = { "AnimInstanceForAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationExComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations = { "AnimInstanceForAnimations", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonAnimationExComponent, AnimInstanceForAnimations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_NotifyData_MetaData[] = {
		{ "Category", "SpineSkeletonAnimationExComponent" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationExComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_NotifyData = { "NotifyData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonAnimationExComponent, NotifyData), Z_Construct_UClass_USpineNotifyAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_NotifyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_NotifyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_LastAnimInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_LastAnimInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_AnimInstanceForAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::NewProp_NotifyData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineSkeletonAnimationExComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::ClassParams = {
		&USpineSkeletonAnimationExComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineSkeletonAnimationExComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineSkeletonAnimationExComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineSkeletonAnimationExComponent, 92874869);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineSkeletonAnimationExComponent>()
	{
		return USpineSkeletonAnimationExComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineSkeletonAnimationExComponent(Z_Construct_UClass_USpineSkeletonAnimationExComponent, &USpineSkeletonAnimationExComponent::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineSkeletonAnimationExComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineSkeletonAnimationExComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
