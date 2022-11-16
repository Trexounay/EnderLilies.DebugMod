// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/ActorBindingInfos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorBindingInfos() {}
// Cross Module References
	EVENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorBindingInfos();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EActorBindingTransformType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FActorBindingInfos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EVENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FActorBindingInfos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorBindingInfos, Z_Construct_UPackage__Script_EventPlugin(), TEXT("ActorBindingInfos"), sizeof(FActorBindingInfos), Get_Z_Construct_UScriptStruct_FActorBindingInfos_Hash());
	}
	return Singleton;
}
template<> EVENTPLUGIN_API UScriptStruct* StaticStruct<FActorBindingInfos>()
{
	return FActorBindingInfos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorBindingInfos(FActorBindingInfos::StaticStruct, TEXT("/Script/EventPlugin"), TEXT("ActorBindingInfos"), false, nullptr, nullptr);
static struct FScriptStruct_EventPlugin_StaticRegisterNativesFActorBindingInfos
{
	FScriptStruct_EventPlugin_StaticRegisterNativesFActorBindingInfos()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorBindingInfos")),new UScriptStruct::TCppStructOps<FActorBindingInfos>);
	}
} ScriptStruct_EventPlugin_StaticRegisterNativesFActorBindingInfos;
	struct Z_Construct_UScriptStruct_FActorBindingInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnEventFinish_MetaData[];
#endif
		static void NewProp_bDestroyOnEventFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnEventFinish;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBindingInfos_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorBindingInfos.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorBindingInfos>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "ActorBindingInfos" },
		{ "ModuleRelativePath", "Public/ActorBindingInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorBindingInfos, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_bDestroyOnEventFinish_MetaData[] = {
		{ "Category", "ActorBindingInfos" },
		{ "ModuleRelativePath", "Public/ActorBindingInfos.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_bDestroyOnEventFinish_SetBit(void* Obj)
	{
		((FActorBindingInfos*)Obj)->bDestroyOnEventFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_bDestroyOnEventFinish = { "bDestroyOnEventFinish", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActorBindingInfos), &Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_bDestroyOnEventFinish_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_bDestroyOnEventFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_bDestroyOnEventFinish_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_TransformType_MetaData[] = {
		{ "Category", "ActorBindingInfos" },
		{ "ModuleRelativePath", "Public/ActorBindingInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorBindingInfos, TransformType), Z_Construct_UEnum_EventPlugin_EActorBindingTransformType, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_TransformType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "ActorBindingInfos" },
		{ "ModuleRelativePath", "Public/ActorBindingInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorBindingInfos, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorBindingInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_bDestroyOnEventFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_TransformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_TransformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBindingInfos_Statics::NewProp_SpawnTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorBindingInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
		nullptr,
		&NewStructOps,
		"ActorBindingInfos",
		sizeof(FActorBindingInfos),
		alignof(FActorBindingInfos),
		Z_Construct_UScriptStruct_FActorBindingInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBindingInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorBindingInfos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorBindingInfos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EventPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorBindingInfos"), sizeof(FActorBindingInfos), Get_Z_Construct_UScriptStruct_FActorBindingInfos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorBindingInfos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorBindingInfos_Hash() { return 1614616930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
