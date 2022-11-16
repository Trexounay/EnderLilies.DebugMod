// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAnimNotify() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	static FName NAME_USpineAnimNotify_Received_SpineNotify = FName(TEXT("Received_SpineNotify"));
	bool USpineAnimNotify::Received_SpineNotify(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation) const
	{
		SpineAnimNotify_eventReceived_SpineNotify_Parms Parms;
		Parms.SpineComp=SpineComp;
		Parms.Animation=Animation;
		const_cast<USpineAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_USpineAnimNotify_Received_SpineNotify),&Parms);
		return !!Parms.ReturnValue;
	}
	void USpineAnimNotify::StaticRegisterNativesUSpineAnimNotify()
	{
	}
	struct Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpineComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_SpineComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_SpineComp = { "SpineComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotify_eventReceived_SpineNotify_Parms, SpineComp), Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_SpineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_SpineComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotify_eventReceived_SpineNotify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineAnimNotify_eventReceived_SpineNotify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineAnimNotify_eventReceived_SpineNotify_Parms), &Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_SpineComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimNotify, nullptr, "Received_SpineNotify", nullptr, nullptr, sizeof(SpineAnimNotify_eventReceived_SpineNotify_Parms), Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpineAnimNotify_NoRegister()
	{
		return USpineAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USpineAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpineContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineAnimNotify_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineAnimNotify_Received_SpineNotify, "Received_SpineNotify" }, // 4082933377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SpineAnimNotify.h" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotify_Statics::NewProp_SpineContext_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAnimNotify_Statics::NewProp_SpineContext = { "SpineContext", nullptr, (EPropertyFlags)0x0042000000082018, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotify, SpineContext), Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_Statics::NewProp_SpineContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_Statics::NewProp_SpineContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotify_Statics::NewProp_SpineContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAnimNotify_Statics::ClassParams = {
		&USpineAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineAnimNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_Statics::PropPointers),
		0,
		0x009120A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAnimNotify, 2824708931);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineAnimNotify>()
	{
		return USpineAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAnimNotify(Z_Construct_UClass_USpineAnimNotify, &USpineAnimNotify::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
