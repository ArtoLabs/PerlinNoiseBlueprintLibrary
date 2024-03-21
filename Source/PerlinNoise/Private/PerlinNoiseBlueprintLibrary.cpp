/* 
Copyright (C) 2024 Michael Betthauser

The PerlinNoiseBlueprintLibrary project is a collaborative effort between Mike Betthauser and ChatGPT 3.5 to create a library for 
procedural noise generation using Perlin noise algorithms within Unreal Engine's Blueprint scripting system. The project includes 
functions for generating Perlin noise arrays, normalizing noise data, generating noise textures, and 
sampling noise values at specific locations. The motivation behind this project was to provide game developers with a convenient 
and efficient way to incorporate procedural noise techniques, such as Perlin noise, into their Unreal Engine blueprint projects, 
particularly for tasks like procedural landscape generation, and where values need to be generated along a natural progression,
especially when it's important to have full control of the scale, octaves, frequency and persitence of the noise.
The collaboration leveraged the expertise and capabilities of both Mike Betthauser and ChatGPT 3.5 to develop a comprehensive and 
easy-to-use library for generating and manipulating Perlin noise in Unreal Engine environments.

====================================================================
READ AND TALK TO THE ORIGINAL CONVERSATION THAT CREATED THIS CODE
https://chat.openai.com/share/a23c587b-0cff-43c8-bedc-18a85a2cb54e
====================================================================

This is a wrapper class for Ryo Suzuki's Basic Perlin Noise that creates blueprint callable functions for use in the Unreal Engine 5.3.
Please see the BasicPerlinNoise.h file for a complete description of Ryo Suzuki's Basic Perlin Noise including all sources.

Perlin noise is a type of gradient noise used in computer graphics and procedural content generation. It's commonly used to create 
natural-looking textures, terrain, and patterns by simulating random variations. In game programming, a 2D noise array generated 
using Perlin noise algorithms can be used for various purposes such as procedural landscape generation, creating realistic terrain 
features like mountains and valleys, generating textures for surfaces like water or grass, and adding natural randomness to game 
elements like clouds or foliage placement.

====================================================================
PerlinNoiseBlueprintLibrary Class
====================================================================

GeneratePerlinNoiseArray:
This function generates a 2D noise array based on specified parameters. It takes inputs such as width, height, frequency, seed, 
scale, octaves, persistence, scrolling values, and a flag to normalize the data. The generated noise array is returned as a pointer.

GenerateNoiseForEmptyParts:
This function generates noise values for empty cells in a noise array. It fills empty cells based on parameters such as frequency, 
seed, scale, octaves, persistence, and scrolling values. The noise array is modified directly to populate empty parts.

NormalizeNoiseArray:
NormalizeNoiseArray function normalizes the values in a noise array to a range of 0 to 1. It adjusts the input noise array in place, 
ensuring that the noise values are within a standardized range for further processing or visualization.

SampleNoiseAtLocation:
The SampleNoiseAtLocation function samples the noise value at a specified location within a noise array or texture. It takes inputs 
such as the noise array or texture, and the coordinates (X, Y) of the location to sample. The function retrieves the noise value at 
the given location and returns it to the caller for further processing or visualization purposes. This function is useful for accessing 
specific noise values at precise positions within a generated noise map.

GeneratePerlinNoiseTexture:
The GeneratePerlinNoiseTexture function in the PerlinNoiseBlueprintLibrary class creates a 2D texture using Perlin noise values and 
specified color gradients. It takes inputs such as a 2D noise array and four color gradients, generates a UTexture2D object with 
the noise array dimensions, and maps noise values to colors using spline interpolation. The function applies shading based on noise 
values, adjusts color brightness, and stores the resulting RGBA values in the texture data. It then updates and returns the generated 
texture.
*/

#include "PerlinNoiseBlueprintLibrary.h"



// This function generates a 2D Perlin noise array based on the specified parameters.
FNoiseArray2D UPerlinNoiseBlueprintLibrary::GeneratePerlinNoiseArray(int32 Width, int32 Height, float Frequency, int32 Seed, float Scale, int32 Octaves, float Persistence, float ScrollX, float ScrollY, bool NormalizeData)
{

    FNoiseArray2D NoiseArray;
    // Resize the noise array based on the provided dimensions
    NoiseArray.Rows.Init(FNoiseRow(), Height); // Initialize rows in the noise array
    for (FNoiseRow& Row : NoiseArray.Rows)
    {
        Row.Data.Init(0.0f, Width); // Initialize data in each row with zero
    }

    // Generate new noise for the empty parts of the array
    GenerateNoiseForEmptyParts(NoiseArray, Frequency, Seed, Scale, Octaves, Persistence, ScrollX, ScrollY);

    // Normalize the noise array if required
    if (NormalizeData)
    {
        NormalizeNoiseArray(NoiseArray); // Normalize the noise array values
    }

    return NoiseArray; // Return the generated 2D Perlin noise array
}


// This function generates Perlin noise for the empty parts of the specified 2D noise array.
void UPerlinNoiseBlueprintLibrary::GenerateNoiseForEmptyParts(FNoiseArray2D& NoiseArray, float Frequency, int32 Seed, float Scale, int32 Octaves, float Persistence, float ScrollX, float ScrollY)
{
    const int32 Width = NoiseArray.Rows.Num() > 0 ? NoiseArray.Rows[0].Data.Num() : 0; // Get the width of the noise array
    const int32 Height = NoiseArray.Rows.Num(); // Get the height of the noise array

    siv::BasicPerlinNoise<double> NoiseGenerator(Seed); // Initialize the Perlin noise generator

    for (int32 y = 0; y < Height; ++y) // Loop through each row of the noise array
    {
        for (int32 x = 0; x < Width; ++x) // Loop through each element in the row
        {
            // Generate noise only for the cells that have a value of 0 (empty cells)
            if (FMath::IsNearlyZero(NoiseArray[y][x]))
            {
                // Calculate the noise coordinates based on scroll values and frequency
                float nx = (x + ScrollX) * Frequency;
                float ny = (y + ScrollY) * Frequency;
                // Generate Perlin noise at the specified coordinates with the given parameters
                float noiseValue = NoiseGenerator.octave2D_01(nx, ny, Octaves, Persistence) * Scale;
                // Set the noise value in the noise array at the current position
                NoiseArray[y][x] = noiseValue;
            }
        }
    }
}


void UPerlinNoiseBlueprintLibrary::NormalizeNoiseArray(FNoiseArray2D& NoiseArray)
{
    // Check if the array is empty
    if (NoiseArray.Rows.Num() == 0 || NoiseArray.Rows[0].Data.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot normalize empty noise array."));
        return;
    }

    // Find the minimum and maximum values in the array
    float MinValue = NoiseArray.Rows[0][0];
    float MaxValue = NoiseArray.Rows[0][0];

    for (const FNoiseRow& Row : NoiseArray.Rows)
    {
        for (float Value : Row.Data)
        {
            MinValue = FMath::Min(MinValue, Value);
            MaxValue = FMath::Max(MaxValue, Value);
        }
    }

    // Normalize the array based on the minimum and maximum values
    float Range = MaxValue - MinValue;
    if (FMath::IsNearlyZero(Range))
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot normalize noise array with zero range."));
        return;
    }

    for (FNoiseRow& Row : NoiseArray.Rows)
    {
        for (float& Value : Row.Data)
        {
            Value = (Value - MinValue) / Range;
        }
    }
}


UTexture2D* UPerlinNoiseBlueprintLibrary::GeneratePerlinNoiseTexture(const FNoiseArray2D& NoiseArray, FLinearColor Color1, FLinearColor Color2, FLinearColor Color3, FLinearColor Color4)
{
    // Get the dimensions of the noise array
    int32 Width = NoiseArray.Rows.Num() > 0 ? NoiseArray.Rows[0].Data.Num() : 0;
    int32 Height = NoiseArray.Rows.Num();

    // Check if the dimensions are valid
    if (Width <= 0 || Height <= 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid noise array dimensions."));
        return nullptr;
    }

    // Create a transient texture with the specified dimensions
    UTexture2D* NoiseTexture = UTexture2D::CreateTransient(Width, Height);
    if (!NoiseTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create transient texture."));
        return nullptr;
    }

    // Set texture properties
    NoiseTexture->SRGB = false;
    NoiseTexture->CompressionSettings = TC_HDR;
    NoiseTexture->Filter = TF_Bilinear;

    // Lock the texture data for writing
    uint8* TextureData = static_cast<uint8*>(NoiseTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE));

    // Create an array to store non-black colors
    TArray<FLinearColor> NonBlackColors;
    if (!Color1.IsAlmostBlack())
        NonBlackColors.Add(Color1);
    if (!Color2.IsAlmostBlack())
        NonBlackColors.Add(Color2);
    if (!Color3.IsAlmostBlack())
        NonBlackColors.Add(Color3);
    if (!Color4.IsAlmostBlack())
        NonBlackColors.Add(Color4);

    for (int32 y = 0; y < Height; ++y)
    {
        for (int32 x = 0; x < Width; ++x)
        {
            float NoiseValue = FMath::Clamp(NoiseArray.Rows[y].Data[x], 0.0f, 1.0f);

            // Calculate the color based on the number of non-black colors using spline interpolation
            FLinearColor FinalColor;
            if (NonBlackColors.Num() > 0)
            {
                float Interpolation = NoiseValue * (NonBlackColors.Num() - 1);
                int32 LowerColorIndex = FMath::Clamp(FMath::FloorToInt(Interpolation), 0, NonBlackColors.Num() - 1);
                int32 UpperColorIndex = FMath::Clamp(FMath::CeilToInt(Interpolation), 0, NonBlackColors.Num() - 1);

                // Calculate fractional part for spline interpolation
                float Fraction = FMath::Frac(Interpolation);

                // Get the colors for spline interpolation
                FLinearColor LowerColor = NonBlackColors[LowerColorIndex];
                FLinearColor UpperColor = NonBlackColors[UpperColorIndex];

                // Perform spline interpolation
                FinalColor = FMath::CubicInterp(LowerColor, LowerColor, UpperColor, UpperColor, Fraction);
            }
            else
            {
                // If all colors are black, revert to using greyscale
                FinalColor = FLinearColor(NoiseValue, NoiseValue, NoiseValue);
            }
            // Apply shading based on noise value
            FLinearColor ShadedColor;
            if (NoiseValue < 0.5f)
            {
                // Darken towards black for noise values below 0.5
                ShadedColor = FinalColor * (NoiseValue * 2.0f);
            }
            else
            {
                // Brighten towards white for noise values above or equal to 0.5
                float Brightening = FMath::Clamp((NoiseValue - 0.5f) / 4.0f, 0.0f, 1.0f);
                ShadedColor = FinalColor + (FLinearColor::White - FinalColor) * Brightening;
            }

            // Set RGBA values in texture data with adjusted brightness
            int32 PixelIndex = (y * Width + x) * 4;
            TextureData[PixelIndex + 0] = FMath::RoundToInt(FMath::Clamp(ShadedColor.B, 0.0f, 1.0f) * 255.0f); // B
            TextureData[PixelIndex + 1] = FMath::RoundToInt(FMath::Clamp(ShadedColor.G, 0.0f, 1.0f) * 255.0f); // G
            TextureData[PixelIndex + 2] = FMath::RoundToInt(FMath::Clamp(ShadedColor.R, 0.0f, 1.0f) * 255.0f); // R
            TextureData[PixelIndex + 3] = 255; // A
        }
    }
    // Unlock the texture data and update the resource
    NoiseTexture->PlatformData->Mips[0].BulkData.Unlock();
    NoiseTexture->UpdateResource();

    return NoiseTexture;
}


float UPerlinNoiseBlueprintLibrary::SampleNoiseAtLocation(float X, float Y, const FNoiseArray2D& NoiseArray)
{
    // Check if the NoiseArray is valid
    if (NoiseArray.Rows.Num() == 0 || NoiseArray.Rows[0].Data.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid noise array."));
        return 0.0f;
    }

    // Get the dimensions of the noise array
    int32 Width = NoiseArray.Rows[0].Data.Num();
    int32 Height = NoiseArray.Rows.Num();

    // Clamp X and Y within valid range
    int32 ClampedX = FMath::Clamp(FMath::FloorToInt(X * Width), 0, Width - 1);
    int32 ClampedY = FMath::Clamp(FMath::FloorToInt(Y * Height), 0, Height - 1);

    // Sample the noise value at the specified location
    return NoiseArray.Rows[ClampedY].Data[ClampedX];
}