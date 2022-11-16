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
enum class EEventActionResult : uint8;
class UEventPlayer;
struct FTransform;
#ifdef EVENTPLUGIN_EventAction_generated_h
#error "EventAction.generated.h already included, missing '#pragma once' in EventAction.h"
#endif
#define EVENTPLUGIN_EventAction_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbortAction); \
	DECLARE_FUNCTION(execEndAction); \
	DECLARE_FUNCTION(execFinishAction); \
	DECLARE_FUNCTION(execGetEventPlayer); \
	DECLARE_FUNCTION(execGetOriginTransform); \
	DECLARE_FUNCTION(execGetResult); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execTickAction);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbortAction); \
	DECLARE_FUNCTION(execEndAction); \
	DECLARE_FUNCTION(execFinishAction); \
	DECLARE_FUNCTION(execGetEventPlayer); \
	DECLARE_FUNCTION(execGetOriginTransform); \
	DECLARE_FUNCTION(execGetResult); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execTickAction);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_EVENT_PARMS \
	struct EventAction_eventOnAbortAction_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* Subject; \
		AActor* Target; \
		UEventBlackBoard* EventBlackBoard; \
	}; \
	struct EventAction_eventOnEndAction_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* Subject; \
		AActor* Target; \
		UEventBlackBoard* EventBlackBoard; \
	}; \
	struct EventAction_eventOnStartAction_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* Subject; \
		AActor* Target; \
		UEventBlackBoard* EventBlackBoard; \
	}; \
	struct EventAction_eventOnTickAction_Parms \
	{ \
		float DeltaTime; \
		APlayerController* ConsideringPlayer; \
		AActor* Subject; \
		AActor* Target; \
		UEventBlackBoard* EventBlackBoard; \
	};


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventAction(); \
	friend struct Z_Construct_UClass_UEventAction_Statics; \
public: \
	DECLARE_CLASS(UEventAction, UEventObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventAction)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEventAction(); \
	friend struct Z_Construct_UClass_UEventAction_Statics; \
public: \
	DECLARE_CLASS(UEventAction, UEventObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventAction)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventAction(UEventAction&&); \
	NO_API UEventAction(const UEventAction&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventAction(UEventAction&&); \
	NO_API UEventAction(const UEventAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventAction)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bFireAndForget() { return STRUCT_OFFSET(UEventAction, bFireAndForget); }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_13_PROLOG \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_EVENT_PARMS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
