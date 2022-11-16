// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EventObject_generated_h
#error "EventObject.generated.h already included, missing '#pragma once' in EventObject.h"
#endif
#define EVENTPLUGIN_EventObject_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_RPC_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventObject(); \
	friend struct Z_Construct_UClass_UEventObject_Statics; \
public: \
	DECLARE_CLASS(UEventObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventObject)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUEventObject(); \
	friend struct Z_Construct_UClass_UEventObject_Statics; \
public: \
	DECLARE_CLASS(UEventObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventObject)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventObject(UEventObject&&); \
	NO_API UEventObject(const UEventObject&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventObject(UEventObject&&); \
	NO_API UEventObject(const UEventObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventObject)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_PRIVATE_PROPERTY_OFFSET
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_6_PROLOG
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
