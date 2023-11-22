// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoTargetShooter_init() {}
	AUTOTARGETSHOOTER_API UFunction* Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature();
	AUTOTARGETSHOOTER_API UFunction* Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AutoTargetShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AutoTargetShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_AutoTargetShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UFireProjectileComponent_OnFireProjectileDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTargetComponent_OnTargetHit__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AutoTargetShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x16E48BEE,
				0xB4911B56,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AutoTargetShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AutoTargetShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AutoTargetShooter(Z_Construct_UPackage__Script_AutoTargetShooter, TEXT("/Script/AutoTargetShooter"), Z_Registration_Info_UPackage__Script_AutoTargetShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x16E48BEE, 0xB4911B56));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
