// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerlinNoise/Public/PerlinNoiseBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlinNoiseBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PERLINNOISE_API UClass* Z_Construct_UClass_UPerlinNoiseBlueprintLibrary();
	PERLINNOISE_API UClass* Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_NoRegister();
	PERLINNOISE_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseArray2D();
	PERLINNOISE_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseRow();
	UPackage* Z_Construct_UPackage__Script_PerlinNoise();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NoiseRow;
class UScriptStruct* FNoiseRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NoiseRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseRow, (UObject*)Z_Construct_UPackage__Script_PerlinNoise(), TEXT("NoiseRow"));
	}
	return Z_Registration_Info_UScriptStruct_NoiseRow.OuterSingleton;
}
template<> PERLINNOISE_API UScriptStruct* StaticStruct<FNoiseRow>()
{
	return FNoiseRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNoiseRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoiseRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseRow>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseRow_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseRow_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "NoiseRow" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNoiseRow_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseRow, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseRow_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FNoiseRow_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoiseRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseRow_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseRow_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PerlinNoise,
		nullptr,
		&NewStructOps,
		"NoiseRow",
		Z_Construct_UScriptStruct_FNoiseRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseRow_Statics::PropPointers),
		sizeof(FNoiseRow),
		alignof(FNoiseRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNoiseRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNoiseRow()
	{
		if (!Z_Registration_Info_UScriptStruct_NoiseRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NoiseRow.InnerSingleton, Z_Construct_UScriptStruct_FNoiseRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NoiseRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NoiseArray2D;
class UScriptStruct* FNoiseArray2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseArray2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NoiseArray2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseArray2D, (UObject*)Z_Construct_UPackage__Script_PerlinNoise(), TEXT("NoiseArray2D"));
	}
	return Z_Registration_Info_UScriptStruct_NoiseArray2D.OuterSingleton;
}
template<> PERLINNOISE_API UScriptStruct* StaticStruct<FNoiseArray2D>()
{
	return FNoiseArray2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNoiseArray2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rows_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseArray2D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseArray2D>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewProp_Rows_Inner = { "Rows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNoiseRow, METADATA_PARAMS(0, nullptr) }; // 2335820060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewProp_Rows_MetaData[] = {
		{ "Category", "NoiseArray2D" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseArray2D, Rows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewProp_Rows_MetaData), Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewProp_Rows_MetaData) }; // 2335820060
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoiseArray2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewProp_Rows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewProp_Rows,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseArray2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PerlinNoise,
		nullptr,
		&NewStructOps,
		"NoiseArray2D",
		Z_Construct_UScriptStruct_FNoiseArray2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseArray2D_Statics::PropPointers),
		sizeof(FNoiseArray2D),
		alignof(FNoiseArray2D),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseArray2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNoiseArray2D_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseArray2D_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNoiseArray2D()
	{
		if (!Z_Registration_Info_UScriptStruct_NoiseArray2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NoiseArray2D.InnerSingleton, Z_Construct_UScriptStruct_FNoiseArray2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NoiseArray2D.InnerSingleton;
	}
	DEFINE_FUNCTION(UPerlinNoiseBlueprintLibrary::execSampleNoiseAtLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_STRUCT_REF(FNoiseArray2D,Z_Param_Out_NoiseArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlinNoiseBlueprintLibrary::SampleNoiseAtLocation(Z_Param_X,Z_Param_Y,Z_Param_Out_NoiseArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlinNoiseBlueprintLibrary::execGeneratePerlinNoiseTexture)
	{
		P_GET_STRUCT_REF(FNoiseArray2D,Z_Param_Out_NoiseArray);
		P_GET_STRUCT(FLinearColor,Z_Param_Color1);
		P_GET_STRUCT(FLinearColor,Z_Param_Color2);
		P_GET_STRUCT(FLinearColor,Z_Param_Color3);
		P_GET_STRUCT(FLinearColor,Z_Param_Color4);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UPerlinNoiseBlueprintLibrary::GeneratePerlinNoiseTexture(Z_Param_Out_NoiseArray,Z_Param_Color1,Z_Param_Color2,Z_Param_Color3,Z_Param_Color4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlinNoiseBlueprintLibrary::execGeneratePerlinNoiseArray)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_Octaves);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Persistence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScrollX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScrollY);
		P_GET_UBOOL(Z_Param_NormalizeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNoiseArray2D*)Z_Param__Result=UPerlinNoiseBlueprintLibrary::GeneratePerlinNoiseArray(Z_Param_Width,Z_Param_Height,Z_Param_Frequency,Z_Param_Seed,Z_Param_Scale,Z_Param_Octaves,Z_Param_Persistence,Z_Param_ScrollX,Z_Param_ScrollY,Z_Param_NormalizeData);
		P_NATIVE_END;
	}
	void UPerlinNoiseBlueprintLibrary::StaticRegisterNativesUPerlinNoiseBlueprintLibrary()
	{
		UClass* Class = UPerlinNoiseBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GeneratePerlinNoiseArray", &UPerlinNoiseBlueprintLibrary::execGeneratePerlinNoiseArray },
			{ "GeneratePerlinNoiseTexture", &UPerlinNoiseBlueprintLibrary::execGeneratePerlinNoiseTexture },
			{ "SampleNoiseAtLocation", &UPerlinNoiseBlueprintLibrary::execSampleNoiseAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics
	{
		struct PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms
		{
			int32 Width;
			int32 Height;
			float Frequency;
			int32 Seed;
			float Scale;
			int32 Octaves;
			float Persistence;
			float ScrollX;
			float ScrollY;
			bool NormalizeData;
			FNoiseArray2D ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Octaves;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollY;
		static void NewProp_NormalizeData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizeData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, Seed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Octaves = { "Octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, Octaves), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, Persistence), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_ScrollX = { "ScrollX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, ScrollX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_ScrollY = { "ScrollY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, ScrollY), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_NormalizeData_SetBit(void* Obj)
	{
		((PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms*)Obj)->NormalizeData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_NormalizeData = { "NormalizeData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms), &Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_NormalizeData_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FNoiseArray2D, METADATA_PARAMS(0, nullptr) }; // 3479474763
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Octaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_Persistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_ScrollX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_ScrollY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_NormalizeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise" },
		{ "DisplayName", "Generate Perlin Noise Array" },
		{ "Keywords", "noise, perlin" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlinNoiseBlueprintLibrary, nullptr, "GeneratePerlinNoiseArray", nullptr, nullptr, Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics
	{
		struct PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms
		{
			FNoiseArray2D NoiseArray;
			FLinearColor Color1;
			FLinearColor Color2;
			FLinearColor Color3;
			FLinearColor Color4;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color4;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_NoiseArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_NoiseArray = { "NoiseArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms, NoiseArray), Z_Construct_UScriptStruct_FNoiseArray2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_NoiseArray_MetaData), Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_NoiseArray_MetaData) }; // 3479474763
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms, Color1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms, Color2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color3 = { "Color3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms, Color3), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color4 = { "Color4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms, Color4), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_NoiseArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_Color4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise" },
		{ "DisplayName", "Noise Array 2 Texture" },
		{ "Keywords", "noise, perlin" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlinNoiseBlueprintLibrary, nullptr, "GeneratePerlinNoiseTexture", nullptr, nullptr, Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::PerlinNoiseBlueprintLibrary_eventGeneratePerlinNoiseTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics
	{
		struct PerlinNoiseBlueprintLibrary_eventSampleNoiseAtLocation_Parms
		{
			float X;
			float Y;
			FNoiseArray2D NoiseArray;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventSampleNoiseAtLocation_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventSampleNoiseAtLocation_Parms, Y), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_NoiseArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_NoiseArray = { "NoiseArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventSampleNoiseAtLocation_Parms, NoiseArray), Z_Construct_UScriptStruct_FNoiseArray2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_NoiseArray_MetaData), Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_NoiseArray_MetaData) }; // 3479474763
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerlinNoiseBlueprintLibrary_eventSampleNoiseAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_NoiseArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise" },
		{ "DisplayName", "Sample Noise At Location" },
		{ "Keywords", "noise, perlin" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlinNoiseBlueprintLibrary, nullptr, "SampleNoiseAtLocation", nullptr, nullptr, Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::PerlinNoiseBlueprintLibrary_eventSampleNoiseAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::PerlinNoiseBlueprintLibrary_eventSampleNoiseAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerlinNoiseBlueprintLibrary);
	UClass* Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_NoRegister()
	{
		return UPerlinNoiseBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PerlinNoise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseArray, "GeneratePerlinNoiseArray" }, // 4269882132
		{ &Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_GeneratePerlinNoiseTexture, "GeneratePerlinNoiseTexture" }, // 1297675221
		{ &Z_Construct_UFunction_UPerlinNoiseBlueprintLibrary_SampleNoiseAtLocation, "SampleNoiseAtLocation" }, // 3971920603
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerlinNoiseBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/PerlinNoiseBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerlinNoiseBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::ClassParams = {
		&UPerlinNoiseBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPerlinNoiseBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UPerlinNoiseBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerlinNoiseBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UPerlinNoiseBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPerlinNoiseBlueprintLibrary.OuterSingleton;
	}
	template<> PERLINNOISE_API UClass* StaticClass<UPerlinNoiseBlueprintLibrary>()
	{
		return UPerlinNoiseBlueprintLibrary::StaticClass();
	}
	UPerlinNoiseBlueprintLibrary::UPerlinNoiseBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerlinNoiseBlueprintLibrary);
	UPerlinNoiseBlueprintLibrary::~UPerlinNoiseBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FNoiseRow::StaticStruct, Z_Construct_UScriptStruct_FNoiseRow_Statics::NewStructOps, TEXT("NoiseRow"), &Z_Registration_Info_UScriptStruct_NoiseRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoiseRow), 2335820060U) },
		{ FNoiseArray2D::StaticStruct, Z_Construct_UScriptStruct_FNoiseArray2D_Statics::NewStructOps, TEXT("NoiseArray2D"), &Z_Registration_Info_UScriptStruct_NoiseArray2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoiseArray2D), 3479474763U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPerlinNoiseBlueprintLibrary, UPerlinNoiseBlueprintLibrary::StaticClass, TEXT("UPerlinNoiseBlueprintLibrary"), &Z_Registration_Info_UClass_UPerlinNoiseBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerlinNoiseBlueprintLibrary), 3118058501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_429405882(TEXT("/Script/PerlinNoise"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_PerlinNoiseProject_Plugins_PerlinNoise_Source_PerlinNoise_Public_PerlinNoiseBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
