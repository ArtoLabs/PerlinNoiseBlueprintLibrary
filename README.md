# Perlin Noise Blueprint Library For UE 5.3

The PerlinNoiseBlueprintLibrary project is a collaborative effort between Artolabs and ChatGPT 3.5 to create a library for
procedural noise generation using Perlin noise algorithms within Unreal Engine's Blueprint scripting system. The project includes
functions for generating Perlin noise arrays, normalizing noise data, generating noise textures, and
sampling noise values at specific locations. The motivation behind this project was to provide game developers with a convenient
and efficient way to incorporate procedural noise techniques, such as Perlin noise, into their Unreal Engine blueprint projects,
particularly for tasks like procedural landscape generation, and where values need to be generated along a natural progression,
especially when it's important to have full control of the scale, octaves, frequency and persitence of the noise.
The collaboration leveraged the expertise and capabilities of both Artlabs and ChatGPT 3.5 to develop a comprehensive and
easy-to-use library for generating and manipulating Perlin noise in Unreal Engine environments.


READ AND TALK TO THE ORIGINAL CONVERSATION THAT CREATED THIS CODE
https://chat.openai.com/share/a23c587b-0cff-43c8-bedc-18a85a2cb54e

This is a wrapper class for Ryo Suzuki's Basic Perlin Noise that creates blueprint callable functions for use in the Unreal Engine 5.3.

You can find the orginal code here:
https://github.com/Reputeless/PerlinNoise

## Introduction

The PerlinNoiseBlueprintLibrary represents a crucial addition to Unreal Engine, providing a comprehensive suite of functions designed to harness the power of Perlin noise algorithms within the Blueprint scripting system. Originating from the innovative work of Ken Perlin, Perlin noise is a type of gradient noise renowned for its versatility and realism in simulating natural phenomena. Its uses span a wide range of applications, including but not limited to procedural landscape generation, texture synthesis, terrain deformation, organic data simulation (such as weather patterns, temperature fluctuations, and natural terrain features), and various artistic effects in visual media.

One of the most significant advantages of Perlin noise lies in its ability to generate smooth and continuous random-like patterns that exhibit coherence and natural variation. This characteristic makes it indispensable in game development for creating immersive environments, dynamic terrain, and lifelike textures. For instance, in procedural landscape generation, Perlin noise serves as a fundamental building block, allowing developers to generate realistic terrains with varying elevations, terrain features, and natural textures seamlessly integrated into the game world.

The PerlinNoiseBlueprintLibrary is specifically tailored for use with Unreal Engine version 5.3, addressing inherent limitations in the engine's native capabilities regarding Perlin noise generation and manipulation. While Unreal Engine provides a robust framework for game development, it lacks built-in functionality for generating Perlin noise with fine-tuned control over parameters such as scale, octaves, persistence, frequency, and scrolling offsets. Furthermore, Unreal Engine lacks straightforward mechanisms for sampling noise values generated within materials or blueprints, hindering the creation of dynamic and data-driven content.

This collaboration between developers and AI marks a significant milestone in democratizing access to advanced procedural content generation techniques within Unreal Engine. By encapsulating complex Perlin noise algorithms into user-friendly Blueprint nodes, the PerlinNoiseBlueprintLibrary empowers developers of all levels to harness the power of procedural noise seamlessly within their projects. Gone are the days of cumbersome workarounds or the need for external plugins; with this library, developers can create dynamic landscapes, intricate textures, and immersive environmental effects directly within Unreal Engine's Blueprint environment.

The library's functions, such as GeneratePerlinNoiseArray, GenerateNoiseForEmptyParts, NormalizeNoiseArray, GeneratePerlinNoiseTexture, and SampleNoiseAtLocation, offer a cohesive and intuitive toolkit for working with Perlin noise. Whether it's generating procedural terrain, creating dynamic weather systems, or adding organic variation to game assets, the PerlinNoiseBlueprintLibrary empowers developers to unlock a new realm of creative possibilities, enhancing the visual fidelity and immersive experience of their Unreal Engine projects.


## Generate Perlin Noise Array

The GeneratePerlinNoiseArray function within the PerlinNoiseBlueprintLibrary is a foundational piece that enables developers to create 2D Perlin noise arrays with precise control over various parameters. This function is instrumental in generating realistic and organic patterns that can be used for a wide range of applications, from procedural terrain generation to dynamic texture synthesis and environmental effects simulation.

The function takes several input parameters to customize the generated noise array:

- Width and Height: These parameters determine the dimensions of the noise array to be generated. Developers can specify the size of the array based on their requirements, such as the resolution of a terrain or the dimensions of a texture.

- Frequency: Frequency controls the scale of the noise pattern. Higher frequencies result in smaller details and more intricate patterns, while lower frequencies produce broader, smoother variations.

- Seed: The seed parameter allows developers to set the initial state of the random number generator used in the Perlin noise algorithm. Changing the seed produces different variations of the noise pattern while maintaining coherence and continuity.

- Scale: Scale adjusts the magnitude of the noise values, effectively scaling the entire noise pattern up or down. This parameter is crucial for controlling the amplitude of the generated noise and can influence the overall appearance of the pattern.

- Octaves: Octaves determine the complexity and richness of the noise pattern by adding multiple layers of noise with varying frequencies and amplitudes. Increasing the number of octaves adds more detail and realism to the generated noise.

- Persistence: Persistence controls the influence of each octave on the final noise output. Higher persistence values result in stronger contributions from higher-frequency octaves, leading to more pronounced details and variations in the noise pattern.

- ScrollX and ScrollY: These parameters allow for scrolling or panning the noise pattern across the array. By adjusting the scroll values, developers can create dynamic effects such as moving textures, flowing terrain features, or animated environmental elements.

- NormalizeData: The NormalizeData parameter determines whether the generated noise array should be normalized to a specific range, such as [0, 1]. Normalization ensures that the noise values fall within a consistent range, making them easier to work with for subsequent operations.

Inside the GeneratePerlinNoiseArray function, several key steps are performed:

1. Initialization: The function initializes an empty FNoiseArray2D structure, which represents a 2D array of noise values. The dimensions of the array are set based on the Width and Height parameters provided by the developer.

2. Noise Generation: Using the specified parameters (Frequency, Seed, Scale, Octaves, Persistence, ScrollX, ScrollY), the function generates Perlin noise values for each cell of the noise array. The GenerateNoiseForEmptyParts function is called to fill in the empty parts of the array with newly generated noise values.

3. Normalization (Optional): If the NormalizeData parameter is set to true, the function normalizes the noise values in the array to ensure they fall within a standardized range, typically [0, 1]. Normalization is beneficial for ensuring consistent behavior and compatibility with subsequent processing steps.

4. Return Value: Finally, the function returns the populated FNoiseArray2D structure containing the generated Perlin noise array, ready for use in various aspects of game development, including terrain generation, texture creation, and environmental effects simulation.


## Perlin Noise 2 Texture (GeneratePerlinNoiseTexture)

The GeneratePerlinNoiseTexture function in the PerlinNoiseBlueprintLibrary serves as a crucial component for translating 2D Perlin noise arrays into tangible visual representations in the form of textures. This function is designed to bridge the gap between procedural noise generation and texture synthesis, allowing developers to create dynamic and detailed textures for various elements in their Unreal Engine projects.

The function takes several input parameters and performs a series of operations to generate a textured representation of the provided Perlin noise array:

- NoiseArray: This parameter expects an FNoiseArray2D structure, which contains the 2D Perlin noise array generated using the GeneratePerlinNoiseArray function or obtained from another source. The noise array serves as the raw data source for creating the texture.

- Color1, Color2, Color3, Color4: These parameters define the color palette used to visualize the noise array. Developers can specify up to four colors to represent different noise intensity levels or create custom gradient effects.

The internal workings of the GeneratePerlinNoiseTexture function can be broken down into the following steps:

1. Dimension Validation: The function first checks the dimensions of the provided noise array (Width and Height) to ensure they are valid and non-zero. This validation step is essential for preventing errors and ensuring that the texture generation process can proceed smoothly.

2. Texture Creation: Upon successful dimension validation, the function creates a transient UTexture2D object with dimensions matching those of the noise array. The transient texture is suitable for runtime generation and manipulation, making it ideal for procedural texture synthesis.

3. Texture Properties Setup: Various properties of the newly created texture are configured to achieve the desired visual appearance. These properties include setting SRGB to false (to avoid gamma correction), CompressionSettings to TC_HDR (High Dynamic Range), and Filter to TF_Bilinear (bilinear texture filtering).

4. Texture Data Locking: The function locks the texture data for writing, allowing direct manipulation of the pixel values within the texture. This step is crucial for populating the texture with color information derived from the Perlin noise array.

5. Color Palette Creation: A color palette is dynamically created based on the provided Color parameters. If any of the Color parameters are not "almost black" (indicating a non-black color), they are added to the NonBlackColors array, forming the basis of the color palette.

6. Pixel-by-Pixel Processing: The function iterates through each pixel in the texture, corresponding to elements in the noise array. For each pixel, it retrieves the corresponding noise value from the noise array and calculates the corresponding color based on the color palette and noise intensity.

7. Color Interpolation and Shading: Using spline interpolation, the function calculates the final color for each pixel based on its noise intensity and the defined color palette. Additionally, it applies shading based on the noise value, darkening colors for lower noise values and brightening colors for higher noise values.

8. Texture Data Population: The calculated RGBA color values are applied to the texture data, with adjustments for brightness and rounding to integer values within the [0, 255] range. The texture data is updated pixel by pixel to reflect the visual representation of the Perlin noise array.

9. Texture Data Unlocking and Resource Update: Once all pixel operations are complete, the function unlocks the texture data, finalizes the texture's resource updates, and prepares the texture for use within the Unreal Engine environment.

10. Texture Return: Finally, the function returns the generated texture, ready for use in materials, UI elements, terrain surfaces, or any other visual components where dynamic noise-based textures are required.


## Sample Noise At Location

The SampleNoiseAtLocation function within the PerlinNoiseBlueprintLibrary plays a pivotal role in allowing developers to sample and retrieve noise values from a 2D Perlin noise array at specific coordinates. This function is crucial for applications where real-time noise sampling is required, such as simulating organic data fluctuations, procedural content generation, or dynamic material effects based on noise variations.

The function takes three input parameters:

1. X: The X-coordinate (horizontal position) at which to sample the noise in the noise array. This value is expected to be normalized within the range [0, 1], representing a relative position within the noise array's width.

2. Y: The Y-coordinate (vertical position) at which to sample the noise in the noise array. Similar to X, this value is normalized within the range [0, 1], representing a relative position within the noise array's height.

3. NoiseArray: An FNoiseArray2D structure containing the 2D Perlin noise array from which to sample the noise value. This noise array serves as the source of the sampled noise data.

The internal workings of the SampleNoiseAtLocation function can be elaborated as follows:

1. NoiseArray Validation: The function first validates the provided noise array to ensure it is not empty and contains valid noise data. This validation step is essential for preventing potential errors during noise sampling.

2. Dimension Retrieval: The function retrieves the dimensions (Width and Height) of the noise array to determine the valid range of coordinates for noise sampling.

3. Coordinate Clamping: The X and Y coordinates provided as input are normalized values within the range [0, 1]. The function scales these normalized coordinates to match the dimensions of the noise array and clamps them to valid indices within the noise array's data structure.

4. Noise Value Sampling: Using the clamped coordinates, the function accesses the corresponding noise value from the noise array. This noise value represents the intensity or amplitude of Perlin noise at the specified location within the noise array.

5. Noise Value Return: The function returns the sampled noise value, allowing developers to use this value for various purposes such as procedural generation, dynamic effects, or data simulation. The returned noise value is typically within the range [0, 1], reflecting the normalized intensity of Perlin noise at the sampled location.
