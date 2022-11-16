// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EEventActorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEventActorType() {}
// Cross Module References
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EEventActorType();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
// End Cross Module References
	static UEnum* EEventActorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EventPlugin_EEventActorType, Z_Construct_UPackage__Script_EventPlugin(), TEXT("EEventActorType"));
		}
		return Singleton;
	}
	template<> EVENTPLUGIN_API UEnum* StaticEnum<EEventActorType>()
	{
		return EEventActorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventActorType(EEventActorType_StaticEnum, TEXT("/Script/EventPlugin"), TEXT("EEventActorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EventPlugin_EEventActorType_Hash() { return 3839454244U; }
	UEnum* Z_Construct_UEnum_EventPlugin_EEventActorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EventPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventActorType"), 0, Get_Z_Construct_UEnum_EventPlugin_EEventActorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventActorType::None", (int64)EEventActorType::None },
				{ "EEventActorType::Player", (int64)EEventActorType::Player },
				{ "EEventActorType::Binding", (int64)EEventActorType::Binding },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Binding.Name", "EEventActorType::Binding" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEventActorType.h" },
				{ "None.Name", "EEventActorType::None" },
				{ "Player.Name", "EEventActorType::Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EventPlugin,
				nullptr,
				"EEventActorType",
				"EEventActorType",
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
