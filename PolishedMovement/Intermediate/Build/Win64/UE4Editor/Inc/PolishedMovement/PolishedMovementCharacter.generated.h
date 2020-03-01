// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POLISHEDMOVEMENT_PolishedMovementCharacter_generated_h
#error "PolishedMovementCharacter.generated.h already included, missing '#pragma once' in PolishedMovementCharacter.h"
#endif
#define POLISHEDMOVEMENT_PolishedMovementCharacter_generated_h

#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_RPC_WRAPPERS
#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPolishedMovementCharacter(); \
	friend struct Z_Construct_UClass_APolishedMovementCharacter_Statics; \
public: \
	DECLARE_CLASS(APolishedMovementCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolishedMovement"), NO_API) \
	DECLARE_SERIALIZER(APolishedMovementCharacter)


#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPolishedMovementCharacter(); \
	friend struct Z_Construct_UClass_APolishedMovementCharacter_Statics; \
public: \
	DECLARE_CLASS(APolishedMovementCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolishedMovement"), NO_API) \
	DECLARE_SERIALIZER(APolishedMovementCharacter)


#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APolishedMovementCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APolishedMovementCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APolishedMovementCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APolishedMovementCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APolishedMovementCharacter(APolishedMovementCharacter&&); \
	NO_API APolishedMovementCharacter(const APolishedMovementCharacter&); \
public:


#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APolishedMovementCharacter(APolishedMovementCharacter&&); \
	NO_API APolishedMovementCharacter(const APolishedMovementCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APolishedMovementCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APolishedMovementCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APolishedMovementCharacter)


#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APolishedMovementCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APolishedMovementCharacter, FollowCamera); }


#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_9_PROLOG
#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_RPC_WRAPPERS \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_INCLASS \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_INCLASS_NO_PURE_DECLS \
	PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POLISHEDMOVEMENT_API UClass* StaticClass<class APolishedMovementCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PolishedMovement_Source_PolishedMovement_PolishedMovementCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
