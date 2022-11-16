// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEventAsset;
class AController;
class UEventUserWidget;
class UEventPlayer;
 class AActor;
enum class EEventActorType : uint8;
class UEventBlackBoard;
struct FEventNode;
class AEventCamera;
class APlayerController;
struct FTransform;
class UExecuteEventActionAsync;
struct FActorBindingInfos;
#ifdef EVENTPLUGIN_EventPlayer_generated_h
#error "EventPlayer.generated.h already included, missing '#pragma once' in EventPlayer.h"
#endif
#define EVENTPLUGIN_EventPlayer_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbort); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execAddOrReplaceActorBinding); \
	DECLARE_FUNCTION(execContinue); \
	DECLARE_FUNCTION(execCreateEventPlayer); \
	DECLARE_FUNCTION(execGetActorBindings); \
	DECLARE_FUNCTION(execGetActorForActorType); \
	DECLARE_FUNCTION(execGetActorForBinding); \
	DECLARE_FUNCTION(execGetBindingForActor); \
	DECLARE_FUNCTION(execGetBlackBoard); \
	DECLARE_FUNCTION(execGetCurrentNode); \
	DECLARE_FUNCTION(execGetEventAsset); \
	DECLARE_FUNCTION(execGetEventCamera); \
	DECLARE_FUNCTION(execGetEventWidget); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetInteractingPlayer); \
	DECLARE_FUNCTION(execGetOriginTransform); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetPlayerActor); \
	DECLARE_FUNCTION(execGetPlayerChoices); \
	DECLARE_FUNCTION(execIsEventPausable); \
	DECLARE_FUNCTION(execIsEventSkippable); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsWaitingForPlayer); \
	DECLARE_FUNCTION(execOnReceivedFinishAction); \
	DECLARE_FUNCTION(execOnReceivedFinishActionFireAndForget); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execSetEventSkippable); \
	DECLARE_FUNCTION(execSpawnActorBinding); \
	DECLARE_FUNCTION(execSubmitReply);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbort); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execAddOrReplaceActorBinding); \
	DECLARE_FUNCTION(execContinue); \
	DECLARE_FUNCTION(execCreateEventPlayer); \
	DECLARE_FUNCTION(execGetActorBindings); \
	DECLARE_FUNCTION(execGetActorForActorType); \
	DECLARE_FUNCTION(execGetActorForBinding); \
	DECLARE_FUNCTION(execGetBindingForActor); \
	DECLARE_FUNCTION(execGetBlackBoard); \
	DECLARE_FUNCTION(execGetCurrentNode); \
	DECLARE_FUNCTION(execGetEventAsset); \
	DECLARE_FUNCTION(execGetEventCamera); \
	DECLARE_FUNCTION(execGetEventWidget); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetInteractingPlayer); \
	DECLARE_FUNCTION(execGetOriginTransform); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetPlayerActor); \
	DECLARE_FUNCTION(execGetPlayerChoices); \
	DECLARE_FUNCTION(execIsEventPausable); \
	DECLARE_FUNCTION(execIsEventSkippable); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsWaitingForPlayer); \
	DECLARE_FUNCTION(execOnReceivedFinishAction); \
	DECLARE_FUNCTION(execOnReceivedFinishActionFireAndForget); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execSetEventSkippable); \
	DECLARE_FUNCTION(execSpawnActorBinding); \
	DECLARE_FUNCTION(execSubmitReply);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventPlayer(); \
	friend struct Z_Construct_UClass_UEventPlayer_Statics; \
public: \
	DECLARE_CLASS(UEventPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventPlayer)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEventPlayer(); \
	friend struct Z_Construct_UClass_UEventPlayer_Statics; \
public: \
	DECLARE_CLASS(UEventPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventPlayer)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventPlayer(UEventPlayer&&); \
	NO_API UEventPlayer(const UEventPlayer&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventPlayer(UEventPlayer&&); \
	NO_API UEventPlayer(const UEventPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventPlayer)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UEventPlayer, Owner); } \
	FORCEINLINE static uint32 __PPO__EventAsset() { return STRUCT_OFFSET(UEventPlayer, EventAsset); } \
	FORCEINLINE static uint32 __PPO__EventBlackBoard() { return STRUCT_OFFSET(UEventPlayer, EventBlackBoard); } \
	FORCEINLINE static uint32 __PPO__EventControllerClass() { return STRUCT_OFFSET(UEventPlayer, EventControllerClass); } \
	FORCEINLINE static uint32 __PPO__EventWidgetClass() { return STRUCT_OFFSET(UEventPlayer, EventWidgetClass); } \
	FORCEINLINE static uint32 __PPO__UnusedEventControllers() { return STRUCT_OFFSET(UEventPlayer, UnusedEventControllers); } \
	FORCEINLINE static uint32 __PPO__EventWidgetInstance() { return STRUCT_OFFSET(UEventPlayer, EventWidgetInstance); } \
	FORCEINLINE static uint32 __PPO__EventCamera() { return STRUCT_OFFSET(UEventPlayer, EventCamera); } \
	FORCEINLINE static uint32 __PPO__CurrentNode() { return STRUCT_OFFSET(UEventPlayer, CurrentNode); } \
	FORCEINLINE static uint32 __PPO__PlayerChoices() { return STRUCT_OFFSET(UEventPlayer, PlayerChoices); } \
	FORCEINLINE static uint32 __PPO__CurrentAction() { return STRUCT_OFFSET(UEventPlayer, CurrentAction); } \
	FORCEINLINE static uint32 __PPO__RunningActions() { return STRUCT_OFFSET(UEventPlayer, RunningActions); }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_22_PROLOG
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
