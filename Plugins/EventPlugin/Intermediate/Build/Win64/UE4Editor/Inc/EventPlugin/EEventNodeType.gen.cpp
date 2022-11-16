// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EEventNodeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEventNodeType() {}
// Cross Module References
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EEventNodeType();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
// End Cross Module References
	static UEnum* EEventNodeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EventPlugin_EEventNodeType, Z_Construct_UPackage__Script_EventPlugin(), TEXT("EEventNodeType"));
		}
		return Singleton;
	}
	template<> EVENTPLUGIN_API UEnum* StaticEnum<EEventNodeType>()
	{
		return EEventNodeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventNodeType(EEventNodeType_StaticEnum, TEXT("/Script/EventPlugin"), TEXT("EEventNodeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EventPlugin_EEventNodeType_Hash() { return 1915259374U; }
	UEnum* Z_Construct_UEnum_EventPlugin_EEventNodeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EventPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventNodeType"), 0, Get_Z_Construct_UEnum_EventPlugin_EEventNodeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventNodeType::None", (int64)EEventNodeType::None },
				{ "EEventNodeType::System", (int64)EEventNodeType::System },
				{ "EEventNodeType::Camera", (int64)EEventNodeType::Camera },
				{ "EEventNodeType::NPC", (int64)EEventNodeType::NPC },
				{ "EEventNodeType::Player", (int64)EEventNodeType::Player },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Camera.Name", "EEventNodeType::Camera" },
				{ "ModuleRelativePath", "Public/EEventNodeType.h" },
				{ "None.Name", "EEventNodeType::None" },
				{ "NPC.Name", "EEventNodeType::NPC" },
				{ "Player.Name", "EEventNodeType::Player" },
				{ "System.Name", "EEventNodeType::System" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EventPlugin,
				nullptr,
				"EEventNodeType",
				"EEventNodeType",
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
