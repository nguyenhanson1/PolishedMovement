// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolishedMovement/PolishedMovementGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolishedMovementGameMode() {}
// Cross Module References
	POLISHEDMOVEMENT_API UClass* Z_Construct_UClass_APolishedMovementGameMode_NoRegister();
	POLISHEDMOVEMENT_API UClass* Z_Construct_UClass_APolishedMovementGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PolishedMovement();
// End Cross Module References
	void APolishedMovementGameMode::StaticRegisterNativesAPolishedMovementGameMode()
	{
	}
	UClass* Z_Construct_UClass_APolishedMovementGameMode_NoRegister()
	{
		return APolishedMovementGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APolishedMovementGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APolishedMovementGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PolishedMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APolishedMovementGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PolishedMovementGameMode.h" },
		{ "ModuleRelativePath", "PolishedMovementGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APolishedMovementGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APolishedMovementGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APolishedMovementGameMode_Statics::ClassParams = {
		&APolishedMovementGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APolishedMovementGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APolishedMovementGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APolishedMovementGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APolishedMovementGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APolishedMovementGameMode, 4277072245);
	template<> POLISHEDMOVEMENT_API UClass* StaticClass<APolishedMovementGameMode>()
	{
		return APolishedMovementGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APolishedMovementGameMode(Z_Construct_UClass_APolishedMovementGameMode, &APolishedMovementGameMode::StaticClass, TEXT("/Script/PolishedMovement"), TEXT("APolishedMovementGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APolishedMovementGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
