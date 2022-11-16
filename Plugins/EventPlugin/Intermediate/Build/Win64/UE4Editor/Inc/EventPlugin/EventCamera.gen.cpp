// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventCamera() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_AEventCamera_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_AEventCamera();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(AEventCamera::execLockToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetToLock);
		P_GET_STRUCT(FTransform,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockToTarget(Z_Param_TargetToLock,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEventCamera::execUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock();
		P_NATIVE_END;
	}
	void AEventCamera::StaticRegisterNativesAEventCamera()
	{
		UClass* Class = AEventCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LockToTarget", &AEventCamera::execLockToTarget },
			{ "Unlock", &AEventCamera::execUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEventCamera_LockToTarget_Statics
	{
		struct EventCamera_eventLockToTarget_Parms
		{
			AActor* TargetToLock;
			FTransform Offset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetToLock;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::NewProp_TargetToLock = { "TargetToLock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCamera_eventLockToTarget_Parms, TargetToLock), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCamera_eventLockToTarget_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::NewProp_TargetToLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEventCamera, nullptr, "LockToTarget", nullptr, nullptr, sizeof(EventCamera_eventLockToTarget_Parms), Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEventCamera_LockToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEventCamera_LockToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEventCamera_Unlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEventCamera_Unlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEventCamera_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEventCamera, nullptr, "Unlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEventCamera_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEventCamera_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEventCamera_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEventCamera_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEventCamera_NoRegister()
	{
		return AEventCamera::StaticClass();
	}
	struct Z_Construct_UClass_AEventCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LockedTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedTargetOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockedTargetOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEventCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEventCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEventCamera_LockToTarget, "LockToTarget" }, // 1021890684
		{ &Z_Construct_UFunction_AEventCamera_Unlock, "Unlock" }, // 2704379732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "EventCamera.h" },
		{ "ModuleRelativePath", "Public/EventCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTarget = { "LockedTarget", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEventCamera, LockedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTargetOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTargetOffset = { "LockedTargetOffset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEventCamera, LockedTargetOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTargetOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEventCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEventCamera_Statics::NewProp_LockedTargetOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEventCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEventCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEventCamera_Statics::ClassParams = {
		&AEventCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEventCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEventCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEventCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEventCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEventCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEventCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEventCamera, 3568080651);
	template<> EVENTPLUGIN_API UClass* StaticClass<AEventCamera>()
	{
		return AEventCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEventCamera(Z_Construct_UClass_AEventCamera, &AEventCamera::StaticClass, TEXT("/Script/EventPlugin"), TEXT("AEventCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEventCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
