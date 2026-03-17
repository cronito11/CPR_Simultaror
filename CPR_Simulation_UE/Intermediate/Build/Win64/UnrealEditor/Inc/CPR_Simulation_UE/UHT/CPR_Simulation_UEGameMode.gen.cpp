// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPR_Simulation_UEGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCPR_Simulation_UEGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPR_SIMULATION_UE_API UClass* Z_Construct_UClass_ACPR_Simulation_UEGameMode();
CPR_SIMULATION_UE_API UClass* Z_Construct_UClass_ACPR_Simulation_UEGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPR_Simulation_UE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPR_Simulation_UEGameMode ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode;
UClass* ACPR_Simulation_UEGameMode::GetPrivateStaticClass()
{
	using TClass = ACPR_Simulation_UEGameMode;
	if (!Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CPR_Simulation_UEGameMode"),
			Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode.InnerSingleton,
			StaticRegisterNativesACPR_Simulation_UEGameMode,
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
	return Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPR_Simulation_UEGameMode_NoRegister()
{
	return ACPR_Simulation_UEGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPR_Simulation_UEGameMode.h" },
		{ "ModuleRelativePath", "CPR_Simulation_UEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ACPR_Simulation_UEGameMode constinit property declarations ***************
// ********** End Class ACPR_Simulation_UEGameMode constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPR_Simulation_UEGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics
UObject* (*const Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPR_Simulation_UE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics::ClassParams = {
	&ACPR_Simulation_UEGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics::Class_MetaDataParams)
};
void ACPR_Simulation_UEGameMode::StaticRegisterNativesACPR_Simulation_UEGameMode()
{
}
UClass* Z_Construct_UClass_ACPR_Simulation_UEGameMode()
{
	if (!Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode.OuterSingleton, Z_Construct_UClass_ACPR_Simulation_UEGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACPR_Simulation_UEGameMode);
ACPR_Simulation_UEGameMode::~ACPR_Simulation_UEGameMode() {}
// ********** End Class ACPR_Simulation_UEGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UEGameMode_h__Script_CPR_Simulation_UE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPR_Simulation_UEGameMode, ACPR_Simulation_UEGameMode::StaticClass, TEXT("ACPR_Simulation_UEGameMode"), &Z_Registration_Info_UClass_ACPR_Simulation_UEGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPR_Simulation_UEGameMode), 771239723U) },
	};
}; // Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UEGameMode_h__Script_CPR_Simulation_UE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UEGameMode_h__Script_CPR_Simulation_UE_516648949{
	TEXT("/Script/CPR_Simulation_UE"),
	Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UEGameMode_h__Script_CPR_Simulation_UE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UEGameMode_h__Script_CPR_Simulation_UE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
