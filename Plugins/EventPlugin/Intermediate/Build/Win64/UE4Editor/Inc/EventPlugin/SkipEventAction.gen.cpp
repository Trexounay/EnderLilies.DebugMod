// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/SkipEventAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkipEventAction() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_USkipEventAction_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_USkipEventAction();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventObject();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventPlayer_NoRegister();
// End Cross Module References
	static FName NAME_USkipEventAction_OnPostSkip = FName(TEXT("OnPostSkip"));
	void USkipEventAction::OnPostSkip(UEventPlayer* EventPlayer)
	{
		SkipEventAction_eventOnPostSkip_Parms Parms;
		Parms.EventPlayer=EventPlayer;
		ProcessEvent(FindFunctionChecked(NAME_USkipEventAction_OnPostSkip),&Parms);
	}
	static FName NAME_USkipEventAction_OnSkip = FName(TEXT("OnSkip"));
	void USkipEventAction::OnSkip(UEventPlayer* EventPlayer)
	{
		SkipEventAction_eventOnSkip_Parms Parms;
		Parms.EventPlayer=EventPlayer;
		ProcessEvent(FindFunctionChecked(NAME_USkipEventAction_OnSkip),&Parms);
	}
	void USkipEventAction::StaticRegisterNativesUSkipEventAction()
	{
	}
	struct Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::NewProp_EventPlayer = { "EventPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkipEventAction_eventOnPostSkip_Parms, EventPlayer), Z_Construct_UClass_UEventPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::NewProp_EventPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkipEventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkipEventAction, nullptr, "OnPostSkip", nullptr, nullptr, sizeof(SkipEventAction_eventOnPostSkip_Parms), Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkipEventAction_OnPostSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkipEventAction_OnPostSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkipEventAction_OnSkip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::NewProp_EventPlayer = { "EventPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkipEventAction_eventOnSkip_Parms, EventPlayer), Z_Construct_UClass_UEventPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::NewProp_EventPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkipEventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkipEventAction, nullptr, "OnSkip", nullptr, nullptr, sizeof(SkipEventAction_eventOnSkip_Parms), Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkipEventAction_OnSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkipEventAction_OnSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkipEventAction_NoRegister()
	{
		return USkipEventAction::StaticClass();
	}
	struct Z_Construct_UClass_USkipEventAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkipEventAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkipEventAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkipEventAction_OnPostSkip, "OnPostSkip" }, // 3940041518
		{ &Z_Construct_UFunction_USkipEventAction_OnSkip, "OnSkip" }, // 2008238845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkipEventAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkipEventAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkipEventAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkipEventAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkipEventAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkipEventAction_Statics::ClassParams = {
		&USkipEventAction::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USkipEventAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkipEventAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkipEventAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkipEventAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkipEventAction, 302624641);
	template<> EVENTPLUGIN_API UClass* StaticClass<USkipEventAction>()
	{
		return USkipEventAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkipEventAction(Z_Construct_UClass_USkipEventAction, &USkipEventAction::StaticClass, TEXT("/Script/EventPlugin"), TEXT("USkipEventAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkipEventAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
