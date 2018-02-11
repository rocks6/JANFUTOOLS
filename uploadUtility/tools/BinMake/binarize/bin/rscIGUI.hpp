#include "commonDefs.hpp"
#include "resincl.hpp"
#include "rscCommon.hpp"

//Todo:
//Make rscIngame.
//Remove title screens.

//Insert a custom marker on the map.
class RscDisplayInsertMarker
{
	idd = IDD_INSERT_MARKER;
	movingEnable = false;

	class controls
	{
		//Picture of the marker.
		class Picture: RscPicture
		{
			idc = IDC_INSERT_MARKER_PICTURE;
			x = 0; y = 0;
			w = 0.05; h = 0.05 * 4 / 3;
			colorText[] = {0, 0, 0, 1};
		};

		//Marker name field.
		class Text: RscEdit
		{
			idc = IDC_INSERT_MARKER;
			x = 0.04; y = 0;
			w = 0.15; h = 0.04;
			text = ;
		};

		//Confirm the marker and exit.
		class ButtonOK: RscActiveText
		{
			idc = IDC_OK;
			x = 0; y = 0;
			w = 0; h = 0;
			default = 1;
		};
	};
};

//Special debugging screen for designers.
class RscDisplayDebug
{
	idd = IDD_DEBUG;
	movingEnable = true;

	onLoad = "private [""_ctrlB_Camera"", ""_script""]; _ctrlB_Camera = (_this select 0) displayCtrl 666; _script = getText (configFile >> ""cameraScript""); if (!(isNil ""BIS_DEBUG_CAM"") || ((typeOf cameraOn) == ""EditCursor"") || (isNull player) || (_script == """")) then {_ctrlB_Camera ctrlEnable false; _ctrlB_Camera ctrlShow false}";

	class Controls
	{
		class Background1: RscText
		{
			x = 0.2; y = 0.025;
			w = 0.6; h = 0.95;
			colorBackground[] = Color_GrayLight;
		};

		class Title: RscTitle
		{
			style = ST_TITLE;
			x = 0.2; y = 0.035;
			w = 0.6;
			text = $STR_UI_DEBUG_TITLE;
		};

		class G_Expression
		{
			idc = -1;
			type = CT_CONTROLS_GROUP;
      style = 0;
      x = 0.2; y = 0.09;
      w = 0.6; h = 0.23;

      class VScrollbar
      {
        color[] = Color_White;
        width = 0.008;
      };

      class HScrollbar
      {
       	color[] = Color_White;
        height = 0.01;
      };

			class Controls
			{
				class TextExpression: RscText
				{
					x = 0.01; y = 0;
					w = 0.2; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_EXPRESSION;
				};

				//Enter scripting commands.
				class ValueExpression: RscEdit
				{
					idc = IDC_DEBUG_EXP;
					style = ST_MULTI;
					x = 0.018; y = 0.03;
					w = 0.56; h = 0.15;
					sizeEx = Size_Text_Very_Small;
					autocomplete = "scripting";
				};

				//Execute the entered scripting commands.
				class B_Apply: RscButton
				{
					idc = IDC_DEBUG_APPLY;
					x = 0.5; y = 0.19;
					w = 0.08; h = 0.04;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_BUT_APPLY;
					default = 0;
				};
			};
		};

		class G_Watch: G_Expression
		{
      x = 0.2; y = 0.33;
      w = 0.6; h = 0.3;

			class Controls
			{
				class TextWatch: RscText
				{
					x = 0.01; y = 0;
					w = 0.1; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_WATCH;
				};

				class TextVar1: RscText
				{
					x = 0.01; y = 0.03;
					w = 0.05; h = 0.06;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_1;
				};

				//Debugging value.
				class ValueExp1: RscEdit
				{
					idc = IDC_DEBUG_EXP1;
					x = 0.04; y = 0.03;
					w = 0.53; h = 0.03;
					sizeEx = Size_Text_Very_Small;
					autocomplete = "scripting";
				};

				//Resulting debugging value.
				class ValueRes1: RscEdit
				{
					idc = IDC_DEBUG_RES1;
					x = 0.04; y = 0.06;
					w = 0.53; h = 0.03;
					sizeEx = Size_Text_Very_Small;
					autocomplete = "scripting";
				};

				class TextVar2: TextVar1
				{
					y = 0.1;
					text = $STR_UI_DEBUG_2;
				};

				//Debugging value.
				class ValueExp2: ValueExp1
				{
					idc = IDC_DEBUG_EXP2;
					y = 0.1;
				};

				//Resulting debugging value.
				class ValueRes2: ValueRes1
				{
					idc = IDC_DEBUG_RES2;
					y = 0.13;
				};

				class TextVar3: TextVar1
				{
					y = 0.17;
					text = $STR_UI_DEBUG_3;
				};

				//Debugging value.
				class ValueExp3: ValueExp1
				{
					idc = IDC_DEBUG_EXP3;
					y = 0.17;
				};

				//Resulting debugging value.
				class ValueRes3: ValueRes1
				{
					idc = IDC_DEBUG_RES3;
					y = 0.2;
				};

				class TextVar4: TextVar1
				{
					y = 0.24;
					text = $STR_UI_DEBUG_4;
			};

				//Debugging value.
				class ValueExp4: ValueExp1
				{
					idc = IDC_DEBUG_EXP4;
					y = 0.24;
				};

				//Resulting debugging value.
				class ValueRes4: ValueRes1
				{
					idc = IDC_DEBUG_RES4;
					y = 0.27;
				};
			};
		};

		class G_But: G_Expression
		{
      x = 0.2; y = 0.64;
      w = 0.6; h = 0.12;

			class Controls
			{
				class TextSwitch: RscText
				{
					x = 0.01; y = 0;
					w = 0.1; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_SWITCH;
				};

				#define ButtonA1_Width 0.08
				#define ButtonA1_Start 0.01

				//Debugging views.
				class ButtonA1: RscButton
				{
					idc = -1;
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 1);
					y = 0;
					w = ButtonA1_Width;
					h = 0.04;
					text = $STR_UI_DEBUG_BUT_ALL;
					action = """all"" diag_enable true";
					sizeEx = Size_Text_Small;
				};

				class ButtonA2: ButtonA1
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 2);
					text = $STR_UI_DEBUG_BUT_NO;
					action = """all"" diag_enable false";
				};

				class ButtonA3: ButtonA1
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 3);
					text = $STR_UI_DEBUG_BUT_COMBAT;
					action = "diag_toggle ""combat""";
				};

				class ButtonA4: ButtonA1
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 4);
					text = $STR_UI_DEBUG_BUT_COST;
					action = "diag_toggle ""costmap""";
				};

				class ButtonA5: ButtonA1
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 5);
					text = $STR_UI_DEBUG_BUT_TRANSPARENT;
					action = "diag_toggle ""transparent""";
				};

				class ButtonA6: ButtonA1
				{
					y = 0.04;
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 1);
					text = $STR_UI_DEBUG_BUT_COLLISION;
					action = "diag_toggle ""collision""";
				};

				class ButtonA7: ButtonA6
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 2);
					text = $STR_UI_DEBUG_BUT_PATH;
					action = "diag_toggle ""path""";
				};

				class ButtonA8: ButtonA6
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 3);
					text = $STR_UI_DEBUG_BUT_FORCE;
					action = "diag_toggle ""force""";
				};

				class ButtonA9: ButtonA6
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 4);
					text = $STR_UI_DEBUG_BUT_ANIMATION;
					action = "diag_toggle ""animation""";
				};

				//Show the normal view.
				class ButtonB1: RscButton
				{
					idc = -1;
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 1);
					y = 0.08;
					w = ButtonA1_Width;
					h = 0.04;
					text = $STR_UI_DEBUG_BUT_NORMAL;
					action = "diag_drawmode ""Normal""";
					sizeEx = Size_Text_Small;
				};

				//Show the fire geometry view.
				class ButtonB2: ButtonB1
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 2);
					text = $STR_UI_DEBUG_BUT_FIREGEOMETRY;
				action = "diag_drawmode ""FireGeometry""";
				};

				//Show the view geometry view.
				class ButtonB3: ButtonB1
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 3);
					text = $STR_UI_DEBUG_BUT_VIEWGEOMETRY;
					action = "diag_drawmode ""ViewGeometry""";
				};

				//Show the geometry view.
				class ButtonB4: ButtonB1
				{
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 4);
					text = $STR_UI_DEBUG_BUT_GEOMETRY;
					action = "diag_drawmode ""Geometry""";
				};

				//Start the debug camera script, as defined in the config.
				class B_Camera: ButtonA1
				{
					idc = 666;
					x = __EVAL(ButtonA1_Start + ButtonA1_Width * 6); y = 0.08;
					text = "Camera";
					action = "cameraOn exec (getText (configFile >> ""cameraScript""))";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
				};
			};
		};

		class G_Log: G_Expression
		{
      x = 0.2; y = 0.77;
      w = 0.6; h = 0.13;

			class Controls
			{
				class TextLog: RscText
				{
					x = 0.01; y = 0;
					w = 0.1; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_LOG;
				};

				//Text log.
				class ValueLog: RscListBox
				{
					idc = IDC_DEBUG_LOG;
					x = 0.018; y = 0.03;
					w = 0.56; h = 0.09;
				};
			};
		};

		//Execute the entered scripting commands and exit.
		class B_OK: RscButton
		{
			idc = IDC_OK;
			x = 0.5; y = 0.91;
			w = 0.12; h = 0.05;
			text = $STR_DISP_OK;
			sizeEx = Size_Text_Small;
			default = 1;
		};

		//Exit the debug window.
		class B_Cancel: B_OK
		{
			idc = IDC_CANCEL;
			x = 0.65;
			text = $STR_DISP_CANCEL;
			default = 0;
		};
	};
};

class RscChatListDefault
{
	x = 0.0; // left
	y = 0.0; // top
	w = 1.0;	// width
	h = 0.043;
	font = FontMAIN;
	size = 0.039;
	rows = 2;

  colorBackground[] = {0, 0, 0, 0.5};
  colorGlobalChannel[] = {0.8, 0.8, 0.8, 1};
  colorSideChannel[] = {0, 0.9, 0.9, 1};
  colorGroupChannel[] = {0.1, 0.9, 0.2, 1};
  colorVehicleChannel[] = {0.9, 0.8, 0, 1};
  colorDirectChannel[] = {0.9, 0, 0.8, 1};
};

class RscChatListMission : RscChatListDefault
{
	x = 0.0; // left
	y = 0.8; // top
	w = 1.0;	// width
	rows = 5;
};

class RscChatListBriefing : RscChatListDefault
{
	x = 0.0; // left
	y = 0.8;//0.90; // top
	w = 1.0;	// width
	rows = 2;
};

class RscChatListMap : RscChatListDefault
{
	x = 0.0; // left
	y = 0.8; // top
	w = 1.0;	// width
	rows = 2;
};

class RscTitlesText
{
	access = ReadAndWrite;
	fontBasic = FontMAIN;
	sizeExBasic = SizeNormal;

	fontDown = FontMAIN;
	sizeExDown = SizeNormal;
	offsetDown = 0.245;
	class Attributes
	{
		shadow = true;
		shadowOffset = 0.06;
		shadowColor = "#000000";
	};
};

class RscIGText : RscText
{
	access = ReadAndWrite;
	h = 0.04;
	colorText[] = {0.8, 0.8, 0.8, 1};
	font = FontMAIN;
	sizeEx = 0.024;
	//style = ST_LEFT + ST_SHADOW;
	style = ST_LEFT + ST_SHADOW;
};
class RscIGProgress
{
	access = ReadAndWrite;
	type = CT_PROGRESS;
	style = 0;
	idc = -1;
	h = 0.018;
	colorFrame[] = {0.8, 0.8, 0.8, 0.75};
	colorBar[] = {0.8, 0.8, 0.8, 0.5};
};

class RscDisplayHintC
{
	access = ReadAndWrite;
	idd = IDD_HINTC;
	movingEnable = true;

	class controls
	{
		class Background
		{
			type = CT_STATIC;
			idc = IDC_HINTC_BG;
			style = ST_HUD_BACKGROUND;
			moving = true;
			x = 0.35;
			y = 0.40;
			w = 0.50;
			h = 0.06;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
		};

		class Hint: RscIGText
		{
			idc = IDC_HINTC_HINT;
			style = ST_MULTI;
			lineSpacing = 1;
			sizeEx = SizeSmall;
			x = 0.36;
			y = 0.41;
			w = 0.48;
			colorBackground[] = {0, 0, 0, 0};
			text = STR_DISP_ERROR;
		};

		class continue: RscActiveText
		{
			idc = IDC_CANCEL;
			style = ST_RIGHT;
			font = FontMAIN;
			sizeEx = SizeSmall;
			x = 0.55;
			y = 0.41;
			w = 0.3;
			h = 0.035;
			text = $STR_DISP_HINTC_CONTINUE;
			color[] = {0.8, 0.8, 0.8, 1};
			colorActive[] = {0.8, 0.8, 0, 1};
		};
	};
};

class RscDisplayHintCEx
{
	access = ReadAndWrite;
	idd = IDD_HINTC_EX;
	movingEnable = true;
  	soundOpen[] = {"", 0.5, 1};

  	indent = ProcTextWhite;

	class controls
	{
		class Background
		{
			type = CT_STATIC;
			idc = IDC_HINTC_BG;
			style = ST_HUD_BACKGROUND;
			moving = true;
			x = 0.15;
			y = 0.40;
			w = 0.70;
			h = 0.155;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
		};

		class Title: RscText
		{
			idc = IDC_HINTC_TITLE;
			style = ST_LEFT;
			x = 0.17;
			y = 0.42;
			w = 0.66;
			h = 0.06;
			text = STR_DISP_ERROR;
			colorText[] = {0.8, 0.8, 0.8, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

		class Line1: RscText
		{
			idc = IDC_HINTC_LINE1;
			style = ST_LINE;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			text = ;
			colorBackground[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {1, 1, 1, 1};
		};

		class Hint
		{
			access = ReadAndWrite;
			type = CT_STRUCTURED_TEXT;
			idc = IDC_HINTC_HINT;
			style = 0;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			size = SizeSmall;
			text = STR_DISP_ERROR;

			class Attributes
			{
				font = FontMAIN;
				color = #e0e0e0;
				shadow = false;
			};
		};

		class Line2: RscText
		{
			idc = IDC_HINTC_LINE2;
			style = ST_LINE;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			text = ;
			colorBackground[] = {0.8, 0.8, 0.8, 1};
			color[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {0.8, 0.8, 0.8, 1};
		};
		
		
		class continue: RscActiveText
		{
			idc = IDC_HINTC_CONTINUE;
			style = ST_RIGHT;
			font = FontMAIN;
			sizeEx = SizeSmall;
			x = 0.17;
			y = 0.49;
			w = 0.66;
			h = 0.035;
			text = $STR_DISP_HINTC_CONTINUE;
			color[] = {0.8, 0.8, 0.8, 1};
			colorActive[] = {0.8, 0.8, 0, 1};
		}; 
	};
};

class RscInGameUI
{
	access = ReadAndWrite;
	unitInfoTypes[] =
	{
		RscUnitInfoSoldier,	// soldier,
		RscUnitInfoTank,		// tank
		RscUnitInfo,				// car
		RscUnitInfo,				// ship
		RscUnitInfoAir,	  	// airplane
		RscUnitInfoAir// helicopter
	};

	colorReady[] = {0.5, 0.85, 0.5, 1};
	colorPrepare[] = {0.69, 0.7, 0.1, 1};
	colorUnload[] = {0.75, 0.29, 0.29, 1};

	class RscUnitInfoSoldier
	{
		idd = IDD_UNITINFO;
		movingEnable = false;
		controls[]=
		{
			Background,
			Weapon,
			Ammo
		};
		class Background
		{
			type = CT_STATIC;
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.0;
			y = 0.0;
			w = 0.385;
			h = 0.05;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = SizeSmall;
		};
		class Weapon : RscIGText
		{
			idc = IDC_IGUI_WEAPON;
			x = 0.0;
			y = 0.008;
			w = 0.282;
			text = $STR_DISP_ERROR;
		};
		class Ammo : RscIGText
		{
			idc = IDC_IGUI_AMMO;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.0;
			y = 0.009;
			w = 0.378;
			text = $STR_DISP_ERROR;
		};
	};

	class RscUnitInfoTank
	{
		idd = IDD_UNITINFO;
		movingEnable = false;
		controls[]=
		{
			Background,
			Weapon,
			Ammo,
      Commander,
      Gunner,
      Driver
		};
		class Background
		{
			type = CT_STATIC;
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.02;
			y = 0.18;
			w = 0.21;
			h = 0.25;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
		};
		class Weapon : RscIGText
		{
			idc = IDC_IGUI_WEAPON;
			x = 0.025;
			y = 0.38;//0.185;
			w = 0.190;
			text = $STR_DISP_ERROR;
		};
		class Ammo : RscIGText
		{
			idc = IDC_IGUI_AMMO;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.035;
			y = 0.38;
			w = 0.190;
			text = $STR_DISP_ERROR;
		};
    class Commander : RscIGText
    {
      idc = IDC_IGUI_COMMANDER;
      x = 0.025;
      y = 0.38 + 0.04;
      w = 0.190;
      text = $STR_DISP_ERROR;
    };
    class Gunner : RscIGText
    {
      idc = IDC_IGUI_GUNNER;
      x = 0.025;
      y = 0.38 + 2 * 0.04;
      w = 0.190;
      text = $STR_DISP_ERROR;
    };
    class Driver : RscIGText
    {
      idc = IDC_IGUI_DRIVER;
      x = 0.025;
      y = 0.38 + 3 * 0.04;
      w = 0.190;
      text = $STR_DISP_ERROR;
    };
	};

	class RscUnitInfo
	{
		idd = IDD_UNITINFO;
		movingEnable = false;
		controls[]=
		{
			Background,
			Background2,
			ValueArmor,
			ValueFuel,
			//Time,
			//Date,
			//Name,
			//Unit,
			//Vehicle,
			Speed,
			Alt,
			//TextExp,
			//ValueExp,
			//CombatMode,
			//Formation,
			//TextHealth,
			//ValueHealth,
			TextArmor,
			TextFuel,
			//CargoMan,
			//CargoFuel,
			//CargoRepair,
			//CargoAmmo,
			Weapon,
			Ammo
		};
		class Background
		{
			type = CT_STATIC;
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.0;
			y = 0.138;
			w = 0.33;
			h = 0.09;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
		};
		class Background2
		{
			type = CT_STATIC;
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.67;
			y = 0.138;
			w = 0.33;
			h = 0.09;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
		};
		class Speed : RscIGText
		{
			idc = IDC_IGUI_SPEED;
			x = 0.005;
			y = 0.145;
			w = 0.2;
			text = $STR_DISP_ERROR;
		};
		class Alt : RscIGText
		{
			idc = IDC_IGUI_ALT;
			style = ST_RIGHT+ST_SHADOW;
			x = 0.16;
			y = 0.145; //0.18
			w = 0.16;
			text = $STR_DISP_ERROR;
		};
		class TextArmor : RscIGText
		{
			x = 0.68;
			y = 0.145;
			w = 0.190;
			text = $STR_UI_ABAR;
		};
		class ValueArmor : RscIGProgress
		{
			idc = IDC_IGUI_VALUE_ARMOR;
			x = 0.82;
			y = 0.155;
			w = 0.165;
			h = 0.025;
		};
		class TextFuel : RscIGText
		{
			x = 0.68;
			y = 0.185;
			w = 0.190;
			text = $STR_UI_FBAR;
		};
		class ValueFuel : RscIGProgress
		{
			idc = IDC_IGUI_VALUE_FUEL;
			x = 0.82;
			y = 0.19;
			w = 0.165;
			h = 0.025;
		};
		class Weapon : RscIGText
		{
			idc = IDC_IGUI_WEAPON;
			x = 0.005;
			y = 0.185;
			w = 0.25;
			text = $STR_DISP_ERROR;
		};
		class Ammo : RscIGText
		{
			idc = IDC_IGUI_AMMO;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.17;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
	};

	class RscUnitInfoAir: RscUnitInfo
	{
	};

	class RscHint
	{
		idd = IDD_HINT;
		movingEnable = false;
		controls[]=
		{
			Background,
			Hint
		};
		class Background
		{
			type = CT_STATIC;
			idc = IDC_IGHINT_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.0;
			y = 0.02;
			w = 0.28;//0.20;
			h = 0.06;//0.04;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
		};
		class Hint : RscStructuredText
		{
			idc = IDC_IGHINT_HINT;
			x = 0.001;
			y = 0.031; // y = 0.225;
			w = 0.275; //0.190;
			h = 0.04;
			// To keep backward compatibility with the CT_STATIC
			style = ST_MULTI;
			lineSpacing = 1;
      sizeEx = Size_Main_Small;			

			colorText[] = {1, 1, 01, 1};
			colorBackground[] = {0, 0, 0, 0};
			
			font = FontMAIN;
			size = Size_Main_Small;			
			text = $STR_DISP_ERROR;
			
			class Attributes : Attributes
			{
				color = "#ffffff";
				align = "center";
				shadow = false;
			};
			
		};
	};
};

class RscTitles
{
	class Default
	{
		idd=-1;
		movingEnable = false;
		duration=4;
	};

	class DefPic : Default
	{
		type = CT_STATIC;
		idc = -1;
		style = ST_PICTURE;
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {1, 1, 1, 1};
		font = FontMAIN;
		sizeEx = 0;
	};

	class BIS
	{
		idd=-1;
		movingEnable = false;
		duration=4;
		name = "BI Studio";
		controls[]=
		{
			Background, BIS1, BIS2, WWW
		};

		class BIS1 : RscPicture
		{
			text = "BI1fit.pac";
			x = 0.2; y = 0.23; w = 0.3; h = 0.4;
		};
		class BIS2 : RscPicture
		{
			text = "BI2fit.pac";
			x = 0.5; y = 0.23; w = 0.3; h = 0.4;
		};
		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

		class WWW : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = "w w w . b i s t u d i o . c o m";
			x = 0.05; y = 0.67; w = 0.9; h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
	};

	class Publisher
	{
		idd=-1;
		movingEnable = false;
		duration=4;
		name = "Publisher";
		controls[]=
		{
			Background, CM1, CM2, CM3
		};

		class CM1 : RscPicture
		{
			text = "CM1fit.paa";
			x = 0.05; y = 0.15; w = 0.3; h = 0.7;
		};
		class CM2 : RscPicture
		{
			text = "CM2fit.paa";
			x = 0.35; y = 0.15; w = 0.3; h = 0.7;
		};
		class CM3 : RscPicture
		{
			text = "CM3fit.paa";
			x = 0.65; y = 0.15; w = 0.3; h = 0.7;
		};
		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};
	};

	class LegalScreen
	{
		idd=-1;
		movingEnable = false;
		duration=6;
		name = "Copyrights";
		controls[]=
		{
			Background,
			CM4, CM1, CM2, CM3,
			CopText,
			InfoText
		};

		class CopText : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.5;
			text = "Copyright © 2004 Bohemia Interactive Studio s.r.o. \nAll rights reserved.";
			x = 0.05; y = 0.3; w = 0.9; h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeSmall;
		};


		class InfoText : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.5;
			text = "Counterfeit copying or trading in counterfeit copies is illegal.\nThis software is protected from unauthorized copying by a unique system. In counterfeit copies, the gameplay will degrade after a period of time to a point where the game is no longer playable. This does not happen to genuine software. if you are any doubt about the authenticity of your disc, make sure you have original packaging and a printed silver disc. \nCOUNTERFEIT SOFTWARE IS NOT WORTH PURCHASING.";
			x = 0.05; y = 0.6; w = 0.9; h = 0.5;
			colorText[] = {1.0, 1.0, 0.5, 1};
			font = FontMAIN;
			sizeEx = SizeSmall;
		};



		class CM1 : RscPicture
		{
			text = "CM1fit.paa";
			x = 0.35; y = 0.1; w = 0.1; h = 0.13333;
		};
		class CM2 : RscPicture
		{
			text = "CM2fit.paa";
			x = 0.45; y = 0.1; w = 0.1; h = 0.13333;
		};
		class CM3 : RscPicture
		{
			text = "CM3fit.paa";
			x = 0.55; y = 0.1; w = 0.1; h = 0.13333;
		};
		class CM4 : RscPicture
		{
			text = "CMsign.paa";
			x = 0.55; y = 0.1; w = 0.1; h = 0.13333;
		};
		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};
	};

	class Features1
	{
		idd=-1;
		movingEnable = false;
		duration=6;
		name = "Features";
		controls[]=
		{
			Background,
			Back,
			FP1, FP2, FP3,
			Text1,
			Text2
		};

		class Text1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = "» The best of cold war military equipment: battling on foot, in armor and in the sky\n\n» 30+ playable vehicles, 20+ different infantry weapons: guns, missiles, explosives\n\n» Leadership of up to 12 units in the squad: simple point and click interface \n\n» Over 50 missions on 3 huge islands: featuring a campaign with exciting storyline\n\n» Intuitive mission editor: players can create own missions and campaigns \n\n» Multiplayer combat over LAN or Internet: including Voice Over Net";
			x = 0.0; y = 0.3; w = 1.0; h = 0.73;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeSmall;
		};

		class Back : RscText
		{
			x = 0.0; y = 0.24; w = 1.0; h = 0.6;
			text = "";
			colorBackground[] = {0.12, 0.15, 0.04, 1};
		};


		class Text2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "OUT NOW!";
			x = 0.05; y = 0.89; w = 0.9; h = 0.5;
			colorText[]={0.23,0.3,0.08,0.5};
			font = FontMAIN;
			sizeEx = SizeBook;
		};



		class FP1 : RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.5};
			text = "OFPlogo1.paa";
			x = 0.32; y = 0.07; w = 0.12; h = 0.133;
		};
		class FP2 : RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.5};
			text = "OFPlogo2.paa";
			x = 0.44; y = 0.07; w = 0.12; h = 0.133;
		};
		class FP3 : RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.5};
			text = "OFPlogo3.paa";
			x = 0.56; y = 0.07; w = 0.12; h = 0.133;
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};
	};




	class Features
	{
		idd=-1;
		movingEnable = false;
		duration=6;
		name = "Features";
		controls[]=
		{
			CGW1, CGW2, CGW3, CGW4
		};

		class CGW1 : RscPicture
		{
			colorText[]={1,1,1,1};
			text = "\img\CGW1.jpg";
			x = 0; y = 0; w = 0.5; h = 0.666;
		};
		class CGW2 : RscPicture
		{
			colorText[]={1,1,1,1};
			text = "\img\CGW2.jpg";
			x = 0.5; y = 0; w = 0.5; h = 0.666;
		};
		class CGW3 : RscPicture
		{
			colorText[]={1,1,1,1};
			text = "\img\CGW3.jpg";
			x = 0; y = 0.666; w = 0.5; h = 0.333;
		};
		class CGW4 : RscPicture
		{
			colorText[]={1,1,1,1};
			text = "\img\CGW4.jpg";
			x = 0.5; y = 0.666; w = 0.5; h = 0.333;
		};
	};



	class Project_name
	{
		idd=-1;
		movingEnable = false;
		duration=4;
		name = "Project"; 
		controls[]=
		{
			Background, FP1, FP2, FP3
		};

		class FP1 : RscPicture
		{
			text = "OFPlogo1.paa";
			x = 0.05; y = 0.32; w = 0.3; h = 0.33;
		};
		class FP2 : RscPicture
		{
			text = "OFPlogo2.paa";
			x = 0.35; y = 0.32; w = 0.3; h = 0.33;
		};
		class FP3 : RscPicture
		{
			text = "OFPlogo3.paa";
			x = 0.65; y = 0.32; w = 0.3; h = 0.33;
		};
		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};
	};


	class resistance
	{
		idd=-1;
		movingEnable = false;
		duration=4;
		name = "Resistance logo";
		controls[]=
		{
			Background, RE1, RE2, RE3
		};

		class RE1 : RscPicture
		{
			text = "\o\misc\OFPRlogo01.paa";
			x = 0.05; y = 0.32; w = 0.3; h = 0.33;
		};
		class RE2 : RscPicture
		{
			text = "\o\misc\OFPRlogo02.paa";
			x = 0.35; y = 0.32; w = 0.3; h = 0.33;
		};
		class RE3 : RscPicture
		{
			text = "\o\misc\OFPRlogo03.paa";
			x = 0.65; y = 0.32; w = 0.3; h = 0.33;
		};
		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};
	};

	class creditsback
	{
		idd=-1;
		movingEnable = false;
		duration=10000;
		name = "Creditsback";
		controls[]=
		{
			Back, background

		};

		class Back : RscText
		{
			x = 0.72; y = 0.0; w = 0.5; h = 1.0;
			text = "";
			colorBackground[] = {0.0, 0.0, 0.0, 1};
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};


	};

	class creditsbackBIS
	{
		idd=-1;
		movingEnable = false;
		duration=10000;
		name = "CreditsbackBIS";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2, dev

		};

		class Back : RscText
		{
			x = 0.72; y = 0.0; w = 0.5; h = 1.0;
			text = "";
			colorBackground[] = {0.0, 0.0, 0.0, 1};
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

		class BIS1 : RscPicture
		{
			text = "BI1fit.pac";
			x = 0.76; y = 0.04; w = 0.1; h = 0.12;
		};
		class BIS2 : RscPicture
		{
			text = "BI2fit.pac";
			x = 0.86; y = 0.04; w = 0.1; h = 0.12;
		};

		class web : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = "www.bistudio.com";
			x = 0.41; y = 0.95; w = 0.9; h = 0.7;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;

		};

		class dev: RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS12a;
			x = 0.41; y = 0.02; w = 0.9; h = 0.7;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};



	};


	class BISleader : creditsbackBIS
	{
		name = "BISleader";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work1,
			name1, dev
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS01;
			x = 0.36; y = 0.3; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN01;
			x = 0.36; y = 0.35; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};

	class BISprogram : creditsbackBIS
	{
		name = "BISprogrammer";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work1,
			name1, dev
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS02;
			x = 0.36; y = 0.3; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN02;
			x = 0.36; y = 0.35; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};

	class BISart : creditsbackBIS
	{
		name = "BISart";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work1,
			name1, dev
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS03;
			x = 0.36; y = 0.3; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN03;
			x = 0.36; y = 0.35; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};

	class BISdesign : creditsbackBIS
	{
		name = "BISdesign";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work1,
			name1, dev
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS04;
			x = 0.36; y = 0.3; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN04;
			x = 0.36; y = 0.35; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};


	class BISother1 : creditsbackBIS
	{
		name = "BISother1";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work1,work2, work3,
			name1, name2, name3, dev
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS05;
			x = 0.36; y = 0.25; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN05;
			x = 0.36; y = 0.30; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
		class work2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS06;
			x = 0.36; y = 0.45; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN06;
			x = 0.36; y = 0.50; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};

		class work3 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS07;
			x = 0.36; y = 0.60; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name3 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN07;
			x = 0.36; y = 0.65; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};


	};


	class BISmusic : creditsbackBIS
	{
		name = "BISmusic";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work1,
			name1, name2, name3, name4, dev
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS09;
			x = 0.36; y = 0.25; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN09;
			x = 0.36; y = 0.30; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};

		class name2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN09a;
			x = 0.36; y = 0.35; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

		class name3 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN09b;
			x = 0.36; y = 0.60; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

		class name4 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN09c;
			x = 0.36; y = 0.63; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};

	class BISsfx : creditsbackBIS
	{
		name = "BISsfx";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work1, work2,
			name1, name2, dev, copy
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS10;
			x = 0.36; y = 0.3; w = 1.0; h = 0.98;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN10;
			x = 0.36; y = 0.35; w = 1.0; h = 0.98;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

		class work2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS08;
			x = 0.36; y = 0.55; w = 1.0; h = 0.98;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN08;
			x = 0.36; y = 0.60; w = 1.0; h = 0.98;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
		class copy : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_COPY;
			x = 0.36; y = 0.70; w = 1.0; h = 0.98;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};


	};

	class BISthx : creditsbackBIS
	{
		name = "BISthx";
		controls[]=
		{
			Back, background, web,
			BIS1, BIS2,
			work2,
			name2, dev
		};

		class work2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS11;
			x = 0.36; y = 0.30; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN11;
			x = 0.36; y = 0.35; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
	};

	class creditsbackCM
	{
		idd=-1;
		movingEnable = false;
		duration=10000;
		name = "CreditsbackCM";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub

		};

		class Back : RscText
		{
			x = 0.72; y = 0.0; w = 0.5; h = 1.0;
			text =;
			colorBackground[] = {0.0, 0.0, 0.0, 1};
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

		class CM1 : RscPicture
		{
			text = "CM1fit.paa";
			x = 0.74; y = 0.03; w = 0.08; h = 0.1;
		};
		class CM2 : RscPicture
		{
			text = "CM2fit.paa";
			x = 0.82; y = 0.03; w = 0.08; h = 0.1;
		};
		class CM3 : RscPicture
		{
			text = "CM3fit.paa";
			x = 0.90; y = 0.03; w = 0.08; h = 0.1;
		};
		class CM4 : RscPicture
		{
			text = "CMsign.paa";
			x = 0.90; y = 0.03; w = 0.08; h = 0.1;
		};

		class pub : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = "$STR_CREDITS12";
			x = 0.41; y = 0.015; w = 0.9; h = 0.7;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

		class web : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = "www.publisher.com";
			x = 0.41; y = 0.95; w = 0.9; h = 0.7;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

	};




	class CMProducer: creditsbackCM
	{
		name = "CMproducer";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub,
			work1,name1
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS13;
			x = 0.36; y = 0.4; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN13;
			x = 0.36; y = 0.45; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
	};

	class CMdesign: creditsbackCM
	{
		name = "CMdesign";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub,
			work1,
			name1
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS14;
			x = 0.36; y = 0.30; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN14;
			x = 0.36; y = 0.35; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};

	class CMQA: creditsbackCM
	{
		name = "CMQA";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub,
			work1,
			name1
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS15;
			x = 0.36; y = 0.2; w = 1.0; h = 0.93;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN15;
			x = 0.36; y = 0.25; w = 1.0; h = 0.93;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};

	class CMMrkev: creditsbackCM
	{
		name = "CMMrkev";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub,
			work1,
			name1
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS16;
			x = 0.36; y = 0.2; w = 1.0; h = 0.93;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN16;
			x = 0.36; y = 0.25; w = 1.0; h = 0.93;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
	};


	class CMVoice: creditsbackCM
	{
		name = "CMVoice";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub,
			work1,work2,
			name2,
			name1
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS17;
			x = 0.36; y = 0.2; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN17;
			x = 0.36; y = 0.25; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

		class work2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS18;
			x = 0.36; y = 0.45; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN18;
			x = 0.36; y = 0.50; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};
	};

	class CMlocal: creditsbackCM
	{
		name = "CMlocal";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub,
			work1,work2,
			name2,
			name1
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS19;
			x = 0.36; y = 0.20; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN19;
			x = 0.36; y = 0.25; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};

		class work2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS20;
			x = 0.36; y = 0.35; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN20;
			x = 0.36; y = 0.40; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};


	};

	class CMlegal: creditsbackCM
	{
		name = "CMlegal";
		controls[]=
		{
			Back, background, web,
			CM1,CM2,CM3,CM4,pub,
			work1,work2,
			name2,
			name1
		};
		class work1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS21;
			x = 0.36; y = 0.2; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN21;
			x = 0.36; y = 0.25; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};

		class work2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS22;
			x = 0.36; y = 0.45; w = 1.0; h = 0.73;
			colorText[] = {0.75, 0.75, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class name2 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITSN22;
			x = 0.36; y = 0.50; w = 1.0; h = 0.53;
			colorText[] = {1.0, 1.0, 1.0, 1};
			font = FontMAIN;
			sizeEx = SizeBook;
		};


	};

	class Endof
	{
		idd=-1;
		movingEnable = false;
		duration=10000;
		name = "Endof";
		controls[]=
		{
			/*Back,*/ Back2,background, copy
			/*CM1,CM2,CM3,CM4,
			BIS1, BIS2,pub,dev*/

		};

		/*class Back : RscText
		{
			x = 0.72; y = 0.0; w = 0.5; h = 1.0;
			text =;
			colorBackground[] = {0.0, 0.0, 0.0, 1};
		};
		*/
		class Back2 : RscText
		{
			x = -0.1; y = 0.80; w = 1.8; h = 1.2;
			text =;
			colorBackground[] = {0.0, 0.0, 0.0, 0.5};
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

		class copy : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS23;
			x = 0.03; y = 0.85; w = 0.9; h = 0.7;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};


	};




	class foto
	{
		idd=-1;
		movingEnable = false;
		duration=10000;
		name = "foto";
		fadein=0;
		controls[]=
		{
			 background, copy, up, down, right, left

		};

		class up : RscText
		{
			x = -0.10; y = -0.1; w = 1.1; h = 0.10;
			text =;
			colorBackground[] = {0.9, 0.9, 0.9, 1.0};
		};

		class down : RscText
		{
			x = -0.10; y = 1.0; w = 1.2; h = 1.2;
			text =;
			colorBackground[] = {0.9, 0.9, 0.9, 1.0};
		};

		class left : RscText
		{
			x = -0.10; y = -0.10; w = 0.10; h = 1.1;
			text =;
			colorBackground[] = {0.9, 0.9, 0.9, 1.0};
		};

		class right : RscText
		{
			x = 1.0; y = -0.1; w = 1; h = 1.2;
			text =;
			colorBackground[] = {0.9, 0.9, 0.9, 1.0};
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};


		class copy : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS23;
			x = 0.03; y = 0.82; w = 0.9; h = 0.7;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};


	};

	class Endof2
	{
		idd=-1;
		movingEnable = false;
		duration=10000;
		name = "Endof2";
		controls[]=
		{
			 Back2,background, copy

		};

		class Back2 : RscText
		{
			x = 0.0; y = 0.0; w = 1.0; h = 1.0;
			text =;
			colorBackground[] = {0.0, 0.0, 0.0, 0.7};
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = -0.1; y = -0.1; w = 1.1; h = 1.1;
			colorText[] = {0, 0, 0, 0};
		};


		class copy : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_CREDITS24;
			x = 0.03; y = 0.50; w = 0.9; h = 0.7;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};


	};

	class maintitles1
	{
		idd=-1;
		movingEnable = false;
		duration=4;
		name = "maintitles1";
		controls[]=
		{
			Background, maintitles_01, maintitles_02
		};


		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

		class maintitles_01 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_MAINTITLES_01;
			x = 0.05;
			y = 0.457;
			w = 0.9;
			h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};

		class maintitles_02 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_MAINTITLES_02;
			x = 0.05;
			y = 0.550;
			w = 0.9;
			h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeBookTitle;
		};

	};

	class maintitles2
	{
		idd=-1;
		movingEnable = false;
		duration=4;
		name = "maintitles2";
		controls[]=
		{
			Background, maintitles_03, maintitles_04 , maintitles_05
		};


		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

		class maintitles_03 : RscText
		{
			style = ST_MULTI + ST_LEFT + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_MAINTITLES_03;
			x = 0.095;
			y = 0.499;
			w = 0.9;
			h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeBookTitle;
		};

		class maintitles_04 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_MAINTITLES_04;
			x = 0.05;
			y = 0.467;
			w = 0.9;
			h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};
		class maintitles_05 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_MAINTITLES_05;
			x = 0.05;
			y = 0.550;
			w = 0.9;
			h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};


	};

	class maintitles3
	{
		idd=-1;
		movingEnable = false;
		duration=6;
		name = "maintitles3";
		controls[]=
		{
			Background, maintitles_06, maintitles_07
		};


		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 0};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

		class maintitles_06 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_MAINTITLES_06;
			x = 0.05;
			y = 0.4;
			w = 0.9;
			h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};
		class maintitles_07 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1.0;
			text = $STR_MAINTITLES_07;
			x = 0.05;
			y = 0.5;
			w = 0.9;
			h = 0.5;
			colorText[] = {1, 1, 1, 1};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};
	};



	class binocular
	{
		idd=-1;
		movingEnable = false;
		duration=1000;
		name = "binocular";
		class objects
		{
			class binocular: RscObject
			{
				model= "optika_dalekohled.p3d";
				idc=-1;
				position[] = {0,0,0.053};
				direction[] = {sin 0, sin 180 * cos 0, cos 180 * cos 0};
				up[] = {0, cos 180, -sin 180};
			};
		};
	};

	class reslogo
	{
		idd=-1;
		movingEnable = false;
		duration=1000;
		name = "reslogo";
		class objects
		{
			class binocular: RscObject
			{
				model= "\o\misc\Resistance_logo.p3d";
				idc=-1;
				position[] = {0,0,3.5};
				direction[] = {sin 0, sin 180 * cos 0, cos 180 * cos 0};
				up[] = {0, cos 0, -sin 180};
			};
		};
	};

		class Demo1
	{
		idd=-1;
		movingEnable = false;
		duration=4;
		name = "Demo 1";
		controls[]=
		{
			Text
		};

		class Text : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "Your transport is down. \nYou're about to ditch in hostile territory.";
			x = 0.05; y = 0.4; w = 0.9; h = 0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font = FontMAIN;
			sizeEx = SizeBookTitle;
		};
	};
	class Demo2
	{
		idd=-1;
		movingEnable = false;
		duration=2;
		name = "Demo 2 - Think fast";
		controls[]=
		{
			Text
		};

		class Text : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "Think fast, what are your options?";
			x = 0.05; y = 0.4; w = 0.9; h = 0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font = FontMAIN;
			sizeEx = SizeBookTitle;
		};
	};
	class Demo3
	{
		idd=-1;
		movingEnable = false;
		duration=1;
		name = "Demo 3 - Hide";
		controls[]=
		{
			Text
		};

		class Text : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "Hide?";
			x = 0.05; y = 0.4; w = 0.9; h = 0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};
	};
	class Demo4
	{
		idd=-1;
		movingEnable = false;
		duration=1;
		name = "Demo 4 - Fight";
		controls[]=
		{
			Text
		};

		class Text : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "Fight?";
			x = 0.05; y = 0.4; w = 0.9; h = 0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};
	};
	class Demo5
	{
		idd=-1;
		movingEnable = false;
		duration=1;
		name = "Demo 5 - Surrender";
		controls[]=
		{
			Text
		};

		class Text : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "Surrender?";
			x = 0.05; y = 0.4; w = 0.9; h = 0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};
	};


	class Demo6
	{
		idd=-1;
		movingEnable = false;
		duration=1;
		name = "Demo 6 - OFP your call";
		controls[]=
		{
			Background, FP1, FP2, FP3, Text
		};

		class Text : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "YOUR CALL.";
			x = 0.05; y = 0.5; w = 0.9; h = 0.3;
			colorText[]={1.0,1.0,1.0,0.5};
			font = FontMAIN;
			sizeEx = SizeTitle;
		};
		class FP1 : RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.3};
			text = "OFPlogo1.paa";
			x = 0.05; y = 0.2; w = 0.3; h = 0.33;
		};
		class FP2 : RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.3};
			text = "OFPlogo2.paa";
			x = 0.35; y = 0.2; w = 0.3; h = 0.33;
		};
		class FP3 : RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.3};
			text = "OFPlogo3.paa";
			x = 0.65; y = 0.2; w = 0.3; h = 0.33;
		};

		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};

	};

	class Demo7
	{
		idd=-1;
		movingEnable = false;
		duration=1;
		name = "Demo 7 TBC";
		controls[]=
		{
			Background, Text, Text1
		};

		class Text : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "JOIN NOW!";
			x = 0.05; y = 0.45; w = 0.9; h = 0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font = FontMAIN;
			sizeEx = SizeBookTitle;
		};
		class Text1 : RscText
		{
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			lineSpacing = 1;
			text = "The ultimate test of your combat skills on PC CD-ROM.";
			x = 0.05; y = 0.55; w = 0.9; h = 0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};
		class Background : RscText
		{
			text = ;
			colorBackground[] = {0, 0, 0, 1};
			x = 0; y = 0; w = 1; h = 1;
			colorText[] = {0, 0, 0, 0};
		};
	};
	class UnlockMission
	{
		idd = -1;
		movingEnable = false;
		duration=2;
		name = "UnlockMission - show in script";
		controls[]=
		{
			Text
		};
		class Text : RscText
		{
			style = ST_CENTER;
			blinkingPeriod = 2;
			x = 0;
			y = 0.05;
			w = 1;
			h = 0.05;
			text = $STR_UNLOCKED_MISSION;
			font = FontMAIN;
			sizeEx = SizeBookTitle;
			colorText[]= {0.8,0.1,0.1,1};
		};
	};
	class UnlockCampaign
	{
		idd = -1;
		movingEnable = false;
		duration=2;
		name = "UnlockCampaign - show in script";
		controls[]=
		{
			Text
		};
		class Text : RscText
		{
			style = ST_CENTER;
			blinkingPeriod = 2;
			x = 0;
			y = 0.05;
			w = 1;
			h = 0.05;
			text = $STR_UNLOCKED_CAMPAIGN;
			font = FontMAIN;
			sizeEx = SizeBookTitle;
			colorText[]= {0.8,0.1,0.1,1};
		};
	};
};

//Loading screen
class RscDisplayLoading
{
  class Variants
  {
    class LoadingOne
    {
      idd = -1;
	    movingEnable = false;

			class controlsBackground
			{
				class Background1: RscText
				{
					x = 0; y = 0;
					w = 1; h = 1;
					colorBackground[] = {0.3, 0.3, 0.3, 1};
				};
			};

	    class controls
			{
		    class Name: RscText
		    {
		      idc = IDC_LOAD_MISSION_NAME;
			    text = $STR_DISP_ERROR;
			    style = ST_CENTER;
			    x = 0; y = 0.04;
			    w = 1;
	      };

				class Date: RscText
				{
					idc = IDC_LOAD_MISSION_DATE;
					text = $STR_DISP_ERROR;
					style = ST_CENTER;
					x = 0; y = 0.7;
					w = 1;
				};

				class FakeProgress: RscText
				{
					x = 0.25; y = 0.5;
					w = 0.5;
					colorBackground[] = {0.8, 0.8, 0.8, 0.2};
				};

				//Progress bar.
				class Progress: RscProgress
				{
					idc = IDC_PROGRESS_PROGRESS;
					x = 0.25; y = 0.5;
					w = 0.5; h = 0.05;
				};

				//Activity indicator bar.
				class Progress2: RscProgress
				{
					idc = IDC_PROGRESS_TIME;
					x = 0.4; y = 0.6;
					w = 0.2; h = 0.03;
				};

				class TextLoad: RscText
				{
					style = ST_CENTER;
					x = 0.25; y = 0.45;
					w = 0.5;
					text = "$STR_LOADING";
				};
			};
		};
	};
};

//Load mission screen.
class RscDisplayLoadMission: RscStandardDisplay
{
	idd = -1;

  class controls
  {
		class Title: RscTitle 
		{
			text = $STR_LOADING;
		}; 

		//Mission's name.
		class Name: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.12;
			w = 1;
		};

  	//Mission's briefing.
		class Briefing: RscHTML
		{
		  idc = IDC_BRIEFING;
			x = 0.09; y = 0.18;
			w = 0.85;
			h = 0.6;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
		  idc = IDC_PROGRESS_PROGRESS;
			x = 0.15; y = 0.848;
			w = 0.7; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
		  idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.9;
			w = 0.2; h = 0.03;
		};

		//Mission's date.
		class Date: RscText
		{
			idc = IDC_LOAD_MISSION_DATE;
			text = $STR_DISP_ERROR;
		  style = ST_CENTER;
			x = 0; y = 0.94;
			w = 1;
		};
	};
};

//Generic loading screen.
class RscDisplayNotFreeze: RscStandardDisplay
{
  idd = -1;

  class controls
  {
	  class Text: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.45;
			w = 1;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
		  idc = IDC_PROGRESS_PROGRESS;
			x = 0.3; y = 0.5;
			w = 0.4; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
			idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.6;
			w = 0.2; h = 0.03;
		};
	};
};

//Generic loading screen.
class RscDisplayNotFreezeBig: RscStandardDisplay
{
	idd = -1;

	class controls
	{
		class Text: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
		  style = ST_CENTER;
		  x = 0; y = 0.45;
	    w = 1;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
		  idc = IDC_PROGRESS_PROGRESS;
			x = 0.3; y = 0.5;
			w = 0.4; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
			idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.6;
			w = 0.2; h = 0.03;
		};
	};
};

//Loading screen start
class RscDisplayStart: RscStandardDisplay
{
  idd = -1;

  class controls
  {
	  class Text: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.45;
			w = 1;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
		  idc = IDC_PROGRESS_PROGRESS;
			x = 0.3; y = 0.5;
			w = 0.4; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
			idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.6;
			w = 0.2; h = 0.03;
		};
	};
};
