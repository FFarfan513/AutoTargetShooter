// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/Components/TimerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerComponent() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UBaseComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UTimerComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	void UTimerComponent::StaticRegisterNativesUTimerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimerComponent);
	UClass* Z_Construct_UClass_UTimerComponent_NoRegister()
	{
		return UTimerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTimerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerProgressTracker_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerProgressTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerActive_MetaData[];
#endif
		static void NewProp_TimerActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TimerActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerActivePrevious_MetaData[];
#endif
		static void NewProp_TimerActivePrevious_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TimerActivePrevious;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Tags ComponentTick ComponentReplication Activation Cooking AssetUserData Replication Collision" },
		{ "IncludePath", "ECS/Components/TimerComponent.h" },
		{ "ModuleRelativePath", "ECS/Components/TimerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerDuration_MetaData[] = {
		{ "Category", "TimerComponent" },
		{ "ModuleRelativePath", "ECS/Components/TimerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerDuration = { "TimerDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimerComponent, TimerDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerDuration_MetaData), Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerProgressTracker_MetaData[] = {
		{ "Category", "TimerComponent" },
		{ "ModuleRelativePath", "ECS/Components/TimerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerProgressTracker = { "TimerProgressTracker", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimerComponent, TimerProgressTracker), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerProgressTracker_MetaData), Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerProgressTracker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActive_MetaData[] = {
		{ "Category", "TimerComponent" },
		{ "ModuleRelativePath", "ECS/Components/TimerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActive_SetBit(void* Obj)
	{
		((UTimerComponent*)Obj)->TimerActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActive = { "TimerActive", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTimerComponent), &Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActive_MetaData), Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActivePrevious_MetaData[] = {
		{ "Category", "TimerComponent" },
		{ "ModuleRelativePath", "ECS/Components/TimerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActivePrevious_SetBit(void* Obj)
	{
		((UTimerComponent*)Obj)->TimerActivePrevious = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActivePrevious = { "TimerActivePrevious", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTimerComponent), &Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActivePrevious_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActivePrevious_MetaData), Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActivePrevious_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerProgressTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimerActivePrevious,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimerComponent_Statics::ClassParams = {
		&UTimerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTimerComponent()
	{
		if (!Z_Registration_Info_UClass_UTimerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimerComponent.OuterSingleton, Z_Construct_UClass_UTimerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimerComponent.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<UTimerComponent>()
	{
		return UTimerComponent::StaticClass();
	}
	UTimerComponent::UTimerComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerComponent);
	UTimerComponent::~UTimerComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TimerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TimerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimerComponent, UTimerComponent::StaticClass, TEXT("UTimerComponent"), &Z_Registration_Info_UClass_UTimerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimerComponent), 3219781718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TimerComponent_h_2437761878(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TimerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TimerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
