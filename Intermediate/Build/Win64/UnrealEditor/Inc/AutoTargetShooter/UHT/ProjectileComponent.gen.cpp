// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/Components/ProjectileComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileComponent() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UBaseComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UProjectileComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UProjectileComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileComponent::execHitOtherActor)
	{
		P_GET_OBJECT(AActor,Z_Param_projectile);
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitOtherActor(Z_Param_projectile,Z_Param_other);
		P_NATIVE_END;
	}
	void UProjectileComponent::StaticRegisterNativesUProjectileComponent()
	{
		UClass* Class = UProjectileComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HitOtherActor", &UProjectileComponent::execHitOtherActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics
	{
		struct ProjectileComponent_eventHitOtherActor_Parms
		{
			AActor* projectile;
			AActor* other;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileComponent_eventHitOtherActor_Parms, projectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileComponent_eventHitOtherActor_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::NewProp_projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ECS/Components/ProjectileComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileComponent, nullptr, "HitOtherActor", nullptr, nullptr, Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::ProjectileComponent_eventHitOtherActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::ProjectileComponent_eventHitOtherActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectileComponent_HitOtherActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileComponent_HitOtherActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileComponent);
	UClass* Z_Construct_UClass_UProjectileComponent_NoRegister()
	{
		return UProjectileComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileComponent_HitOtherActor, "HitOtherActor" }, // 796233589
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Tags ComponentTick ComponentReplication Activation Cooking AssetUserData Replication Collision" },
		{ "IncludePath", "ECS/Components/ProjectileComponent.h" },
		{ "ModuleRelativePath", "ECS/Components/ProjectileComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileComponent_Statics::ClassParams = {
		&UProjectileComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProjectileComponent()
	{
		if (!Z_Registration_Info_UClass_UProjectileComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileComponent.OuterSingleton, Z_Construct_UClass_UProjectileComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileComponent.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<UProjectileComponent>()
	{
		return UProjectileComponent::StaticClass();
	}
	UProjectileComponent::UProjectileComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileComponent);
	UProjectileComponent::~UProjectileComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileComponent, UProjectileComponent::StaticClass, TEXT("UProjectileComponent"), &Z_Registration_Info_UClass_UProjectileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileComponent), 3064069892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_421599668(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
