// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UEventPlayer;
struct FEventNode;
class UEventAction;
class UExecuteEventActionAsync;
#ifdef EVENTPLUGIN_ExecuteEventActionAsync_generated_h
#error "ExecuteEventActionAsync.generated.h already included, missing '#pragma once' in ExecuteEventActionAsync.h"
#endif
#define EVENTPLUGIN_ExecuteEventActionAsync_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteEventActionAsync); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execUpdate);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteEventActionAsync); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execUpdate);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExecuteEventActionAsync(); \
	friend struct Z_Construct_UClass_UExecuteEventActionAsync_Statics; \
public: \
	DECLARE_CLASS(UExecuteEventActionAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UExecuteEventActionAsync)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUExecuteEventActionAsync(); \
	friend struct Z_Construct_UClass_UExecuteEventActionAsync_Statics; \
public: \
	DECLARE_CLASS(UExecuteEventActionAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UExecuteEventActionAsync)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExecuteEventActionAsync(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExecuteEventActionAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExecuteEventActionAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExecuteEventActionAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExecuteEventActionAsync(UExecuteEventActionAsync&&); \
	NO_API UExecuteEventActionAsync(const UExecuteEventActionAsync&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExecuteEventActionAsync(UExecuteEventActionAsync&&); \
	NO_API UExecuteEventActionAsync(const UExecuteEventActionAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExecuteEventActionAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExecuteEventActionAsync); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExecuteEventActionAsync)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventAction() { return STRUCT_OFFSET(UExecuteEventActionAsync, EventAction); } \
	FORCEINLINE static uint32 __PPO__EventPlayer() { return STRUCT_OFFSET(UExecuteEventActionAsync, EventPlayer); } \
	FORCEINLINE static uint32 __PPO__InteractingPlayer() { return STRUCT_OFFSET(UExecuteEventActionAsync, InteractingPlayer); } \
	FORCEINLINE static uint32 __PPO__Subject() { return STRUCT_OFFSET(UExecuteEventActionAsync, Subject); } \
	FORCEINLINE static uint32 __PPO__Target() { return STRUCT_OFFSET(UExecuteEventActionAsync, Target); } \
	FORCEINLINE static uint32 __PPO__EventBlackBoard() { return STRUCT_OFFSET(UExecuteEventActionAsync, EventBlackBoard); }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_16_PROLOG
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UExecuteEventActionAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_ExecuteEventActionAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
