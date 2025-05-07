// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKBN_Project1_init() {}
	KBN_PROJECT1_API UFunction* Z_Construct_UDelegateFunction_KBN_Project1_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KBN_Project1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KBN_Project1()
	{
		if (!Z_Registration_Info_UPackage__Script_KBN_Project1.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KBN_Project1_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/KBN_Project1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD6DF7907,
				0xF9336F60,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KBN_Project1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KBN_Project1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KBN_Project1(Z_Construct_UPackage__Script_KBN_Project1, TEXT("/Script/KBN_Project1"), Z_Registration_Info_UPackage__Script_KBN_Project1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD6DF7907, 0xF9336F60));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
