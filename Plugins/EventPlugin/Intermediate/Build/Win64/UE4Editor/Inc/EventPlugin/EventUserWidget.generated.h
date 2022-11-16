// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EventUserWidget_generated_h
#error "EventUserWidget.generated.h already included, missing '#pragma once' in EventUserWidget.h"
#endif
#define EVENTPLUGIN_EventUserWidget_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_RPC_WRAPPERS \
	virtual void OnStartNewAction_Implementation(); \
	virtual void RequestRemove_Implementation(); \
 \
	DECLARE_FUNCTION(execOnStartNewAction); \
	DECLARE_FUNCTION(execRequestRemove);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStartNewAction_Implementation(); \
	virtual void RequestRemove_Implementation(); \
 \
	DECLARE_FUNCTION(execOnStartNewAction); \
	DECLARE_FUNCTION(execRequestRemove);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_EVENT_PARMS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventUserWidget(); \
	friend struct Z_Construct_UClass_UEventUserWidget_Statics; \
public: \
	DECLARE_CLASS(UEventUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventUserWidget)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUEventUserWidget(); \
	friend struct Z_Construct_UClass_UEventUserWidget_Statics; \
public: \
	DECLARE_CLASS(UEventUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventUserWidget)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventUserWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventUserWidget(UEventUserWidget&&); \
	NO_API UEventUserWidget(const UEventUserWidget&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventUserWidget(UEventUserWidget&&); \
	NO_API UEventUserWidget(const UEventUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventUserWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventUserWidget)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventPlayer() { return STRUCT_OFFSET(UEventUserWidget, EventPlayer); }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_9_PROLOG \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_EVENT_PARMS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
