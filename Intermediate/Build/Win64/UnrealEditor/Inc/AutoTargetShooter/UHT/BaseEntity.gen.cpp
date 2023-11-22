// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/Entities/BaseEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEntity() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_ABaseEntity();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_ABaseEntity_NoRegister();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UBaseComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	void ABaseEntity::StaticRegisterNativesABaseEntity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEntity);
	UClass* Z_Construct_UClass_ABaseEntity_NoRegister()
	{
		return ABaseEntity::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Components_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Components_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Components;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ECS/Entities/BaseEntity.h" },
		{ "ModuleRelativePath", "ECS/Entities/BaseEntity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEntity_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "BaseEntity" },
		{ "ModuleRelativePath", "ECS/Entities/BaseEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseEntity_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEntity, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::NewProp_ID_MetaData), Z_Construct_UClass_ABaseEntity_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components_ValueProp = { "Components", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components_Key_KeyProp = { "Components_Key", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ECS/Entities/BaseEntity.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEntity, Components), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components_MetaData), Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEntity_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEntity_Statics::NewProp_Components,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEntity_Statics::ClassParams = {
		&ABaseEntity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEntity_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseEntity()
	{
		if (!Z_Registration_Info_UClass_ABaseEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEntity.OuterSingleton, Z_Construct_UClass_ABaseEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEntity.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<ABaseEntity>()
	{
		return ABaseEntity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEntity);
	ABaseEntity::~ABaseEntity() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Entities_BaseEntity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Entities_BaseEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEntity, ABaseEntity::StaticClass, TEXT("ABaseEntity"), &Z_Registration_Info_UClass_ABaseEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEntity), 2576244738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Entities_BaseEntity_h_3625495547(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Entities_BaseEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Entities_BaseEntity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
