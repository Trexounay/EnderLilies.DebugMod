// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventPlugin_init() {}
	EVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventActionEvent__DelegateSignature();
	EVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventActorEvent__DelegateSignature();
	EVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventPlayerEvent__DelegateSignature();
	EVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EventPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EventPlugin_EventActionEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EventPlugin_EventActorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EventPlugin_EventPlayerEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EventPlugin_EventUserWidgetEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/EventPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3BC2A1E4,
				0xFC07102B,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
