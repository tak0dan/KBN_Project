// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KBN_Project1PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AKBN_Project1Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef KBN_PROJECT1_KBN_Project1PickUpComponent_generated_h
#error "KBN_Project1PickUpComponent.generated.h already included, missing '#pragma once' in KBN_Project1PickUpComponent.h"
#endif
#define KBN_PROJECT1_KBN_Project1PickUpComponent_generated_h

#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_12_DELEGATE \
KBN_PROJECT1_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AKBN_Project1Character* PickUpCharacter);


#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKBN_Project1PickUpComponent(); \
	friend struct Z_Construct_UClass_UKBN_Project1PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UKBN_Project1PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KBN_Project1"), NO_API) \
	DECLARE_SERIALIZER(UKBN_Project1PickUpComponent)


#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKBN_Project1PickUpComponent(UKBN_Project1PickUpComponent&&); \
	UKBN_Project1PickUpComponent(const UKBN_Project1PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKBN_Project1PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKBN_Project1PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKBN_Project1PickUpComponent) \
	NO_API virtual ~UKBN_Project1PickUpComponent();


#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_14_PROLOG
#define FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KBN_PROJECT1_API UClass* StaticClass<class UKBN_Project1PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
