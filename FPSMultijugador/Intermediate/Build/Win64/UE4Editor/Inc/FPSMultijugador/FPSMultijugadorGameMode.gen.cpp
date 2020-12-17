// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSMultijugador/FPSMultijugadorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSMultijugadorGameMode() {}
// Cross Module References
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_AFPSMultijugadorGameMode_NoRegister();
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_AFPSMultijugadorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPSMultijugador();
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSMultijugadorGameMode::execSpawnPlayer)
	{
		P_GET_OBJECT(AFPSPlayerController,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnPlayer_Implementation(Z_Param_controller);
		P_NATIVE_END;
	}
	static FName NAME_AFPSMultijugadorGameMode_SpawnPlayer = FName(TEXT("SpawnPlayer"));
	void AFPSMultijugadorGameMode::SpawnPlayer(AFPSPlayerController* controller)
	{
		FPSMultijugadorGameMode_eventSpawnPlayer_Parms Parms;
		Parms.controller=controller;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMultijugadorGameMode_SpawnPlayer),&Parms);
	}
	void AFPSMultijugadorGameMode::StaticRegisterNativesAFPSMultijugadorGameMode()
	{
		UClass* Class = AFPSMultijugadorGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnPlayer", &AFPSMultijugadorGameMode::execSpawnPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMultijugadorGameMode_eventSpawnPlayer_Parms, controller), Z_Construct_UClass_AFPSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/*Funcion para hacer spawn del jugador despues de 10 segundos*/" },
		{ "ModuleRelativePath", "FPSMultijugadorGameMode.h" },
		{ "ToolTip", "Funcion para hacer spawn del jugador despues de 10 segundos" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMultijugadorGameMode, nullptr, "SpawnPlayer", nullptr, nullptr, sizeof(FPSMultijugadorGameMode_eventSpawnPlayer_Parms), Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSMultijugadorGameMode_NoRegister()
	{
		return AFPSMultijugadorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSMultijugadorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSMultijugador,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSMultijugadorGameMode_SpawnPlayer, "SpawnPlayer" }, // 895116105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSMultijugadorGameMode.h" },
		{ "ModuleRelativePath", "FPSMultijugadorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::NewProp_spawnPoints_Inner = { "spawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::NewProp_spawnPoints_MetaData[] = {
		{ "Category", "FPSMultijugadorGameMode" },
		{ "ModuleRelativePath", "FPSMultijugadorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::NewProp_spawnPoints = { "spawnPoints", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMultijugadorGameMode, spawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::NewProp_spawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::NewProp_spawnPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::NewProp_spawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::NewProp_spawnPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSMultijugadorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::ClassParams = {
		&AFPSMultijugadorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSMultijugadorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSMultijugadorGameMode, 4184730734);
	template<> FPSMULTIJUGADOR_API UClass* StaticClass<AFPSMultijugadorGameMode>()
	{
		return AFPSMultijugadorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSMultijugadorGameMode(Z_Construct_UClass_AFPSMultijugadorGameMode, &AFPSMultijugadorGameMode::StaticClass, TEXT("/Script/FPSMultijugador"), TEXT("AFPSMultijugadorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSMultijugadorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
