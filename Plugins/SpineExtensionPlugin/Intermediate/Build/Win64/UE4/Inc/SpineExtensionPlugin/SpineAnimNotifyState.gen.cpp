// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/SpineAnimNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAnimNotifyState() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotifyState_NoRegister();
	SPINEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_USpineAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpineAnimNotifyState::execGetExecutionRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExecutionRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineAnimNotifyState::execGetExecutionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExecutionTime();
		P_NATIVE_END;
	}
	static FName NAME_USpineAnimNotifyState_Received_SpineNotifyBegin = FName(TEXT("Received_SpineNotifyBegin"));
	bool USpineAnimNotifyState::Received_SpineNotifyBegin(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation, float TotalDuration) const
	{
		SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms Parms;
		Parms.SpineComp=SpineComp;
		Parms.Animation=Animation;
		Parms.TotalDuration=TotalDuration;
		const_cast<USpineAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_USpineAnimNotifyState_Received_SpineNotifyBegin),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USpineAnimNotifyState_Received_SpineNotifyEnd = FName(TEXT("Received_SpineNotifyEnd"));
	bool USpineAnimNotifyState::Received_SpineNotifyEnd(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation) const
	{
		SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms Parms;
		Parms.SpineComp=SpineComp;
		Parms.Animation=Animation;
		const_cast<USpineAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_USpineAnimNotifyState_Received_SpineNotifyEnd),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USpineAnimNotifyState_Received_SpineNotifyTick = FName(TEXT("Received_SpineNotifyTick"));
	bool USpineAnimNotifyState::Received_SpineNotifyTick(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation, float FrameDeltaTime) const
	{
		SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms Parms;
		Parms.SpineComp=SpineComp;
		Parms.Animation=Animation;
		Parms.FrameDeltaTime=FrameDeltaTime;
		const_cast<USpineAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_USpineAnimNotifyState_Received_SpineNotifyTick),&Parms);
		return !!Parms.ReturnValue;
	}
	void USpineAnimNotifyState::StaticRegisterNativesUSpineAnimNotifyState()
	{
		UClass* Class = USpineAnimNotifyState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExecutionRatio", &USpineAnimNotifyState::execGetExecutionRatio },
			{ "GetExecutionTime", &USpineAnimNotifyState::execGetExecutionTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics
	{
		struct SpineAnimNotifyState_eventGetExecutionRatio_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventGetExecutionRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimNotifyState, nullptr, "GetExecutionRatio", nullptr, nullptr, sizeof(SpineAnimNotifyState_eventGetExecutionRatio_Parms), Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics
	{
		struct SpineAnimNotifyState_eventGetExecutionTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventGetExecutionTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimNotifyState, nullptr, "GetExecutionTime", nullptr, nullptr, sizeof(SpineAnimNotifyState_eventGetExecutionTime_Parms), Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpineComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_SpineComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_SpineComp = { "SpineComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms, SpineComp), Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_SpineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_SpineComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms, TotalDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms), &Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_SpineComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_TotalDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimNotifyState, nullptr, "Received_SpineNotifyBegin", nullptr, nullptr, sizeof(SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms), Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_SpineComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_SpineComp = { "SpineComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms, SpineComp), Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_SpineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_SpineComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms), &Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_SpineComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimNotifyState, nullptr, "Received_SpineNotifyEnd", nullptr, nullptr, sizeof(SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms), Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpineComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_SpineComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_SpineComp = { "SpineComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms, SpineComp), Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_SpineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_SpineComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms, FrameDeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms), &Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_SpineComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_FrameDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimNotifyState, nullptr, "Received_SpineNotifyTick", nullptr, nullptr, sizeof(SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms), Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpineAnimNotifyState_NoRegister()
	{
		return USpineAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USpineAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExecutionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineAnimNotifyState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionRatio, "GetExecutionRatio" }, // 1575478746
		{ &Z_Construct_UFunction_USpineAnimNotifyState_GetExecutionTime, "GetExecutionTime" }, // 1589132744
		{ &Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyBegin, "Received_SpineNotifyBegin" }, // 104517342
		{ &Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyEnd, "Received_SpineNotifyEnd" }, // 1821201025
		{ &Z_Construct_UFunction_USpineAnimNotifyState_Received_SpineNotifyTick, "Received_SpineNotifyTick" }, // 3921445403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SpineAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_ExecutionTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_ExecutionTime = { "ExecutionTime", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotifyState, ExecutionTime), METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_ExecutionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_ExecutionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAnimNotifyState, Duration), METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAnimNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_ExecutionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimNotifyState_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAnimNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAnimNotifyState_Statics::ClassParams = {
		&USpineAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineAnimNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotifyState_Statics::PropPointers),
		0,
		0x001130A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAnimNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAnimNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAnimNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAnimNotifyState, 4028790871);
	template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<USpineAnimNotifyState>()
	{
		return USpineAnimNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAnimNotifyState(Z_Construct_UClass_USpineAnimNotifyState, &USpineAnimNotifyState::StaticClass, TEXT("/Script/SpineExtensionPlugin"), TEXT("USpineAnimNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAnimNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
