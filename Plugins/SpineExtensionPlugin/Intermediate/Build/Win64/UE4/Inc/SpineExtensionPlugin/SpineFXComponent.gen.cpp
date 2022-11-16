// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineFXComponent() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineFXComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineFXComponent();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UBaseFXComponent();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonRendererComponent_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UBaseBoneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpineFXComponent::execOnFXSystemEnd)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_ParticleSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFXSystemEnd(Z_Param_ParticleSystem);
		P_NATIVE_END;
	}
	void USpineFXComponent::StaticRegisterNativesUSpineFXComponent()
	{
		UClass* Class = USpineFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFXSystemEnd", &USpineFXComponent::execOnFXSystemEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics
	{
		struct SpineFXComponent_eventOnFXSystemEnd_Parms
		{
			UParticleSystemComponent* ParticleSystem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineFXComponent_eventOnFXSystemEnd_Parms, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::NewProp_ParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::NewProp_ParticleSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFXComponent, nullptr, "OnFXSystemEnd", nullptr, nullptr, sizeof(SpineFXComponent_eventOnFXSystemEnd_Parms), Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpineFXComponent_NoRegister()
	{
		return USpineFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RendererComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RendererComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavComponent;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_RunningFXs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningFXs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunningFXs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineFXComponent_OnFXSystemEnd, "OnFXSystemEnd" }, // 3914465366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SpineFXComponent.h" },
		{ "ModuleRelativePath", "Public/SpineFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RendererComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RendererComponent = { "RendererComponent", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineFXComponent, RendererComponent), Z_Construct_UClass_USpineSkeletonRendererComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RendererComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RendererComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineFXComponent_Statics::NewProp_BoneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineFXComponent_Statics::NewProp_BoneComponent = { "BoneComponent", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineFXComponent, BoneComponent), Z_Construct_UClass_UBaseBoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_BoneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_BoneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineFXComponent_Statics::NewProp_NavComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineFXComponent_Statics::NewProp_NavComponent = { "NavComponent", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineFXComponent, NavComponent), Z_Construct_UClass_UNavMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_NavComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_NavComponent_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RunningFXs_Inner = { "RunningFXs", nullptr, (EPropertyFlags)0x00040000000a0008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RunningFXs_MetaData[] = {
		{ "Category", "SpineFXComponent" },
		{ "ModuleRelativePath", "Public/SpineFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RunningFXs = { "RunningFXs", nullptr, (EPropertyFlags)0x0044008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineFXComponent, RunningFXs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RunningFXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RunningFXs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RendererComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineFXComponent_Statics::NewProp_BoneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineFXComponent_Statics::NewProp_NavComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RunningFXs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineFXComponent_Statics::NewProp_RunningFXs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineFXComponent_Statics::ClassParams = {
		&USpineFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpineFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineFXComponent, 1609378866);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineFXComponent>()
	{
		return USpineFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineFXComponent(Z_Construct_UClass_USpineFXComponent, &USpineFXComponent::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
