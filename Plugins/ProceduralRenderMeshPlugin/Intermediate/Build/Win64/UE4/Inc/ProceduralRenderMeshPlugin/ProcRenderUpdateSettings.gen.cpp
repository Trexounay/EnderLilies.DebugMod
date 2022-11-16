// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralRenderMeshPlugin/Public/ProcRenderUpdateSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcRenderUpdateSettings() {}
// Cross Module References
	PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcRenderUpdateSettings();
	UPackage* Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
// End Cross Module References
class UScriptStruct* FProcRenderUpdateSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALRENDERMESHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcRenderUpdateSettings, Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin(), TEXT("ProcRenderUpdateSettings"), sizeof(FProcRenderUpdateSettings), Get_Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Hash());
	}
	return Singleton;
}
template<> PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* StaticStruct<FProcRenderUpdateSettings>()
{
	return FProcRenderUpdateSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcRenderUpdateSettings(FProcRenderUpdateSettings::StaticStruct, TEXT("/Script/ProceduralRenderMeshPlugin"), TEXT("ProcRenderUpdateSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderUpdateSettings
{
	FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderUpdateSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProcRenderUpdateSettings")),new UScriptStruct::TCppStructOps<FProcRenderUpdateSettings>);
	}
} ScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderUpdateSettings;
	struct Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionData_MetaData[];
#endif
		static void NewProp_bUpdatePositionData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateColorData_MetaData[];
#endif
		static void NewProp_bUpdateColorData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateColorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateNormalData_MetaData[];
#endif
		static void NewProp_bUpdateNormalData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateNormalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateTangentData_MetaData[];
#endif
		static void NewProp_bUpdateTangentData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateTangentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateUV0Data_MetaData[];
#endif
		static void NewProp_bUpdateUV0Data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateUV0Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateUV1Data_MetaData[];
#endif
		static void NewProp_bUpdateUV1Data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateUV1Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateUV2Data_MetaData[];
#endif
		static void NewProp_bUpdateUV2Data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateUV2Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateUV3Data_MetaData[];
#endif
		static void NewProp_bUpdateUV3Data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateUV3Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcRenderUpdateSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdatePositionData_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdatePositionData_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdatePositionData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdatePositionData = { "bUpdatePositionData", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdatePositionData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdatePositionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdatePositionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateColorData_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateColorData_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdateColorData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateColorData = { "bUpdateColorData", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateColorData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateColorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateNormalData_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateNormalData_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdateNormalData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateNormalData = { "bUpdateNormalData", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateNormalData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateNormalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateNormalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateTangentData_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateTangentData_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdateTangentData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateTangentData = { "bUpdateTangentData", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateTangentData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateTangentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateTangentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV0Data_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV0Data_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdateUV0Data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV0Data = { "bUpdateUV0Data", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV0Data_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV0Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV0Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV1Data_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV1Data_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdateUV1Data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV1Data = { "bUpdateUV1Data", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV1Data_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV1Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV1Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV2Data_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV2Data_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdateUV2Data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV2Data = { "bUpdateUV2Data", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV2Data_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV2Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV2Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV3Data_MetaData[] = {
		{ "Category", "ProcRenderUpdateSettings" },
		{ "ModuleRelativePath", "Public/ProcRenderUpdateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV3Data_SetBit(void* Obj)
	{
		((FProcRenderUpdateSettings*)Obj)->bUpdateUV3Data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV3Data = { "bUpdateUV3Data", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderUpdateSettings), &Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV3Data_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV3Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV3Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdatePositionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateColorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateNormalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateTangentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV0Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV1Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV2Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::NewProp_bUpdateUV3Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin,
		nullptr,
		&NewStructOps,
		"ProcRenderUpdateSettings",
		sizeof(FProcRenderUpdateSettings),
		alignof(FProcRenderUpdateSettings),
		Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcRenderUpdateSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcRenderUpdateSettings"), sizeof(FProcRenderUpdateSettings), Get_Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcRenderUpdateSettings_Hash() { return 635461249U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
