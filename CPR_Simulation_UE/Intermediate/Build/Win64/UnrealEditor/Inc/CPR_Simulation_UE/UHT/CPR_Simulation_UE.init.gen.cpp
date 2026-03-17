// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPR_Simulation_UE_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	CPR_SIMULATION_UE_API UFunction* Z_Construct_UDelegateFunction_CPR_Simulation_UE_BulletCountUpdatedDelegate__DelegateSignature();
	CPR_SIMULATION_UE_API UFunction* Z_Construct_UDelegateFunction_CPR_Simulation_UE_DamagedDelegate__DelegateSignature();
	CPR_SIMULATION_UE_API UFunction* Z_Construct_UDelegateFunction_CPR_Simulation_UE_PawnDeathDelegate__DelegateSignature();
	CPR_SIMULATION_UE_API UFunction* Z_Construct_UDelegateFunction_CPR_Simulation_UE_SprintStateChangedDelegate__DelegateSignature();
	CPR_SIMULATION_UE_API UFunction* Z_Construct_UDelegateFunction_CPR_Simulation_UE_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CPR_Simulation_UE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CPR_Simulation_UE()
	{
		if (!Z_Registration_Info_UPackage__Script_CPR_Simulation_UE.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_CPR_Simulation_UE_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CPR_Simulation_UE_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CPR_Simulation_UE_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CPR_Simulation_UE_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CPR_Simulation_UE_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CPR_Simulation_UE",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xBA4A563F,
			0x477E4621,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CPR_Simulation_UE.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CPR_Simulation_UE.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CPR_Simulation_UE(Z_Construct_UPackage__Script_CPR_Simulation_UE, TEXT("/Script/CPR_Simulation_UE"), Z_Registration_Info_UPackage__Script_CPR_Simulation_UE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBA4A563F, 0x477E4621));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
