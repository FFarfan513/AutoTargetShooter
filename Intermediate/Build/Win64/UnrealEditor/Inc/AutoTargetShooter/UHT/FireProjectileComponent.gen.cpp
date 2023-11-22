// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/Components/FireProjectileComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireProjectileComponent() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_ABaseEntity_NoRegister();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UBaseComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UFireProjectileComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UFireProjectileComponent_NoRegister();
	AUTOTARGETSHOOTER_API UFunction* Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ECS/Components/FireProjectileComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireProjectileComponent, nullptr, "OnFireProjectileDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UFireProjectileComponent::FOnFireProjectileDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFireProjectileDelegate)
{
	OnFireProjectileDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	void UFireProjectileComponent::StaticRegisterNativesUFireProjectileComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireProjectileComponent);
	UClass* Z_Construct_UClass_UFireProjectileComponent_NoRegister()
	{
		return UFireProjectileComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFireProjectileComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFireProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFireProjectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireProjectileComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UFireProjectileComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature, "OnFireProjectileDelegate__DelegateSignature" }, // 1313751604
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireProjectileComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Tags ComponentTick ComponentReplication Activation Cooking AssetUserData Replication Collision" },
		{ "IncludePath", "ECS/Components/FireProjectileComponent.h" },
		{ "ModuleRelativePath", "ECS/Components/FireProjectileComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "FireProjectileComponent" },
		{ "ModuleRelativePath", "ECS/Components/FireProjectileComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireProjectileComponent, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileSpeed_MetaData), Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileLifetime_MetaData[] = {
		{ "Category", "FireProjectileComponent" },
		{ "ModuleRelativePath", "ECS/Components/FireProjectileComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileLifetime = { "ProjectileLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireProjectileComponent, ProjectileLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileLifetime_MetaData), Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileLifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileRadius_MetaData[] = {
		{ "Category", "FireProjectileComponent" },
		{ "ModuleRelativePath", "ECS/Components/FireProjectileComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileRadius = { "ProjectileRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireProjectileComponent, ProjectileRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileRadius_MetaData), Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileType_MetaData[] = {
		{ "Category", "FireProjectileComponent" },
		{ "ModuleRelativePath", "ECS/Components/FireProjectileComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileType = { "ProjectileType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireProjectileComponent, ProjectileType), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileType_MetaData), Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_OnFireProjectile_MetaData[] = {
		{ "ModuleRelativePath", "ECS/Components/FireProjectileComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_OnFireProjectile = { "OnFireProjectile", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireProjectileComponent, OnFireProjectile), Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_OnFireProjectile_MetaData), Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_OnFireProjectile_MetaData) }; // 1313751604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFireProjectileComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_ProjectileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireProjectileComponent_Statics::NewProp_OnFireProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireProjectileComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireProjectileComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireProjectileComponent_Statics::ClassParams = {
		&UFireProjectileComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UFireProjectileComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireProjectileComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireProjectileComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFireProjectileComponent()
	{
		if (!Z_Registration_Info_UClass_UFireProjectileComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireProjectileComponent.OuterSingleton, Z_Construct_UClass_UFireProjectileComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFireProjectileComponent.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<UFireProjectileComponent>()
	{
		return UFireProjectileComponent::StaticClass();
	}
	UFireProjectileComponent::UFireProjectileComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireProjectileComponent);
	UFireProjectileComponent::~UFireProjectileComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_FireProjectileComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_FireProjectileComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFireProjectileComponent, UFireProjectileComponent::StaticClass, TEXT("UFireProjectileComponent"), &Z_Registration_Info_UClass_UFireProjectileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireProjectileComponent), 1171172658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_FireProjectileComponent_h_3134981964(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_FireProjectileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_FireProjectileComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
