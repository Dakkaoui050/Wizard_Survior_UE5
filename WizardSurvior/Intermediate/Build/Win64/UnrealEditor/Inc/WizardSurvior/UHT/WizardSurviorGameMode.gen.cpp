// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WizardSurvior/WizardSurviorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWizardSurviorGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WizardSurvior();
	WIZARDSURVIOR_API UClass* Z_Construct_UClass_AWizardSurviorGameMode();
	WIZARDSURVIOR_API UClass* Z_Construct_UClass_AWizardSurviorGameMode_NoRegister();
// End Cross Module References
	void AWizardSurviorGameMode::StaticRegisterNativesAWizardSurviorGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWizardSurviorGameMode);
	UClass* Z_Construct_UClass_AWizardSurviorGameMode_NoRegister()
	{
		return AWizardSurviorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWizardSurviorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWizardSurviorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WizardSurvior,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWizardSurviorGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWizardSurviorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WizardSurviorGameMode.h" },
		{ "ModuleRelativePath", "WizardSurviorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWizardSurviorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWizardSurviorGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWizardSurviorGameMode_Statics::ClassParams = {
		&AWizardSurviorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWizardSurviorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWizardSurviorGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWizardSurviorGameMode()
	{
		if (!Z_Registration_Info_UClass_AWizardSurviorGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWizardSurviorGameMode.OuterSingleton, Z_Construct_UClass_AWizardSurviorGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWizardSurviorGameMode.OuterSingleton;
	}
	template<> WIZARDSURVIOR_API UClass* StaticClass<AWizardSurviorGameMode>()
	{
		return AWizardSurviorGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWizardSurviorGameMode);
	AWizardSurviorGameMode::~AWizardSurviorGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_WizardSurvior_Source_WizardSurvior_WizardSurviorGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_WizardSurvior_Source_WizardSurvior_WizardSurviorGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWizardSurviorGameMode, AWizardSurviorGameMode::StaticClass, TEXT("AWizardSurviorGameMode"), &Z_Registration_Info_UClass_AWizardSurviorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWizardSurviorGameMode), 210410176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_WizardSurvior_Source_WizardSurvior_WizardSurviorGameMode_h_1098288527(TEXT("/Script/WizardSurvior"),
		Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_WizardSurvior_Source_WizardSurvior_WizardSurviorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_WizardSurvior_Source_WizardSurvior_WizardSurviorGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
