// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FEventNode;
#ifdef EVENTPLUGIN_EventAsset_generated_h
#error "EventAsset.generated.h already included, missing '#pragma once' in EventAsset.h"
#endif
#define EVENTPLUGIN_EventAsset_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execGetEventName); \
	DECLARE_FUNCTION(execGetFirstNode); \
	DECLARE_FUNCTION(execGetNextNodes);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execGetEventName); \
	DECLARE_FUNCTION(execGetFirstNode); \
	DECLARE_FUNCTION(execGetNextNodes);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventAsset(); \
	friend struct Z_Construct_UClass_UEventAsset_Statics; \
public: \
	DECLARE_CLASS(UEventAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventAsset)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEventAsset(); \
	friend struct Z_Construct_UClass_UEventAsset_Statics; \
public: \
	DECLARE_CLASS(UEventAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventAsset)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventAsset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventAsset(UEventAsset&&); \
	NO_API UEventAsset(const UEventAsset&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventAsset(UEventAsset&&); \
	NO_API UEventAsset(const UEventAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventAsset)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_PRIVATE_PROPERTY_OFFSET
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_14_PROLOG
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
