// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESpineBone : uint8;
class UParticleSystemComponent;
class UParticleSystem;
struct FTransform;
enum class EPSCPoolMethod : uint8;
#ifdef SPINEEXTENSIONPLUGIN_BaseFXComponent_generated_h
#error "BaseFXComponent.generated.h already included, missing '#pragma once' in BaseFXComponent.h"
#endif
#define SPINEEXTENSIONPLUGIN_BaseFXComponent_generated_h

#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_SPARSE_DATA
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_RPC_WRAPPERS \
	virtual UParticleSystemComponent* SpawnFX_Implementation(UParticleSystem* ParticleSystem, ESpineBone Bone, FName CustomBone, FTransform Offset, bool bAttach, bool bFollowBoneRotation, int32 TranslucencySortPriority, EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX); \
 \
	DECLARE_FUNCTION(execGetDefaultFXBone); \
	DECLARE_FUNCTION(execSpawnFX); \
	DECLARE_FUNCTION(execStopAllRunningFXs);


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UParticleSystemComponent* SpawnFX_Implementation(UParticleSystem* ParticleSystem, ESpineBone Bone, FName CustomBone, FTransform Offset, bool bAttach, bool bFollowBoneRotation, int32 TranslucencySortPriority, EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX); \
 \
	DECLARE_FUNCTION(execGetDefaultFXBone); \
	DECLARE_FUNCTION(execSpawnFX); \
	DECLARE_FUNCTION(execStopAllRunningFXs);


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_EVENT_PARMS \
	struct BaseFXComponent_eventSpawnFX_Parms \
	{ \
		UParticleSystem* ParticleSystem; \
		ESpineBone Bone; \
		FName CustomBone; \
		FTransform Offset; \
		bool bAttach; \
		bool bFollowBoneRotation; \
		int32 TranslucencySortPriority; \
		EPSCPoolMethod PoolMethod; \
		bool bRegisterAsRunningFX; \
		UParticleSystemComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseFXComponent_eventSpawnFX_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseFXComponent(); \
	friend struct Z_Construct_UClass_UBaseFXComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseFXComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBaseFXComponent)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBaseFXComponent(); \
	friend struct Z_Construct_UClass_UBaseFXComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseFXComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBaseFXComponent)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseFXComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseFXComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFXComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseFXComponent(UBaseFXComponent&&); \
	NO_API UBaseFXComponent(const UBaseFXComponent&); \
public:


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseFXComponent(UBaseFXComponent&&); \
	NO_API UBaseFXComponent(const UBaseFXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseFXComponent)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultFXBone() { return STRUCT_OFFSET(UBaseFXComponent, DefaultFXBone); }


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_12_PROLOG \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_EVENT_PARMS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_RPC_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_INCLASS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<class UBaseFXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseFXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
