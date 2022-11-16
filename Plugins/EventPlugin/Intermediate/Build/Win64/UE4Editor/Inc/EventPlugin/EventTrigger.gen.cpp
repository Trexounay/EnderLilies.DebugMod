// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventTrigger() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventTrigger_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventTrigger();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventObject();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventBlackBoard_NoRegister();
// End Cross Module References
	static FName NAME_UEventTrigger_ExecuteTrigger = FName(TEXT("ExecuteTrigger"));
	void UEventTrigger::ExecuteTrigger(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard)
	{
		EventTrigger_eventExecuteTrigger_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.Subject=Subject;
		Parms.Target=Target;
		Parms.EventBlackBoard=EventBlackBoard;
		ProcessEvent(FindFunctionChecked(NAME_UEventTrigger_ExecuteTrigger),&Parms);
	}
	void UEventTrigger::StaticRegisterNativesUEventTrigger()
	{
	}
	struct Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventTrigger_eventExecuteTrigger_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventTrigger_eventExecuteTrigger_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventTrigger_eventExecuteTrigger_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventTrigger_eventExecuteTrigger_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventTrigger, nullptr, "ExecuteTrigger", nullptr, nullptr, sizeof(EventTrigger_eventExecuteTrigger_Parms), Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventTrigger_ExecuteTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventTrigger_ExecuteTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventTrigger_NoRegister()
	{
		return UEventTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UEventTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventTrigger_ExecuteTrigger, "ExecuteTrigger" }, // 1925932634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventTrigger_Statics::ClassParams = {
		&UEventTrigger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventTrigger, 3661645984);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventTrigger>()
	{
		return UEventTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventTrigger(Z_Construct_UClass_UEventTrigger, &UEventTrigger::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
