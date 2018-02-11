#ifndef _RSC_COMMON_HPP
#define _RSC_COMMON_HPP

//Todo:
//Color and size defines should not be absolute.
//Change to use same class hierarchy as documentation.

//Common defines:

//Fonts

//Main sizes
#define Size_Main_Very_Small 0.018
#define Size_Main_Small 0.027
#define Size_Main_Normal 0.04

//Control sizes
#define Size_Text_Default Size_Main_Normal
#define Size_Text_Very_Small Size_Main_Very_Small
#define Size_Text_Small Size_Main_Small

//Base colors
#define Color_Black {0, 0, 0, 1}
#define Color_White {1, 1, 1, 1}
#define Color_WhiteDark {0.85, 0.85, 0.85, 1}
#define Color_Orange {1, 0.5, 0, 1}
#define Color_Gray {0.3, 0.3, 0.3, 1}
#define Color_GrayLight {0.6, 0.6, 0.6, 1}
#define Color_GrayDark {0.2, 0.2, 0.2, 1}

//Main colors
#define Color_Main_Active1 Color_GrayLight
#define Color_Main_Select1 Color_WhiteDark
#define Color_Main_Foreground1 Color_White
#define Color_Main_Background1 Color_Gray
#define Color_Main_Background2 Color_Gray

//Control colors
#define Color_Text_Default Color_Main_Foreground1
#define Color_Text_Orange Color_Main_Foreground1
#define Color_Background Color_Main_Background1
#define Color_Text_White Color_White

//Procedural colors
#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"
#define ProcTextBlack "#(argb,8,8,3)color(0,0,0,1)"
#define ProcTextGray "#(argb,8,8,3)color(0.3,0.3,0.3,1)"
#define ProcTextRed "#(argb,8,8,3)color(1,0,0,1)"
#define ProcTextGreen "#(argb,8,8,3)color(0,1,0,1)"
#define ProcTextBlue "#(argb,8,8,3)color(0,0,1,1)"
#define ProcTextOrange "#(argb,8,8,3)color(1,0.5,0,1)"

//Default text/font attributes for structured text controls.
class DefaultTextAttributes
{
	font = FontMAIN;
	color = "#ffffff";
	size = 1;
	align = "left";
	valign = "middle";
	shadow = "true";
	shadowOffset = 0.1;
	shadowColor = "#000000";
	underline = "false";
};

//Default sounds for controls.
class DefaultSounds
{
	soundOK[] = {"", 0.1, 1};
	soundCancel[] = {"", 0.1, 1};
	soundChangeFocus[] = {"", 0.1, 1};
	soundFail[] = {"", 0.1, 1};
};

//Standard static text.
class RscText
{
	access = ReadAndWrite;
	type = CT_STATIC;
	idc = -1;
	style = ST_LEFT;
	w = 0.1;
	h = 0.05;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = Color_Text_Default;
	text = "";
};

//Small static text.
class RscTextSmall: RscText
{
	h = 0.03;
	sizeEx = Size_Text_Small;
};

//Standard static text title.
class RscTitle: RscText
{
	style = ST_CENTER;
	x = 0.15;
	y = 0.06;
	w = 0.7;
};

//Standard progress bar.
class RscProgress
{
	access = ReadAndWrite;
	type = CT_PROGRESS;
	style = 0;
	colorFrame[] = Color_Text_Default;
	colorBar[] = Color_Text_Default;
	w = 1.2;
	h = 0.03;
};

class RscPicture
{
	access = ReadAndWrite;
	type = CT_STATIC;
	idc = -1;
	style = ST_PICTURE;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = FontMAIN;
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
};

//Standard HTML control.
class RscHTML
{
	access = ReadAndWrite;
	type = CT_HTML;
	idc = -1;
	style = 0;
	filename = "";
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = Color_Text_Default;
	colorBold[] = {0, 0, 0.2, 1};
	colorLink[] = Color_Orange;
	colorLinkActive[] = Color_Orange;
	colorPicture[] = {1, 1, 1, 1};
  colorPictureLink[] = {1, 1, 1, 1};
	colorPictureSelected[] = {1, 1, 1, 1};
	colorPictureBorder[] = {0, 0, 0, 0};
	tooltipColorText[] = {0, 0, 0, 1};
	tooltipColorBox[] = {0, 0, 0, 0.5};
	tooltipColorShade[] = {1, 1, 0.7, 1};

  prevPage = ProcTextWhite;
  nextPage = ProcTextWhite;

	class H1
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H2
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H3
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H4
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H5
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H6
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class P
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};
};

//Standard button.
class RscButton
{
  // common control items
	access = ReadAndWrite;
	type = CT_BUTTON;
	style = ST_LEFT;
  x = 0;
  y = 0;
	w = 0.3;
	h = 0.1;

  // text properties
  text = "";
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	colorText[] = Color_Black;
  colorDisabled[] = Color_Gray;

  // background properties
  colorBackground[] = Color_GrayLight;
  colorBackgroundDisabled[] = Color_GrayLight;
  colorBackgroundActive[] = Color_Orange;
  offsetX = 0.004; // distance of background from shadow
  offsetY = 0.004;
  offsetPressedX = 0.002; // distance of background from shadow when button is pressed
  offsetPressedY = 0.002;
  colorFocused[] = Color_Black; // color of the rectangle around background when focused

  // shadow properties
  colorShadow[] = Color_Black;

  // border properties
  colorBorder[] = Color_Black;
  borderSize = 0.008; // when negative, the border is on the right side of background

  // sounds
  soundEnter[] = {"", 0.1, 1};
  soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
};

class RscButtonSmall: RscButton
{
	w = 0.12;
};

//Standard edit text field.
class RscEdit
{
	access = ReadAndWrite;
	type = CT_EDIT;
	style = ST_LEFT;
	h = 0.04;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = Color_Text_Default;
	colorSelection[] = {1, 1, 1, 0.25};
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	autocomplete = "";
	text = "";
	size = 0.2;
};

//Standard combo box.
class RscCombo
{
	access = ReadAndWrite;
	type = CT_COMBO;
	style = 0;
	h = 0.05;
	wholeHeight = 0.25;
	colorSelect[] = Color_GrayLight;
	colorText[] = Color_Text_Default;
	colorBackground[] = Color_GrayDark;
  colorScrollbar[] = Color_Text_Default;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
  soundSelect[] = {"", 0.1, 1};
  soundExpand[] = {"", 0.1, 1};
  soundCollapse[] = {"", 0.1, 1};
};

//Standard listbox.
class RscListBox
{
	access = ReadAndWrite;
	type = CT_LISTBOX;
	style = 0;
	w = 0.4;
	h = 0.4;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	rowHeight = 0;
	colorText[] = Color_Text_Default;
  colorScrollbar[] = Color_Text_Default;
	colorSelect[] = Color_Black;
	colorSelect2[] = Color_Orange;
 	colorSelectBackground[] = Color_GrayLight;
	colorSelectBackground2[] = Color_GrayDark;
	colorBackground[] = Color_Black;
  soundSelect[] = {"", 0.1, 1};
	period = 1;
};

class RscTree
{
	access = ReadAndWrite;
	type = CT_TREE;
	style = 0;
	colorBackground[] = {0.35, 0.38, 0.36, 1};
	colorSelect[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 0.75};
	colorBorder[] = {1, 1, 1, 1};
	colorArrow[] = {1, 1, 1, 1};
	font = FontMAIN;
	sizeEx = Size_Text_Default;
};

//Standard slider
class RscSlider
{
	access = ReadAndWrite;
	type = CT_SLIDER;
	style = SL_HORZ;
	h = 0.028;
	w = 0.3;
	color[] = Color_Text_Default;
	colorActive[] = {1, 1, 1, 1};
};

//Remove
class RscSliderH: RscSlider {};

//Standard active text.
class RscActiveText
{
	access = ReadAndWrite;
	type = CT_ACTIVETEXT;
	style = ST_CENTER;
	h = 0.05;
	w = 0.15;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
  color[] = Color_Text_Default;
	colorActive[] = {1, 0.5, 0, 1};
	soundEnter[] = {"", 0.1, 1};
	soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
	text = "";
	default = 0;
};

//Standard structured text.
class RscStructuredText
{
	access = ReadAndWrite;
	type = CT_STRUCTURED_TEXT;
	idc = -1;
	style = 0;
	h = 0.05;
	text = "";
	size = Size_Text_Default;
	colorText[] = Color_Text_Default;

	class Attributes
	{
		font = FontMAIN;
		color = "#ffffff";
		align = "center";
		shadow = true;
	};
};

//Standard controls group.
class RscControlsGroup
{
  type = CT_CONTROLS_GROUP;
  idc = -1;
  style = 0;
  x = 0; y = 0;
  w = 1; h = 1;

  class VScrollbar
  {
    color[] = Color_Text_Default;
    width = 0.021;
  };

  class HScrollbar
  {
    color[] = Color_Text_Default;
    height = 0.028;
  };

  class Controls {};
};

class RscBackgroundStripeTop: RscText
{
	access = ReadAndWrite;
	x = -10.0;
	y = -10.0;
	w = 21;
	h = 10.125;
	text = ;
	colorBackground[] = {0.1, 0.1, 0.1, 1};
};

class RscBackgroundStripeBottom: RscText
{
	access = ReadAndWrite;
	x = -10.0;
	y = 0.875;
	w = 21;
	h = 10.125;
	text = ;
	colorBackground[] = {0.1, 0.1, 0.1, 1};
};

class RscDisplayBackgroundStripes
{
	access = ReadAndWrite;
	class Background1: RscBackgroundStripeTop {};
	class Background2: RscBackgroundStripeBottom {};
};

class RscCinemaBorder: RscDisplayBackgroundStripes
{
	idd = -1;
	movingEnable = false;

	class controlsBackground
	{
		class Background1: RscBackgroundStripeTop
		{
		  	colorBackground[] = {0, 0, 0, 1};
		};

		class Background2: RscBackgroundStripeBottom
		{
		  	colorBackground[] = {0, 0, 0, 1};
		};
	};
};

//Standard toolbox.
class RscToolbox
{
	access = ReadAndWrite;
	type = CT_TOOLBOX;
	style = ST_CENTER;
	colorText[] = Color_Text_Default;
	color[] = Color_Text_Default;
	colorTextSelect[] = Color_Text_Default;
	colorSelect[] = Color_Text_Default;
	colorTextDisable[] = Color_Text_Default;
	colorDisable[] = Color_Text_Default;
	font = FontMAIN;
	sizeEx = Size_Text_Small;
};

class RscXKeyShadow
{
	type = CT_XKEYDESC;
	idc = -1;
	style = 0;
	h = 0.06;
	size = SizeNormal;
	class Attributes
	{
		font = FontX;
		color = "#C0C1BF";
		align = "left";
	};
	class AttributesImage
	{
		color = "#ffffff";
	};
};

class RscXKey : RscXKeyShadow
{
  class Attributes
  {
		shadow = false;		
	};
};
//Standard map.
class RscMapControl
{
	access = ReadAndWrite;
	type = CT_MAP_MAIN;
	idc = IDC_MAP;
	style = ST_PICTURE;
	colorBackground[] = {1, 1, 1, 1};
	colorText[] = {0, 0, 0, 1};
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	
	colorSea[] = {0.56, 0.8, 0.98, 0.5};
	colorForest[] = {0.6, 0.8, 0.2, 0.5};
	colorRocks[] = {0.5, 0.5, 0.5, 0.5};
	colorCountlines[] = {0.65, 0.45, 0.27, 0.5};
	colorMainCountlines[] = {0.65, 0.45, 0.27, 1};
	colorCountlinesWater[] = {0, 0.53, 1, 0.5};
	colorMainCountlinesWater[] = {0, 0.53, 1, 1};
	colorForestBorder[] = {0.4, 0.8, 0, 1};
	colorRocksBorder[] = {0.5, 0.5, 0.5, 1};
	colorPowerLines[] = {0, 0, 0, 1};
	colorNames[] = {0, 0, 0, 1};
	colorInactive[] = {1, 1, 1, 0.5};
	colorLevels[] = {0, 0, 0, 1};
	
	fontLabel = FontMAIN;
	sizeExLabel = Size_Text_Default;
	fontGrid = FontMAIN;
	sizeExGrid = Size_Text_Default;
	fontUnits = FontMAIN;
	sizeExUnits = Size_Text_Default;
	fontNames = FontMAIN;
	sizeExNames = Size_Text_Default;
	fontInfo = FontMAIN;
	sizeExInfo = Size_Text_Default;
	fontLevel = FontMAIN;
	sizeExLevel = Size_Text_Default;
	
	text = ProcTextWhite;
	
	stickX[] = {0.2, {"Gamma", 1, 1.5}};
	stickY[] = {0.2, {"Gamma", 1, 1.5}};
	
	// Map drawing quality coefficients:
	//  units - the width of the screen == 800
	//  limits - size of the landscape square on screen when objects are drawn or single square content is drawn
	
	//@{ coefficients which determine rendering density / threshold
	ptsPerSquareSea = 6;   // seas
	ptsPerSquareTxt = 8;   // textures
	ptsPerSquareCLn = 8;   // count-lines
	ptsPerSquareExp = 8;   // exposure
	ptsPerSquareCost = 8;  // cost
	//@}
	
	//@{ coefficients which determine when rendering of given type is done
	ptsPerSquareFor = 4.0f;   // forests
	ptsPerSquareForEdge = 10.0f;   // forest edges
	ptsPerSquareRoad = 2;  // roads
	ptsPerSquareObj = 10;    // other objects
	//@}

  showCountourInterval = "true";
	
  class Legend
  {
    x = 0.7;
    y = 0.85;
    w = 0.25;
    h = 0.1;

    font = FontMAIN;
    sizeEx = Size_Text_Default;

    colorBackground[] = {1, 1, 1, 1};
    color[] = {0, 0, 0, 1};
  };

	class ActiveMarker
	{
		color[] = {0.3, 0.1, 0.9, 1};
		size = 50;
	};

	class Command
	{
		icon = ProcTextWhite;
		color[] = {0, 0, 0, 1};
		size = 18;
		importance = 1; // not used
		coefMin = 1; // not used
		coefMax = 1; // not used
	};
	class Tree
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 0.9 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class SmallTree
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 0.6 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Bush
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 0.2 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Church
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 2 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Chapel
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 1 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Cross
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 0.7 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Rock
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 1.5 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Bunker
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 1.5 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Fortress
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 2 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Fountain
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 16;
		importance = 1 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class ViewTower
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 2.5 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Lighthouse
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 3 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Quay
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 2 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Fuelstation
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		importance = 2 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class Hospital
	{
		icon = ProcTextBlack;
		color[] = {1, 0, 0, 1};
		size = 16;
		importance = 2 * 16 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

	class BusStop
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		importance = 1 * 8 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
	};

  class Transmitter
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		importance = 1 * 8 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
  };

  class Stack
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		importance = 1 * 8 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
  };

  class Ruin
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		importance = 1 * 8 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
  };

  class Tourism
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		importance = 1 * 8 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
  };

  class Watertower
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		importance = 1 * 8 * 0.05; // limit for map scale
		coefMin = 0.25;
		coefMax = 4;
  };

	class Waypoint
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 24;
		importance = 1; // not used
		coefMin = 1; // not used
		coefMax = 1; // not used
	};

	class WaypointCompleted
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 24;
		importance = 1; // not used
		coefMin = 1; // not used
		coefMax = 1; // not used
	};
};

class RscObject
{
	access = ReadAndWrite;
	type = CT_OBJECT;
	scale = 1.0;
	direction[] = {0, 0, 1};
	up[] = {0, 1, 0};
};

class RscStandardDisplay
{
	access = ReadAndWrite;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0; y = 0;
			w = 1; h = 1;
			colorBackground[] = Color_Background;
		};
	};
};

class RscCompass: RscObject
{
  idc = -1;
  type = CT_OBJECT_ZOOM;
  model = "\core\compass\compass.p3d";
  selectionArrow = "arrow";
  position[] = {0.026, 0.047, 0.20};
  direction[] = {0, 1, 1};

  up[] = {0, 0, -1};
  positionBack[] = {0.0749, -0.059, 0.315};

  inBack = true;
  enableZoom = false;
  zoomDuration = 0.5;

  class Animations
  {
    class Pointer
    {
      type = "rotation";
      source = "compassPointer";
      selection = "kompas";
      axis = "osa kompasu";
      memory = true;
      animPeriod = 0;
      minValue = "rad -180";
      maxValue = "rad 180";
      angle0 = "rad -180";
      angle1 = "rad 180";
    };
    class Arrow
    {
      type = "rotation";
      source = "compassArrow";
      selection = "arrow";
      axis = "osa kompasu";
      memory = true;
      animPeriod = 0;
      minValue = "rad -180";
      maxValue = "rad 180";
      angle0 = "rad -180";
      angle1 = "rad 180";
    };
    class Cover
    {
      type = "rotation";
      source = "compassCover";
      selection = "vicko";
      axis = "osa vicka";
      memory = true;
      animPeriod = 0;
      angle0 = 0;
      angle1 = "rad -81";
    };
  };
};

class RscWatch: RscObject
{
  idc = -1;
  type = CT_OBJECT_ZOOM;
  model = "\core\watch\watch.p3d";
  selectionDate1 = "date1";
  selectionDate2 = "date2";
  selectionDay = "day";
  position[] = {0.026, 0.047, 0.20};
  positionBack[] = {0.05, -0.05, 0.22};
  inBack = true;
  enableZoom = true;
  zoomDuration = 0.5;

  class Animations
  {
    class WatchHour
    {
      type = "rotation";
      source = "clockHour";
      selection = "hodinova";
      axis = "osa";
      memory = true;
      animPeriod = 0;
      angle0 = 0;
      angle1 = "rad 360";
    };
    class WatchMinute
    {
      type = "rotation";
      source = "clockMinute";
      selection = "minutova";
      axis = "osa";
      memory = true;
      animPeriod = 0;
      angle0 = 0;
      angle1 = "rad 360";
    };
    class WatchSecond
    {
      type = "rotation";
      source = "clockSecond";
      selection = "vterinova";
      axis = "osa";
      memory = true;
      animPeriod = 0;
      angle0 = 0;
      angle1 = "rad 360";
    };
  };
};
//In-game GPS minimap
class RscMiniMap
{
	access = ReadAndWrite;
	idd = IDD_MINIMAP;
	movingEnable = false;
	enableSimulation = true;
	enableDisplay = true;
	
	class controls 
	{
		class MiniMap: RscMapControl 
		{
			IDC = IDC_MINIMAP;
			x = 0.1;
			y = 0.1;
			w = 0.3;
			h = 0.3;
      showCountourInterval = "false";
		};
	};
};

//In-game GPS minimap small
class RscMiniMapSmall: RscMiniMap {};

class RscButtonImages
{
	class ControllerS {};
};

class RscObjectives
{
  access = ReadAndWrite;
  done = ProcTextWhite;
  failed = ProcTextWhite;
  active = ProcTextWhite;
};

//Todo:
//BISML™ 1.0 Strict:

//Body tag. Defines the main page margins.
#define BISML_BODY(X, Y, W, H) \
	__EXEC(iBISML_X = X);\
	__EXEC(iBISML_Y = Y);\
	__EXEC(iBISML_W = W);\
	__EXEC(iBISML_H = H);\
	__EXEC(iBISML_CURX = iBISML_X);\
	__EXEC(iBISML_CURY = iBISML_Y);

//Row tag. Defines the end of a row.
#define BISML_NEXTROW \
	__EXEC(iBISML_CURY = iBISML_CURY + iBISML_NEXTROW_Y);\
	__EXEC(iBISML_CURX = iBISML_X);

//Cell tag. Defines a layout cell within a row. Replace with virtual cell definition.
#define BISML_CELL(NAME, W, H) \
	class NAME: RscText\
	{\
		x = __EVAL(iBISML_CURX);\
		y = __EVAL(iBISML_CURY);\
		w = W;\
		h = H;\
		colorBackground[] = {1, 0, 0, 1};\
		color[] = {1, 1, 1, 1};\
	};\
	__EXEC(iBISML_CURX = iBISML_CURX + W);\
	__EXEC(iBISML_NEXTROW_Y = H);

#endif
