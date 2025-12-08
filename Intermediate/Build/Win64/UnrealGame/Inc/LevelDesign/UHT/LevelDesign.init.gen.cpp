// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelDesign_init() {}
	LEVELDESIGN_API UFunction* Z_Construct_UDelegateFunction_LevelDesign_BulletCountUpdatedDelegate__DelegateSignature();
	LEVELDESIGN_API UFunction* Z_Construct_UDelegateFunction_LevelDesign_DamagedDelegate__DelegateSignature();
	LEVELDESIGN_API UFunction* Z_Construct_UDelegateFunction_LevelDesign_PawnDeathDelegate__DelegateSignature();
	LEVELDESIGN_API UFunction* Z_Construct_UDelegateFunction_LevelDesign_SprintStateChangedDelegate__DelegateSignature();
	LEVELDESIGN_API UFunction* Z_Construct_UDelegateFunction_LevelDesign_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LevelDesign;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LevelDesign()
	{
		if (!Z_Registration_Info_UPackage__Script_LevelDesign.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelDesign_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelDesign_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelDesign_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelDesign_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelDesign_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LevelDesign",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4D328B7A,
				0xD6E25CAF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LevelDesign.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LevelDesign.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LevelDesign(Z_Construct_UPackage__Script_LevelDesign, TEXT("/Script/LevelDesign"), Z_Registration_Info_UPackage__Script_LevelDesign, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4D328B7A, 0xD6E25CAF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
