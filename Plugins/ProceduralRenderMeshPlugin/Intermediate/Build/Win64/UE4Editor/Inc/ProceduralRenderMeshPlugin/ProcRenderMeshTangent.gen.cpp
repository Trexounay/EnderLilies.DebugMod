// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralRenderMeshPlugin/Public/ProcRenderMeshTangent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcRenderMeshTangent() {}
// Cross Module References
	PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshTangent();
	UPackage* Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FProcRenderMeshTangent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALRENDERMESHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshTangent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcRenderMeshTangent, Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin(), TEXT("ProcRenderMeshTangent"), sizeof(FProcRenderMeshTangent), Get_Z_Construct_UScriptStruct_FProcRenderMeshTangent_Hash());
	}
	return Singleton;
}
template<> PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* StaticStruct<FProcRenderMeshTangent>()
{
	return FProcRenderMeshTangent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcRenderMeshTangent(FProcRenderMeshTangent::StaticStruct, TEXT("/Script/ProceduralRenderMeshPlugin"), TEXT("ProcRenderMeshTangent"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshTangent
{
	FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshTangent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProcRenderMeshTangent")),new UScriptStruct::TCppStructOps<FProcRenderMeshTangent>);
	}
} ScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshTangent;
	struct Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[];
#endif
		static void NewProp_bFlipTangentY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshTangent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcRenderMeshTangent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_TangentX_MetaData[] = {
		{ "Category", "ProcRenderMeshTangent" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshTangent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "ProcRenderMeshTangent" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshTangent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
	{
		((FProcRenderMeshTangent*)Obj)->bFlipTangentY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderMeshTangent), &Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_bFlipTangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_bFlipTangentY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_TangentX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::NewProp_bFlipTangentY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin,
		nullptr,
		&NewStructOps,
		"ProcRenderMeshTangent",
		sizeof(FProcRenderMeshTangent),
		alignof(FProcRenderMeshTangent),
		Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshTangent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshTangent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcRenderMeshTangent"), sizeof(FProcRenderMeshTangent), Get_Z_Construct_UScriptStruct_FProcRenderMeshTangent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProcRenderMeshTangent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshTangent_Hash() { return 2522727756U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
