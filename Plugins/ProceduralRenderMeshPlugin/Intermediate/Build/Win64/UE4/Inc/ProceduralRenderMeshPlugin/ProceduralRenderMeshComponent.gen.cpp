// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralRenderMeshPlugin/Public/ProceduralRenderMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralRenderMeshComponent() {}
// Cross Module References
	PROCEDURALRENDERMESHPLUGIN_API UClass* Z_Construct_UClass_UProceduralRenderMeshComponent_NoRegister();
	PROCEDURALRENDERMESHPLUGIN_API UClass* Z_Construct_UClass_UProceduralRenderMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin();
	PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcRenderUpdateSettings();
	PROCEDURALRENDERMESHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcRenderMeshSection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
// End Cross Module References
	DEFINE_FUNCTION(UProceduralRenderMeshComponent::execClearAllMeshSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMeshSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralRenderMeshComponent::execClearMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bUpdateBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMeshSection(Z_Param_SectionIndex,Z_Param_bUpdateBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralRenderMeshComponent::execGetNumSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralRenderMeshComponent::execIsMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralRenderMeshComponent::execSetMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	void UProceduralRenderMeshComponent::StaticRegisterNativesUProceduralRenderMeshComponent()
	{
		UClass* Class = UProceduralRenderMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllMeshSections", &UProceduralRenderMeshComponent::execClearAllMeshSections },
			{ "ClearMeshSection", &UProceduralRenderMeshComponent::execClearMeshSection },
			{ "GetNumSections", &UProceduralRenderMeshComponent::execGetNumSections },
			{ "IsMeshSectionVisible", &UProceduralRenderMeshComponent::execIsMeshSectionVisible },
			{ "SetMeshSectionVisible", &UProceduralRenderMeshComponent::execSetMeshSectionVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshComponent, nullptr, "ClearAllMeshSections", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics
	{
		struct ProceduralRenderMeshComponent_eventClearMeshSection_Parms
		{
			int32 SectionIndex;
			bool bUpdateBounds;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bUpdateBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralRenderMeshComponent_eventClearMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::NewProp_bUpdateBounds_SetBit(void* Obj)
	{
		((ProceduralRenderMeshComponent_eventClearMeshSection_Parms*)Obj)->bUpdateBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::NewProp_bUpdateBounds = { "bUpdateBounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProceduralRenderMeshComponent_eventClearMeshSection_Parms), &Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::NewProp_bUpdateBounds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::NewProp_bUpdateBounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshComponent, nullptr, "ClearMeshSection", nullptr, nullptr, sizeof(ProceduralRenderMeshComponent_eventClearMeshSection_Parms), Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics
	{
		struct ProceduralRenderMeshComponent_eventGetNumSections_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralRenderMeshComponent_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshComponent, nullptr, "GetNumSections", nullptr, nullptr, sizeof(ProceduralRenderMeshComponent_eventGetNumSections_Parms), Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics
	{
		struct ProceduralRenderMeshComponent_eventIsMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralRenderMeshComponent_eventIsMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProceduralRenderMeshComponent_eventIsMeshSectionVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProceduralRenderMeshComponent_eventIsMeshSectionVisible_Parms), &Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshComponent, nullptr, "IsMeshSectionVisible", nullptr, nullptr, sizeof(ProceduralRenderMeshComponent_eventIsMeshSectionVisible_Parms), Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics
	{
		struct ProceduralRenderMeshComponent_eventSetMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool bNewVisibility;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralRenderMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((ProceduralRenderMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProceduralRenderMeshComponent_eventSetMeshSectionVisible_Parms), &Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralRenderMeshComponent, nullptr, "SetMeshSectionVisible", nullptr, nullptr, sizeof(ProceduralRenderMeshComponent_eventSetMeshSectionVisible_Parms), Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralRenderMeshComponent_NoRegister()
	{
		return UProceduralRenderMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralRenderMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionCreateSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionCreateSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionUpdateSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionUpdateSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcMeshSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcMeshSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProcMeshSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralRenderMeshPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearAllMeshSections, "ClearAllMeshSections" }, // 2160216415
		{ &Z_Construct_UFunction_UProceduralRenderMeshComponent_ClearMeshSection, "ClearMeshSection" }, // 1051642203
		{ &Z_Construct_UFunction_UProceduralRenderMeshComponent_GetNumSections, "GetNumSections" }, // 2531149714
		{ &Z_Construct_UFunction_UProceduralRenderMeshComponent_IsMeshSectionVisible, "IsMeshSectionVisible" }, // 3653114425
		{ &Z_Construct_UFunction_UProceduralRenderMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 2358517248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "ProceduralRenderMeshComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionCreateSettings_MetaData[] = {
		{ "Category", "ProceduralRenderMeshComponent" },
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionCreateSettings = { "SectionCreateSettings", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralRenderMeshComponent, SectionCreateSettings), Z_Construct_UScriptStruct_FProcRenderUpdateSettings, METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionCreateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionCreateSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionUpdateSettings_MetaData[] = {
		{ "Category", "ProceduralRenderMeshComponent" },
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionUpdateSettings = { "SectionUpdateSettings", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralRenderMeshComponent, SectionUpdateSettings), Z_Construct_UScriptStruct_FProcRenderUpdateSettings, METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionUpdateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionUpdateSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_ProcMeshSections_Inner = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcRenderMeshSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_ProcMeshSections_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_ProcMeshSections = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralRenderMeshComponent, ProcMeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_ProcMeshSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_ProcMeshSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralRenderMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralRenderMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_LocalBounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionCreateSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_SectionUpdateSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_ProcMeshSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_ProcMeshSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::NewProp_LocalBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralRenderMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::ClassParams = {
		&UProceduralRenderMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralRenderMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralRenderMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralRenderMeshComponent, 968767466);
	template<> PROCEDURALRENDERMESHPLUGIN_API UClass* StaticClass<UProceduralRenderMeshComponent>()
	{
		return UProceduralRenderMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralRenderMeshComponent(Z_Construct_UClass_UProceduralRenderMeshComponent, &UProceduralRenderMeshComponent::StaticClass, TEXT("/Script/ProceduralRenderMeshPlugin"), TEXT("UProceduralRenderMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralRenderMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
