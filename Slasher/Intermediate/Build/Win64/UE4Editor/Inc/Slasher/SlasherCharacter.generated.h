// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASHER_SlasherCharacter_generated_h
#error "SlasherCharacter.generated.h already included, missing '#pragma once' in SlasherCharacter.h"
#endif
#define SLASHER_SlasherCharacter_generated_h

#define Slasher_Source_Slasher_SlasherCharacter_h_12_RPC_WRAPPERS
#define Slasher_Source_Slasher_SlasherCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Slasher_Source_Slasher_SlasherCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlasherCharacter(); \
	friend struct Z_Construct_UClass_ASlasherCharacter_Statics; \
public: \
	DECLARE_CLASS(ASlasherCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slasher"), NO_API) \
	DECLARE_SERIALIZER(ASlasherCharacter)


#define Slasher_Source_Slasher_SlasherCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASlasherCharacter(); \
	friend struct Z_Construct_UClass_ASlasherCharacter_Statics; \
public: \
	DECLARE_CLASS(ASlasherCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slasher"), NO_API) \
	DECLARE_SERIALIZER(ASlasherCharacter)


#define Slasher_Source_Slasher_SlasherCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlasherCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlasherCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlasherCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlasherCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlasherCharacter(ASlasherCharacter&&); \
	NO_API ASlasherCharacter(const ASlasherCharacter&); \
public:


#define Slasher_Source_Slasher_SlasherCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlasherCharacter(ASlasherCharacter&&); \
	NO_API ASlasherCharacter(const ASlasherCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlasherCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlasherCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlasherCharacter)


#define Slasher_Source_Slasher_SlasherCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASlasherCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASlasherCharacter, FollowCamera); }


#define Slasher_Source_Slasher_SlasherCharacter_h_9_PROLOG
#define Slasher_Source_Slasher_SlasherCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slasher_Source_Slasher_SlasherCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Slasher_Source_Slasher_SlasherCharacter_h_12_RPC_WRAPPERS \
	Slasher_Source_Slasher_SlasherCharacter_h_12_INCLASS \
	Slasher_Source_Slasher_SlasherCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Slasher_Source_Slasher_SlasherCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slasher_Source_Slasher_SlasherCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Slasher_Source_Slasher_SlasherCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Slasher_Source_Slasher_SlasherCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Slasher_Source_Slasher_SlasherCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASHER_API UClass* StaticClass<class ASlasherCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Slasher_Source_Slasher_SlasherCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
