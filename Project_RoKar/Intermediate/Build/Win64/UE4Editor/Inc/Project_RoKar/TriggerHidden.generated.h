// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROJECT_ROKAR_TriggerHidden_generated_h
#error "TriggerHidden.generated.h already included, missing '#pragma once' in TriggerHidden.h"
#endif
#define PROJECT_ROKAR_TriggerHidden_generated_h

#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerExit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TriggerExit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TriggerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerExit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TriggerExit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TriggerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerHidden(); \
	friend PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATriggerHidden(); \
public: \
	DECLARE_CLASS(ATriggerHidden, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Project_RoKar"), NO_API) \
	DECLARE_SERIALIZER(ATriggerHidden) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATriggerHidden(); \
	friend PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATriggerHidden(); \
public: \
	DECLARE_CLASS(ATriggerHidden, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Project_RoKar"), NO_API) \
	DECLARE_SERIALIZER(ATriggerHidden) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerHidden(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerHidden) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerHidden); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerHidden); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerHidden(ATriggerHidden&&); \
	NO_API ATriggerHidden(const ATriggerHidden&); \
public:


#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerHidden(ATriggerHidden&&); \
	NO_API ATriggerHidden(const ATriggerHidden&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerHidden); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerHidden); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerHidden)


#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_PRIVATE_PROPERTY_OFFSET
#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_10_PROLOG
#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_PRIVATE_PROPERTY_OFFSET \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_RPC_WRAPPERS \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_INCLASS \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_PRIVATE_PROPERTY_OFFSET \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_INCLASS_NO_PURE_DECLS \
	Project_RoKar_Source_Project_RoKar_TriggerHidden_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_RoKar_Source_Project_RoKar_TriggerHidden_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
