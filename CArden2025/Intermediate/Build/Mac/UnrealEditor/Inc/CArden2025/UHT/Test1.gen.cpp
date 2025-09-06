// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CArden2025/Test1.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTest1() {}

// ********** Begin Cross Module References ********************************************************
CARDEN2025_API UClass* Z_Construct_UClass_ATest1();
CARDEN2025_API UClass* Z_Construct_UClass_ATest1_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CArden2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATest1 *******************************************************************
void ATest1::StaticRegisterNativesATest1()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATest1;
UClass* ATest1::GetPrivateStaticClass()
{
	using TClass = ATest1;
	if (!Z_Registration_Info_UClass_ATest1.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Test1"),
			Z_Registration_Info_UClass_ATest1.InnerSingleton,
			StaticRegisterNativesATest1,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATest1.InnerSingleton;
}
UClass* Z_Construct_UClass_ATest1_NoRegister()
{
	return ATest1::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATest1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test1.h" },
		{ "ModuleRelativePath", "Test1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATest1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CArden2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest1_Statics::ClassParams = {
	&ATest1::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest1_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest1()
{
	if (!Z_Registration_Info_UClass_ATest1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest1.OuterSingleton, Z_Construct_UClass_ATest1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest1.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest1);
ATest1::~ATest1() {}
// ********** End Class ATest1 *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_Test1_h__Script_CArden2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest1, ATest1::StaticClass, TEXT("ATest1"), &Z_Registration_Info_UClass_ATest1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest1), 1653941816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_Test1_h__Script_CArden2025_2126669320(TEXT("/Script/CArden2025"),
	Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_Test1_h__Script_CArden2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_Test1_h__Script_CArden2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
