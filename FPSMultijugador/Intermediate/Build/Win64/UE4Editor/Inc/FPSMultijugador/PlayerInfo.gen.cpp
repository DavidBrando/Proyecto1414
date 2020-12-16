// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSMultijugador/PlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInfo() {}
// Cross Module References
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_UPlayerInfo_NoRegister();
	FPSMULTIJUGADOR_API UClass* Z_Construct_UClass_UPlayerInfo();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSMultijugador();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerInfo::execGetAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInfo::execHealthPlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_nHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealthPlayer(Z_Param_nHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInfo::execDoDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_dmg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoDamage(Z_Param_dmg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInfo::execGetFactorizedHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFactorizedHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInfo::execGetActualHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActualHealth();
		P_NATIVE_END;
	}
	void UPlayerInfo::StaticRegisterNativesUPlayerInfo()
	{
		UClass* Class = UPlayerInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoDamage", &UPlayerInfo::execDoDamage },
			{ "GetActualHealth", &UPlayerInfo::execGetActualHealth },
			{ "GetAlive", &UPlayerInfo::execGetAlive },
			{ "GetFactorizedHealth", &UPlayerInfo::execGetFactorizedHealth },
			{ "HealthPlayer", &UPlayerInfo::execHealthPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics
	{
		struct PlayerInfo_eventDoDamage_Parms
		{
			float dmg;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dmg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::NewProp_dmg = { "dmg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInfo_eventDoDamage_Parms, dmg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::NewProp_dmg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInfo, nullptr, "DoDamage", nullptr, nullptr, sizeof(PlayerInfo_eventDoDamage_Parms), Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInfo_DoDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInfo_DoDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics
	{
		struct PlayerInfo_eventGetActualHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInfo_eventGetActualHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInfo, nullptr, "GetActualHealth", nullptr, nullptr, sizeof(PlayerInfo_eventGetActualHealth_Parms), Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInfo_GetActualHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInfo_GetActualHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics
	{
		struct PlayerInfo_eventGetAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerInfo_eventGetAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerInfo_eventGetAlive_Parms), &Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInfo, nullptr, "GetAlive", nullptr, nullptr, sizeof(PlayerInfo_eventGetAlive_Parms), Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInfo_GetAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInfo_GetAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics
	{
		struct PlayerInfo_eventGetFactorizedHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInfo_eventGetFactorizedHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInfo, nullptr, "GetFactorizedHealth", nullptr, nullptr, sizeof(PlayerInfo_eventGetFactorizedHealth_Parms), Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics
	{
		struct PlayerInfo_eventHealthPlayer_Parms
		{
			float nHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_nHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::NewProp_nHealth = { "nHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInfo_eventHealthPlayer_Parms, nHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::NewProp_nHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInfo, nullptr, "HealthPlayer", nullptr, nullptr, sizeof(PlayerInfo_eventHealthPlayer_Parms), Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInfo_HealthPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInfo_HealthPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInfo_NoRegister()
	{
		return UPlayerInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alive_MetaData[];
#endif
		static void NewProp_alive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_alive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSMultijugador,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInfo_DoDamage, "DoDamage" }, // 4135904675
		{ &Z_Construct_UFunction_UPlayerInfo_GetActualHealth, "GetActualHealth" }, // 4012291570
		{ &Z_Construct_UFunction_UPlayerInfo_GetAlive, "GetAlive" }, // 2358425814
		{ &Z_Construct_UFunction_UPlayerInfo_GetFactorizedHealth, "GetFactorizedHealth" }, // 1232115448
		{ &Z_Construct_UFunction_UPlayerInfo_HealthPlayer, "HealthPlayer" }, // 205003623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerInfo.h" },
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_alive_MetaData[] = {
		{ "Category", "HealthVariables" },
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_alive_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->alive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_alive = { "alive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_alive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_alive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_alive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_health_MetaData[] = {
		{ "Category", "HealthVariables" },
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, health), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "HealthVariables" },
		{ "ModuleRelativePath", "PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, maxHealth), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_maxHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_alive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_maxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInfo_Statics::ClassParams = {
		&UPlayerInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInfo, 3358757388);
	template<> FPSMULTIJUGADOR_API UClass* StaticClass<UPlayerInfo>()
	{
		return UPlayerInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInfo(Z_Construct_UClass_UPlayerInfo, &UPlayerInfo::StaticClass, TEXT("/Script/FPSMultijugador"), TEXT("UPlayerInfo"), false, nullptr, nullptr, nullptr);

	void UPlayerInfo::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_health(TEXT("health"));

		const bool bIsValid = true
			&& Name_health == ClassReps[(int32)ENetFields_Private::health].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerInfo"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
