// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
class UEventBlackBoard;
#ifdef EVENTPLUGIN_EventTrigger_generated_h
#error "EventTrigger.generated.h already included, missing '#pragma once' in EventTrigger.h"
#endif
#define EVENTPLUGIN_EventTrigger_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_RPC_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_EVENT_PARMS \
	struct EventTrigger_eventExecuteTrigger_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* Subject; \
		AActor* Target; \
		UEventBlackBoard* EventBlackBoard; \
	};


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventTrigger(); \
	friend struct Z_Construct_UClass_UEventTrigger_Statics; \
public: \
	DECLARE_CLASS(UEventTrigger, UEventObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventTrigger)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEventTrigger(); \
	friend struct Z_Construct_UClass_UEventTrigger_Statics; \
public: \
	DECLARE_CLASS(UEventTrigger, UEventObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventTrigger)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventTrigger(UEventTrigger&&); \
	NO_API UEventTrigger(const UEventTrigger&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventTrigger(UEventTrigger&&); \
	NO_API UEventTrigger(const UEventTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventTrigger)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_PRIVATE_PROPERTY_OFFSET
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_10_PROLOG \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_EVENT_PARMS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
