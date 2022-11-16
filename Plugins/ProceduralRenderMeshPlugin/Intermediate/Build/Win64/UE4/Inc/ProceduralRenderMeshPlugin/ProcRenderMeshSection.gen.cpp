// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralRenderMeshPlugin/Public/ProcRenderMeshSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcRenderMeshSection() {}
// Cross Module References
	PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshSection();
	UPackage* Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
class UScriptStruct* FProcRenderMeshSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALRENDERMESHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcRenderMeshSection, Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin(), TEXT("ProcRenderMeshSection"), sizeof(FProcRenderMeshSection), Get_Z_Construct_UScriptStruct_FProcRenderMeshSection_Hash());
	}
	return Singleton;
}
template<> PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* StaticStruct<FProcRenderMeshSection>()
{
	return FProcRenderMeshSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcRenderMeshSection(FProcRenderMeshSection::StaticStruct, TEXT("/Script/ProceduralRenderMeshPlugin"), TEXT("ProcRenderMeshSection"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshSection
{
	FScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProcRenderMeshSection")),new UScriptStruct::TCppStructOps<FProcRenderMeshSection>);
	}
} ScriptStruct_ProceduralRenderMeshPlugin_StaticRegisterNativesFProcRenderMeshSection;
	struct Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ProcIndexBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcIndexBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProcIndexBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionLocalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionLocalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSectionVisible_MetaData[];
#endif
		static void NewProp_bSectionVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSectionVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcRenderMeshSection>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Positions_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshSection, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Positions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Normals_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshSection, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Colors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshSection, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_UVs_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshSection, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_UVs_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_ProcIndexBuffer_Inner = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_ProcIndexBuffer = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshSection, ProcIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_SectionLocalBox_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_SectionLocalBox = { "SectionLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcRenderMeshSection, SectionLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_SectionLocalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_SectionLocalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FProcRenderMeshSection*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderMeshSection), &Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bSectionVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProcRenderMeshSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bSectionVisible_SetBit(void* Obj)
	{
		((FProcRenderMeshSection*)Obj)->bSectionVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bSectionVisible = { "bSectionVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcRenderMeshSection), &Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bSectionVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bSectionVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bSectionVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_ProcIndexBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_ProcIndexBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_SectionLocalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::NewProp_bSectionVisible,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin,
		nullptr,
		&NewStructOps,
		"ProcRenderMeshSection",
		sizeof(FProcRenderMeshSection),
		alignof(FProcRenderMeshSection),
		Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcRenderMeshSection"), sizeof(FProcRenderMeshSection), Get_Z_Construct_UScriptStruct_FProcRenderMeshSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProcRenderMeshSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcRenderMeshSection_Hash() { return 2712848884U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
