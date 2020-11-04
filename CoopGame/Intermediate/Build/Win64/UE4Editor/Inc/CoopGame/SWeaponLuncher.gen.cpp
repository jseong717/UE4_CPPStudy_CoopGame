// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SWeaponLuncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeaponLuncher() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASWeaponLuncher_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeaponLuncher();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASWeaponLuncher::StaticRegisterNativesASWeaponLuncher()
	{
	}
	UClass* Z_Construct_UClass_ASWeaponLuncher_NoRegister()
	{
		return ASWeaponLuncher::StaticClass();
	}
	struct Z_Construct_UClass_ASWeaponLuncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Bullet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWeaponLuncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponLuncher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SWeaponLuncher.h" },
		{ "ModuleRelativePath", "Public/SWeaponLuncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponLuncher_Statics::NewProp_Bullet_MetaData[] = {
		{ "Category", "Bulllet" },
		{ "ModuleRelativePath", "Public/SWeaponLuncher.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeaponLuncher_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponLuncher, Bullet), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeaponLuncher_Statics::NewProp_Bullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponLuncher_Statics::NewProp_Bullet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASWeaponLuncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponLuncher_Statics::NewProp_Bullet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWeaponLuncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWeaponLuncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWeaponLuncher_Statics::ClassParams = {
		&ASWeaponLuncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASWeaponLuncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponLuncher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASWeaponLuncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponLuncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWeaponLuncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWeaponLuncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeaponLuncher, 1051288442);
	template<> COOPGAME_API UClass* StaticClass<ASWeaponLuncher>()
	{
		return ASWeaponLuncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeaponLuncher(Z_Construct_UClass_ASWeaponLuncher, &ASWeaponLuncher::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASWeaponLuncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeaponLuncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
