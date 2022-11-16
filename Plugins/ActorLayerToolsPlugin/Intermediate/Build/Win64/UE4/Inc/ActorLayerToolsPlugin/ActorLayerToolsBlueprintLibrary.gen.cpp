// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLayerToolsPlugin/Public/ActorLayerToolsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLayerToolsBlueprintLibrary() {}
// Cross Module References
	ACTORLAYERTOOLSPLUGIN_API UClass* Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_NoRegister();
	ACTORLAYERTOOLSPLUGIN_API UClass* Z_Construct_UClass_UActorLayerToolsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ActorLayerToolsPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ACTORLAYERTOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLayerName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActorLayerToolsBlueprintLibrary::execGetActorsFromLayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FLayerName,Z_Param_Out_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UActorLayerToolsBlueprintLibrary::GetActorsFromLayer(Z_Param_WorldContextObject,Z_Param_Out_Layer);
		P_NATIVE_END;
	}
	void UActorLayerToolsBlueprintLibrary::StaticRegisterNativesUActorLayerToolsBlueprintLibrary()
	{
		UClass* Class = UActorLayerToolsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorsFromLayer", &UActorLayerToolsBlueprintLibrary::execGetActorsFromLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics
	{
		struct ActorLayerToolsBlueprintLibrary_eventGetActorsFromLayer_Parms
		{
			UObject* WorldContextObject;
			FLayerName Layer;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorLayerToolsBlueprintLibrary_eventGetActorsFromLayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorLayerToolsBlueprintLibrary_eventGetActorsFromLayer_Parms, Layer), Z_Construct_UScriptStruct_FLayerName, METADATA_PARAMS(Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_Layer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorLayerToolsBlueprintLibrary_eventGetActorsFromLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorLayerToolsBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLayerToolsBlueprintLibrary, nullptr, "GetActorsFromLayer", nullptr, nullptr, sizeof(ActorLayerToolsBlueprintLibrary_eventGetActorsFromLayer_Parms), Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_NoRegister()
	{
		return UActorLayerToolsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerToolsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorLayerToolsBlueprintLibrary_GetActorsFromLayer, "GetActorsFromLayer" }, // 1657580134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorLayerToolsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ActorLayerToolsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorLayerToolsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::ClassParams = {
		&UActorLayerToolsBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorLayerToolsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorLayerToolsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorLayerToolsBlueprintLibrary, 4031903124);
	template<> ACTORLAYERTOOLSPLUGIN_API UClass* StaticClass<UActorLayerToolsBlueprintLibrary>()
	{
		return UActorLayerToolsBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorLayerToolsBlueprintLibrary(Z_Construct_UClass_UActorLayerToolsBlueprintLibrary, &UActorLayerToolsBlueprintLibrary::StaticClass, TEXT("/Script/ActorLayerToolsPlugin"), TEXT("UActorLayerToolsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorLayerToolsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
