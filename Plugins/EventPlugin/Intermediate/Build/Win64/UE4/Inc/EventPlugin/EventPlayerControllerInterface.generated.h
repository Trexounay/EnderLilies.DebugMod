// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EventPlayerControllerInterface_generated_h
#error "EventPlayerControllerInterface.generated.h already included, missing '#pragma once' in EventPlayerControllerInterface.h"
#endif
#define EVENTPLUGIN_EventPlayerControllerInterface_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_SPARSE_DATA
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_RPC_WRAPPERS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventPlayerControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventPlayerControllerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventPlayerControllerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventPlayerControllerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventPlayerControllerInterface(UEventPlayerControllerInterface&&); \
	NO_API UEventPlayerControllerInterface(const UEventPlayerControllerInterface&); \
public:


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventPlayerControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventPlayerControllerInterface(UEventPlayerControllerInterface&&); \
	NO_API UEventPlayerControllerInterface(const UEventPlayerControllerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventPlayerControllerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventPlayerControllerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventPlayerControllerInterface)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEventPlayerControllerInterface(); \
	friend struct Z_Construct_UClass_UEventPlayerControllerInterface_Statics; \
public: \
	DECLARE_CLASS(UEventPlayerControllerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EventPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEventPlayerControllerInterface)


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEventPlayerControllerInterface() {} \
public: \
	typedef UEventPlayerControllerInterface UClassType; \
	typedef IEventPlayerControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IEventPlayerControllerInterface() {} \
public: \
	typedef UEventPlayerControllerInterface UClassType; \
	typedef IEventPlayerControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_6_PROLOG
#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_RPC_WRAPPERS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_SPARSE_DATA \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVENTPLUGIN_API UClass* StaticClass<class UEventPlayerControllerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventPlayerControllerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
