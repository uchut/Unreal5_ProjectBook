// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chapter_1/Chapter_1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter_1GameMode() {}

// Begin Cross Module References
CHAPTER_1_API UClass* Z_Construct_UClass_AChapter_1GameMode();
CHAPTER_1_API UClass* Z_Construct_UClass_AChapter_1GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Chapter_1();
// End Cross Module References

// Begin Class AChapter_1GameMode
void AChapter_1GameMode::StaticRegisterNativesAChapter_1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChapter_1GameMode);
UClass* Z_Construct_UClass_AChapter_1GameMode_NoRegister()
{
	return AChapter_1GameMode::StaticClass();
}
struct Z_Construct_UClass_AChapter_1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Chapter_1GameMode.h" },
		{ "ModuleRelativePath", "Chapter_1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter_1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AChapter_1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Chapter_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChapter_1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChapter_1GameMode_Statics::ClassParams = {
	&AChapter_1GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChapter_1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AChapter_1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChapter_1GameMode()
{
	if (!Z_Registration_Info_UClass_AChapter_1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChapter_1GameMode.OuterSingleton, Z_Construct_UClass_AChapter_1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChapter_1GameMode.OuterSingleton;
}
template<> CHAPTER_1_API UClass* StaticClass<AChapter_1GameMode>()
{
	return AChapter_1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter_1GameMode);
AChapter_1GameMode::~AChapter_1GameMode() {}
// End Class AChapter_1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngine_Chapter_1_Source_Chapter_1_Chapter_1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChapter_1GameMode, AChapter_1GameMode::StaticClass, TEXT("AChapter_1GameMode"), &Z_Registration_Info_UClass_AChapter_1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChapter_1GameMode), 1773454041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Chapter_1_Source_Chapter_1_Chapter_1GameMode_h_134818141(TEXT("/Script/Chapter_1"),
	Z_CompiledInDeferFile_FID_UnrealEngine_Chapter_1_Source_Chapter_1_Chapter_1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Chapter_1_Source_Chapter_1_Chapter_1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
