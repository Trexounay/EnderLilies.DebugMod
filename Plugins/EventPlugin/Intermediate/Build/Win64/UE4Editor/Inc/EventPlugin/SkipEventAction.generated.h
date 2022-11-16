// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEventPlayer;
#ifdef EVENTPLUGIN_SkipEventAction_generated_h
#error "SkipEventAction.generated.h already included, missing '#pragma once' in SkipEventAction.h"
#endif
#define EVENTPLUGIN_SkipEventAction_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_RPC_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_EVENT_PARMS \
	struct SkipEventAction_eventOnPostSkip_Parms \
	{ \
		UEventPlayer* EventPlayer; \
	}; \
	struct SkipEventAction_eventOnSkip_Parms \
	{ \
		UEventPlayer* EventPlayer; \
	};


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkipEventAction(); \
	friend struct Z_Construct_UClass_USkipEventAction_Statics; \
public: \
	DECLARE_CLASS(USkipEventAction, UEventObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(USkipEventAction)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSkipEventAction(); \
	friend struct Z_Construct_UClass_USkipEventAction_Statics; \
public: \
	DECLARE_CLASS(USkipEventAction, UEventObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(USkipEventAction)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkipEventAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkipEventAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkipEventAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkipEventAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkipEventAction(USkipEventAction&&); \
	NO_API USkipEventAction(const USkipEventAction&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkipEventAction(USkipEventAction&&); \
	NO_API USkipEventAction(const USkipEventAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkipEventAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkipEventAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkipEventAction)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_PRIVATE_PROPERTY_OFFSET
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_8_PROLOG \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_EVENT_PARMS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class USkipEventAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_SkipEventAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
