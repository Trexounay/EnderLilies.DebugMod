// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EEventActionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEventActionResult() {}
// Cross Module References
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EEventActionResult();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
// End Cross Module References
	static UEnum* EEventActionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EventPlugin_EEventActionResult, Z_Construct_UPackage__Script_EventPlugin(), TEXT("EEventActionResult"));
		}
		return Singleton;
	}
	template<> EVENTPLUGIN_API UEnum* StaticEnum<EEventActionResult>()
	{
		return EEventActionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventActionResult(EEventActionResult_StaticEnum, TEXT("/Script/EventPlugin"), TEXT("EEventActionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EventPlugin_EEventActionResult_Hash() { return 2893301483U; }
	UEnum* Z_Construct_UEnum_EventPlugin_EEventActionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EventPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventActionResult"), 0, Get_Z_Construct_UEnum_EventPlugin_EEventActionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventActionResult::NONE", (int64)EEventActionResult::NONE },
				{ "EEventActionResult::IN_PROGRESS", (int64)EEventActionResult::IN_PROGRESS },
				{ "EEventActionResult::SUCCESS", (int64)EEventActionResult::SUCCESS },
				{ "EEventActionResult::FAILURE", (int64)EEventActionResult::FAILURE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FAILURE.Name", "EEventActionResult::FAILURE" },
				{ "IN_PROGRESS.Name", "EEventActionResult::IN_PROGRESS" },
				{ "ModuleRelativePath", "Public/EEventActionResult.h" },
				{ "NONE.Name", "EEventActionResult::NONE" },
				{ "SUCCESS.Name", "EEventActionResult::SUCCESS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EventPlugin,
				nullptr,
				"EEventActionResult",
				"EEventActionResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
