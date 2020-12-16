// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSMULTIJUGADOR_FPSMultijugadorProjectile_generated_h
#error "FPSMultijugadorProjectile.generated.h already included, missing '#pragma once' in FPSMultijugadorProjectile.h"
#endif
#define FPSMULTIJUGADOR_FPSMultijugadorProjectile_generated_h

#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_SPARSE_DATA
#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSMultijugadorProjectile(); \
	friend struct Z_Construct_UClass_AFPSMultijugadorProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSMultijugadorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultijugadorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSMultijugadorProjectile(); \
	friend struct Z_Construct_UClass_AFPSMultijugadorProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSMultijugadorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultijugadorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSMultijugadorProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSMultijugadorProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultijugadorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultijugadorProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultijugadorProjectile(AFPSMultijugadorProjectile&&); \
	NO_API AFPSMultijugadorProjectile(const AFPSMultijugadorProjectile&); \
public:


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultijugadorProjectile(AFPSMultijugadorProjectile&&); \
	NO_API AFPSMultijugadorProjectile(const AFPSMultijugadorProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultijugadorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultijugadorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSMultijugadorProjectile)


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPSMultijugadorProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPSMultijugadorProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AFPSMultijugadorProjectile, damage); }


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_12_PROLOG
#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_RPC_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_INCLASS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSMULTIJUGADOR_API UClass* StaticClass<class AFPSMultijugadorProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
