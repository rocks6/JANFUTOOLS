//! Register designed for retrieving the diffuse color from VS
#define TEXCOORDAMBIENT TEXCOORD6
#define TEXCOORDSPECULAR TEXCOORD7
#define TEXCOORDDIFFUSE TEXCOORD4

//! Register designed for retrieving the shadow map coordinates from VS
#define TEXCOORDSR TEXCOORD5

/// is fog implemented in pixel shader or post-pixel shader?

#define PS_FOG 0

struct SDetail
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 landShadow               : TEXCOORDSPECULAR;
  half4 diffuseColor             : TEXCOORDDIFFUSE;
  float4 tDiffuseMap_DetailMap    : TEXCOORD0;
  float4 tShadowBuffer            : TEXCOORDSR;
#if PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};

struct SDetailSpecularAlpha
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 specularColor_landShadow : TEXCOORDSPECULAR;
  half4 diffuseColor             : TEXCOORDDIFFUSE;
  float4 tDiffuseMap_DetailMap    : TEXCOORD0;
  float4 tShadowBuffer            : TEXCOORDSR;
#if PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};

struct SNormal
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 landShadow               : TEXCOORDSPECULAR;
  half4 diffuseColor             : TEXCOORDDIFFUSE;
  // TEXCOORD1 normally used for texture uv
  half3 lightingColor             : TEXCOORD1;
  float4 tDiffuseMap              : TEXCOORD0;
  float4 tShadowBuffer            : TEXCOORDSR;
#if PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};

struct SSpecularAlpha
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 specularColor_landShadow : TEXCOORDSPECULAR;
  half4 diffuseColor             : TEXCOORDDIFFUSE;
  float4 tDiffuseMap              : TEXCOORD0;
  float4 tShadowBuffer            : TEXCOORDSR;
#ifdef PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};

struct SSpecularNormalMapGrass
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 lightLocal_landShadow  : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tShadowBuffer          : TEXCOORDSR;
#ifdef PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};

struct SSpecularNormalMapThrough
{
  half4 ambientColor                : TEXCOORDAMBIENT;
  half4 diffuseColor                : TEXCOORDDIFFUSE;
  half4 lightLocal_landShadow       : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap      : TEXCOORD0;
  float4 tDiffuseAtten_AmbientAtten : TEXCOORD1;
  float4 tShadowBuffer              : TEXCOORDSR;
#ifdef PS_FOG
  half4 vector3AndFog               : COLOR0;
#endif
};

struct SSpecularNormalMapSpecularThrough
{
  half4 ambientColor                : TEXCOORDAMBIENT;
  half4 diffuseColor                : TEXCOORDDIFFUSE;
  half4 lightLocal_landShadow       : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap      : TEXCOORD0;
  float4 tDiffuseAtten_AmbientAtten : TEXCOORD1;
  half3 tHalfway                    : TEXCOORD3;
  float4 tShadowBuffer              : TEXCOORDSR;
#ifdef PS_FOG
  half4 vector3AndFog               : COLOR0;
#endif
};

struct SDetailMacroAS
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  half4 diffuseColor           : TEXCOORDDIFFUSE;
  float4 tDiffuseMap_DetailMap  : TEXCOORD0;
  float4 tMacroMap_ShadowMap    : TEXCOORD1;
  float4 tShadowBuffer          : TEXCOORDSR;
#ifdef PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};

struct SDetailSpecularAlphaMacroAS
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 specularColor_landShadow : TEXCOORDSPECULAR;
  half4 diffuseColor             : TEXCOORDDIFFUSE;
  float4 tDiffuseMap_DetailMap    : TEXCOORD0;
  float4 tMacroMap_ShadowMap      : TEXCOORD1;
  float4 tShadowBuffer            : TEXCOORDSR;
#ifdef PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};

struct SNormalMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapDetailMacroASSpecularMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tDetailMap_MacroMap    : TEXCOORD1;
  float4 tShadowMap_SpecularMap : TEXCOORD2;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapDetailMacroASSpecularDIMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tDetailMap_MacroMap    : TEXCOORD1;
  float4 tShadowMap_SpecularMap : TEXCOORD2;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapDetailSpecularMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tDetailMap_SpecularMap : TEXCOORD1;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapDetailSpecularDIMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tDetailMap_SpecularMap : TEXCOORD1;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapMacroAS
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tMacroMap              : TEXCOORD1;
  float4 tShadowMap             : TEXCOORD2;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapMacroASSpecularMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tMacroMap_ShadowMap    : TEXCOORD1;
  float4 tSpecularMap           : TEXCOORD2;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapMacroASSpecularDIMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tMacroMap_ShadowMap    : TEXCOORD1;
  float4 tSpecularMap           : TEXCOORD2;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapSpecularMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tSpecularMap           : TEXCOORD1;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SNormalMapSpecularDIMap
{
  half4 ambientColor           : TEXCOORDAMBIENT;
  half4 landShadow             : TEXCOORDSPECULAR;
  float4 tDiffuseMap_NormalMap  : TEXCOORD0;
  float4 tSpecularMap           : TEXCOORD1;
  half4 tLightLocalAndFog      : COLOR0;
  half3 tHalfway               : TEXCOORD3;
  float4 tShadowBuffer          : TEXCOORDSR;
};

struct SSpecularNormalMapDiffuse
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 specularColor_landShadow : TEXCOORDSPECULAR;
  float4 tColorMap_NormalMap      : TEXCOORD0;
  float4 tDetailMap               : TEXCOORD1;
  half4 tLightLocalAndFog        : COLOR0;
  float4 tShadowBuffer            : TEXCOORDSR;
};

struct SSpecularNormalMapDiffuseMacroAS
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 specularColor_landShadow : TEXCOORDSPECULAR;
  float4 tColorMap_NormalMap      : TEXCOORD0;
  float4 tDetailMap_MacroMap      : TEXCOORD1;
  float4 tShadowMap               : TEXCOORD2;
  half4 tLightLocalAndFog        : COLOR0;
  float4 tShadowBuffer            : TEXCOORDSR;
};

struct STerrain
{
  half4 ambientColor             : TEXCOORDAMBIENT; //6
  half4 specularColor            : TEXCOORDSPECULAR; //7
  float4 tColorMap_NormalMap     : TEXCOORD0;
  float4 tDetailMap_SpecularMap  : TEXCOORD1;
  half4 tLightLocalAndFog        : COLOR0;
  half3 tHalfway                 : TEXCOORD3;
  half3 tEyeLocal                : COLOR1;
  float4 tSatAndMask_GrassMap    : TEXCOORD4;
  float4 tShadowBuffer           : TEXCOORDSR; //5
};

struct SShore
{
  half4 ambientColor      : TEXCOORDAMBIENT;
  half3 specularHalfway   : COLOR0;
  float4 tFresnelView     : TEXCOORD2;
  float4 tNormalMap1_2    : TEXCOORD1;
  float2 tNormalMap3      : TEXCOORD3;
  float4 tHeight          : TEXCOORD0;
  float4 stn2lws0         : TEXCOORD4;
  float4 stn2lws1         : TEXCOORD5;
  float4 stn2lws2         : TEXCOORDSPECULAR;
};

struct SShoreWet
{
  float4 tHeight          : TEXCOORD0;
  float4 tShadowBuffer    : TEXCOORDSR;
};

struct SGlass
{
  half4 ambientColor             : TEXCOORDAMBIENT;
  half4 specularColor_landShadow : TEXCOORDSPECULAR;
  half4 diffuseColor             : TEXCOORDDIFFUSE;
  float4 tDiffuseMap              : TEXCOORD0;
  float4 lwsPosition              : TEXCOORD1;
  half4 lwsNormal                : TEXCOORD2;
  float4 tShadowBuffer            : TEXCOORDSR;
#ifdef PS_FOG
  half4 vector3AndFog            : COLOR0;
#endif
};





struct VSPP_OUTPUT
{
  float4 Position   : POSITION;
  float2 TexCoord   : TEXCOORD;
};
struct VSPP_FOG_OUTPUT
{
  float4 Position   : POSITION;
  float2 TexCoord   : TEXCOORD;
  float Fog         : FOG;
};
struct VSPP_OUTPUT_SHADOWS
{
  float4 Position   : POSITION;
  float2 TexCoord   : TEXCOORD0;
  float4 Color      : COLOR0;
};
struct VSPP4T_OUTPUT
{
  float4 Position   : POSITION;
  float2 TexCoord0  : TEXCOORD0;
  float2 TexCoord1  : TEXCOORD1;
  float2 TexCoord2  : TEXCOORD2;
  float2 TexCoord3  : TEXCOORD3;
};
