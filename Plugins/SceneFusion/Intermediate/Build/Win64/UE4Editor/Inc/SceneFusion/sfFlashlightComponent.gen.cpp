// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Components/sfFlashlightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesfFlashlightComponent() {}
// Cross Module References
	SCENEFUSION_API UClass* Z_Construct_UClass_UsfFlashlightComponent_NoRegister();
	SCENEFUSION_API UClass* Z_Construct_UClass_UsfFlashlightComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent();
	UPackage* Z_Construct_UPackage__Script_SceneFusion();
// End Cross Module References
	void UsfFlashlightComponent::StaticRegisterNativesUsfFlashlightComponent()
	{
	}
	UClass* Z_Construct_UClass_UsfFlashlightComponent_NoRegister()
	{
		return UsfFlashlightComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UsfFlashlightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USpotLightComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SceneFusion,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
				{ "IncludePath", "Components/sfFlashlightComponent.h" },
				{ "ModuleRelativePath", "Private/Components/sfFlashlightComponent.h" },
				{ "ToolTip", "Flashlight component that has no icon shown in the viewport." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UsfFlashlightComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UsfFlashlightComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
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
	IMPLEMENT_CLASS(UsfFlashlightComponent, 3809199826);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UsfFlashlightComponent(Z_Construct_UClass_UsfFlashlightComponent, &UsfFlashlightComponent::StaticClass, TEXT("/Script/SceneFusion"), TEXT("UsfFlashlightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UsfFlashlightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
