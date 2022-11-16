// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventCondition() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventCondition_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventCondition();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventObject();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventBlackBoard_NoRegister();
// End Cross Module References
	static FName NAME_UEventCondition_IsConditionMet = FName(TEXT("IsConditionMet"));
	bool UEventCondition::IsConditionMet(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard)
	{
		EventCondition_eventIsConditionMet_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.Subject=Subject;
		Parms.Target=Target;
		Parms.EventBlackBoard=EventBlackBoard;
		ProcessEvent(FindFunctionChecked(NAME_UEventCondition_IsConditionMet),&Parms);
		return !!Parms.ReturnValue;
	}
	void UEventCondition::StaticRegisterNativesUEventCondition()
	{
	}
	struct Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCondition_eventIsConditionMet_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCondition_eventIsConditionMet_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCondition_eventIsConditionMet_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCondition_eventIsConditionMet_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EventCondition_eventIsConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventCondition_eventIsConditionMet_Parms), &Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_EventBlackBoard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCondition, nullptr, "IsConditionMet", nullptr, nullptr, sizeof(EventCondition_eventIsConditionMet_Parms), Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCondition_IsConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCondition_IsConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventCondition_NoRegister()
	{
		return UEventCondition::StaticClass();
	}
	struct Z_Construct_UClass_UEventCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventCondition_IsConditionMet, "IsConditionMet" }, // 3651880546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventCondition_Statics::ClassParams = {
		&UEventCondition::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEventCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventCondition, 2514051175);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventCondition>()
	{
		return UEventCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventCondition(Z_Construct_UClass_UEventCondition, &UEventCondition::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
