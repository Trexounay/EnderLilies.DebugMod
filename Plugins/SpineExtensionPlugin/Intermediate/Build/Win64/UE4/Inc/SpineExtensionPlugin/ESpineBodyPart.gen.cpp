// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/ESpineBodyPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESpineBodyPart() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBodyPart();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
// End Cross Module References
	static UEnum* ESpineBodyPart_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpineExtensionPlugin_ESpineBodyPart, Z_Construct_UPackage__Script_SpineExtensionPlugin(), TEXT("ESpineBodyPart"));
		}
		return Singleton;
	}
	template<> SPINEEXTENSIONPLUGIN_API UEnum* StaticEnum<ESpineBodyPart>()
	{
		return ESpineBodyPart_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpineBodyPart(ESpineBodyPart_StaticEnum, TEXT("/Script/SpineExtensionPlugin"), TEXT("ESpineBodyPart"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpineExtensionPlugin_ESpineBodyPart_Hash() { return 2511332980U; }
	UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBodyPart()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpineExtensionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpineBodyPart"), 0, Get_Z_Construct_UEnum_SpineExtensionPlugin_ESpineBodyPart_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpineBodyPart::Body", (int64)ESpineBodyPart::Body },
				{ "ESpineBodyPart::Head", (int64)ESpineBodyPart::Head },
				{ "ESpineBodyPart::ArmRight", (int64)ESpineBodyPart::ArmRight },
				{ "ESpineBodyPart::ArmLeft", (int64)ESpineBodyPart::ArmLeft },
				{ "ESpineBodyPart::LegRight", (int64)ESpineBodyPart::LegRight },
				{ "ESpineBodyPart::LegLeft", (int64)ESpineBodyPart::LegLeft },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArmLeft.Name", "ESpineBodyPart::ArmLeft" },
				{ "ArmRight.Name", "ESpineBodyPart::ArmRight" },
				{ "Body.Name", "ESpineBodyPart::Body" },
				{ "Head.Name", "ESpineBodyPart::Head" },
				{ "LegLeft.Name", "ESpineBodyPart::LegLeft" },
				{ "LegRight.Name", "ESpineBodyPart::LegRight" },
				{ "ModuleRelativePath", "Public/ESpineBodyPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
				nullptr,
				"ESpineBodyPart",
				"ESpineBodyPart",
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
