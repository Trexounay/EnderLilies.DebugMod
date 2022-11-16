// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EEventActionResult_generated_h
#error "EEventActionResult.generated.h already included, missing '#pragma once' in EEventActionResult.h"
#endif
#define EVENTPLUGIN_EEventActionResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EEventActionResult_h


#define FOREACH_ENUM_EEVENTACTIONRESULT(op) \
	op(EEventActionResult::NONE) \
	op(EEventActionResult::IN_PROGRESS) \
	op(EEventActionResult::SUCCESS) \
	op(EEventActionResult::FAILURE) 

enum class EEventActionResult : uint8;
template<> EVENTPLUGIN_API UEnum* StaticEnum<EEventActionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
