// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLayerToolsPlugin/Public/LayerName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayerName() {}
// Cross Module References
	ACTORLAYERTOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLayerName();
	UPackage* Z_Construct_UPackage__Script_ActorLayerToolsPlugin();
// End Cross Module References
class UScriptStruct* FLayerName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORLAYERTOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLayerName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerName, Z_Construct_UPackage__Script_ActorLayerToolsPlugin(), TEXT("LayerName"), sizeof(FLayerName), Get_Z_Construct_UScriptStruct_FLayerName_Hash());
	}
	return Singleton;
}
template<> ACTORLAYERTOOLSPLUGIN_API UScriptStruct* StaticStruct<FLayerName>()
{
	return FLayerName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLayerName(FLayerName::StaticStruct, TEXT("/Script/ActorLayerToolsPlugin"), TEXT("LayerName"), false, nullptr, nullptr);
static struct FScriptStruct_ActorLayerToolsPlugin_StaticRegisterNativesFLayerName
{
	FScriptStruct_ActorLayerToolsPlugin_StaticRegisterNativesFLayerName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LayerName")),new UScriptStruct::TCppStructOps<FLayerName>);
	}
} ScriptStruct_ActorLayerToolsPlugin_StaticRegisterNativesFLayerName;
	struct Z_Construct_UScriptStruct_FLayerName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LayerName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayerName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LayerName" },
		{ "ModuleRelativePath", "Public/LayerName.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLayerName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayerName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerToolsPlugin,
		nullptr,
		&NewStructOps,
		"LayerName",
		sizeof(FLayerName),
		alignof(FLayerName),
		Z_Construct_UScriptStruct_FLayerName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayerName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLayerName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActorLayerToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LayerName"), sizeof(FLayerName), Get_Z_Construct_UScriptStruct_FLayerName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLayerName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLayerName_Hash() { return 3472681241U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
