// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralRenderMeshPlugin/Public/ProcRenderMeshVertex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcRenderMeshVertex() {}
// Cross Module References
	PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshVertex();
	UPackage* Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FProcRenderMeshVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALRENDERMESHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshVertex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcRenderMeshVertex, Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin(), TEXT("ProcRenderMeshVertex"), sizeof(FProcRenderMeshVertex), Get_Z_Construct_UScriptStruct_FProcRenderMeshVertex_Hash());
	}
	return Singleton;
}
template<> PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* StaticStruct<FProcRenderMeshVertex>()
{
	return FProcRenderMeshVertex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcRenderMeshVertex(FProcRenderMeshVertex::StaticStruct, TEXT("/Script/ProceduralRenderMeshPlugin"), TEXT("ProcRenderMeshVertex"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshVertex
{
	FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProcRenderMeshVertex")),new UScriptStruct::TCppStructOps<FProcRenderMeshVertex>);
	}
} ScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshVertex;
	struct Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcRenderMeshVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, Tangent), Z_Construct_UScriptStruct_FProcRenderMeshTangent, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV2_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV3_MetaData[] = {
		{ "Category", "ProcRenderMeshVertex" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshVertex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Tangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::NewProp_UV3,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin,
		nullptr,
		&NewStructOps,
		"ProcRenderMeshVertex",
		sizeof(FProcRenderMeshVertex),
		alignof(FProcRenderMeshVertex),
		Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshVertex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcRenderMeshVertex"), sizeof(FProcRenderMeshVertex), Get_Z_Construct_UScriptStruct_FProcRenderMeshVertex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProcRenderMeshVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshVertex_Hash() { return 2361561053U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
