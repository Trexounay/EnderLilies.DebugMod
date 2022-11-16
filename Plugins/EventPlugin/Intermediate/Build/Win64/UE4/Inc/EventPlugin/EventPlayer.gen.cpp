// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventPlayer() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventPlayer_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventUserWidget_NoRegister();
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EEventActorType();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventBlackBoard_NoRegister();
	EVENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEventNode();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_AEventCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UExecuteEventActionAsync_NoRegister();
	EVENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorBindingInfos();
	EVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EventPlugin_EventPlayerEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEventPlayer::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execAddActorBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorBinding(Z_Param_BindingName,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execAddOrReplaceActorBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrReplaceActorBinding(Z_Param_BindingName,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Continue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execCreateEventPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_NewOwner);
		P_GET_OBJECT(UEventAsset,Z_Param_NewEventAsset);
		P_GET_OBJECT(UClass,Z_Param_ControllerClassToUse);
		P_GET_OBJECT(UClass,Z_Param_NewEventWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventPlayer**)Z_Param__Result=UEventPlayer::CreateEventPlayer(Z_Param_NewOwner,Z_Param_NewEventAsset,Z_Param_ControllerClassToUse,Z_Param_NewEventWidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetActorBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,AActor*>*)Z_Param__Result=P_THIS->GetActorBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetActorForActorType)
	{
		P_GET_ENUM(EEventActorType,Z_Param_ActorType);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Binding);
		P_GET_UBOOL(Z_Param_bLogIfNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorForActorType(EEventActorType(Z_Param_ActorType),Z_Param_Out_Binding,Z_Param_bLogIfNotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetActorForBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorForBinding(Z_Param_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetBindingForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBindingForActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetBlackBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventBlackBoard**)Z_Param__Result=P_THIS->GetBlackBoard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetCurrentNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventNode*)Z_Param__Result=P_THIS->GetCurrentNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetEventAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventAsset**)Z_Param__Result=P_THIS->GetEventAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetEventCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AEventCamera**)Z_Param__Result=P_THIS->GetEventCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetEventWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventUserWidget**)Z_Param__Result=P_THIS->GetEventWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetInstigator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetInstigator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetInteractingPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetInteractingPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetOriginTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOriginTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetPlayerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetPlayerActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execGetPlayerChoices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEventNode>*)Z_Param__Result=P_THIS->GetPlayerChoices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execIsEventPausable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEventPausable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execIsEventSkippable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEventSkippable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execIsWaitingForPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWaitingForPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execOnReceivedFinishAction)
	{
		P_GET_OBJECT(UExecuteEventActionAsync,Z_Param_EventActionAsync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceivedFinishAction(Z_Param_EventActionAsync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execOnReceivedFinishActionFireAndForget)
	{
		P_GET_OBJECT(UExecuteEventActionAsync,Z_Param_EventActionAsync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceivedFinishActionFireAndForget(Z_Param_EventActionAsync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execPlay)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerInstigator);
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_GET_TMAP_REF(FName,AActor*,Z_Param_Out_EventActorBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_PlayerInstigator,Z_Param_EventInstigator,Z_Param_Out_EventActorBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execRemoveActorBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActorBinding(Z_Param_BindingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execSetEventSkippable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventSkippable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execSpawnActorBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingName);
		P_GET_STRUCT_REF(FActorBindingInfos,Z_Param_Out_ActorBindingInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorBinding(Z_Param_BindingName,Z_Param_Out_ActorBindingInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventPlayer::execSubmitReply)
	{
		P_GET_STRUCT_REF(FEventNode,Z_Param_Out_Reply);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubmitReply(Z_Param_Out_Reply);
		P_NATIVE_END;
	}
	void UEventPlayer::StaticRegisterNativesUEventPlayer()
	{
		UClass* Class = UEventPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UEventPlayer::execAbort },
			{ "AddActorBinding", &UEventPlayer::execAddActorBinding },
			{ "AddOrReplaceActorBinding", &UEventPlayer::execAddOrReplaceActorBinding },
			{ "Continue", &UEventPlayer::execContinue },
			{ "CreateEventPlayer", &UEventPlayer::execCreateEventPlayer },
			{ "GetActorBindings", &UEventPlayer::execGetActorBindings },
			{ "GetActorForActorType", &UEventPlayer::execGetActorForActorType },
			{ "GetActorForBinding", &UEventPlayer::execGetActorForBinding },
			{ "GetBindingForActor", &UEventPlayer::execGetBindingForActor },
			{ "GetBlackBoard", &UEventPlayer::execGetBlackBoard },
			{ "GetCurrentNode", &UEventPlayer::execGetCurrentNode },
			{ "GetEventAsset", &UEventPlayer::execGetEventAsset },
			{ "GetEventCamera", &UEventPlayer::execGetEventCamera },
			{ "GetEventWidget", &UEventPlayer::execGetEventWidget },
			{ "GetInstigator", &UEventPlayer::execGetInstigator },
			{ "GetInteractingPlayer", &UEventPlayer::execGetInteractingPlayer },
			{ "GetOriginTransform", &UEventPlayer::execGetOriginTransform },
			{ "GetOwner", &UEventPlayer::execGetOwner },
			{ "GetPlayerActor", &UEventPlayer::execGetPlayerActor },
			{ "GetPlayerChoices", &UEventPlayer::execGetPlayerChoices },
			{ "IsEventPausable", &UEventPlayer::execIsEventPausable },
			{ "IsEventSkippable", &UEventPlayer::execIsEventSkippable },
			{ "IsPlaying", &UEventPlayer::execIsPlaying },
			{ "IsWaitingForPlayer", &UEventPlayer::execIsWaitingForPlayer },
			{ "OnReceivedFinishAction", &UEventPlayer::execOnReceivedFinishAction },
			{ "OnReceivedFinishActionFireAndForget", &UEventPlayer::execOnReceivedFinishActionFireAndForget },
			{ "Play", &UEventPlayer::execPlay },
			{ "RemoveActorBinding", &UEventPlayer::execRemoveActorBinding },
			{ "SetEventSkippable", &UEventPlayer::execSetEventSkippable },
			{ "SpawnActorBinding", &UEventPlayer::execSpawnActorBinding },
			{ "SubmitReply", &UEventPlayer::execSubmitReply },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventPlayer_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics
	{
		struct EventPlayer_eventAddActorBinding_Parms
		{
			FName BindingName;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindingName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventAddActorBinding_Parms, BindingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventAddActorBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::NewProp_BindingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "AddActorBinding", nullptr, nullptr, sizeof(EventPlayer_eventAddActorBinding_Parms), Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_AddActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_AddActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics
	{
		struct EventPlayer_eventAddOrReplaceActorBinding_Parms
		{
			FName BindingName;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindingName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventAddOrReplaceActorBinding_Parms, BindingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventAddOrReplaceActorBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::NewProp_BindingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "AddOrReplaceActorBinding", nullptr, nullptr, sizeof(EventPlayer_eventAddOrReplaceActorBinding_Parms), Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_Continue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_Continue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_Continue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "Continue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_Continue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_Continue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_Continue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_Continue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics
	{
		struct EventPlayer_eventCreateEventPlayer_Parms
		{
			AActor* NewOwner;
			UEventAsset* NewEventAsset;
			TSubclassOf<AController>  ControllerClassToUse;
			TSubclassOf<UEventUserWidget>  NewEventWidgetClass;
			UEventPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewEventAsset;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControllerClassToUse;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewEventWidgetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventCreateEventPlayer_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_NewEventAsset = { "NewEventAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventCreateEventPlayer_Parms, NewEventAsset), Z_Construct_UClass_UEventAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_ControllerClassToUse = { "ControllerClassToUse", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventCreateEventPlayer_Parms, ControllerClassToUse), Z_Construct_UClass_AController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_NewEventWidgetClass = { "NewEventWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventCreateEventPlayer_Parms, NewEventWidgetClass), Z_Construct_UClass_UEventUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventCreateEventPlayer_Parms, ReturnValue), Z_Construct_UClass_UEventPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_NewOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_NewEventAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_ControllerClassToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_NewEventWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "CreateEventPlayer", nullptr, nullptr, sizeof(EventPlayer_eventCreateEventPlayer_Parms), Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_CreateEventPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_CreateEventPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics
	{
		struct EventPlayer_eventGetActorBindings_Parms
		{
			TMap<FName,AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetActorBindings_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetActorBindings", nullptr, nullptr, sizeof(EventPlayer_eventGetActorBindings_Parms), Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetActorBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetActorBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics
	{
		struct EventPlayer_eventGetActorForActorType_Parms
		{
			EEventActorType ActorType;
			FName Binding;
			bool bLogIfNotFound;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Binding;
		static void NewProp_bLogIfNotFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLogIfNotFound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_ActorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_ActorType = { "ActorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetActorForActorType_Parms, ActorType), Z_Construct_UEnum_EventPlugin_EEventActorType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetActorForActorType_Parms, Binding), METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_Binding_MetaData)) };
	void Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_bLogIfNotFound_SetBit(void* Obj)
	{
		((EventPlayer_eventGetActorForActorType_Parms*)Obj)->bLogIfNotFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_bLogIfNotFound = { "bLogIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventPlayer_eventGetActorForActorType_Parms), &Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_bLogIfNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetActorForActorType_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_ActorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_ActorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_bLogIfNotFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetActorForActorType", nullptr, nullptr, sizeof(EventPlayer_eventGetActorForActorType_Parms), Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetActorForActorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetActorForActorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics
	{
		struct EventPlayer_eventGetActorForBinding_Parms
		{
			FName Binding;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetActorForBinding_Parms, Binding), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetActorForBinding_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::NewProp_Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetActorForBinding", nullptr, nullptr, sizeof(EventPlayer_eventGetActorForBinding_Parms), Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetActorForBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetActorForBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics
	{
		struct EventPlayer_eventGetBindingForActor_Parms
		{
			AActor* Actor;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetBindingForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetBindingForActor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetBindingForActor", nullptr, nullptr, sizeof(EventPlayer_eventGetBindingForActor_Parms), Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetBindingForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetBindingForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics
	{
		struct EventPlayer_eventGetBlackBoard_Parms
		{
			UEventBlackBoard* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetBlackBoard_Parms, ReturnValue), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetBlackBoard", nullptr, nullptr, sizeof(EventPlayer_eventGetBlackBoard_Parms), Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetBlackBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetBlackBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics
	{
		struct EventPlayer_eventGetCurrentNode_Parms
		{
			FEventNode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetCurrentNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetCurrentNode", nullptr, nullptr, sizeof(EventPlayer_eventGetCurrentNode_Parms), Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetCurrentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetCurrentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics
	{
		struct EventPlayer_eventGetEventAsset_Parms
		{
			UEventAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetEventAsset_Parms, ReturnValue), Z_Construct_UClass_UEventAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetEventAsset", nullptr, nullptr, sizeof(EventPlayer_eventGetEventAsset_Parms), Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetEventAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetEventAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics
	{
		struct EventPlayer_eventGetEventCamera_Parms
		{
			AEventCamera* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetEventCamera_Parms, ReturnValue), Z_Construct_UClass_AEventCamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetEventCamera", nullptr, nullptr, sizeof(EventPlayer_eventGetEventCamera_Parms), Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetEventCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetEventCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics
	{
		struct EventPlayer_eventGetEventWidget_Parms
		{
			UEventUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetEventWidget_Parms, ReturnValue), Z_Construct_UClass_UEventUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetEventWidget", nullptr, nullptr, sizeof(EventPlayer_eventGetEventWidget_Parms), Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetEventWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetEventWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics
	{
		struct EventPlayer_eventGetInstigator_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetInstigator", nullptr, nullptr, sizeof(EventPlayer_eventGetInstigator_Parms), Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics
	{
		struct EventPlayer_eventGetInteractingPlayer_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetInteractingPlayer_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetInteractingPlayer", nullptr, nullptr, sizeof(EventPlayer_eventGetInteractingPlayer_Parms), Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics
	{
		struct EventPlayer_eventGetOriginTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetOriginTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetOriginTransform", nullptr, nullptr, sizeof(EventPlayer_eventGetOriginTransform_Parms), Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetOriginTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetOriginTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetOwner_Statics
	{
		struct EventPlayer_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetOwner", nullptr, nullptr, sizeof(EventPlayer_eventGetOwner_Parms), Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics
	{
		struct EventPlayer_eventGetPlayerActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetPlayerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetPlayerActor", nullptr, nullptr, sizeof(EventPlayer_eventGetPlayerActor_Parms), Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetPlayerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetPlayerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics
	{
		struct EventPlayer_eventGetPlayerChoices_Parms
		{
			TArray<FEventNode> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventGetPlayerChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "GetPlayerChoices", nullptr, nullptr, sizeof(EventPlayer_eventGetPlayerChoices_Parms), Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_GetPlayerChoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_GetPlayerChoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics
	{
		struct EventPlayer_eventIsEventPausable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EventPlayer_eventIsEventPausable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventPlayer_eventIsEventPausable_Parms), &Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "IsEventPausable", nullptr, nullptr, sizeof(EventPlayer_eventIsEventPausable_Parms), Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_IsEventPausable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_IsEventPausable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics
	{
		struct EventPlayer_eventIsEventSkippable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EventPlayer_eventIsEventSkippable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventPlayer_eventIsEventSkippable_Parms), &Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "IsEventSkippable", nullptr, nullptr, sizeof(EventPlayer_eventIsEventSkippable_Parms), Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_IsEventSkippable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_IsEventSkippable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics
	{
		struct EventPlayer_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EventPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(EventPlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics
	{
		struct EventPlayer_eventIsWaitingForPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EventPlayer_eventIsWaitingForPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventPlayer_eventIsWaitingForPlayer_Parms), &Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "IsWaitingForPlayer", nullptr, nullptr, sizeof(EventPlayer_eventIsWaitingForPlayer_Parms), Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics
	{
		struct EventPlayer_eventOnReceivedFinishAction_Parms
		{
			UExecuteEventActionAsync* EventActionAsync;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventActionAsync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::NewProp_EventActionAsync = { "EventActionAsync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventOnReceivedFinishAction_Parms, EventActionAsync), Z_Construct_UClass_UExecuteEventActionAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::NewProp_EventActionAsync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "OnReceivedFinishAction", nullptr, nullptr, sizeof(EventPlayer_eventOnReceivedFinishAction_Parms), Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics
	{
		struct EventPlayer_eventOnReceivedFinishActionFireAndForget_Parms
		{
			UExecuteEventActionAsync* EventActionAsync;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventActionAsync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::NewProp_EventActionAsync = { "EventActionAsync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventOnReceivedFinishActionFireAndForget_Parms, EventActionAsync), Z_Construct_UClass_UExecuteEventActionAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::NewProp_EventActionAsync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "OnReceivedFinishActionFireAndForget", nullptr, nullptr, sizeof(EventPlayer_eventOnReceivedFinishActionFireAndForget_Parms), Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_Play_Statics
	{
		struct EventPlayer_eventPlay_Parms
		{
			APlayerController* PlayerInstigator;
			AActor* EventInstigator;
			TMap<FName,AActor*> EventActorBindings;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventActorBindings_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventActorBindings_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventActorBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EventActorBindings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_PlayerInstigator = { "PlayerInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventPlay_Parms, PlayerInstigator), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventPlay_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings_ValueProp = { "EventActorBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings_Key_KeyProp = { "EventActorBindings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings = { "EventActorBindings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventPlay_Parms, EventActorBindings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_PlayerInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_Play_Statics::NewProp_EventActorBindings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "Play", nullptr, nullptr, sizeof(EventPlayer_eventPlay_Parms), Z_Construct_UFunction_UEventPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics
	{
		struct EventPlayer_eventRemoveActorBinding_Parms
		{
			FName BindingName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventRemoveActorBinding_Parms, BindingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::NewProp_BindingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "RemoveActorBinding", nullptr, nullptr, sizeof(EventPlayer_eventRemoveActorBinding_Parms), Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_RemoveActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_RemoveActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_SetEventSkippable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_SetEventSkippable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_SetEventSkippable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "SetEventSkippable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_SetEventSkippable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_SetEventSkippable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_SetEventSkippable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_SetEventSkippable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics
	{
		struct EventPlayer_eventSpawnActorBinding_Parms
		{
			FName BindingName;
			FActorBindingInfos ActorBindingInfos;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorBindingInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorBindingInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventSpawnActorBinding_Parms, BindingName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::NewProp_ActorBindingInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::NewProp_ActorBindingInfos = { "ActorBindingInfos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventSpawnActorBinding_Parms, ActorBindingInfos), Z_Construct_UScriptStruct_FActorBindingInfos, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::NewProp_ActorBindingInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::NewProp_ActorBindingInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::NewProp_BindingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::NewProp_ActorBindingInfos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "SpawnActorBinding", nullptr, nullptr, sizeof(EventPlayer_eventSpawnActorBinding_Parms), Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_SpawnActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_SpawnActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics
	{
		struct EventPlayer_eventSubmitReply_Parms
		{
			FEventNode Reply;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reply_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reply;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::NewProp_Reply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPlayer_eventSubmitReply_Parms, Reply), Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::NewProp_Reply_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::NewProp_Reply_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::NewProp_Reply,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPlayer, nullptr, "SubmitReply", nullptr, nullptr, sizeof(EventPlayer_eventSubmitReply_Parms), Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPlayer_SubmitReply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPlayer_SubmitReply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventPlayer_NoRegister()
	{
		return UEventPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UEventPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventBlackBoard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EventControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EventWidgetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnusedEventControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedEventControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnusedEventControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventWidgetInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventWidgetInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentNode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerChoices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerChoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerChoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunningActions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventPlayer_Abort, "Abort" }, // 1313076896
		{ &Z_Construct_UFunction_UEventPlayer_AddActorBinding, "AddActorBinding" }, // 2894328232
		{ &Z_Construct_UFunction_UEventPlayer_AddOrReplaceActorBinding, "AddOrReplaceActorBinding" }, // 1110731167
		{ &Z_Construct_UFunction_UEventPlayer_Continue, "Continue" }, // 69381602
		{ &Z_Construct_UFunction_UEventPlayer_CreateEventPlayer, "CreateEventPlayer" }, // 2153880330
		{ &Z_Construct_UFunction_UEventPlayer_GetActorBindings, "GetActorBindings" }, // 906239673
		{ &Z_Construct_UFunction_UEventPlayer_GetActorForActorType, "GetActorForActorType" }, // 4021194218
		{ &Z_Construct_UFunction_UEventPlayer_GetActorForBinding, "GetActorForBinding" }, // 91704202
		{ &Z_Construct_UFunction_UEventPlayer_GetBindingForActor, "GetBindingForActor" }, // 2825661788
		{ &Z_Construct_UFunction_UEventPlayer_GetBlackBoard, "GetBlackBoard" }, // 3426213386
		{ &Z_Construct_UFunction_UEventPlayer_GetCurrentNode, "GetCurrentNode" }, // 1518224360
		{ &Z_Construct_UFunction_UEventPlayer_GetEventAsset, "GetEventAsset" }, // 1610694120
		{ &Z_Construct_UFunction_UEventPlayer_GetEventCamera, "GetEventCamera" }, // 2737791664
		{ &Z_Construct_UFunction_UEventPlayer_GetEventWidget, "GetEventWidget" }, // 2066912935
		{ &Z_Construct_UFunction_UEventPlayer_GetInstigator, "GetInstigator" }, // 3258136123
		{ &Z_Construct_UFunction_UEventPlayer_GetInteractingPlayer, "GetInteractingPlayer" }, // 3367611592
		{ &Z_Construct_UFunction_UEventPlayer_GetOriginTransform, "GetOriginTransform" }, // 11484407
		{ &Z_Construct_UFunction_UEventPlayer_GetOwner, "GetOwner" }, // 813859698
		{ &Z_Construct_UFunction_UEventPlayer_GetPlayerActor, "GetPlayerActor" }, // 2826980340
		{ &Z_Construct_UFunction_UEventPlayer_GetPlayerChoices, "GetPlayerChoices" }, // 4001952883
		{ &Z_Construct_UFunction_UEventPlayer_IsEventPausable, "IsEventPausable" }, // 562116480
		{ &Z_Construct_UFunction_UEventPlayer_IsEventSkippable, "IsEventSkippable" }, // 1335209498
		{ &Z_Construct_UFunction_UEventPlayer_IsPlaying, "IsPlaying" }, // 2249713864
		{ &Z_Construct_UFunction_UEventPlayer_IsWaitingForPlayer, "IsWaitingForPlayer" }, // 2537686410
		{ &Z_Construct_UFunction_UEventPlayer_OnReceivedFinishAction, "OnReceivedFinishAction" }, // 3645675303
		{ &Z_Construct_UFunction_UEventPlayer_OnReceivedFinishActionFireAndForget, "OnReceivedFinishActionFireAndForget" }, // 737072137
		{ &Z_Construct_UFunction_UEventPlayer_Play, "Play" }, // 3953465319
		{ &Z_Construct_UFunction_UEventPlayer_RemoveActorBinding, "RemoveActorBinding" }, // 547850144
		{ &Z_Construct_UFunction_UEventPlayer_SetEventSkippable, "SetEventSkippable" }, // 771159941
		{ &Z_Construct_UFunction_UEventPlayer_SpawnActorBinding, "SpawnActorBinding" }, // 3914982881
		{ &Z_Construct_UFunction_UEventPlayer_SubmitReply, "SubmitReply" }, // 688448736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventPlayer.h" },
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnStart = { "OnStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, OnStart), Z_Construct_UDelegateFunction_EventPlugin_EventPlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnEventStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnEventStep = { "OnEventStep", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, OnEventStep), Z_Construct_UDelegateFunction_EventPlugin_EventPlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnEventStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnEventStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, OnFinish), Z_Construct_UDelegateFunction_EventPlugin_EventPlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventAsset = { "EventAsset", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, EventAsset), Z_Construct_UClass_UEventAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventBlackBoard_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventBlackBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventBlackBoard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventControllerClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventControllerClass = { "EventControllerClass", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, EventControllerClass), Z_Construct_UClass_AController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetClass = { "EventWidgetClass", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, EventWidgetClass), Z_Construct_UClass_UEventUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_UnusedEventControllers_Inner = { "UnusedEventControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_UnusedEventControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_UnusedEventControllers = { "UnusedEventControllers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, UnusedEventControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_UnusedEventControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_UnusedEventControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetInstance = { "EventWidgetInstance", nullptr, (EPropertyFlags)0x0042000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, EventWidgetInstance), Z_Construct_UClass_UEventUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventCamera = { "EventCamera", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, EventCamera), Z_Construct_UClass_AEventCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, CurrentNode), Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentNode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_PlayerChoices_Inner = { "PlayerChoices", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_PlayerChoices_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_PlayerChoices = { "PlayerChoices", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, PlayerChoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_PlayerChoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_PlayerChoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, CurrentAction), Z_Construct_UClass_UExecuteEventActionAsync_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentAction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_RunningActions_Inner = { "RunningActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExecuteEventActionAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPlayer_Statics::NewProp_RunningActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventPlayer_Statics::NewProp_RunningActions = { "RunningActions", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventPlayer, RunningActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::NewProp_RunningActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::NewProp_RunningActions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnEventStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_OnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventBlackBoard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_UnusedEventControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_UnusedEventControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventWidgetInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_EventCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_PlayerChoices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_PlayerChoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_CurrentAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_RunningActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventPlayer_Statics::NewProp_RunningActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventPlayer_Statics::ClassParams = {
		&UEventPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventPlayer, 3232779134);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventPlayer>()
	{
		return UEventPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventPlayer(Z_Construct_UClass_UEventPlayer, &UEventPlayer::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
