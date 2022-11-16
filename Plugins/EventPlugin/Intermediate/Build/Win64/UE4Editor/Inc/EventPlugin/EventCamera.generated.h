// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
#ifdef EVENTPLUGIN_EventCamera_generated_h
#error "EventCamera.generated.h already included, missing '#pragma once' in EventCamera.h"
#endif
#define EVENTPLUGIN_EventCamera_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLockToTarget); \
	DECLARE_FUNCTION(execUnlock);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLockToTarget); \
	DECLARE_FUNCTION(execUnlock);


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEventCamera(); \
	friend struct Z_Construct_UClass_AEventCamera_Statics; \
public: \
	DECLARE_CLASS(AEventCamera, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(AEventCamera)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAEventCamera(); \
	friend struct Z_Construct_UClass_AEventCamera_Statics; \
public: \
	DECLARE_CLASS(AEventCamera, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(AEventCamera)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEventCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEventCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEventCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEventCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEventCamera(AEventCamera&&); \
	NO_API AEventCamera(const AEventCamera&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEventCamera(AEventCamera&&); \
	NO_API AEventCamera(const AEventCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEventCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEventCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEventCamera)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LockedTarget() { return STRUCT_OFFSET(AEventCamera, LockedTarget); } \
	FORCEINLINE static uint32 __PPO__LockedTargetOffset() { return STRUCT_OFFSET(AEventCamera, LockedTargetOffset); }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_9_PROLOG
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_INCLASS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class AEventCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
