// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/Components/BinaryDataHolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinaryDataHolder() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FBinaryDataHolder();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BinaryDataHolder;
class UScriptStruct* FBinaryDataHolder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BinaryDataHolder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BinaryDataHolder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBinaryDataHolder, (UObject*)Z_Construct_UPackage__Script_AutoTargetShooter(), TEXT("BinaryDataHolder"));
	}
	return Z_Registration_Info_UScriptStruct_BinaryDataHolder.OuterSingleton;
}
template<> AUTOTARGETSHOOTER_API UScriptStruct* StaticStruct<FBinaryDataHolder>()
{
	return FBinaryDataHolder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBinaryDataHolder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "ECS/Components/BinaryDataHolder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBinaryDataHolder>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "ECS/Components/BinaryDataHolder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBinaryDataHolder, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
		nullptr,
		&NewStructOps,
		"BinaryDataHolder",
		Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::PropPointers),
		sizeof(FBinaryDataHolder),
		alignof(FBinaryDataHolder),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBinaryDataHolder()
	{
		if (!Z_Registration_Info_UScriptStruct_BinaryDataHolder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BinaryDataHolder.InnerSingleton, Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BinaryDataHolder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BinaryDataHolder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BinaryDataHolder_h_Statics::ScriptStructInfo[] = {
		{ FBinaryDataHolder::StaticStruct, Z_Construct_UScriptStruct_FBinaryDataHolder_Statics::NewStructOps, TEXT("BinaryDataHolder"), &Z_Registration_Info_UScriptStruct_BinaryDataHolder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBinaryDataHolder), 177156255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BinaryDataHolder_h_2206563723(TEXT("/Script/AutoTargetShooter"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BinaryDataHolder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BinaryDataHolder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
