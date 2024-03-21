#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BasicPerlinNoise.h"
#include "Engine/Texture2D.h"
#include "PerlinNoiseBlueprintLibrary.generated.h"


USTRUCT(BlueprintType)
struct FNoiseRow
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	TArray<float> Data;

	// Overloading the [] operator to access elements in a more convenient way
	FORCEINLINE float& operator[](int32 Index)
	{
		return Data[Index];
	}
};

USTRUCT(BlueprintType)
struct FNoiseArray2D
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	TArray<FNoiseRow> Rows;

	// Overloading the [] operator to access rows in a more convenient way
	FORCEINLINE FNoiseRow& operator[](int32 Index)
	{
		return Rows[Index];
	}
};



UCLASS()
class PERLINNOISE_API UPerlinNoiseBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "Perlin Noise", meta=(DisplayName="Generate Perlin Noise Array", Keywords="noise, perlin"))
	static FNoiseArray2D GeneratePerlinNoiseArray(int32 Width, int32 Height, float Frequency, int32 Seed, float Scale, int32 Octaves, float Persistence, float ScrollX, float ScrollY, bool NormalizeData);

	UFUNCTION(BlueprintCallable, Category = "Perlin Noise", meta=(DisplayName="Noise Array 2 Texture", Keywords="noise, perlin"))
    static UTexture2D* GeneratePerlinNoiseTexture(const FNoiseArray2D& NoiseArray, FLinearColor Color1, FLinearColor Color2, FLinearColor Color3, FLinearColor Color4);

	UFUNCTION(BlueprintCallable, Category = "Perlin Noise", meta=(DisplayName="Sample Noise At Location", Keywords="noise, perlin"))
	static float SampleNoiseAtLocation(float X, float Y, const FNoiseArray2D& NoiseArray);

private:

    static void ShiftNoiseArray(FNoiseArray2D& NoiseArray, int32 ShiftX, int32 ShiftY);

    static void GenerateNoiseForEmptyParts(FNoiseArray2D& NoiseArray, float Frequency, int32 Seed, float Scale, int32 Octaves, float Persistence, float ScrollX, float ScrollY);
    
	static void NormalizeNoiseArray(FNoiseArray2D& NoiseArray);
	
};
