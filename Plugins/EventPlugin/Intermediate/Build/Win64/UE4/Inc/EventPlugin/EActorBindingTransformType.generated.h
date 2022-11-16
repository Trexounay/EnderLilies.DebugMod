// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EActorBindingTransformType_generated_h
#error "EActorBindingTransformType.generated.h already included, missing '#pragma once' in EActorBindingTransformType.h"
#endif
#define EVENTPLUGIN_EActorBindingTransformType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EActorBindingTransformType_h


#define FOREACH_ENUM_EACTORBINDINGTRANSFORMTYPE(op) \
	op(EActorBindingTransformType::Absolute) \
	op(EActorBindingTransformType::Local) 

enum class EActorBindingTransformType : uint8;
template<> EVENTPLUGIN_API UEnum* StaticEnum<EActorBindingTransformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
