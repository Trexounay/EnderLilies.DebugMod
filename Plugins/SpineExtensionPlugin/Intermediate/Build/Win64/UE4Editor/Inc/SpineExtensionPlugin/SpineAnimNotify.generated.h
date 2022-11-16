// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpineSkeletonAnimationComponent;
class UAnimSequenceBase;
#ifdef SPINEEXTENSIONPLUGIN_SpineAnimNotify_generated_h
#error "SpineAnimNotify.generated.h already included, missing '#pragma once' in SpineAnimNotify.h"
#endif
#define SPINEEXTENSIONPLUGIN_SpineAnimNotify_generated_h

#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_SPARSE_DATA
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_RPC_WRAPPERS
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_EVENT_PARMS \
	struct SpineAnimNotify_eventReceived_SpineNotify_Parms \
	{ \
		USpineSkeletonAnimationComponent* SpineComp; \
		UAnimSequenceBase* Animation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SpineAnimNotify_eventReceived_SpineNotify_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineAnimNotify(); \
	friend struct Z_Construct_UClass_USpineAnimNotify_Statics; \
public: \
	DECLARE_CLASS(USpineAnimNotify, UAnimNotify, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineAnimNotify)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSpineAnimNotify(); \
	friend struct Z_Construct_UClass_USpineAnimNotify_Statics; \
public: \
	DECLARE_CLASS(USpineAnimNotify, UAnimNotify, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineAnimNotify)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineAnimNotify(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineAnimNotify) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineAnimNotify); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineAnimNotify); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineAnimNotify(USpineAnimNotify&&); \
	NO_API USpineAnimNotify(const USpineAnimNotify&); \
public:


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineAnimNotify(USpineAnimNotify&&); \
	NO_API USpineAnimNotify(const USpineAnimNotify&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineAnimNotify); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineAnimNotify); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineAnimNotify)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpineContext() { return STRUCT_OFFSET(USpineAnimNotify, SpineContext); }


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_9_PROLOG \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_EVENT_PARMS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_RPC_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_INCLASS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<class USpineAnimNotify>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
