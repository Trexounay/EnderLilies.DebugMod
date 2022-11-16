// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UExecuteEventActionAsync;
#ifdef EVENTPLUGIN_EventActionEventDelegate_generated_h
#error "EventActionEventDelegate.generated.h already included, missing '#pragma once' in EventActionEventDelegate.h"
#endif
#define EVENTPLUGIN_EventActionEventDelegate_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActionEventDelegate_h_7_DELEGATE \
struct _Script_EventPlugin_eventEventActionEvent_Parms \
{ \
	UExecuteEventActionAsync* EventActionAsync; \
}; \
static inline void FEventActionEvent_DelegateWrapper(const FMulticastScriptDelegate& EventActionEvent, UExecuteEventActionAsync* EventActionAsync) \
{ \
	_Script_EventPlugin_eventEventActionEvent_Parms Parms; \
	Parms.EventActionAsync=EventActionAsync; \
	EventActionEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventActionEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
