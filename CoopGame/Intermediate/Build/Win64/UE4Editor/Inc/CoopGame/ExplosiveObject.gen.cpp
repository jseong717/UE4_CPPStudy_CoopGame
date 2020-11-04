// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/ExplosiveObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveObject() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_AExplosiveObject_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_AExplosiveObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void AExplosiveObject::StaticRegisterNativesAExplosiveObject()
	{
	}
	UClass* Z_Construct_UClass_AExplosiveObject_NoRegister()
	{
		return AExplosiveObject::StaticClass();
	}
	struct Z_Construct_UClass_AExplosiveObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosiveObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveObject.h" },
		{ "ModuleRelativePath", "Public/ExplosiveObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosiveObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveObject_Statics::ClassParams = {
		&AExplosiveObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosiveObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosiveObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosiveObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosiveObject, 1737871338);
	template<> COOPGAME_API UClass* StaticClass<AExplosiveObject>()
	{
		return AExplosiveObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosiveObject(Z_Construct_UClass_AExplosiveObject, &AExplosiveObject::StaticClass, TEXT("/Script/CoopGame"), TEXT("AExplosiveObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
