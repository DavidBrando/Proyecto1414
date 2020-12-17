// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FRotator;
#ifdef FPSMULTIJUGADOR_FPSMultijugadorCharacter_generated_h
#error "FPSMultijugadorCharacter.generated.h already included, missing '#pragma once' in FPSMultijugadorCharacter.h"
#endif
#define FPSMULTIJUGADOR_FPSMultijugadorCharacter_generated_h

#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_SPARSE_DATA
#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_RPC_WRAPPERS \
	virtual bool Srv_ReSpawn_Validate(); \
	virtual void Srv_ReSpawn_Implementation(); \
	virtual bool Srv_Shoot_Remote_Validate(UWorld* ); \
	virtual void Srv_Shoot_Remote_Implementation(UWorld* World); \
	virtual bool Srv_GunEffects_Multicast_Validate(); \
	virtual void Srv_GunEffects_Multicast_Implementation(); \
	virtual bool Srv_CorrectPitch_Multicast_Validate(FRotator ); \
	virtual void Srv_CorrectPitch_Multicast_Implementation(FRotator N_Rotation); \
	virtual bool Srv_CorrectPitch_Remote_Validate(FRotator ); \
	virtual void Srv_CorrectPitch_Remote_Implementation(FRotator N_Rotation); \
 \
	DECLARE_FUNCTION(execSrv_ReSpawn); \
	DECLARE_FUNCTION(execSrv_Shoot_Remote); \
	DECLARE_FUNCTION(execSrv_GunEffects_Multicast); \
	DECLARE_FUNCTION(execSrv_CorrectPitch_Multicast); \
	DECLARE_FUNCTION(execSrv_CorrectPitch_Remote);


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Srv_ReSpawn_Validate(); \
	virtual void Srv_ReSpawn_Implementation(); \
	virtual bool Srv_Shoot_Remote_Validate(UWorld* ); \
	virtual void Srv_Shoot_Remote_Implementation(UWorld* World); \
	virtual bool Srv_GunEffects_Multicast_Validate(); \
	virtual void Srv_GunEffects_Multicast_Implementation(); \
	virtual bool Srv_CorrectPitch_Multicast_Validate(FRotator ); \
	virtual void Srv_CorrectPitch_Multicast_Implementation(FRotator N_Rotation); \
	virtual bool Srv_CorrectPitch_Remote_Validate(FRotator ); \
	virtual void Srv_CorrectPitch_Remote_Implementation(FRotator N_Rotation); \
 \
	DECLARE_FUNCTION(execSrv_ReSpawn); \
	DECLARE_FUNCTION(execSrv_Shoot_Remote); \
	DECLARE_FUNCTION(execSrv_GunEffects_Multicast); \
	DECLARE_FUNCTION(execSrv_CorrectPitch_Multicast); \
	DECLARE_FUNCTION(execSrv_CorrectPitch_Remote);


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_EVENT_PARMS \
	struct FPSMultijugadorCharacter_eventSrv_CorrectPitch_Multicast_Parms \
	{ \
		FRotator N_Rotation; \
	}; \
	struct FPSMultijugadorCharacter_eventSrv_CorrectPitch_Remote_Parms \
	{ \
		FRotator N_Rotation; \
	}; \
	struct FPSMultijugadorCharacter_eventSrv_Shoot_Remote_Parms \
	{ \
		UWorld* World; \
	};


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_CALLBACK_WRAPPERS
#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSMultijugadorCharacter(); \
	friend struct Z_Construct_UClass_AFPSMultijugadorCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSMultijugadorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultijugadorCharacter)


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFPSMultijugadorCharacter(); \
	friend struct Z_Construct_UClass_AFPSMultijugadorCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSMultijugadorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultijugador"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultijugadorCharacter)


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSMultijugadorCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSMultijugadorCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultijugadorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultijugadorCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultijugadorCharacter(AFPSMultijugadorCharacter&&); \
	NO_API AFPSMultijugadorCharacter(const AFPSMultijugadorCharacter&); \
public:


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultijugadorCharacter(AFPSMultijugadorCharacter&&); \
	NO_API AFPSMultijugadorCharacter(const AFPSMultijugadorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultijugadorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultijugadorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSMultijugadorCharacter)


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__PlayerInfo() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, PlayerInfo); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPSMultijugadorCharacter, FP_MuzzleLocation); }


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_19_PROLOG \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_EVENT_PARMS


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_RPC_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_CALLBACK_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_INCLASS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_SPARSE_DATA \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_CALLBACK_WRAPPERS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSMULTIJUGADOR_API UClass* StaticClass<class AFPSMultijugadorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSMultijugador_Source_FPSMultijugador_FPSMultijugadorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
