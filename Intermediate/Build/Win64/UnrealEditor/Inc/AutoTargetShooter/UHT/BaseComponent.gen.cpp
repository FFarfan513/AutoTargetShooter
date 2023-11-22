// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/Components/BaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseComponent() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UBaseComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UBaseComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	void UBaseComponent::StaticRegisterNativesUBaseComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseComponent);
	UClass* Z_Construct_UClass_UBaseComponent_NoRegister()
	{
		return UBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Tags ComponentTick ComponentReplication Activation Cooking AssetUserData Replication Collision" },
		{ "IncludePath", "ECS/Components/BaseComponent.h" },
		{ "ModuleRelativePath", "ECS/Components/BaseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseComponent_Statics::NewProp_ComponentID_MetaData[] = {
		{ "Category", "BaseComponent" },
		{ "ModuleRelativePath", "ECS/Components/BaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseComponent_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseComponent, ComponentID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::NewProp_ComponentID_MetaData), Z_Construct_UClass_UBaseComponent_Statics::NewProp_ComponentID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseComponent_Statics::NewProp_ComponentID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseComponent_Statics::ClassParams = {
		&UBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseComponent.OuterSingleton, Z_Construct_UClass_UBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseComponent.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<UBaseComponent>()
	{
		return UBaseComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseComponent);
	UBaseComponent::~UBaseComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BaseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseComponent, UBaseComponent::StaticClass, TEXT("UBaseComponent"), &Z_Registration_Info_UClass_UBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseComponent), 3778568623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BaseComponent_h_3071279611(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_BaseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
