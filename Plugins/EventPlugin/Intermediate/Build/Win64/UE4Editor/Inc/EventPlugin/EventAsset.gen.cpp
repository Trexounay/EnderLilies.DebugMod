// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventAsset() {}
// Cross Module References
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventAsset_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EVENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEventNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_AEventCamera_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_USkipEventAction_NoRegister();
	EVENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorBindingInfos();
// End Cross Module References
	DEFINE_FUNCTION(UEventAsset::execCallFunctionByName)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEventAsset::CallFunctionByName(Z_Param_Object,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAsset::execGetEventName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetEventName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAsset::execGetFirstNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventNode*)Z_Param__Result=P_THIS->GetFirstNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventAsset::execGetNextNodes)
	{
		P_GET_STRUCT(FEventNode,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEventNode>*)Z_Param__Result=P_THIS->GetNextNodes(Z_Param_Node);
		P_NATIVE_END;
	}
	void UEventAsset::StaticRegisterNativesUEventAsset()
	{
		UClass* Class = UEventAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallFunctionByName", &UEventAsset::execCallFunctionByName },
			{ "GetEventName", &UEventAsset::execGetEventName },
			{ "GetFirstNode", &UEventAsset::execGetFirstNode },
			{ "GetNextNodes", &UEventAsset::execGetNextNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics
	{
		struct EventAsset_eventCallFunctionByName_Parms
		{
			UObject* Object;
			FString FunctionName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAsset_eventCallFunctionByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAsset_eventCallFunctionByName_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAsset, nullptr, "CallFunctionByName", nullptr, nullptr, sizeof(EventAsset_eventCallFunctionByName_Parms), Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAsset_CallFunctionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAsset_CallFunctionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAsset_GetEventName_Statics
	{
		struct EventAsset_eventGetEventName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventAsset_GetEventName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAsset_eventGetEventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAsset_GetEventName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAsset_GetEventName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAsset_GetEventName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAsset_GetEventName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAsset, nullptr, "GetEventName", nullptr, nullptr, sizeof(EventAsset_eventGetEventName_Parms), Z_Construct_UFunction_UEventAsset_GetEventName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_GetEventName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAsset_GetEventName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_GetEventName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAsset_GetEventName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAsset_GetEventName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics
	{
		struct EventAsset_eventGetFirstNode_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAsset_eventGetFirstNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAsset, nullptr, "GetFirstNode", nullptr, nullptr, sizeof(EventAsset_eventGetFirstNode_Parms), Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAsset_GetFirstNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAsset_GetFirstNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics
	{
		struct EventAsset_eventGetNextNodes_Parms
		{
			FEventNode Node;
			TArray<FEventNode> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAsset_eventGetNextNodes_Parms, Node), Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventAsset_eventGetNextNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventAsset, nullptr, "GetNextNodes", nullptr, nullptr, sizeof(EventAsset_eventGetNextNodes_Parms), Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventAsset_GetNextNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventAsset_GetNextNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventAsset_NoRegister()
	{
		return UEventAsset::StaticClass();
	}
	struct Z_Construct_UClass_UEventAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventCameraClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EventCameraClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUIFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerUIFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUIFadeInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerUIFadeInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBlendTimeOnEventFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraBlendTimeOnEventFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBlendFunctionOnEventFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraBlendFunctionOnEventFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockPlayerInput_MetaData[];
#endif
		static void NewProp_bLockPlayerInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockPlayerInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSkippable_MetaData[];
#endif
		static void NewProp_bIsSkippable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSkippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipEventAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkipEventAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPause_MetaData[];
#endif
		static void NewProp_bAllowPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayIdleSplines_MetaData[];
#endif
		static void NewProp_DisplayIdleSplines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayIdleSplines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultActorBindings_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultActorBindings_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultActorBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultActorBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextNodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextNodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventAsset_CallFunctionByName, "CallFunctionByName" }, // 1654078819
		{ &Z_Construct_UFunction_UEventAsset_GetEventName, "GetEventName" }, // 3811945813
		{ &Z_Construct_UFunction_UEventAsset_GetFirstNode, "GetFirstNode" }, // 3861746677
		{ &Z_Construct_UFunction_UEventAsset_GetNextNodes, "GetNextNodes" }, // 1001812834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventAsset.h" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_EventCameraClass_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_EventCameraClass = { "EventCameraClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, EventCameraClass), Z_Construct_UClass_AEventCamera_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_EventCameraClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_EventCameraClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeOutTime_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeOutTime = { "PlayerUIFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, PlayerUIFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeInTime_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeInTime = { "PlayerUIFadeInTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, PlayerUIFadeInTime), METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendTimeOnEventFinished_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendTimeOnEventFinished = { "CameraBlendTimeOnEventFinished", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, CameraBlendTimeOnEventFinished), METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendTimeOnEventFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendTimeOnEventFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendFunctionOnEventFinished_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendFunctionOnEventFinished = { "CameraBlendFunctionOnEventFinished", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, CameraBlendFunctionOnEventFinished), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendFunctionOnEventFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendFunctionOnEventFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_bLockPlayerInput_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEventAsset_Statics::NewProp_bLockPlayerInput_SetBit(void* Obj)
	{
		((UEventAsset*)Obj)->bLockPlayerInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_bLockPlayerInput = { "bLockPlayerInput", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEventAsset), &Z_Construct_UClass_UEventAsset_Statics::NewProp_bLockPlayerInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_bLockPlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_bLockPlayerInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_bIsSkippable_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEventAsset_Statics::NewProp_bIsSkippable_SetBit(void* Obj)
	{
		((UEventAsset*)Obj)->bIsSkippable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_bIsSkippable = { "bIsSkippable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEventAsset), &Z_Construct_UClass_UEventAsset_Statics::NewProp_bIsSkippable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_bIsSkippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_bIsSkippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_SkipEventAction_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_SkipEventAction = { "SkipEventAction", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, SkipEventAction), Z_Construct_UClass_USkipEventAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_SkipEventAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_SkipEventAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_bAllowPause_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEventAsset_Statics::NewProp_bAllowPause_SetBit(void* Obj)
	{
		((UEventAsset*)Obj)->bAllowPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_bAllowPause = { "bAllowPause", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEventAsset), &Z_Construct_UClass_UEventAsset_Statics::NewProp_bAllowPause_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_bAllowPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_bAllowPause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_DisplayIdleSplines_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEventAsset_Statics::NewProp_DisplayIdleSplines_SetBit(void* Obj)
	{
		((UEventAsset*)Obj)->DisplayIdleSplines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_DisplayIdleSplines = { "DisplayIdleSplines", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEventAsset), &Z_Construct_UClass_UEventAsset_Statics::NewProp_DisplayIdleSplines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_DisplayIdleSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_DisplayIdleSplines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, Name), METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEventNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings_ValueProp = { "DefaultActorBindings", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FActorBindingInfos, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings_Key_KeyProp = { "DefaultActorBindings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings = { "DefaultActorBindings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, DefaultActorBindings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventAsset_Statics::NewProp_NextNodeId_MetaData[] = {
		{ "Category", "EventAsset" },
		{ "ModuleRelativePath", "Public/EventAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEventAsset_Statics::NewProp_NextNodeId = { "NextNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventAsset, NextNodeId), METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::NewProp_NextNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::NewProp_NextNodeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_EventCameraClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_PlayerUIFadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendTimeOnEventFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_CameraBlendFunctionOnEventFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_bLockPlayerInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_bIsSkippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_SkipEventAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_bAllowPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_DisplayIdleSplines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_DefaultActorBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventAsset_Statics::NewProp_NextNodeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventAsset_Statics::ClassParams = {
		&UEventAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventAsset, 3610531790);
	template<> EVENTPLUGIN_API UClass* StaticClass<UEventAsset>()
	{
		return UEventAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventAsset(Z_Construct_UClass_UEventAsset, &UEventAsset::StaticClass, TEXT("/Script/EventPlugin"), TEXT("UEventAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
