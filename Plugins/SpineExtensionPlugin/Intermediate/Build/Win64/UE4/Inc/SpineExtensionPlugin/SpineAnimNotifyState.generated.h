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
#ifdef SPINEEXTENSIONPLUGIN_SpineAnimNotifyState_generated_h
#error "SpineAnimNotifyState.generated.h already included, missing '#pragma once' in SpineAnimNotifyState.h"
#endif
#define SPINEEXTENSIONPLUGIN_SpineAnimNotifyState_generated_h

#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_SPARSE_DATA
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetExecutionRatio); \
	DECLARE_FUNCTION(execGetExecutionTime);


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetExecutionRatio); \
	DECLARE_FUNCTION(execGetExecutionTime);


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_EVENT_PARMS \
	struct SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms \
	{ \
		USpineSkeletonAnimationComponent* SpineComp; \
		UAnimSequenceBase* Animation; \
		float TotalDuration; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SpineAnimNotifyState_eventReceived_SpineNotifyBegin_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms \
	{ \
		USpineSkeletonAnimationComponent* SpineComp; \
		UAnimSequenceBase* Animation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SpineAnimNotifyState_eventReceived_SpineNotifyEnd_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms \
	{ \
		USpineSkeletonAnimationComponent* SpineComp; \
		UAnimSequenceBase* Animation; \
		float FrameDeltaTime; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SpineAnimNotifyState_eventReceived_SpineNotifyTick_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_CALLBACK_WRAPPERS
#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineAnimNotifyState(); \
	friend struct Z_Construct_UClass_USpineAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(USpineAnimNotifyState, UAnimNotifyState, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineAnimNotifyState)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSpineAnimNotifyState(); \
	friend struct Z_Construct_UClass_USpineAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(USpineAnimNotifyState, UAnimNotifyState, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SpineExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineAnimNotifyState)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineAnimNotifyState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineAnimNotifyState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineAnimNotifyState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineAnimNotifyState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineAnimNotifyState(USpineAnimNotifyState&&); \
	NO_API USpineAnimNotifyState(const USpineAnimNotifyState&); \
public:


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineAnimNotifyState(USpineAnimNotifyState&&); \
	NO_API USpineAnimNotifyState(const USpineAnimNotifyState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineAnimNotifyState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineAnimNotifyState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineAnimNotifyState)


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExecutionTime() { return STRUCT_OFFSET(USpineAnimNotifyState, ExecutionTime); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(USpineAnimNotifyState, Duration); }


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_9_PROLOG \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_EVENT_PARMS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_RPC_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_INCLASS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_PRIVATE_PROPERTY_OFFSET \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_SPARSE_DATA \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_CALLBACK_WRAPPERS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_INCLASS_NO_PURE_DECLS \
	EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEEXTENSIONPLUGIN_API UClass* StaticClass<class USpineAnimNotifyState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_SpineExtensionPlugin_Source_SpineExtensionPlugin_Public_SpineAnimNotifyState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
