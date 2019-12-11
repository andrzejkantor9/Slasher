// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slasher/SlasherGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherGameMode() {}
// Cross Module References
	SLASHER_API UClass* Z_Construct_UClass_ASlasherGameMode_NoRegister();
	SLASHER_API UClass* Z_Construct_UClass_ASlasherGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Slasher();
// End Cross Module References
	void ASlasherGameMode::StaticRegisterNativesASlasherGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASlasherGameMode_NoRegister()
	{
		return ASlasherGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASlasherGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlasherGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlasherGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SlasherGameMode.h" },
		{ "ModuleRelativePath", "SlasherGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlasherGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlasherGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlasherGameMode_Statics::ClassParams = {
		&ASlasherGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASlasherGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlasherGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlasherGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlasherGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlasherGameMode, 3108710750);
	template<> SLASHER_API UClass* StaticClass<ASlasherGameMode>()
	{
		return ASlasherGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlasherGameMode(Z_Construct_UClass_ASlasherGameMode, &ASlasherGameMode::StaticClass, TEXT("/Script/Slasher"), TEXT("ASlasherGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlasherGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
