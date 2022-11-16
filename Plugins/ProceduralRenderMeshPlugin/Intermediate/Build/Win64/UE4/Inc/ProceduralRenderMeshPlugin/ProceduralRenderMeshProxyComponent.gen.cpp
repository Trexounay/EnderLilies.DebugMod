// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralRenderMeshPlugin/Public/ProceduralRenderMeshProxyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralRenderMeshProxyComponent() {}
// Cross Module References
	PROCEDURALRENDERMESHPLUGIN_API UClass* Z_Construct_UClass_UProceduralRenderMeshProxyComponent_NoRegister();
	PROCEDURALRENDERMESHPLUGIN_API UClass* Z_Construct_UClass_UProceduralRenderMeshProxyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProceduralRenderMeshProxyComponent::execOnMarkRenderStateDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMarkRenderStateDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralRenderMeshProxyComponent::execOnRefreshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRefreshSection(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralRenderMeshProxyComponent::execOnUpdateBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateBounds();
		P_NATIVE_END;
	}
	void UProceduralRenderMeshProxyComponent::StaticRegisterNativesUProceduralRenderMeshProxyComponent()
	{
		UClass* Class = UProceduralRenderMeshProxyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMarkRenderStateDirty", &UProceduralRenderMeshProxyComponent::execOnMarkRenderStateDirty },
			{ "OnRefreshSection", &UProceduralRenderMeshProxyComponent::execOnRefreshSection },
			{ "OnUpdateBounds", &UProceduralRenderMeshProxyComponent::execOnUpdateBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshProxyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshProxyComponent, nullptr, "OnMarkRenderStateDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics
	{
		struct ProceduralRenderMeshProxyComponent_eventOnRefreshSection_Parms
		{
			int32 SectionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralRenderMeshProxyComponent_eventOnRefreshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshProxyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshProxyComponent, nullptr, "OnRefreshSection", nullptr, nullptr, sizeof(ProceduralRenderMeshProxyComponent_eventOnRefreshSection_Parms), Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshProxyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshProxyComponent, nullptr, "OnUpdateBounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralRenderMeshProxyComponent_NoRegister()
	{
		return UProceduralRenderMeshProxyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterProceduralRenderMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MasterProceduralRenderMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty, "OnMarkRenderStateDirty" }, // 3922122379
		{ &Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnRefreshSection, "OnRefreshSection" }, // 638289057
		{ &Z_Construct_UFunction_UProceduralRenderMeshProxyComponent_OnUpdateBounds, "OnUpdateBounds" }, // 3313683763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "ProceduralRenderMeshProxyComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshProxyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MasterProceduralRenderMesh_MetaData[] = {
		{ "Category", "ProceduralRenderMeshProxyComponent" },
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshProxyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MasterProceduralRenderMesh = { "MasterProceduralRenderMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralRenderMeshProxyComponent, MasterProceduralRenderMesh), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MasterProceduralRenderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MasterProceduralRenderMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "ProceduralRenderMeshProxyComponent" },
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshProxyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralRenderMeshProxyComponent, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MaterialOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MasterProceduralRenderMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::NewProp_MaterialOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralRenderMeshProxyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::ClassParams = {
		&UProceduralRenderMeshProxyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralRenderMeshProxyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralRenderMeshProxyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralRenderMeshProxyComponent, 2246951766);
	template<> PROCEDURALRENDERMESHPLUGIN_API UClass* StaticClass<UProceduralRenderMeshProxyComponent>()
	{
		return UProceduralRenderMeshProxyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralRenderMeshProxyComponent(Z_Construct_UClass_UProceduralRenderMeshProxyComponent, &UProceduralRenderMeshProxyComponent::StaticClass, TEXT("/Script/ProceduralRenderMeshPlugin"), TEXT("UProceduralRenderMeshProxyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralRenderMeshProxyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
