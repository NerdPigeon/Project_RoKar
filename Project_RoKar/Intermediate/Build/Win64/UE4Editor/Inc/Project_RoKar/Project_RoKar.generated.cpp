// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Project_RoKar.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Project_RoKar() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();

	PROJECT_ROKAR_API class UFunction* Z_Construct_UFunction_ATriggerHidden_TriggerEnter();
	PROJECT_ROKAR_API class UFunction* Z_Construct_UFunction_ATriggerHidden_TriggerExit();
	PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATriggerHidden_NoRegister();
	PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATriggerHidden();
	PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATrigggerVis_NoRegister();
	PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATrigggerVis();
	PROJECT_ROKAR_API class UPackage* Z_Construct_UPackage__Script_Project_RoKar();
	void ATriggerHidden::StaticRegisterNativesATriggerHidden()
	{
		UClass* Class = ATriggerHidden::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "TriggerEnter", (Native)&ATriggerHidden::execTriggerEnter },
			{ "TriggerExit", (Native)&ATriggerHidden::execTriggerExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_ATriggerHidden_TriggerEnter()
	{
		struct TriggerHidden_eventTriggerEnter_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ATriggerHidden();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TriggerEnter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(TriggerHidden_eventTriggerEnter_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, TriggerHidden_eventTriggerEnter_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, TriggerHidden_eventTriggerEnter_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, TriggerHidden_eventTriggerEnter_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, TriggerHidden_eventTriggerEnter_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, TriggerHidden_eventTriggerEnter_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, TriggerHidden_eventTriggerEnter_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, TriggerHidden_eventTriggerEnter_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, TriggerHidden_eventTriggerEnter_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TriggerHidden.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATriggerHidden_TriggerExit()
	{
		struct TriggerHidden_eventTriggerExit_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_ATriggerHidden();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TriggerExit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(TriggerHidden_eventTriggerExit_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, TriggerHidden_eventTriggerExit_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, TriggerHidden_eventTriggerExit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, TriggerHidden_eventTriggerExit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, TriggerHidden_eventTriggerExit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TriggerHidden.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerHidden_NoRegister()
	{
		return ATriggerHidden::StaticClass();
	}
	UClass* Z_Construct_UClass_ATriggerHidden()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Project_RoKar();
			OuterClass = ATriggerHidden::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ATriggerHidden_TriggerEnter());
				OuterClass->LinkChild(Z_Construct_UFunction_ATriggerHidden_TriggerExit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Hidden = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Hidden"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Hidden, ATriggerHidden), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_TriggeVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriggeVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TriggeVolume, ATriggerHidden), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATriggerHidden_TriggerEnter(), "TriggerEnter"); // 1862278779
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATriggerHidden_TriggerExit(), "TriggerExit"); // 4094520366
				static TCppClassTypeInfo<TCppClassTypeTraits<ATriggerHidden> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TriggerHidden.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TriggerHidden.h"));
				MetaData->SetValue(NewProp_Hidden, TEXT("Category"), TEXT("TriggerHidden"));
				MetaData->SetValue(NewProp_Hidden, TEXT("ModuleRelativePath"), TEXT("TriggerHidden.h"));
				MetaData->SetValue(NewProp_TriggeVolume, TEXT("Category"), TEXT("TriggerHidden"));
				MetaData->SetValue(NewProp_TriggeVolume, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TriggeVolume, TEXT("ModuleRelativePath"), TEXT("TriggerHidden.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerHidden, 4124303786);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerHidden(Z_Construct_UClass_ATriggerHidden, &ATriggerHidden::StaticClass, TEXT("/Script/Project_RoKar"), TEXT("ATriggerHidden"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerHidden);
	void ATrigggerVis::StaticRegisterNativesATrigggerVis()
	{
	}
	UClass* Z_Construct_UClass_ATrigggerVis_NoRegister()
	{
		return ATrigggerVis::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrigggerVis()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Project_RoKar();
			OuterClass = ATrigggerVis::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATrigggerVis> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TrigggerVis.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TrigggerVis.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrigggerVis, 89084185);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrigggerVis(Z_Construct_UClass_ATrigggerVis, &ATrigggerVis::StaticClass, TEXT("/Script/Project_RoKar"), TEXT("ATrigggerVis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrigggerVis);
	UPackage* Z_Construct_UPackage__Script_Project_RoKar()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Project_RoKar")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x8DE9C7EE;
			Guid.B = 0xE16CE346;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
