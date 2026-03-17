// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPR_Simulation_UECameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCPR_Simulation_UECameraManager() {}

// ********** Begin Cross Module References ********************************************************
CPR_SIMULATION_UE_API UClass* Z_Construct_UClass_ACPR_Simulation_UECameraManager();
CPR_SIMULATION_UE_API UClass* Z_Construct_UClass_ACPR_Simulation_UECameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_CPR_Simulation_UE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPR_Simulation_UECameraManager ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager;
UClass* ACPR_Simulation_UECameraManager::GetPrivateStaticClass()
{
	using TClass = ACPR_Simulation_UECameraManager;
	if (!Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CPR_Simulation_UECameraManager"),
			Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager.InnerSingleton,
			StaticRegisterNativesACPR_Simulation_UECameraManager,
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
	return Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPR_Simulation_UECameraManager_NoRegister()
{
	return ACPR_Simulation_UECameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "CPR_Simulation_UECameraManager.h" },
		{ "ModuleRelativePath", "CPR_Simulation_UECameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ACPR_Simulation_UECameraManager constinit property declarations **********
// ********** End Class ACPR_Simulation_UECameraManager constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPR_Simulation_UECameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics
UObject* (*const Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_CPR_Simulation_UE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics::ClassParams = {
	&ACPR_Simulation_UECameraManager::StaticClass,
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
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics::Class_MetaDataParams)
};
void ACPR_Simulation_UECameraManager::StaticRegisterNativesACPR_Simulation_UECameraManager()
{
}
UClass* Z_Construct_UClass_ACPR_Simulation_UECameraManager()
{
	if (!Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager.OuterSingleton, Z_Construct_UClass_ACPR_Simulation_UECameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACPR_Simulation_UECameraManager);
ACPR_Simulation_UECameraManager::~ACPR_Simulation_UECameraManager() {}
// ********** End Class ACPR_Simulation_UECameraManager ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECameraManager_h__Script_CPR_Simulation_UE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPR_Simulation_UECameraManager, ACPR_Simulation_UECameraManager::StaticClass, TEXT("ACPR_Simulation_UECameraManager"), &Z_Registration_Info_UClass_ACPR_Simulation_UECameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPR_Simulation_UECameraManager), 563244761U) },
	};
}; // Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECameraManager_h__Script_CPR_Simulation_UE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECameraManager_h__Script_CPR_Simulation_UE_1082169383{
	TEXT("/Script/CPR_Simulation_UE"),
	Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECameraManager_h__Script_CPR_Simulation_UE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECameraManager_h__Script_CPR_Simulation_UE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
