// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/ECSWorld.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECSWorld() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_ABaseEntity_NoRegister();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UECSWorld();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UECSWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	void UECSWorld::StaticRegisterNativesUECSWorld()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECSWorld);
	UClass* Z_Construct_UClass_UECSWorld_NoRegister()
	{
		return UECSWorld::StaticClass();
	}
	struct Z_Construct_UClass_UECSWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ECSEntities_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ECSEntities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECSEntities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ECSEntities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECSWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorld_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECSWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ECS/ECSWorld.h" },
		{ "ModuleRelativePath", "ECS/ECSWorld.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities_ValueProp = { "ECSEntities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ABaseEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities_Key_KeyProp = { "ECSEntities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities_MetaData[] = {
		{ "ModuleRelativePath", "ECS/ECSWorld.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities = { "ECSEntities", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UECSWorld, ECSEntities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities_MetaData), Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UECSWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECSWorld_Statics::NewProp_ECSEntities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECSWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECSWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECSWorld_Statics::ClassParams = {
		&UECSWorld::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UECSWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorld_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_UECSWorld_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UECSWorld_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UECSWorld()
	{
		if (!Z_Registration_Info_UClass_UECSWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECSWorld.OuterSingleton, Z_Construct_UClass_UECSWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECSWorld.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<UECSWorld>()
	{
		return UECSWorld::StaticClass();
	}
	UECSWorld::UECSWorld() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECSWorld);
	UECSWorld::~UECSWorld() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorld_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorld_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECSWorld, UECSWorld::StaticClass, TEXT("UECSWorld"), &Z_Registration_Info_UClass_UECSWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECSWorld), 2686140022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorld_h_2853768947(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_ECSWorld_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
