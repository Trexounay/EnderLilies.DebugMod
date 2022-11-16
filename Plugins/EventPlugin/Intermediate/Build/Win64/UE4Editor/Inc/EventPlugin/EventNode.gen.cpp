// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventPlugin/Public/EventNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventNode() {}
// Cross Module References
	EVENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEventNode();
	UPackage* Z_Construct_UPackage__Script_EventPlugin();
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EEventNodeType();
	EVENTPLUGIN_API UEnum* Z_Construct_UEnum_EventPlugin_EEventActorType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventAction_NoRegister();
	EVENTPLUGIN_API UClass* Z_Construct_UClass_UEventCondition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
// End Cross Module References
class UScriptStruct* FEventNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EVENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FEventNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventNode, Z_Construct_UPackage__Script_EventPlugin(), TEXT("EventNode"), sizeof(FEventNode), Get_Z_Construct_UScriptStruct_FEventNode_Hash());
	}
	return Singleton;
}
template<> EVENTPLUGIN_API UScriptStruct* StaticStruct<FEventNode>()
{
	return FEventNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventNode(FEventNode::StaticStruct, TEXT("/Script/EventPlugin"), TEXT("EventNode"), false, nullptr, nullptr);
static struct FScriptStruct_EventPlugin_StaticRegisterNativesFEventNode
{
	FScriptStruct_EventPlugin_StaticRegisterNativesFEventNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventNode")),new UScriptStruct::TCppStructOps<FEventNode>);
	}
} ScriptStruct_EventPlugin_StaticRegisterNativesFEventNode;
	struct Z_Construct_UScriptStruct_FEventNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActorSubject_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSubject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActorSubject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSubjectBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorSubjectBinding;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActorTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTargetBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorTargetBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_NodeType_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, NodeType), Z_Construct_UEnum_EventPlugin_EEventNodeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_NodeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_NodeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubject_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubject = { "ActorSubject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, ActorSubject), Z_Construct_UEnum_EventPlugin_EEventActorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubjectBinding_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubjectBinding = { "ActorSubjectBinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, ActorSubjectBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubjectBinding_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTarget_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTarget = { "ActorTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, ActorTarget), Z_Construct_UEnum_EventPlugin_EEventActorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTargetBinding_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTargetBinding = { "ActorTargetBinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, ActorTargetBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTargetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTargetBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Links_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Coordinates_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, Coordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "EventNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEventAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "EventNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010008000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "EventNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEventCondition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "EventNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_DialogueWave_MetaData[] = {
		{ "Category", "EventNode" },
		{ "ModuleRelativePath", "Public/EventNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventNode, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_DialogueWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_DialogueWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_NodeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_NodeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubject_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorSubjectBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_ActorTargetBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Links_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Links,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Coordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventNode_Statics::NewProp_DialogueWave,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EventPlugin,
		nullptr,
		&NewStructOps,
		"EventNode",
		sizeof(FEventNode),
		alignof(FEventNode),
		Z_Construct_UScriptStruct_FEventNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EventPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventNode"), sizeof(FEventNode), Get_Z_Construct_UScriptStruct_FEventNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventNode_Hash() { return 670178890U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
