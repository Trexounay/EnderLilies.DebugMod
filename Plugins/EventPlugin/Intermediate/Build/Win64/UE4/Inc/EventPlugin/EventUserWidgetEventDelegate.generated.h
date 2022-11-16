// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKeyEvent;
#ifdef EVENTPLUGIN_EventUserWidgetEventDelegate_generated_h
#error "EventUserWidgetEventDelegate.generated.h already included, missing '#pragma once' in EventUserWidgetEventDelegate.h"
#endif
#define EVENTPLUGIN_EventUserWidgetEventDelegate_generated_h

#define EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidgetEventDelegate_h_6_DELEGATE \
struct _Script_EventPlugin_eventEventUserWidgetEvent_Parms \
{ \
	FKeyEvent KeyEvent; \
}; \
static inline void FEventUserWidgetEvent_DelegateWrapper(const FMulticastScriptDelegate& EventUserWidgetEvent, FKeyEvent const& KeyEvent) \
{ \
	_Script_EventPlugin_eventEventUserWidgetEvent_Parms Parms; \
	Parms.KeyEvent=KeyEvent; \
	EventUserWidgetEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EnderLilies_Plugins_EventPlugin_Source_EventPlugin_Public_EventUserWidgetEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
