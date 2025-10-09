// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelDesignCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLevelDesignCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
LEVELDESIGN_API UClass* Z_Construct_UClass_ALevelDesignCameraManager();
LEVELDESIGN_API UClass* Z_Construct_UClass_ALevelDesignCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LevelDesign();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALevelDesignCameraManager ************************************************
void ALevelDesignCameraManager::StaticRegisterNativesALevelDesignCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALevelDesignCameraManager;
UClass* ALevelDesignCameraManager::GetPrivateStaticClass()
{
	using TClass = ALevelDesignCameraManager;
	if (!Z_Registration_Info_UClass_ALevelDesignCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LevelDesignCameraManager"),
			Z_Registration_Info_UClass_ALevelDesignCameraManager.InnerSingleton,
			StaticRegisterNativesALevelDesignCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ALevelDesignCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ALevelDesignCameraManager_NoRegister()
{
	return ALevelDesignCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALevelDesignCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "LevelDesignCameraManager.h" },
		{ "ModuleRelativePath", "LevelDesignCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelDesignCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALevelDesignCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelDesign,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDesignCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelDesignCameraManager_Statics::ClassParams = {
	&ALevelDesignCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDesignCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelDesignCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelDesignCameraManager()
{
	if (!Z_Registration_Info_UClass_ALevelDesignCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelDesignCameraManager.OuterSingleton, Z_Construct_UClass_ALevelDesignCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelDesignCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelDesignCameraManager);
ALevelDesignCameraManager::~ALevelDesignCameraManager() {}
// ********** End Class ALevelDesignCameraManager **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCameraManager_h__Script_LevelDesign_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelDesignCameraManager, ALevelDesignCameraManager::StaticClass, TEXT("ALevelDesignCameraManager"), &Z_Registration_Info_UClass_ALevelDesignCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelDesignCameraManager), 1288471747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCameraManager_h__Script_LevelDesign_150793044(TEXT("/Script/LevelDesign"),
	Z_CompiledInDeferFile_FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCameraManager_h__Script_LevelDesign_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCameraManager_h__Script_LevelDesign_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
