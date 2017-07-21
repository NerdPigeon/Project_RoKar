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
	ENGINE_API class UClass* Z_Construct_UClass_AActor();

	PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATrigggerVis_NoRegister();
	PROJECT_ROKAR_API class UClass* Z_Construct_UClass_ATrigggerVis();
	PROJECT_ROKAR_API class UPackage* Z_Construct_UPackage__Script_Project_RoKar();
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
			Guid.A = 0xA88E7257;
			Guid.B = 0x150624DB;
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
