// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EEventActorType_generated_h
#error "EEventActorType.generated.h already included, missing '#pragma once' in EEventActorType.h"
#endif
#define EVENTPLUGIN_EEventActorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EEventActorType_h


#define FOREACH_ENUM_EEVENTACTORTYPE(op) \
	op(EEventActorType::None) \
	op(EEventActorType::Player) \
	op(EEventActorType::Binding) 

enum class EEventActorType : uint8;
template<> EVENTPLUGIN_API UEnum* StaticEnum<EEventActorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
