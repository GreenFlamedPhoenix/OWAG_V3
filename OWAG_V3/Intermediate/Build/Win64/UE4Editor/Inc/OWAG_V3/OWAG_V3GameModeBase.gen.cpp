// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWAG_V3/OWAG_V3GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWAG_V3GameModeBase() {}
// Cross Module References
	OWAG_V3_API UClass* Z_Construct_UClass_AOWAG_V3GameModeBase_NoRegister();
	OWAG_V3_API UClass* Z_Construct_UClass_AOWAG_V3GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OWAG_V3();
// End Cross Module References
	void AOWAG_V3GameModeBase::StaticRegisterNativesAOWAG_V3GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOWAG_V3GameModeBase_NoRegister()
	{
		return AOWAG_V3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOWAG_V3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWAG_V3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OWAG_V3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWAG_V3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OWAG_V3GameModeBase.h" },
		{ "ModuleRelativePath", "OWAG_V3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWAG_V3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWAG_V3GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWAG_V3GameModeBase_Statics::ClassParams = {
		&AOWAG_V3GameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AOWAG_V3GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWAG_V3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWAG_V3GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWAG_V3GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWAG_V3GameModeBase, 1377152776);
	template<> OWAG_V3_API UClass* StaticClass<AOWAG_V3GameModeBase>()
	{
		return AOWAG_V3GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWAG_V3GameModeBase(Z_Construct_UClass_AOWAG_V3GameModeBase, &AOWAG_V3GameModeBase::StaticClass, TEXT("/Script/OWAG_V3"), TEXT("AOWAG_V3GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWAG_V3GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
