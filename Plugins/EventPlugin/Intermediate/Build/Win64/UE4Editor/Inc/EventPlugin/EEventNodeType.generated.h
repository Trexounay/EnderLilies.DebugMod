// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EEventNodeType_generated_h
#error "EEventNodeType.generated.h already included, missing '#pragma once' in EEventNodeType.h"
#endif
#define EVENTPLUGIN_EEventNodeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EEventNodeType_h


#define FOREACH_ENUM_EEVENTNODETYPE(op) \
	op(EEventNodeType::None) \
	op(EEventNodeType::System) \
	op(EEventNodeType::Camera) \
	op(EEventNodeType::NPC) \
	op(EEventNodeType::Player) 

enum class EEventNodeType : uint8;
template<> EVENTPLUGIN_API UEnum* StaticEnum<EEventNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
