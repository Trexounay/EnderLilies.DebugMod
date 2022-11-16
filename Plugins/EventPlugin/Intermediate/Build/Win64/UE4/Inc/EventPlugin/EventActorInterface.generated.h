// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EventActorInterface_generated_h
#error "EventActorInterface.generated.h already included, missing '#pragma once' in EventActorInterface.h"
#endif
#define EVENTPLUGIN_EventActorInterface_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_RPC_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventActorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventActorInterface(UEventActorInterface&&); \
	NO_API UEventActorInterface(const UEventActorInterface&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventActorInterface(UEventActorInterface&&); \
	NO_API UEventActorInterface(const UEventActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventActorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventActorInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventActorInterface)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEventActorInterface(); \
	friend struct Z_Construct_UClass_UEventActorInterface_Statics; \
public: \
	DECLARE_CLASS(UEventActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventActorInterface)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEventActorInterface() {} \
public: \
	typedef UEventActorInterface UClassType; \
	typedef IEventActorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IEventActorInterface() {} \
public: \
	typedef UEventActorInterface UClassType; \
	typedef IEventActorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_6_PROLOG
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
