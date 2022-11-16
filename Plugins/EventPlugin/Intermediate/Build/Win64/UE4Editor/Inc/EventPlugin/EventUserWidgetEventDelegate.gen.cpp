// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventUserWidgetEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventUserWidgetEventDelegate() {}
// Cross Module References
	EVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics
	{
		struct _Script_EventPlugin_eventEventUserWidgetEvent_Parms
		{
			FKeyEvent KeyEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::NewProp_KeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EventPlugin_eventEventUserWidgetEvent_Parms, KeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::NewProp_KeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::NewProp_KeyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::NewProp_KeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventUserWidgetEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EventPlugin, nullptr, "EventUserWidgetEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_EventPlugin_eventEventUserWidgetEvent_Parms), Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
