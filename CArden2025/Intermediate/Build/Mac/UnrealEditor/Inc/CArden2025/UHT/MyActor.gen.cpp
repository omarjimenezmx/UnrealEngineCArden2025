// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CArden2025/MyActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// ********** Begin Cross Module References ********************************************************
CARDEN2025_API UClass* Z_Construct_UClass_AMyActor();
CARDEN2025_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CArden2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyActor *****************************************************************
void AMyActor::StaticRegisterNativesAMyActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyActor;
UClass* AMyActor::GetPrivateStaticClass()
{
	using TClass = AMyActor;
	if (!Z_Registration_Info_UClass_AMyActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyActor"),
			Z_Registration_Info_UClass_AMyActor.InnerSingleton,
			StaticRegisterNativesAMyActor,
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
	return Z_Registration_Info_UClass_AMyActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatVariable_MetaData[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ejemplo de una varaible de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ejemplo de una varaible de instancia publica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatVariable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_MyFloatVariable = { "MyFloatVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, MyFloatVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFloatVariable_MetaData), NewProp_MyFloatVariable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_MyFloatVariable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CArden2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
AMyActor::~AMyActor() {}
// ********** End Class AMyActor *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_MyActor_h__Script_CArden2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 3578426317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_MyActor_h__Script_CArden2025_2517350107(TEXT("/Script/CArden2025"),
	Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_MyActor_h__Script_CArden2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_omarjimenez_Desktop_UnrealEngineCArden2025_CArden2025_Source_CArden2025_MyActor_h__Script_CArden2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
