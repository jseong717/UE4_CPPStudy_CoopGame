// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_ExplosiveObject_generated_h
#error "ExplosiveObject.generated.h already included, missing '#pragma once' in ExplosiveObject.h"
#endif
#define COOPGAME_ExplosiveObject_generated_h

#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnRep_Exploded);


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnRep_Exploded);


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveObject(); \
	friend struct Z_Construct_UClass_AExplosiveObject_Statics; \
public: \
	DECLARE_CLASS(AExplosiveObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveObject) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExplode=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExplode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveObject(); \
	friend struct Z_Construct_UClass_AExplosiveObject_Statics; \
public: \
	DECLARE_CLASS(AExplosiveObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveObject) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExplode=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExplode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveObject(AExplosiveObject&&); \
	NO_API AExplosiveObject(const AExplosiveObject&); \
public:


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveObject(AExplosiveObject&&); \
	NO_API AExplosiveObject(const AExplosiveObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveObject)


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AExplosiveObject, MeshComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(AExplosiveObject, HealthComp); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(AExplosiveObject, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__BeforeExplodeMaterial() { return STRUCT_OFFSET(AExplosiveObject, BeforeExplodeMaterial); } \
	FORCEINLINE static uint32 __PPO__AfterExplodeMaterial() { return STRUCT_OFFSET(AExplosiveObject, AfterExplodeMaterial); } \
	FORCEINLINE static uint32 __PPO__ExplodeEffect() { return STRUCT_OFFSET(AExplosiveObject, ExplodeEffect); } \
	FORCEINLINE static uint32 __PPO__BarrelDamageType() { return STRUCT_OFFSET(AExplosiveObject, BarrelDamageType); } \
	FORCEINLINE static uint32 __PPO__IgnoreActor() { return STRUCT_OFFSET(AExplosiveObject, IgnoreActor); } \
	FORCEINLINE static uint32 __PPO__bExplode() { return STRUCT_OFFSET(AExplosiveObject, bExplode); } \
	FORCEINLINE static uint32 __PPO__RadialDamage() { return STRUCT_OFFSET(AExplosiveObject, RadialDamage); } \
	FORCEINLINE static uint32 __PPO__ImpulseRadius() { return STRUCT_OFFSET(AExplosiveObject, ImpulseRadius); } \
	FORCEINLINE static uint32 __PPO__ForceStrength() { return STRUCT_OFFSET(AExplosiveObject, ForceStrength); }


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_ExplosiveObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class AExplosiveObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_ExplosiveObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
