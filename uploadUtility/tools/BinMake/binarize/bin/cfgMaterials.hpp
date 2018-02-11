// Conversion of textures to materials is done when loading model.
// It is therefore not neccessary (and it is not possible) to define materials
// for textures that are assigned to shape runtime (like dammaged windows).
// Original materials will be used for such faces.

#define PathToLandText core
class CfgTextureToMaterial
{
  class CarGlass
  {
    textures[]=
    {
      
    };
    material=#SpecularGlass;
  };
  class AirborneGlass
  {
    textures[]=
    {
      
    };
    material=#SpecularGlass;
  };
  class Metal
  {
    textures[]=
    {
      
    };
    material=#Metal;
  };
  class AirBorneMetal
  {
    textures[]=
    {
      
    };
    material=#Metal;
  };
  class RifleMetal
  {
    textures[]=
    {
      
    };
    material=#RifleMetal;
  };
};

class CfgMaterials
{
  // Water material is used for sea landscape parts
  class Water
  {
    PixelShaderID = "Water";
    VertexShaderID = "Water"; // mutlipass/alpha is not used on water

    //ambient[] = {0.4,0.4,0.5,0.6}; /// last number is water alpha
    //diffuse[] = {0.95,0.95,1,1};
    //ambient[] = {0.4,0.4,0.5,0.6}; /// last number is water alpha
    //diffuse[] = {0.47,0.47,0.5,1};

    // color when there is no water texture
    /// applied to both deep and shallow water
    // Alpha is the basic transparency on water depth 0 (shore)
    ambient[] = {0.016,0.0264,0.040,0.4};
    /// applied to shallow water only, based on light direction
    diffuse[] = {0.032,0.128,0.128,1.0};
    forcedDiffuse[] = {0,0,0,0};
    
    //diffuse[] = {0,0,0,1.0};
    //forcedDiffuse[] = {0.078,0.098,0.115,1.0};
    
    specular[] = {1,1,1,0};
    specularPower = 4;
    emmisive[] = {0,0,0,0};
    
    class Stage1
    {
      // normal map expected here
      texture="#(rgb,8,8,3)color(0.5,0.5,1.0,1)"; 
      uvSource="texWaterAnim";
      class uvTransform
      {
        aside[] = {0,4,0};
        up[]    = {4,0,0};
        dir[]   = {0,0,4};
        pos[]   = {0.2,0.5,0};
      };
    };
    class Stage3
    {
      // special texture expected
      texture="#(ai,16,64,1)waterirradiance(16)";
      uvSource="none";
    };
    class Stage4
    {
      // Texture to be overridden by engine
      texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
      uvSource="none";
    };
    class Stage5
    {
      // Texture to be overridden by engine
      texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
      uvSource="none";
    };
  };

  // Shore material is used for interface geometry between sea and terrain
  class Shore
  {
    PixelShaderID = "Shore";
    VertexShaderID = "Shore";

    // color when there is no water texture
    /// applied to both deep and shallow water
    // Alpha is the basic transparency on water depth 0 (shore)
    ambient[] = {0.016,0.0264,0.040,0.4};
    /// applied to shallow water only, based on light direction
    diffuse[] = {0.032,0.128,0.128,1.0};
    forcedDiffuse[] = {0,0,0,0};

    specular[] = {1,1,1,0};
    specularPower = 4;
    emmisive[] = {0,0,0,0};
    
    class Stage1
    {
      // normal map expected here
      texture="#(rgb,8,8,3)color(0.5,0.5,1.0,1)"; 
      uvSource="texWaterAnim";
      class uvTransform
      {
        aside[] = {0,4,0};
        up[]    = {4,0,0};
        dir[]   = {0,0,4};
        pos[]   = {0.2,0.5,0};
      };
    };
    class Stage3
    {
      // special texture expected
      texture="#(ai,16,64,1)waterirradiance(16)";
      uvSource="none";
    };
    class Stage4
    {
      // Texture to be overridden by engine
      texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
      uvSource="none";
    };
    class Stage5
    {
      // Texture to be overridden by engine
      texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
      uvSource="none";
    };
  };

  // Shore foam material is used for foam at the top of the shore
  class ShoreFoam
  {
    PixelShaderID = "ShoreFoam";
    VertexShaderID = "Shore";

    // color when there is no water texture
    /// applied to both deep and shallow water
    // Alpha is the basic transparency on water depth 0 (shore)
    ambient[] = {0.016,0.0264,0.040,0.4};
    /// applied to shallow water only, based on light direction
    diffuse[] = {0.032,0.128,0.128,1.0};
    forcedDiffuse[] = {0,0,0,0};

    specular[] = {1,1,1,0};
    specularPower = 4;
    emmisive[] = {0,0,0,0};
    
    class Stage1
    {
      // normal map expected here
      texture="#(rgb,8,8,3)color(0.5,0.5,1.0,1)"; 
      uvSource="texWaterAnim";
      class uvTransform
      {
        aside[] = {0,4,0};
        up[]    = {4,0,0};
        dir[]   = {0,0,4};
        pos[]   = {0.2,0.5,0};
      };
    };
    class Stage3
    {
      // special texture expected
      texture="#(ai,16,64,1)waterirradiance(16)";
      uvSource="none";
    };
    class Stage4
    {
      // Texture to be overridden by engine
      texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
      uvSource="none";
    };
    class Stage5
    {
      // Texture to be overridden by engine
      texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
      uvSource="none";
    };
  };

  // Shore wet material is used for interface geometry between sea and terrain - the wet part
  class ShoreWet
  {
    PixelShaderID = "ShoreWet";
    VertexShaderID = "Shore";
  };

  // Terrain material is used for terrain solid ground
  class Terrain
  {
    ambient[] = {1,1,1,1};
    diffuse[] = {0.6,0.6,0.6,1};
    forcedDiffuse[] = {0.05,0.05,0.05,1};
    specular[] = {0.0,0.0,0.0,0};
    specularPower = 1; // specular interpolator must not be disabled
    emmisive[] = {0,0,0,0};

    PixelShaderID = "NormalMapDiffuse";
    VertexShaderID = "NormalMapDiffuseAlpha";

    class Stage1
    {
      // neutral normal map
      texture = "#(argb,8,8,3)color(0,0,1,1)";
      uvSource="tex";
      class uvTransform
      {
        aside[] = {1,0,0};
        up[]    = {0,1,0};
        dir[]   = {0,0,1};
        pos[]   = {0,0,0};
      };
    };
    class Stage2
    {
      // neutral detail texture
      texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
      uvSource="tex";
      class uvTransform
      {
        aside[] = {1,0,0};
        up[]    = {0,1,0};
        dir[]   = {0,0,1};
        pos[]   = {0,0,0};
      };
    };
  };
  
  class SpecularGlass
  {
    ambient[] = {1,1,1,1};
    diffuse[] = {1,1,1,1};
    forcedDiffuse[] = {0,0,0,0};
    specular[] = {0.5,0.5,0.8,0};
    specularPower = 5;
    emmisive[] = {0,0,0,0};
  };
  class Metal
  {
    ambient[] = {1,1,1,1};
    diffuse[] = {1,1,1,1};
    forcedDiffuse[] = {0,0,0,0};
    specular[] = {0.2,0.2,0.2,0};
    //specular[] = {1,1,1,1};
    specularPower = 5;
    emmisive[] = {0,0,0,0};
  };
  class RifleMetal
  {
    ambient[] = {1,1,1,1};
    diffuse[] = {1,1,1,1};
    forcedDiffuse[] = {0,0,0,0};
    specular[] = {0.2,0.2,0.2,0};
    //specular[] = {1,1,1,1};
    specularPower = 5;
    emmisive[] = {0,0,0,0};
  };
};
#undef PathToLandText 