// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSPlayerController;
#ifdef FPSMULTIJUGADOR_FPSMultijugadorGameMode_generated_h
#error "FPSMultijugadorGameMode.generated.h already included, missing '#pragma once' in FPSMultijugadorGameMode.h"
#endif
#define FPSMULTIJUGADOR_FPSMultijugadorGameMode_generated_h

#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_SPARSE_DATA
#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_RPC_WRAPPERS \
	virtual void SpawnPlayer_Implementation(AFPSPlayerController* controller); \
 \
	DECLARE_FUNCTION(execSpawnPlayer);


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnPlayer_Implementation(AFPSPlayerController* controller); \
 \
	DECLARE_FUNCTION(execSpawnPlayer);


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_EVENT_PARMS \
	struct FPSMultijugadorGameMode_eventSpawnPlayer_Parms \
	{ \
		AFPSPlayerController* controller; \
	};


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_CALLBACK_WRAPPERS
#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSMultijugadorGameMode(); \
	friend struct Z_Construct_UClass_AFPSMultijugadorGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSMultijugadorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), FPSMULTIJUGADOR_API) \
	DECLARE_SERIALIZER(AFPSMultijugadorGameMode)


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSMultijugadorGameMode(); \
	friend struct Z_Construct_UClass_AFPSMultijugadorGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSMultijugadorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), FPSMULTIJUGADOR_API) \
	DECLARE_SERIALIZER(AFPSMultijugadorGameMode)


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSMULTIJUGADOR_API AFPSMultijugadorGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSMultijugadorGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSMULTIJUGADOR_API, AFPSMultijugadorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultijugadorGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSMULTIJUGADOR_API AFPSMultijugadorGameMode(AFPSMultijugadorGameMode&&); \
	FPSMULTIJUGADOR_API AFPSMultijugadorGameMode(const AFPSMultijugadorGameMode&); \
public:


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSMULTIJUGADOR_API AFPSMultijugadorGameMode(AFPSMultijugadorGameMode&&); \
	FPSMULTIJUGADOR_API AFPSMultijugadorGameMode(const AFPSMultijugadorGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSMULTIJUGADOR_API, AFPSMultijugadorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultijugadorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSMultijugadorGameMode)


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__spawnPoints() { return STRUCT_OFFSET(AFPSMultijugadorGameMode, spawnPoints); }


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_12_PROLOG \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_EVENT_PARMS


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_RPC_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_CALLBACK_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_INCLASS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_CALLBACK_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSMULTIJUGADOR_API UClass* StaticClass<class AFPSMultijugadorGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
