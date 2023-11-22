// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECS/Components/ProjectileComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef AUTOTARGETSHOOTER_ProjectileComponent_generated_h
#error "ProjectileComponent.generated.h already included, missing '#pragma once' in ProjectileComponent.h"
#endif
#define AUTOTARGETSHOOTER_ProjectileComponent_generated_h

#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_SPARSE_DATA
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitOtherActor);


#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_ACCESSORS
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileComponent(); \
	friend struct Z_Construct_UClass_UProjectileComponent_Statics; \
public: \
	DECLARE_CLASS(UProjectileComponent, UBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoTargetShooter"), NO_API) \
	DECLARE_SERIALIZER(UProjectileComponent)


#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileComponent(UProjectileComponent&&); \
	NO_API UProjectileComponent(const UProjectileComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectileComponent) \
	NO_API virtual ~UProjectileComponent();


#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_11_PROLOG
#define FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_SPARSE_DATA \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_ACCESSORS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOTARGETSHOOTER_API UClass* StaticClass<class UProjectileComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_AutoTargetShooter_Source_AutoTargetShooter_ECS_Components_ProjectileComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
