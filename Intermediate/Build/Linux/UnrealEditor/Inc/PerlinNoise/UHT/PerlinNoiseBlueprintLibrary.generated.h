// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PerlinNoiseBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FLinearColor;
struct FNoiseArray2D;
#ifdef PERLINNOISE_PerlinNoiseBlueprintLibrary_generated_h
#error "PerlinNoiseBlueprintLibrary.generated.h already included, missing '#pragma once' in PerlinNoiseBlueprintLibrary.h"
#endif
#define PERLINNOISE_PerlinNoiseBlueprintLibrary_generated_h

#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNoiseRow_Statics; \
	PERLINNOISE_API static class UScriptStruct* StaticStruct();


template<> PERLINNOISE_API UScriptStruct* StaticStruct<struct FNoiseRow>();

#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNoiseArray2D_Statics; \
	PERLINNOISE_API static class UScriptStruct* StaticStruct();


template<> PERLINNOISE_API UScriptStruct* StaticStruct<struct FNoiseArray2D>();

#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_SPARSE_DATA
#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSampleNoiseAtLocation); \
	DECLARE_FUNCTION(execGeneratePerlinNoiseTexture); \
	DECLARE_FUNCTION(execGeneratePerlinNoiseArray);


#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_ACCESSORS
#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerlinNoiseBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPerlinNoiseBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerlinNoise"), NO_API) \
	DECLARE_SERIALIZER(UPerlinNoiseBlueprintLibrary)


#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerlinNoiseBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerlinNoiseBlueprintLibrary(UPerlinNoiseBlueprintLibrary&&); \
	NO_API UPerlinNoiseBlueprintLibrary(const UPerlinNoiseBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerlinNoiseBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerlinNoiseBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerlinNoiseBlueprintLibrary) \
	NO_API virtual ~UPerlinNoiseBlueprintLibrary();


#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_42_PROLOG
#define FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_SPARSE_DATA \
	FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_ACCESSORS \
	FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERLINNOISE_API UClass* StaticClass<class UPerlinNoiseBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
