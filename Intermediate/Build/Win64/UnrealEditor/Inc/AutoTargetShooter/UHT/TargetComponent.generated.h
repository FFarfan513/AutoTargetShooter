// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECS/Components/TargetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOTARGETSHOOTER_TargetComponent_generated_h
#error "TargetComponent.generated.h already included, missing '#pragma once' in TargetComponent.h"
#endif
#define AUTOTARGETSHOOTER_TargetComponent_generated_h

#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_18_DELEGATE \
static void FOnTargetHit_DelegateWrapper(const FMulticastScriptDelegate& OnTargetHit);


#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_SPARSE_DATA
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyWhenHit);


#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_ACCESSORS
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetComponent(); \
	friend struct Z_Construct_UClass_UTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetComponent, UBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoTargetShooter"), NO_API) \
	DECLARE_SERIALIZER(UTargetComponent)


#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetComponent(UTargetComponent&&); \
	NO_API UTargetComponent(const UTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetComponent) \
	NO_API virtual ~UTargetComponent();


#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_12_PROLOG
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_SPARSE_DATA \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_ACCESSORS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOTARGETSHOOTER_API UClass* StaticClass<class UTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_TargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
