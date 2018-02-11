//For fast path defining
#define PathDModel \core\default\default.p3d
#define PathDTexture \core\default_co.paa
#define PathDModelAbs core\default\default.p3d
#define PathDTextureAbs core\default_co.paa

#define ProcTextSkybox1 "#(argb,8,8,3)color(0.35,0.47,0.66,1)"
#define ProcTextSkybox2 "#(argb,8,8,3)color(0.46,0.51,0.67,1)"
#define ProcTextSkybox3 "#(argb,8,8,3)color(0.51,0.57,0.79,1)"
#define ProcTextSkybox4 "#(argb,8,8,3)color(0.56,0.6,0.76,1)"
#define ProcTextSkybox5 "#(argb,8,8,3)color(0.39,0.39,0.4,1)"

// define initial word state
class CfgWorlds
{
	access = ReadAndWrite;
	eastSign=PathDTexture;
	westSign=PathDTexture;
	eastFlag=PathDTexture;
	westFlag=PathDTexture;
	guerrilaSign=PathDTexture;
	guerrilaFlag=PathDTexture;

  // new description of groups
  groupNameFormat = "%GroupSquad-%GroupPlatoon-%GroupCompany";
  class GroupSquad
  {
    class Squad1
    {
      name = "1";
    };
    class Squad2
    {
      name = "2";
    };
    class Squad3
    {
      name = "3";
    };
  };
  class GroupPlatoon
  {
    class Platoon1
    {
      name = "1";
    };
    class Platoon2
    {
      name = "2";
    };
    class Platoon3
    {
      name = "3";
    };
    class Platoon4
    {
      name = "4";
    };
  };
  class GroupCompany
  {
    class CompanyAlpha
    {
      name = "A";
    };
    class CompanyBravo
    {
      name = "B";
    };
    class CompanyCharlie
    {
      name = "C";
    };
    class CompanyDelta
    {
      name = "D";
    };
    class CompanyEcho
    {
      name = "E";
    };
    class CompanyFoxtrot
    {
      name = "F";
    };
    class CompanyGolf
    {
      name = "G";
    };
    class CompanyHotel
    {
      name = "H";
    };
    class CompanyIndia
    {
      name = "I";
    };
    class CompanyKilo
    {
      name = "K";
    };
    class CompanyLima
    {
      name = "L";
    };
    class CompanyMike
    {
      name = "M";
    };
  };

  // old description of groups
  // (kept because of old identities used through scripting)
	class GroupNames
	{
		// note: this is array of classes
		// it must not contain any non-class members
		class Alpha
		{
			name = $STR_CFG_GRPNAMES_ALPHA;
			image = PathDTexture;
		};
		class Bravo
		{
			name = $STR_CFG_GRPNAMES_BRAVO;
			image = PathDTexture;
		};
		class Charlie
		{
			name = $STR_CFG_GRPNAMES_CHARLIE;
			image = PathDTexture;
		};
		class Delta
		{
			name = $STR_CFG_GRPNAMES_DELTA;
			image = PathDTexture;
		};
		class Echo
		{
			name = $STR_CFG_GRPNAMES_ECHO;
			image = PathDTexture;
		};
		class Foxtrot
		{
			name = $STR_CFG_GRPNAMES_FOXTROT;
			image = PathDTexture;
		};
		class Golf
		{
			name = $STR_CFG_GRPNAMES_GOLF;
			image = PathDTexture;
		};
		class Hotel
		{
			name = $STR_CFG_GRPNAMES_HOTEL;
			image = PathDTexture;
		};
		class November
		{
			name = $STR_CFG_GRPNAMES_NOVEMBER;
			image = PathDTexture;
		};
		class Kilo
		{
			name = $STR_CFG_GRPNAMES_KILO;
			image = PathDTexture;
		};
		class Yankee
		{
			name = $STR_CFG_GRPNAMES_YANKEE;
			image = PathDTexture;
		};
		class Zulu
		{
			name = $STR_CFG_GRPNAMES_ZULU;
			image = PathDTexture;
		};
		class Two
		{
			name = $STR_CFG_GRPNAMES_TWO;
			image = PathDTexture;
		};
		class Three
		{
			name = $STR_CFG_GRPNAMES_THREE;
			image = PathDTexture;
		};
		class Buffalo
		{
			name = $STR_CFG_GRPNAMES_BUFFALO;
			image = PathDTexture;
		};
		class Guardian
		{
			name = $STR_CFG_GRPNAMES_GUARDIAN;
			image = PathDTexture;
		};
		class Convoy
		{
			name = $STR_CFG_GRPNAMES_CONVOY;
			image = PathDTexture;
		};
		class Fox
		{
			name = $STR_CFG_GRPNAMES_FOX;
			image = PathDTexture;
		};
	};
	class GroupColors
	{
		//access = ReadOnlyVerified;
		// note: this is array of classes
		// it must not contain any non-class members
		class GroupColor1
		{
			name = $STR_CFG_GRPCOL_BLACK;
			image = PathDTexture;
		};
		class GroupColor2
		{
			name = $STR_CFG_GRPCOL_RED;
			image = PathDTexture;
		};
		class GroupColor3
		{
			name = $STR_CFG_GRPCOL_GREEN;
			image = PathDTexture;
		};
		class GroupColor4
		{
			name = $STR_CFG_GRPCOL_BLUE;
			image = PathDTexture;
		};
		class GroupColor5
		{
			name = $STR_CFG_GRPCOL_YELLOW;
			image = PathDTexture;
		};
		class GroupColor6
		{
			name = $STR_CFG_GRPCOL_ORANGE;
			image = PathDTexture;
		};
		class GroupColor7
		{
			name = $STR_CFG_GRPCOL_PINK;
			image = PathDTexture;
		};
		class GroupColor0
		{
			name = "";
			image = "";
		};
		class Six
		{
			name = $STR_CFG_GRPNAMES_SIX;
			image = PathDTexture;
		};
	};

	class East	// East army definition
	{
		access = ReadAndWrite;
		#include "russiannames.hpp"
	};
	class West	// East army definition
	{
		#include "englishnames.hpp"
	};
	class Guerrila
	{
		#include "civiliannames.hpp"
	};
	class Civilian
	{
		#include "czechnames.hpp"
	};

  #include "cfgLight.hpp"

	class DefaultWorld
	{
		access = ReadAndWrite;

		plateFormat="$$$  ## - ##";
		plateLetters="ABCDEFHIKLMOPRSTVXYZ";

		//default center position
		centerPosition[] = {6400, 6400, 0};

		latitude = -40; // positive is south
		longitude = +15; // positive is east

		class Music: CfgMusic {};
		class EnvSounds: CfgEnvSounds {};

		cutscenes[] = {intro};

		/*Here you are able to replace objects placed in the world in Visitor by other models.
		This was used to replace generic forest models to the proper in-game models for example.
		You can either replace a model with a single other model or a set of other models.
		Example:
			class ForestTriangle
			{
				replace = PathDModelAbs;
				with[] = {};
			};
		center = true can be used as well to center all new objects.*/

		class ReplaceObjects {};

		landGrid = 50; // grid size
		// landRange is stored directly in WRP file

		gridNumbersOverLines = 0;	//displays Numbering over Grid lines instead between

		class Grid
		{
			offsetX = 0;
			offsetY = 0;

			class Zoom1
			{
				zoomMax = 0.1;
				format = "XY";
				formatX = "Aa";
				formatY = "00";
				stepX = 128;
				stepY = 128;
			};
			class Zoom2
			{
				zoomMax = 1e30;
				format = "XY";
				formatX = "A";
				formatY = "0";
				stepX = 1280;
				stepY = 1280;
			};
		};

		startTime = 16:45;
		startDate = 17/11/2006;
		startWeather = 0.12;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;

		class Lighting : DefaultLighting {};

    /** all DayLigthing values consist of 6 values:
      angle of the sun above the horizon
      max. direct light and min. direct light when not hidden by a cloud
      max. direct light and min. direct light when hidden by a cloud
      diffuse is sun or moon? (1=sun, 0=moon)
    */

    // offset to set a basic for luminance values
    #define LV (-4)

    class DayLightingBrightAlmost
    {
      // note: during the nighttime we want the moon to be used instead
      // moon only
      deepNight[]={
        -15, // sun angle
        {0.05,0.05,0.06},{0.001,0.001,0.002}, // max/min direct light
        {0.02,0.02,0.05},{0.003,0.003,0.003}, // max/min direct light (sun hidden by a cloud)
        {0.0001,0.0001,0.0002},{0.0001,0.0001,0.0002}, // sky, sky around sun
        0 // sun - moon weighting
      };
      fullNight[]={
        -5, // sun angle
        {0.05,0.05,0.06},{0.02,0.02,0.02}, // max/min direct light
        {0.04,0.04,0.04},{0.04,0.04,0.04}, // max/min direct light (sun hidden by a cloud)
        {0.01,0.01,0.02},{0.08,0.06,0.06}, // sky, sky around sun
        0 // sun - moon weighting
      };
      // moon-sun crossing - no diffuse lighting used, only ambient
      night[]={
        -2.5,
        {0.08,0.06,0.07},{0.08,0.06,0.07},
        {0.08,0.06,0.07},{0.08,0.06,0.07},
        {0.08,0.07,0.08},{0.14,0.10,0.12},
        0.5
      };
      // sun only
      sunrise[]={
        0,
					{{0.7,0.45,0.45}, 5.5+LV},{{0.07,0.09,0.12},5.0+LV},
					{{0.6,0.47,0.25}, 5.0+LV}, {{0.10,0.09,0.10},4.5+LV},
					{{0.5,0.4,0.4},4.5+LV}, {{0.88,0.51,0.24},6+LV},
        1
      };
      earlyMorning[]={
        5,
					{{0.65,0.55,0.55}, 6+LV},{{0.08,0.09,0.11},5.5+LV},
					{{0.55,0.47,0.25}, 5.75+LV}, {{0.10,0.09,0.10},5.0+LV},
					{{0.5,0.4,0.4},7.5+LV}, {{0.88,0.51,0.24},8.75+LV},
        1
      };
      midMorning[]={
        15,
					{{0.98,0.85,0.8}, 10.5+LV},{{0.08,0.09,0.11},7+LV},
					{{0.87,0.47,0.25}, 9.5+LV}, {{0.09,0.09,0.10},8+LV},
					{{0.5,0.4,0.4},9.5+LV}, {{0.88,0.51,0.24},9.75+LV},
        1
      };

      morning[]={
        25,
					{{1,1,0.9},15.5+LV}, {{0.17,0.18,0.19},13+LV},
					{{1,1,0.9},14.5+LV}, {{0.17,0.18,0.19},13+LV},
					{{0.15,0.15,0.15},14.5+LV},{{0.17,0.17,0.15},15+LV},
        1
      };
      noon[]={
        70,
        {{0.96,0.98,1}, 17+LV},{{0.36,0.37,0.38}, 13.5+LV},
        {{1,1,1}, 15+LV},{{0.36,0.37,0.38}, 12.75+LV},
        {{0.9,0.9,0.9}, 15+LV},{{1.0,1.0,0.9},17+LV},
        1
      };
    };

    // class DayLightingCloudy

    class DayLightingRainy
    {
      // so many clouds there is little difference between cloud or clear
      deepNight[]={
        -15, // sun angle
        {0.02,0.02,0.05},{0.003,0.003,0.003}, // max/min direct light
        {0.02,0.02,0.05},{0.003,0.003,0.003}, // max/min direct light (sun hidden by a cloud)
        {0.001,0.001,0.002},{0.001,0.001,0.002}, // sky, sky around sun
        0 // sun - moon weighting
      };
      fullNight[]={
        -5, // sun angle
        {0.03,0.03,0.03},{0.02,0.02,0.02}, // max/min direct light
        {0.03,0.03,0.03},{0.02,0.02,0.02}, // max/min direct light (sun hidden by a cloud)
        {0.01,0.01,0.02},{0.08,0.06,0.06}, // sky, sky around sun
        0 // sun - moon weighting
      };
      // moon-sun crossing - no diffuse lighting used, only ambient
      night[]={
        -2.5,
        {0.08,0.06,0.07},{0.08,0.06,0.07},
        {0.08,0.06,0.07},{0.08,0.06,0.07},
        {0.08,0.06,0.07},{0.12,0.10,0.11},
        0.5
      };
      // sun only
      #define RainlyLight {1,1,1}
      //#define RainlyLightColor {0.8,0.9,1}
      earlyMorning[]={
        0,
        {RainlyLight,LV+4.5},{RainlyLight,LV+3.75},
        {RainlyLight,LV+4.5},{RainlyLight,LV+3.75},
        {RainlyLight,LV+4},{RainlyLight,LV+4.5},
        1
      };
      morning[]={
        5,
        {RainlyLight,LV+6.5},{RainlyLight,LV+5.75},
        {RainlyLight,LV+6.5},{RainlyLight,LV+5.75},
        {RainlyLight,LV+7},{RainlyLight,LV+7.5},
        1
      };
      lateMorning[]={
        25,
        {RainlyLight,LV+11.75},{RainlyLight,LV+11.0},
        {RainlyLight,LV+11.75},{RainlyLight,LV+11.0},
        {RainlyLight,LV+12},{RainlyLight,LV+12.5},
        1
      };
      noon[]={
        70,
        {RainlyLight,LV+11.75},{RainlyLight,LV+11.0},
        {RainlyLight,LV+11.75},{RainlyLight,LV+11.0},
        {RainlyLight,LV+12},{RainlyLight,LV+12.5},
        1
      };
    };

		class Weather
		{
			/// various parameters depending on "overcast" variable
			class Overcast
			{
				class Weather1
				{
					/// what overcast value is this item for
					overcast = 0;
					/// sky texture
					sky = ProcTextSkybox2;
          //! Sky reflection texture
          skyR = ProcTextSkybox2;
					/// cloud alpha, brightness and speed
					alpha = 0;
					bright = 0.5;
					speed = 0.20;
					/// how much sun, moon and stars are visible through the sky box
					through = 1.0;
					// overcast value used for lighting
					lightingOvercast = 0;
					/// how much of the diffuse light will go through the sky box
					diffuse = 1.0;
					/// how much of the diffuse light will go through the cloud when occluded by it
					cloudDiffuse = 1.0;
					/// sea wave size
					waves = 0.15;
				};

				class Weather2
				{
					/// what overcast value is this item for
					overcast = 0.1;
					sky = ProcTextSkybox2;
          //! Sky reflection texture
          skyR = ProcTextSkybox2;
					alpha = 0.3;
					bright = 0.5;
					speed = 0.25;
					through = 1.0;
          lightingOvercast = 0.1;
					diffuse = 1.0;
					cloudDiffuse = 0.9;
					waves = 0.22;
				};
				class Weather3
				{
					overcast = 0.4;
					sky = ProcTextSkybox3;
          //! Sky reflection texture
          skyR = ProcTextSkybox3;
					alpha = 0.98;
					bright = 0.45;
					speed = 0.40;
					through = 0.8;

          lightingOvercast = 0.6;
					//class Lighting: DayLightingCloudy {};
					diffuse = 0.7;
					cloudDiffuse = 0.4;
					waves = 0.5;
				};
				class Weather4
				{
					overcast = 0.7;
					sky = ProcTextSkybox4;
          //! Sky reflection texture
          skyR = ProcTextSkybox4;
					alpha = 0.97;
					bright = 0.45;
					speed = 0.7;
					through = 0.2;
					diffuse = 0.4;
          lightingOvercast = 0.9;
					// many clouds in the skybox - dynamic clouds do not change much
					cloudDiffuse = 0.75;
					waves = 0.6;
				};
				class Weather5
				{
					overcast = 1.0;
					sky = ProcTextSkybox5;
          //! Sky reflection texture
          skyR = ProcTextSkybox5;
					alpha = 0.98;
					bright = 0.45;
					speed = 1.00;
					through = 0.0;
					diffuse = 0.2;
					// many clouds in the skybox - dynamic clouds do not change much
					cloudDiffuse = 0.95;
					waves = 0.7;
          lightingOvercast = 1.0;
				};
			};
			
			class Lighting
			{
			  class BrightAlmost: DayLightingBrightAlmost
			  {
			    overcast = 0;
			  };
			  
			  class Rainy: DayLightingRainy
			  {
          overcast = 1.0;
			  };
			};
			class ThunderboltNorm
			{
				model = PathDModel;
				soundNear[] = {"", db-10, 1};
				soundFar[] = {"", db-10, 1};
			};
			class ThunderboltHeavy
			{
				model = PathDModel;
				soundNear[] = {"", db-10, 1};
				soundFar[] = {"", db-10, 1};
			};
		};
		class Rain
		{
			texture = PathDTextureAbs;
			speed = 1;
			levels[]={8, 2};
			raindrop = PathDModel;
		};
    /// sky texture, used only as default when there is no weather
    skyTexture = ProcTextSkybox1;
    //! Sky reflection texture, used only as default when there is no weather
    skyTextureR = ProcTextSkybox1;
    /// texture used for water surface
    // wave detection texture expected by the shaders
    seaTexture = "#(rgb,8,8,3)color(0,0,0,1)";
    /// texture used outside of the map (sea bed or infinite desert)
    //outsideMultipass = PathToLandText\pt.bimpas;
    outsideMultipass ="";
    /// height used outside of the map
    outsideHeight = -10;
    /// min. height - used to clamp data inside of the map during rendering
    minHeight = -10;
    /// shore effects - based on water depth (negative means water above the water level)
    shoreTop = 0; // top point where water is considered off-shore
    peakWaveTop = -1; // point where water peaks should be max. visible before going offshore
    peakWaveBottom = -5; // point where water peaks should start appearing


    clouds[] = {PathDModelAbs, PathDModelAbs, PathDModelAbs, PathDModelAbs};

    /// where ground detail texture is no longer visible (end fading out)
    noDetailDist = 50;
    /// where ground detail texture is fully visible (begin fading out)
    fullDetailDist = 20;

    /// controls density of clutters (size of square where single clutter is present)
    clutterGrid = 2;
    /// how far clutters are visible
    clutterDist = 50;
    /// maximal size of clutters (for clipping)
    clutterRadius = 1.0;
    class DefaultClutter
    {
      /// Determines the affection of the clutter to the wind (0 - stone, 1 - common grass)
      affectedByWind = 0;
      /// how much is the clutter colored by the ground
      //colorByGround = 0.5; //obsolete
      /// if colored by the ground, desired color relative to the ground
      relativeColor[] = {1, 1, 1, 1};
      /// minimal scale
      scaleMin = 0.5;
      /// maximal scale
      scaleMax = 1.0;
      /// Use default lighting
      swLighting = true;
    };
    class Clutter {};

    skyObject = "core\skyobject\skyobject.p3d";
    starsObject = PathDModelAbs;
    horizontObject = PathDModelAbs;
    haloObject = PathDModelAbs;
    sunObject = PathDModelAbs;
    rainbowObject = PathDModelAbs;
    moonObject = PathDModelAbs;
    waterTexture = ProcTextSkybox1;

    //@{ layered terrain rendering data
    satelliteMap = "";
    layerMask = "";
    //@}

    // Water material is used for sea landscape parts
    seaMaterial = "#water";

    // Shore material is used for sea and landscape interface parts
    shoreMaterial = "#shore";

    // Shore material is used for sea and landscape interface parts - the foam part
    shoreFoamMaterial = "#shoreFoam";

    // Shore wet material is used for sea and landscape interface parts - the wet part
    shoreWetMaterial = "#shoreWet";

    // Terrain material is used for terrain solid ground
    // by default load from CfgMaterials
    terrainMaterial = "#terrain";

		// fractal and white noise random offset are added
		// white noise generated more "wild" terrain
		// fractal tends to generate smooth, varied terrain
		class Subdivision
		{
			// fractal component of subdivision
			// changes are smaller for smaller rectangles
			class Fractal
			{
				// texture roughness factor
				rougness = 10;
				// max. value for squares containing road
				maxRoad = 0.2;
				// max. value for squares containing track
				maxTrack = 1.0;
				// max. coeficient depending on slope
				maxSlopeFactor = 0.05;
			};
			// white noise component of subdivision
			// change size is independent on rectangle size
			class WhiteNoise
			{
				rougness = 5;
				// max. value for squares containing road
				maxRoad = 0.1;
				// max. value for squares containing track
				maxTrack = 0.5;
				// max. coeficient depending on slope
				maxSlopeFactor = 0.025;
			};

			// do not divide surfaces that are under given limit
			minY = -0.0;
			// do not divide flat surfaces
			minSlope = 0.02;
		};

		/// ambient life configuration
		class Ambient
		{
		  /*
		  class Birds
		  {
		    /// container radius
		    radius=170;
		    /// points allowed for this container
		    cost=3;
  		  /// classname in Species corresponds to type name
		    class Species
		    {
		      class Seagull
		      {
		        probability=1;
		        cost=1;
		      };
		    };
		    class Insects
		    {
		      radius=3;
		      cost=5;
		      /// species configuration
		      class Species
		      {
		        class Fly
		        {
		          probability=0.9;
		          cost=1;
		        };
		        class Mosquito
		        {
		          probability=0.1;
		          cost=1;
		        };
		      };
		    };
		  };
		  */
		};
	};


	initWorld = "";
	demoWorld = "";


};

class CfgWorldList
{
	// allow register new worlds here
	access = ReadAndCreate;
};
#undef PathDModel
#undef PathDModelAbs
#undef PathDTexture
#undef PathDTextureAbs
