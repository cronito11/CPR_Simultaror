// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPR_Simulation_UECharacter.h"

#ifdef CPR_SIMULATION_UE_CPR_Simulation_UECharacter_generated_h
#error "CPR_Simulation_UECharacter.generated.h already included, missing '#pragma once' in CPR_Simulation_UECharacter.h"
#endif
#define CPR_SIMULATION_UE_CPR_Simulation_UECharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPR_Simulation_UECharacter **********************************************
#define FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_ACPR_Simulation_UECharacter_Statics;
CPR_SIMULATION_UE_API UClass* Z_Construct_UClass_ACPR_Simulation_UECharacter_NoRegister();

#define FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPR_Simulation_UECharacter(); \
	friend struct ::Z_Construct_UClass_ACPR_Simulation_UECharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPR_SIMULATION_UE_API UClass* ::Z_Construct_UClass_ACPR_Simulation_UECharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPR_Simulation_UECharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPR_Simulation_UE"), Z_Construct_UClass_ACPR_Simulation_UECharacter_NoRegister) \
	DECLARE_SERIALIZER(ACPR_Simulation_UECharacter)


#define FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPR_Simulation_UECharacter(ACPR_Simulation_UECharacter&&) = delete; \
	ACPR_Simulation_UECharacter(const ACPR_Simulation_UECharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPR_Simulation_UECharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPR_Simulation_UECharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACPR_Simulation_UECharacter) \
	NO_API virtual ~ACPR_Simulation_UECharacter();


#define FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_21_PROLOG
#define FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPR_Simulation_UECharacter;

// ********** End Class ACPR_Simulation_UECharacter ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Centennial_Simulation_CPR_Simulation_CPR_Simulation_UE_Source_CPR_Simulation_UE_CPR_Simulation_UECharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
