// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
enum class ESpineBone : uint8;
struct FTransform;
#ifdef SPINEEXTENSIONPLUGIN_BaseBoneComponent_generated_h
#error "BaseBoneComponent.generated.h already included, missing '#pragma once' in BaseBoneComponent.h"
#endif
#define SPINEEXTENSIONPLUGIN_BaseBoneComponent_generated_h

#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_SPARSE_DATA
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_RPC_WRAPPERS \
	virtual USceneComponent* GetAttachComponent_Implementation(ESpineBone Bone, bool bFollowRotation); \
	virtual USceneComponent* GetAttachComponentByName_Implementation(const FString& BoneName, bool bFollowRotation); \
	virtual FTransform GetBoneTransform_Implementation(ESpineBone Bone, bool bFollowRotation); \
	virtual FTransform GetBoneTransformByName_Implementation(const FString& BoneName, bool bFollowRotation); \
 \
	DECLARE_FUNCTION(execGetAttachComponent); \
	DECLARE_FUNCTION(execGetAttachComponentByName); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetBoneTransformByName);


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USceneComponent* GetAttachComponent_Implementation(ESpineBone Bone, bool bFollowRotation); \
	virtual USceneComponent* GetAttachComponentByName_Implementation(const FString& BoneName, bool bFollowRotation); \
	virtual FTransform GetBoneTransform_Implementation(ESpineBone Bone, bool bFollowRotation); \
	virtual FTransform GetBoneTransformByName_Implementation(const FString& BoneName, bool bFollowRotation); \
 \
	DECLARE_FUNCTION(execGetAttachComponent); \
	DECLARE_FUNCTION(execGetAttachComponentByName); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetBoneTransformByName);


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_EVENT_PARMS \
	struct BaseBoneComponent_eventGetAttachComponent_Parms \
	{ \
		ESpineBone Bone; \
		bool bFollowRotation; \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseBoneComponent_eventGetAttachComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct BaseBoneComponent_eventGetAttachComponentByName_Parms \
	{ \
		FString BoneName; \
		bool bFollowRotation; \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseBoneComponent_eventGetAttachComponentByName_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct BaseBoneComponent_eventGetBoneTransform_Parms \
	{ \
		ESpineBone Bone; \
		bool bFollowRotation; \
		FTransform ReturnValue; \
	}; \
	struct BaseBoneComponent_eventGetBoneTransformByName_Parms \
	{ \
		FString BoneName; \
		bool bFollowRotation; \
		FTransform ReturnValue; \
	};


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseBoneComponent(); \
	friend struct Z_Construct_UClass_UBaseBoneComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseBoneComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBaseBoneComponent)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBaseBoneComponent(); \
	friend struct Z_Construct_UClass_UBaseBoneComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseBoneComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBaseBoneComponent)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseBoneComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseBoneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseBoneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseBoneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseBoneComponent(UBaseBoneComponent&&); \
	NO_API UBaseBoneComponent(const UBaseBoneComponent&); \
public:


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseBoneComponent(UBaseBoneComponent&&); \
	NO_API UBaseBoneComponent(const UBaseBoneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseBoneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseBoneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseBoneComponent)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_10_PROLOG \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_EVENT_PARMS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_RPC_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_INCLASS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<class UBaseBoneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_BaseBoneComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
