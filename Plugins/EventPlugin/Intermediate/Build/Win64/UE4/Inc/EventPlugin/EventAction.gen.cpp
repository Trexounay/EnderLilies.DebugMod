// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventAction() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventAction_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventAction();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventObject();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventBlackBoard_NoRegister();
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EEventActionResult();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UEventAction::execAbortAction)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_OBJECT(UEventBlackBoard,Z_Param_EventBlackBoard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbortAction(Z_Param_ConsideringPlayer,Z_Param_Subject,Z_Param_Target,Z_Param_EventBlackBoard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAction::execEndAction)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_OBJECT(UEventBlackBoard,Z_Param_EventBlackBoard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAction(Z_Param_ConsideringPlayer,Z_Param_Subject,Z_Param_Target,Z_Param_EventBlackBoard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAction::execFinishAction)
	{
		P_GET_ENUM(EEventActionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAction(EEventActionResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAction::execGetEventPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventPlayer**)Z_Param__Result=P_THIS->GetEventPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAction::execGetOriginTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOriginTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAction::execGetResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEventActionResult*)Z_Param__Result=P_THIS->GetResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAction::execStartAction)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_OBJECT(UEventBlackBoard,Z_Param_EventBlackBoard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAction(Z_Param_ConsideringPlayer,Z_Param_Subject,Z_Param_Target,Z_Param_EventBlackBoard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAction::execTickAction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_OBJECT(UEventBlackBoard,Z_Param_EventBlackBoard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickAction(Z_Param_DeltaTime,Z_Param_ConsideringPlayer,Z_Param_Subject,Z_Param_Target,Z_Param_EventBlackBoard);
		P_NATIVE_END;
	}
	static FName NAME_UEventAction_OnAbortAction = FName(TEXT("OnAbortAction"));
	void UEventAction::OnAbortAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard)
	{
		EventAction_eventOnAbortAction_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.Subject=Subject;
		Parms.Target=Target;
		Parms.EventBlackBoard=EventBlackBoard;
		ProcessEvent(FindFunctionChecked(NAME_UEventAction_OnAbortAction),&Parms);
	}
	static FName NAME_UEventAction_OnEndAction = FName(TEXT("OnEndAction"));
	void UEventAction::OnEndAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard)
	{
		EventAction_eventOnEndAction_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.Subject=Subject;
		Parms.Target=Target;
		Parms.EventBlackBoard=EventBlackBoard;
		ProcessEvent(FindFunctionChecked(NAME_UEventAction_OnEndAction),&Parms);
	}
	static FName NAME_UEventAction_OnStartAction = FName(TEXT("OnStartAction"));
	void UEventAction::OnStartAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard)
	{
		EventAction_eventOnStartAction_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.Subject=Subject;
		Parms.Target=Target;
		Parms.EventBlackBoard=EventBlackBoard;
		ProcessEvent(FindFunctionChecked(NAME_UEventAction_OnStartAction),&Parms);
	}
	static FName NAME_UEventAction_OnTickAction = FName(TEXT("OnTickAction"));
	void UEventAction::OnTickAction(float DeltaTime, APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard)
	{
		EventAction_eventOnTickAction_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.Subject=Subject;
		Parms.Target=Target;
		Parms.EventBlackBoard=EventBlackBoard;
		ProcessEvent(FindFunctionChecked(NAME_UEventAction_OnTickAction),&Parms);
	}
	void UEventAction::StaticRegisterNativesUEventAction()
	{
		UClass* Class = UEventAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortAction", &UEventAction::execAbortAction },
			{ "EndAction", &UEventAction::execEndAction },
			{ "FinishAction", &UEventAction::execFinishAction },
			{ "GetEventPlayer", &UEventAction::execGetEventPlayer },
			{ "GetOriginTransform", &UEventAction::execGetOriginTransform },
			{ "GetResult", &UEventAction::execGetResult },
			{ "StartAction", &UEventAction::execStartAction },
			{ "TickAction", &UEventAction::execTickAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventAction_AbortAction_Statics
	{
		struct EventAction_eventAbortAction_Parms
		{
			APlayerController* ConsideringPlayer;
			AActor* Subject;
			AActor* Target;
			UEventBlackBoard* EventBlackBoard;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventAbortAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventAbortAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventAbortAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventAbortAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_AbortAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_AbortAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_AbortAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_AbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "AbortAction", nullptr, nullptr, sizeof(EventAction_eventAbortAction_Parms), Z_Construct_UFunction_UEventAction_AbortAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_AbortAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_AbortAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_AbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_AbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_AbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_EndAction_Statics
	{
		struct EventAction_eventEndAction_Parms
		{
			APlayerController* ConsideringPlayer;
			AActor* Subject;
			AActor* Target;
			UEventBlackBoard* EventBlackBoard;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventEndAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventEndAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventEndAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventEndAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_EndAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_EndAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_EndAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_EndAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "EndAction", nullptr, nullptr, sizeof(EventAction_eventEndAction_Parms), Z_Construct_UFunction_UEventAction_EndAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_EndAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_EndAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_EndAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_EndAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_EndAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_FinishAction_Statics
	{
		struct EventAction_eventFinishAction_Parms
		{
			EEventActionResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEventAction_FinishAction_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEventAction_FinishAction_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventFinishAction_Parms, Result), Z_Construct_UEnum_EventPlugin_EEventActionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_FinishAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_FinishAction_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_FinishAction_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_FinishAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_FinishAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "FinishAction", nullptr, nullptr, sizeof(EventAction_eventFinishAction_Parms), Z_Construct_UFunction_UEventAction_FinishAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_FinishAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_FinishAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_FinishAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_FinishAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_FinishAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics
	{
		struct EventAction_eventGetEventPlayer_Parms
		{
			UEventPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventGetEventPlayer_Parms, ReturnValue), Z_Construct_UClass_UEventPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "GetEventPlayer", nullptr, nullptr, sizeof(EventAction_eventGetEventPlayer_Parms), Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_GetEventPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_GetEventPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics
	{
		struct EventAction_eventGetOriginTransform_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventGetOriginTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "GetOriginTransform", nullptr, nullptr, sizeof(EventAction_eventGetOriginTransform_Parms), Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_GetOriginTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_GetOriginTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_GetResult_Statics
	{
		struct EventAction_eventGetResult_Parms
		{
			EEventActionResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEventAction_GetResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEventAction_GetResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventGetResult_Parms, ReturnValue), Z_Construct_UEnum_EventPlugin_EEventActionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_GetResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_GetResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_GetResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_GetResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_GetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "GetResult", nullptr, nullptr, sizeof(EventAction_eventGetResult_Parms), Z_Construct_UFunction_UEventAction_GetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_GetResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_GetResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_GetResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_GetResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_GetResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_OnAbortAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnAbortAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnAbortAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnAbortAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnAbortAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "OnAbortAction", nullptr, nullptr, sizeof(EventAction_eventOnAbortAction_Parms), Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_OnAbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_OnAbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_OnEndAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnEndAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnEndAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnEndAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnEndAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_OnEndAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnEndAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_OnEndAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_OnEndAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "OnEndAction", nullptr, nullptr, sizeof(EventAction_eventOnEndAction_Parms), Z_Construct_UFunction_UEventAction_OnEndAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnEndAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_OnEndAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnEndAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_OnEndAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_OnEndAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_OnStartAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnStartAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnStartAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnStartAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnStartAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_OnStartAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnStartAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_OnStartAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_OnStartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "OnStartAction", nullptr, nullptr, sizeof(EventAction_eventOnStartAction_Parms), Z_Construct_UFunction_UEventAction_OnStartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnStartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_OnStartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnStartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_OnStartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_OnStartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_OnTickAction_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnTickAction_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnTickAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnTickAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnTickAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventOnTickAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_OnTickAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_OnTickAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_OnTickAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_OnTickAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "OnTickAction", nullptr, nullptr, sizeof(EventAction_eventOnTickAction_Parms), Z_Construct_UFunction_UEventAction_OnTickAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnTickAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_OnTickAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_OnTickAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_OnTickAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_OnTickAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_StartAction_Statics
	{
		struct EventAction_eventStartAction_Parms
		{
			APlayerController* ConsideringPlayer;
			AActor* Subject;
			AActor* Target;
			UEventBlackBoard* EventBlackBoard;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventStartAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventStartAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventStartAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventStartAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_StartAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_StartAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_StartAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "StartAction", nullptr, nullptr, sizeof(EventAction_eventStartAction_Parms), Z_Construct_UFunction_UEventAction_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_StartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_StartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_StartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_StartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_StartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAction_TickAction_Statics
	{
		struct EventAction_eventTickAction_Parms
		{
			float DeltaTime;
			APlayerController* ConsideringPlayer;
			AActor* Subject;
			AActor* Target;
			UEventBlackBoard* EventBlackBoard;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventTickAction_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventTickAction_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventTickAction_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventTickAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_EventBlackBoard = { "EventBlackBoard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAction_eventTickAction_Parms, EventBlackBoard), Z_Construct_UClass_UEventBlackBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAction_TickAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_ConsideringPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAction_TickAction_Statics::NewProp_EventBlackBoard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAction_TickAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAction_TickAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAction, nullptr, "TickAction", nullptr, nullptr, sizeof(EventAction_eventTickAction_Parms), Z_Construct_UFunction_UEventAction_TickAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_TickAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAction_TickAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAction_TickAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAction_TickAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAction_TickAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventAction_NoRegister()
	{
		return UEventAction::StaticClass();
	}
	struct Z_Construct_UClass_UEventAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireAndForget_MetaData[];
#endif
		static void NewProp_bFireAndForget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireAndForget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventAction_AbortAction, "AbortAction" }, // 3423769941
		{ &Z_Construct_UFunction_UEventAction_EndAction, "EndAction" }, // 708208986
		{ &Z_Construct_UFunction_UEventAction_FinishAction, "FinishAction" }, // 947652529
		{ &Z_Construct_UFunction_UEventAction_GetEventPlayer, "GetEventPlayer" }, // 3847407900
		{ &Z_Construct_UFunction_UEventAction_GetOriginTransform, "GetOriginTransform" }, // 3379209918
		{ &Z_Construct_UFunction_UEventAction_GetResult, "GetResult" }, // 2113201465
		{ &Z_Construct_UFunction_UEventAction_OnAbortAction, "OnAbortAction" }, // 2928384315
		{ &Z_Construct_UFunction_UEventAction_OnEndAction, "OnEndAction" }, // 1856214940
		{ &Z_Construct_UFunction_UEventAction_OnStartAction, "OnStartAction" }, // 1983273861
		{ &Z_Construct_UFunction_UEventAction_OnTickAction, "OnTickAction" }, // 37021008
		{ &Z_Construct_UFunction_UEventAction_StartAction, "StartAction" }, // 3918476386
		{ &Z_Construct_UFunction_UEventAction_TickAction, "TickAction" }, // 2585825009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAction_Statics::NewProp_bFireAndForget_MetaData[] = {
		{ "Category", "EventAction" },
		{ "ModuleRelativePath", "Public/EventAction.h" },
	};
#endif
	void Z_Construct_UClass_UEventAction_Statics::NewProp_bFireAndForget_SetBit(void* Obj)
	{
		((UEventAction*)Obj)->bFireAndForget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventAction_Statics::NewProp_bFireAndForget = { "bFireAndForget", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEventAction), &Z_Construct_UClass_UEventAction_Statics::NewProp_bFireAndForget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEventAction_Statics::NewProp_bFireAndForget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAction_Statics::NewProp_bFireAndForget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAction_Statics::NewProp_bFireAndForget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventAction_Statics::ClassParams = {
		&UEventAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventAction_Statics::PropPointers),
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEventAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventAction, 1939263250);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventAction>()
	{
		return UEventAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventAction(Z_Construct_UClass_UEventAction, &UEventAction::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
