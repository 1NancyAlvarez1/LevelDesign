// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelDesignCharacter.h"

#ifdef LEVELDESIGN_LevelDesignCharacter_generated_h
#error "LevelDesignCharacter.generated.h already included, missing '#pragma once' in LevelDesignCharacter.h"
#endif
#define LEVELDESIGN_LevelDesignCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALevelDesignCharacter ****************************************************
#define FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


LEVELDESIGN_API UClass* Z_Construct_UClass_ALevelDesignCharacter_NoRegister();

#define FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelDesignCharacter(); \
	friend struct Z_Construct_UClass_ALevelDesignCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELDESIGN_API UClass* Z_Construct_UClass_ALevelDesignCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ALevelDesignCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelDesign"), Z_Construct_UClass_ALevelDesignCharacter_NoRegister) \
	DECLARE_SERIALIZER(ALevelDesignCharacter)


#define FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALevelDesignCharacter(ALevelDesignCharacter&&) = delete; \
	ALevelDesignCharacter(const ALevelDesignCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelDesignCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelDesignCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALevelDesignCharacter) \
	NO_API virtual ~ALevelDesignCharacter();


#define FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_21_PROLOG
#define FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALevelDesignCharacter;

// ********** End Class ALevelDesignCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alvar_Downloads_Level_Design_NAlvarez_SchoolMap_LevelDesign_Source_LevelDesign_LevelDesignCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
