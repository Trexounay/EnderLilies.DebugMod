// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EActorBindingTransformType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEActorBindingTransformType() {}
// Cross Module References
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EActorBindingTransformType();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
// End Cross Module References
	static UEnum* EActorBindingTransformType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EventPlugin_EActorBindingTransformType, Z_Construct_UPackage__Script_EventPlugin(), TEXT("EActorBindingTransformType"));
		}
		return Singleton;
	}
	template<> EVENTPLUGIN_API UEnum* StaticEnum<EActorBindingTransformType>()
	{
		return EActorBindingTransformType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActorBindingTransformType(EActorBindingTransformType_StaticEnum, TEXT("/Script/EventPlugin"), TEXT("EActorBindingTransformType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EventPlugin_EActorBindingTransformType_Hash() { return 3237273206U; }
	UEnum* Z_Construct_UEnum_EventPlugin_EActorBindingTransformType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EventPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActorBindingTransformType"), 0, Get_Z_Construct_UEnum_EventPlugin_EActorBindingTransformType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActorBindingTransformType::Absolute", (int64)EActorBindingTransformType::Absolute },
				{ "EActorBindingTransformType::Local", (int64)EActorBindingTransformType::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.Name", "EActorBindingTransformType::Absolute" },
				{ "Local.Name", "EActorBindingTransformType::Local" },
				{ "ModuleRelativePath", "Public/EActorBindingTransformType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EventPlugin,
				nullptr,
				"EActorBindingTransformType",
				"EActorBindingTransformType",
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
