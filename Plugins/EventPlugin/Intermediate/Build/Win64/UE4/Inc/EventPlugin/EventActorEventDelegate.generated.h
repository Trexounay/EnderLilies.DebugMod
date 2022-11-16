// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVENTPLUGIN_EventActorEventDelegate_generated_h
#error "EventActorEventDelegate.generated.h already included, missing '#pragma once' in EventActorEventDelegate.h"
#endif
#define EVENTPLUGIN_EventActorEventDelegate_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorEventDelegate_h_5_DELEGATE \
static inline void FEventActorEvent_DelegateWrapper(const FMulticastScriptDelegate& EventActorEvent) \
{ \
	EventActorEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActorEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
