// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/ECSWorldGameInstance.h"
#include "AutoTargetShooter/ECS/Components/BinaryDataHolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECSWorldGameInstance() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UECSWorldGameInstance();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UECSWorldGameInstance_NoRegister();
	AUTOTARGETSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FBinaryDataHolder();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	void UECSWorldGameInstance::StaticRegisterNativesUECSWorldGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECSWorldGameInstance);
	UClass* Z_Construct_UClass_UECSWorldGameInstance_NoRegister()
	{
		return UECSWorldGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UECSWorldGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_savedComponentData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_savedComponentData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_savedComponentData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_savedComponentData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECSWorldGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorldGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECSWorldGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ECS/ECSWorldGameInstance.h" },
		{ "ModuleRelativePath", "ECS/ECSWorldGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData_ValueProp = { "savedComponentData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBinaryDataHolder, METADATA_PARAMS(0, nullptr) }; // 177156255
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData_Key_KeyProp = { "savedComponentData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData_MetaData[] = {
		{ "ModuleRelativePath", "ECS/ECSWorldGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData = { "savedComponentData", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UECSWorldGameInstance, savedComponentData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData_MetaData), Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData_MetaData) }; // 177156255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UECSWorldGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECSWorldGameInstance_Statics::NewProp_savedComponentData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECSWorldGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECSWorldGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECSWorldGameInstance_Statics::ClassParams = {
		&UECSWorldGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UECSWorldGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorldGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorldGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UECSWorldGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorldGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UECSWorldGameInstance()
	{
		if (!Z_Registration_Info_UClass_UECSWorldGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECSWorldGameInstance.OuterSingleton, Z_Construct_UClass_UECSWorldGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECSWorldGameInstance.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<UECSWorldGameInstance>()
	{
		return UECSWorldGameInstance::StaticClass();
	}
	UECSWorldGameInstance::UECSWorldGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECSWorldGameInstance);
	UECSWorldGameInstance::~UECSWorldGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorldGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorldGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECSWorldGameInstance, UECSWorldGameInstance::StaticClass, TEXT("UECSWorldGameInstance"), &Z_Registration_Info_UClass_UECSWorldGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECSWorldGameInstance), 2052444021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorldGameInstance_h_3410282387(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorldGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorldGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
