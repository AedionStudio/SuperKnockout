// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Actors/sfAvatarActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesfAvatarActor() {}
// Cross Module References
	SCENEFUSION_API UClass* Z_Construct_UClass_AsfAvatarActor_NoRegister();
	SCENEFUSION_API UClass* Z_Construct_UClass_AsfAvatarActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_SceneFusion();
// End Cross Module References
	void AsfAvatarActor::StaticRegisterNativesAsfAvatarActor()
	{
	}
	UClass* Z_Construct_UClass_AsfAvatarActor_NoRegister()
	{
		return AsfAvatarActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AsfAvatarActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SceneFusion,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input" },
				{ "IncludePath", "Actors/sfAvatarActor.h" },
				{ "ModuleRelativePath", "Private/Actors/sfAvatarActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Unselectable static meshPtr actor used for avatars." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AsfAvatarActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AsfAvatarActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AsfAvatarActor, 2595322020);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AsfAvatarActor(Z_Construct_UClass_AsfAvatarActor, &AsfAvatarActor::StaticClass, TEXT("/Script/SceneFusion"), TEXT("AsfAvatarActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsfAvatarActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
