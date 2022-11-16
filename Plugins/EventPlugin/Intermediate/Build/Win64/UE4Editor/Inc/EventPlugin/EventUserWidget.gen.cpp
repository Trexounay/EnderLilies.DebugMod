// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventUserWidget() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventUserWidget_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	EVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventUserWidget::execOnStartNewAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartNewAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventUserWidget::execRequestRemove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRemove_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UEventUserWidget_OnEventFinish = FName(TEXT("OnEventFinish"));
	void UEventUserWidget::OnEventFinish()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEventUserWidget_OnEventFinish),NULL);
	}
	static FName NAME_UEventUserWidget_OnEventStart = FName(TEXT("OnEventStart"));
	void UEventUserWidget::OnEventStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEventUserWidget_OnEventStart),NULL);
	}
	static FName NAME_UEventUserWidget_OnEventStep = FName(TEXT("OnEventStep"));
	void UEventUserWidget::OnEventStep()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEventUserWidget_OnEventStep),NULL);
	}
	static FName NAME_UEventUserWidget_OnStartNewAction = FName(TEXT("OnStartNewAction"));
	void UEventUserWidget::OnStartNewAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEventUserWidget_OnStartNewAction),NULL);
	}
	static FName NAME_UEventUserWidget_RequestRemove = FName(TEXT("RequestRemove"));
	void UEventUserWidget::RequestRemove()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEventUserWidget_RequestRemove),NULL);
	}
	void UEventUserWidget::StaticRegisterNativesUEventUserWidget()
	{
		UClass* Class = UEventUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartNewAction", &UEventUserWidget::execOnStartNewAction },
			{ "RequestRemove", &UEventUserWidget::execRequestRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventUserWidget_OnEventFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventUserWidget_OnEventFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventUserWidget_OnEventFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventUserWidget, nullptr, "OnEventFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventUserWidget_OnEventFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventUserWidget_OnEventFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventUserWidget_OnEventFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventUserWidget_OnEventFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventUserWidget_OnEventStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventUserWidget_OnEventStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventUserWidget_OnEventStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventUserWidget, nullptr, "OnEventStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventUserWidget_OnEventStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventUserWidget_OnEventStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventUserWidget_OnEventStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventUserWidget_OnEventStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventUserWidget_OnEventStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventUserWidget_OnEventStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventUserWidget_OnEventStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventUserWidget, nullptr, "OnEventStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventUserWidget_OnEventStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventUserWidget_OnEventStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventUserWidget_OnEventStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventUserWidget_OnEventStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventUserWidget_OnStartNewAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventUserWidget_OnStartNewAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventUserWidget_OnStartNewAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventUserWidget, nullptr, "OnStartNewAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventUserWidget_OnStartNewAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventUserWidget_OnStartNewAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventUserWidget_OnStartNewAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventUserWidget_OnStartNewAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventUserWidget_RequestRemove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventUserWidget_RequestRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventUserWidget_RequestRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventUserWidget, nullptr, "RequestRemove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventUserWidget_RequestRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventUserWidget_RequestRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventUserWidget_RequestRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventUserWidget_RequestRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventUserWidget_NoRegister()
	{
		return UEventUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyDownDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyDownDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventUserWidget_OnEventFinish, "OnEventFinish" }, // 596388949
		{ &Z_Construct_UFunction_UEventUserWidget_OnEventStart, "OnEventStart" }, // 372658619
		{ &Z_Construct_UFunction_UEventUserWidget_OnEventStep, "OnEventStep" }, // 2674755207
		{ &Z_Construct_UFunction_UEventUserWidget_OnStartNewAction, "OnStartNewAction" }, // 3813149510
		{ &Z_Construct_UFunction_UEventUserWidget_RequestRemove, "RequestRemove" }, // 1701329689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventUserWidget.h" },
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventUserWidget_Statics::NewProp_OnKeyDownDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventUserWidget_Statics::NewProp_OnKeyDownDelegate = { "OnKeyDownDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventUserWidget, OnKeyDownDelegate), Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventUserWidget_Statics::NewProp_OnKeyDownDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventUserWidget_Statics::NewProp_OnKeyDownDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventUserWidget_Statics::NewProp_EventPlayer_MetaData[] = {
		{ "Category", "EventUserWidget" },
		{ "ModuleRelativePath", "Public/EventUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventUserWidget_Statics::NewProp_EventPlayer = { "EventPlayer", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventUserWidget, EventPlayer), Z_Construct_UClass_UEventPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventUserWidget_Statics::NewProp_EventPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventUserWidget_Statics::NewProp_EventPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventUserWidget_Statics::NewProp_OnKeyDownDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventUserWidget_Statics::NewProp_EventPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventUserWidget_Statics::ClassParams = {
		&UEventUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventUserWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEventUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventUserWidget, 109931826);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventUserWidget>()
	{
		return UEventUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventUserWidget(Z_Construct_UClass_UEventUserWidget, &UEventUserWidget::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
