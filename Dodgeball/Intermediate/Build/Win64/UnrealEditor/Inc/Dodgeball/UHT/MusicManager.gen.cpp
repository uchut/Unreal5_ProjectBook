// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/MusicManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMusicManager() {}

// Begin Cross Module References
DODGEBALL_API UClass* Z_Construct_UClass_AMusicManager();
DODGEBALL_API UClass* Z_Construct_UClass_AMusicManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References

// Begin Class AMusicManager
void AMusicManager::StaticRegisterNativesAMusicManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMusicManager);
UClass* Z_Construct_UClass_AMusicManager_NoRegister()
{
	return AMusicManager::StaticClass();
}
struct Z_Construct_UClass_AMusicManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MusicManager.h" },
		{ "ModuleRelativePath", "MusicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "MusicManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MusicManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMusicManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMusicManager_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMusicManager, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMusicManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMusicManager_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMusicManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMusicManager_Statics::ClassParams = {
	&AMusicManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMusicManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMusicManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMusicManager()
{
	if (!Z_Registration_Info_UClass_AMusicManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMusicManager.OuterSingleton, Z_Construct_UClass_AMusicManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMusicManager.OuterSingleton;
}
template<> DODGEBALL_API UClass* StaticClass<AMusicManager>()
{
	return AMusicManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMusicManager);
AMusicManager::~AMusicManager() {}
// End Class AMusicManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal5_ProjectBook_Dodgeball_Source_Dodgeball_MusicManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMusicManager, AMusicManager::StaticClass, TEXT("AMusicManager"), &Z_Registration_Info_UClass_AMusicManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMusicManager), 1570583128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_ProjectBook_Dodgeball_Source_Dodgeball_MusicManager_h_734656548(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_Unreal5_ProjectBook_Dodgeball_Source_Dodgeball_MusicManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_ProjectBook_Dodgeball_Source_Dodgeball_MusicManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
