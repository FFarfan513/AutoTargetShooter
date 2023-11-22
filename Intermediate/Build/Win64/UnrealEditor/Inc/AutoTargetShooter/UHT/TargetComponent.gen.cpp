// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoTargetShooter/ECS/Components/TargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetComponent() {}
// Cross Module References
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UBaseComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UTargetComponent();
	AUTOTARGETSHOOTER_API UClass* Z_Construct_UClass_UTargetComponent_NoRegister();
	AUTOTARGETSHOOTER_API UFunction* Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoTargetShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ECS/Components/TargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetComponent, nullptr, "OnTargetHit__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UTargetComponent::FOnTargetHit_DelegateWrapper(const FMulticastScriptDelegate& OnTargetHit)
{
	OnTargetHit.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UTargetComponent::execDestroyWhenHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyWhenHit();
		P_NATIVE_END;
	}
	void UTargetComponent::StaticRegisterNativesUTargetComponent()
	{
		UClass* Class = UTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyWhenHit", &UTargetComponent::execDestroyWhenHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetComponent_DestroyWhenHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetComponent_DestroyWhenHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ECS/Components/TargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetComponent_DestroyWhenHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetComponent, nullptr, "DestroyWhenHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_DestroyWhenHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetComponent_DestroyWhenHit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTargetComponent_DestroyWhenHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetComponent_DestroyWhenHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetComponent);
	UClass* Z_Construct_UClass_UTargetComponent_NoRegister()
	{
		return UTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoTargetShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetComponent_DestroyWhenHit, "DestroyWhenHit" }, // 3060488012
		{ &Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature, "OnTargetHit__DelegateSignature" }, // 335693043
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Tags ComponentTick ComponentReplication Activation Cooking AssetUserData Replication Collision" },
		{ "IncludePath", "ECS/Components/TargetComponent.h" },
		{ "ModuleRelativePath", "ECS/Components/TargetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetComponent_Statics::NewProp_OnTargetHit_MetaData[] = {
		{ "ModuleRelativePath", "ECS/Components/TargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetComponent_Statics::NewProp_OnTargetHit = { "OnTargetHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetComponent, OnTargetHit), Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::NewProp_OnTargetHit_MetaData), Z_Construct_UClass_UTargetComponent_Statics::NewProp_OnTargetHit_MetaData) }; // 335693043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetComponent_Statics::NewProp_OnTargetHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetComponent_Statics::ClassParams = {
		&UTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetComponent.OuterSingleton, Z_Construct_UClass_UTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetComponent.OuterSingleton;
	}
	template<> AUTOTARGETSHOOTER_API UClass* StaticClass<UTargetComponent>()
	{
		return UTargetComponent::StaticClass();
	}
	UTargetComponent::UTargetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetComponent);
	UTargetComponent::~UTargetComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetComponent, UTargetComponent::StaticClass, TEXT("UTargetComponent"), &Z_Registration_Info_UClass_UTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetComponent), 2278060112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_2449324469(TEXT("/Script/AutoTargetShooter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
