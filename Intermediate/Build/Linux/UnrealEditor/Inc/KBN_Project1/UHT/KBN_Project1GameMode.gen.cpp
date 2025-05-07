// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KBN_Project1/KBN_Project1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKBN_Project1GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
KBN_PROJECT1_API UClass* Z_Construct_UClass_AKBN_Project1GameMode();
KBN_PROJECT1_API UClass* Z_Construct_UClass_AKBN_Project1GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_KBN_Project1();
// End Cross Module References

// Begin Class AKBN_Project1GameMode
void AKBN_Project1GameMode::StaticRegisterNativesAKBN_Project1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKBN_Project1GameMode);
UClass* Z_Construct_UClass_AKBN_Project1GameMode_NoRegister()
{
	return AKBN_Project1GameMode::StaticClass();
}
struct Z_Construct_UClass_AKBN_Project1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KBN_Project1GameMode.h" },
		{ "ModuleRelativePath", "KBN_Project1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKBN_Project1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKBN_Project1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_KBN_Project1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKBN_Project1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKBN_Project1GameMode_Statics::ClassParams = {
	&AKBN_Project1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKBN_Project1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AKBN_Project1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKBN_Project1GameMode()
{
	if (!Z_Registration_Info_UClass_AKBN_Project1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKBN_Project1GameMode.OuterSingleton, Z_Construct_UClass_AKBN_Project1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKBN_Project1GameMode.OuterSingleton;
}
template<> KBN_PROJECT1_API UClass* StaticClass<AKBN_Project1GameMode>()
{
	return AKBN_Project1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKBN_Project1GameMode);
AKBN_Project1GameMode::~AKBN_Project1GameMode() {}
// End Class AKBN_Project1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKBN_Project1GameMode, AKBN_Project1GameMode::StaticClass, TEXT("AKBN_Project1GameMode"), &Z_Registration_Info_UClass_AKBN_Project1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKBN_Project1GameMode), 3823164333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1GameMode_h_263848796(TEXT("/Script/KBN_Project1"),
	Z_CompiledInDeferFile_FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_home_tak_0_Documents_Unreal_Projects_KBN_Project1_Source_KBN_Project1_KBN_Project1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
