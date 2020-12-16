// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSMULTIJUGADOR_PlayerInfo_generated_h
#error "PlayerInfo.generated.h already included, missing '#pragma once' in PlayerInfo.h"
#endif
#define FPSMULTIJUGADOR_PlayerInfo_generated_h

#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_SPARSE_DATA
#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAlive); \
	DECLARE_FUNCTION(execHealthPlayer); \
	DECLARE_FUNCTION(execDoDamage); \
	DECLARE_FUNCTION(execGetFactorizedHealth); \
	DECLARE_FUNCTION(execGetActualHealth);


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAlive); \
	DECLARE_FUNCTION(execHealthPlayer); \
	DECLARE_FUNCTION(execDoDamage); \
	DECLARE_FUNCTION(execGetFactorizedHealth); \
	DECLARE_FUNCTION(execGetActualHealth);


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInfo(); \
	friend struct Z_Construct_UClass_UPlayerInfo_Statics; \
public: \
	DECLARE_CLASS(UPlayerInfo, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInfo) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		health=NETFIELD_REP_START, \
		NETFIELD_REP_END=health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInfo(); \
	friend struct Z_Construct_UClass_UPlayerInfo_Statics; \
public: \
	DECLARE_CLASS(UPlayerInfo, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInfo) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		health=NETFIELD_REP_START, \
		NETFIELD_REP_END=health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInfo(UPlayerInfo&&); \
	NO_API UPlayerInfo(const UPlayerInfo&); \
public:


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInfo(UPlayerInfo&&); \
	NO_API UPlayerInfo(const UPlayerInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInfo)


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__alive() { return STRUCT_OFFSET(UPlayerInfo, alive); } \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(UPlayerInfo, health); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(UPlayerInfo, maxHealth); }


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_10_PROLOG
#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_RPC_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_INCLASS \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_INCLASS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSMULTIJUGADOR_API UClass* StaticClass<class UPlayerInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSMultijugador_Source_FPSMultijugador_PlayerInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
