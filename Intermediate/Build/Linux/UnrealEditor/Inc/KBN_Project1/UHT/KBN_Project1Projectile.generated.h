// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KBN_Project1Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef KBN_PROJECT1_KBN_Project1Projectile_generated_h
#error "KBN_Project1Projectile.generated.h already included, missing '#pragma once' in KBN_Project1Projectile.h"
#endif
#define KBN_PROJECT1_KBN_Project1Projectile_generated_h

#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKBN_Project1Projectile(); \
	friend struct Z_Construct_UClass_AKBN_Project1Projectile_Statics; \
public: \
	DECLARE_CLASS(AKBN_Project1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KBN_Project1"), NO_API) \
	DECLARE_SERIALIZER(AKBN_Project1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKBN_Project1Projectile(AKBN_Project1Projectile&&); \
	AKBN_Project1Projectile(const AKBN_Project1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKBN_Project1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKBN_Project1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKBN_Project1Projectile) \
	NO_API virtual ~AKBN_Project1Projectile();


#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_12_PROLOG
#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KBN_PROJECT1_API UClass* StaticClass<class AKBN_Project1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
