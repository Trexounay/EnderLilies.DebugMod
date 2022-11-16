// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineExtensionPlugin/Public/ESpineBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESpineBone() {}
// Cross Module References
	SPINEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone();
	UPackage* Z_Construct_UPackage__Script_SpineExtensionPlugin();
// End Cross Module References
	static UEnum* ESpineBone_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone, Z_Construct_UPackage__Script_SpineExtensionPlugin(), TEXT("ESpineBone"));
		}
		return Singleton;
	}
	template<> SPINEEXTENSIONPLUGIN_API UEnum* StaticEnum<ESpineBone>()
	{
		return ESpineBone_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpineBone(ESpineBone_StaticEnum, TEXT("/Script/SpineExtensionPlugin"), TEXT("ESpineBone"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone_Hash() { return 2800059036U; }
	UEnum* Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpineExtensionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpineBone"), 0, Get_Z_Construct_UEnum_SpineExtensionPlugin_ESpineBone_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpineBone::None", (int64)ESpineBone::None },
				{ "ESpineBone::Feet", (int64)ESpineBone::Feet },
				{ "ESpineBone::Root", (int64)ESpineBone::Root },
				{ "ESpineBone::Hip", (int64)ESpineBone::Hip },
				{ "ESpineBone::Head", (int64)ESpineBone::Head },
				{ "ESpineBone::Eyes", (int64)ESpineBone::Eyes },
				{ "ESpineBone::Mouth", (int64)ESpineBone::Mouth },
				{ "ESpineBone::FootRight", (int64)ESpineBone::FootRight },
				{ "ESpineBone::FootLeft", (int64)ESpineBone::FootLeft },
				{ "ESpineBone::HandRight", (int64)ESpineBone::HandRight },
				{ "ESpineBone::HandLeft", (int64)ESpineBone::HandLeft },
				{ "ESpineBone::FX_01", (int64)ESpineBone::FX_01 },
				{ "ESpineBone::FX_02", (int64)ESpineBone::FX_02 },
				{ "ESpineBone::FX_03", (int64)ESpineBone::FX_03 },
				{ "ESpineBone::Hitbox_01", (int64)ESpineBone::Hitbox_01 },
				{ "ESpineBone::Hitbox_02", (int64)ESpineBone::Hitbox_02 },
				{ "ESpineBone::Weapon_01", (int64)ESpineBone::Weapon_01 },
				{ "ESpineBone::Weapon_02", (int64)ESpineBone::Weapon_02 },
				{ "ESpineBone::Weapon_03", (int64)ESpineBone::Weapon_03 },
				{ "ESpineBone::Custom", (int64)ESpineBone::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.Name", "ESpineBone::Custom" },
				{ "Eyes.Name", "ESpineBone::Eyes" },
				{ "Feet.Name", "ESpineBone::Feet" },
				{ "FootLeft.Name", "ESpineBone::FootLeft" },
				{ "FootRight.Name", "ESpineBone::FootRight" },
				{ "FX_01.Name", "ESpineBone::FX_01" },
				{ "FX_02.Name", "ESpineBone::FX_02" },
				{ "FX_03.Name", "ESpineBone::FX_03" },
				{ "HandLeft.Name", "ESpineBone::HandLeft" },
				{ "HandRight.Name", "ESpineBone::HandRight" },
				{ "Head.Name", "ESpineBone::Head" },
				{ "Hip.Name", "ESpineBone::Hip" },
				{ "Hitbox_01.Name", "ESpineBone::Hitbox_01" },
				{ "Hitbox_02.Name", "ESpineBone::Hitbox_02" },
				{ "ModuleRelativePath", "Public/ESpineBone.h" },
				{ "Mouth.Name", "ESpineBone::Mouth" },
				{ "None.Name", "ESpineBone::None" },
				{ "Root.Name", "ESpineBone::Root" },
				{ "Weapon_01.Name", "ESpineBone::Weapon_01" },
				{ "Weapon_02.Name", "ESpineBone::Weapon_02" },
				{ "Weapon_03.Name", "ESpineBone::Weapon_03" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpineExtensionPlugin,
				nullptr,
				"ESpineBone",
				"ESpineBone",
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
