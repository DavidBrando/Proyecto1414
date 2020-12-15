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
// End Cross Module References
	void AFPSMultijugadorGameMode::StaticRegisterNativesAFPSMultijugadorGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFPSMultijugadorGameMode_NoRegister()
	{
		return AFPSMultijugadorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSMultijugadorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSMultijugador,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSMultijugadorGameMode.h" },
		{ "ModuleRelativePath", "FPSMultijugadorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSMultijugadorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSMultijugadorGameMode_Statics::ClassParams = {
		&AFPSMultijugadorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AFPSMultijugadorGameMode, 3197101317);
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
