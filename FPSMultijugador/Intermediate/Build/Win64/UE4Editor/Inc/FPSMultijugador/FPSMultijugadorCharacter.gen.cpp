// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSMultijugador/FPSMultijugadorCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSMultijugadorCharacter() {}
// Cross Module References
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_AFPSMultijugadorCharacter_NoRegister();
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_AFPSMultijugadorCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSMultijugador();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_UPlayerInfo_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_AFPSMultijugadorProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSMultijugadorCharacter::execSrv_ReSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Srv_ReSpawn_Validate())
		{
			RPC_ValidateFailed(TEXT("Srv_ReSpawn_Validate"));
			return;
		}
		P_THIS->Srv_ReSpawn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMultijugadorCharacter::execSrv_Shoot_Remote)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Srv_Shoot_Remote_Validate(Z_Param_World))
		{
			RPC_ValidateFailed(TEXT("Srv_Shoot_Remote_Validate"));
			return;
		}
		P_THIS->Srv_Shoot_Remote_Implementation(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMultijugadorCharacter::execSrv_GunEffects_Multicast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Srv_GunEffects_Multicast_Validate())
		{
			RPC_ValidateFailed(TEXT("Srv_GunEffects_Multicast_Validate"));
			return;
		}
		P_THIS->Srv_GunEffects_Multicast_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMultijugadorCharacter::execSrv_CorrectPitch_Multicast)
	{
		P_GET_STRUCT(FRotator,Z_Param_N_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Srv_CorrectPitch_Multicast_Validate(Z_Param_N_Rotation))
		{
			RPC_ValidateFailed(TEXT("Srv_CorrectPitch_Multicast_Validate"));
			return;
		}
		P_THIS->Srv_CorrectPitch_Multicast_Implementation(Z_Param_N_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMultijugadorCharacter::execSrv_CorrectPitch_Remote)
	{
		P_GET_STRUCT(FRotator,Z_Param_N_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Srv_CorrectPitch_Remote_Validate(Z_Param_N_Rotation))
		{
			RPC_ValidateFailed(TEXT("Srv_CorrectPitch_Remote_Validate"));
			return;
		}
		P_THIS->Srv_CorrectPitch_Remote_Implementation(Z_Param_N_Rotation);
		P_NATIVE_END;
	}
	static FName NAME_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast = FName(TEXT("Srv_CorrectPitch_Multicast"));
	void AFPSMultijugadorCharacter::Srv_CorrectPitch_Multicast(FRotator N_Rotation)
	{
		FPSMultijugadorCharacter_eventSrv_CorrectPitch_Multicast_Parms Parms;
		Parms.N_Rotation=N_Rotation;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast),&Parms);
	}
	static FName NAME_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote = FName(TEXT("Srv_CorrectPitch_Remote"));
	void AFPSMultijugadorCharacter::Srv_CorrectPitch_Remote(FRotator N_Rotation)
	{
		FPSMultijugadorCharacter_eventSrv_CorrectPitch_Remote_Parms Parms;
		Parms.N_Rotation=N_Rotation;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote),&Parms);
	}
	static FName NAME_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast = FName(TEXT("Srv_GunEffects_Multicast"));
	void AFPSMultijugadorCharacter::Srv_GunEffects_Multicast()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast),NULL);
	}
	static FName NAME_AFPSMultijugadorCharacter_Srv_ReSpawn = FName(TEXT("Srv_ReSpawn"));
	void AFPSMultijugadorCharacter::Srv_ReSpawn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSMultijugadorCharacter_Srv_ReSpawn),NULL);
	}
	static FName NAME_AFPSMultijugadorCharacter_Srv_Shoot_Remote = FName(TEXT("Srv_Shoot_Remote"));
	void AFPSMultijugadorCharacter::Srv_Shoot_Remote(UWorld* World)
	{
		FPSMultijugadorCharacter_eventSrv_Shoot_Remote_Parms Parms;
		Parms.World=World;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMultijugadorCharacter_Srv_Shoot_Remote),&Parms);
	}
	void AFPSMultijugadorCharacter::StaticRegisterNativesAFPSMultijugadorCharacter()
	{
		UClass* Class = AFPSMultijugadorCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Srv_CorrectPitch_Multicast", &AFPSMultijugadorCharacter::execSrv_CorrectPitch_Multicast },
			{ "Srv_CorrectPitch_Remote", &AFPSMultijugadorCharacter::execSrv_CorrectPitch_Remote },
			{ "Srv_GunEffects_Multicast", &AFPSMultijugadorCharacter::execSrv_GunEffects_Multicast },
			{ "Srv_ReSpawn", &AFPSMultijugadorCharacter::execSrv_ReSpawn },
			{ "Srv_Shoot_Remote", &AFPSMultijugadorCharacter::execSrv_Shoot_Remote },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_N_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::NewProp_N_Rotation = { "N_Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMultijugadorCharacter_eventSrv_CorrectPitch_Multicast_Parms, N_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::NewProp_N_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Funcion que cambia la rotacion para todos los jugadores*/" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Funcion que cambia la rotacion para todos los jugadores" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMultijugadorCharacter, nullptr, "Srv_CorrectPitch_Multicast", nullptr, nullptr, sizeof(FPSMultijugadorCharacter_eventSrv_CorrectPitch_Multicast_Parms), Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80884C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_N_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::NewProp_N_Rotation = { "N_Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMultijugadorCharacter_eventSrv_CorrectPitch_Remote_Parms, N_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::NewProp_N_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Funcion que cambia la rotacion en el servidor para el propio jugador*/" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Funcion que cambia la rotacion en el servidor para el propio jugador" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMultijugadorCharacter, nullptr, "Srv_CorrectPitch_Remote", nullptr, nullptr, sizeof(FPSMultijugadorCharacter_eventSrv_CorrectPitch_Remote_Parms), Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Funcion para replicar los efectos*/" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Funcion para replicar los efectos" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMultijugadorCharacter, nullptr, "Srv_GunEffects_Multicast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMultijugadorCharacter, nullptr, "Srv_ReSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMultijugadorCharacter_eventSrv_Shoot_Remote_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Funcion para replicar los disparos*/" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Funcion para replicar los disparos" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMultijugadorCharacter, nullptr, "Srv_Shoot_Remote", nullptr, nullptr, sizeof(FPSMultijugadorCharacter_eventSrv_Shoot_Remote_Parms), Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSMultijugadorCharacter_NoRegister()
	{
		return AFPSMultijugadorCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSMultijugadorCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSMultijugador,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Multicast, "Srv_CorrectPitch_Multicast" }, // 4123280303
		{ &Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_CorrectPitch_Remote, "Srv_CorrectPitch_Remote" }, // 2354839864
		{ &Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_GunEffects_Multicast, "Srv_GunEffects_Multicast" }, // 3186471378
		{ &Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_ReSpawn, "Srv_ReSpawn" }, // 2680724161
		{ &Z_Construct_UFunction_AFPSMultijugadorCharacter_Srv_Shoot_Remote, "Srv_Shoot_Remote" }, // 2603432281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSMultijugadorCharacter.h" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on VR gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FPSMultijugadorCharacter" },
		{ "Comment", "/** Motion controller (right hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FPSMultijugadorCharacter" },
		{ "Comment", "/** Motion controller (left hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_PlayerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, PlayerInfo), Z_Construct_UClass_UPlayerInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_PlayerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, ProjectileClass), Z_Construct_UClass_AFPSMultijugadorProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "FPSMultijugadorCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AFPSMultijugadorCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AFPSMultijugadorCharacter), &Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_PlayerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::NewProp_bUsingMotionControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSMultijugadorCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::ClassParams = {
		&AFPSMultijugadorCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSMultijugadorCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSMultijugadorCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSMultijugadorCharacter, 1139785882);
	template<> FPSMULTIJUGADOR_API UClass* StaticClass<AFPSMultijugadorCharacter>()
	{
		return AFPSMultijugadorCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSMultijugadorCharacter(Z_Construct_UClass_AFPSMultijugadorCharacter, &AFPSMultijugadorCharacter::StaticClass, TEXT("/Script/FPSMultijugador"), TEXT("AFPSMultijugadorCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSMultijugadorCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
