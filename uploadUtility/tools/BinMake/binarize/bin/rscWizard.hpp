#include "commonDefs.hpp"
#include "resincl.hpp"
#include "rscCommon.hpp"

//Todo:
//Rename to rscEditor.
//Add back normal island select screen.

#define LINE_HEIGHT 0.05
#define LINE_Y __EVAL(line_y)
#define LINE_W(VALUE) __EVAL(VALUE * line_w)
#define LINE_X(VALUE) __EVAL(line_x + (VALUE * line_w))
#define NEXT_LINE __EXEC(line_y = line_y + LINE_HEIGHT)

#define DISPLAY(IDD, X, Y, W, H) \
	idd = IDD;\
	__EXEC(display_x = X);\
	__EXEC(display_y = Y);\
	__EXEC(display_w = W);\
	__EXEC(display_h = H);\
	__EXEC(line_x = X + 0.02);\
	__EXEC(line_w = W - 0.08);\
	__EXEC(line_y = Y + 0.1);\
	movingEnable = true;
	access = ReadAndWrite;

#define BACKGROUND(NAME) \
	class NAME: RscText\
	{\
		x = __EVAL(display_x);\
		y = __EVAL(display_y);\
		w = __EVAL(display_w);\
		h = __EVAL(display_h);\
		colorBackground[] = {0.3, 0.3, 0.3, 1};\
	};

#define TITLE(NAME, TEXT, IDC) \
	class NAME: RscText\
	{\
		idc = IDC;\
		style = ST_TITLE;\
		x = __EVAL(display_x);\
		y = __EVAL(display_y + 0.02);\
		w = __EVAL(display_w);\
		text = TEXT;\
	};

#define BEGIN_BOX \
	__EXEC(box_y = line_y);\
	__EXEC(line_x = display_x + 0.015);\
	__EXEC(line_w = display_w - 0.05);\
	__EXEC(line_y = box_y + 0.01);

#define END_BOX \
	__EXEC(line_y = line_y + 0.04);\
	__EXEC(line_x = display_x + 0.02);\
	__EXEC(line_w = display_w - 0.045);

#define	STATIC_TEXT(NAME, TEXT, IDC, XVAL, WVAL) \
	class NAME: RscText\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		text = TEXT;\
		sizeEx = Size_Text_Small;\
	};

#define	EDIT(NAME, IDC, XVAL, WVAL) \
	class NAME: RscEdit\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
		text = $STR_DISP_ERROR;\
		sizeEx = Size_Text_Small;\
	};

#define	EDIT_SCRIPT(NAME, IDC, XVAL, WVAL) \
	class NAME: RscEdit\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
		text = $STR_DISP_ERROR;\
		autocomplete="scripting";\
		sizeEx = Size_Text_Small;\
	};

#define	COMBO(NAME, IDC, XVAL, WVAL) \
	class NAME: RscCombo\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
		sizeEx = Size_Text_Small;\
	};

#define	SLIDER(NAME, IDC, XVAL, WVAL) \
	class NAME: RscSlider\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
	};

#define	BUTTON(NAME, TEXT, IDC, SOUND, VOLUME, XVAL, DEFAULT) \
	class NAME: RscButton\
	{\
		idc = IDC;\
		x = __EVAL(display_x + display_w - 0.153 - XVAL * 0.145);\
		y = __EVAL(display_y + display_h - 0.075);\
		w = 0.13;\
		h = 0.05;\
		text = TEXT;\
		default = DEFAULT;\
		sizeEx = Size_Text_Small;\
	};

#define	LEFT_BUTTON(NAME, TEXT, IDC, SOUND, VOLUME, XVAL, DEFAULT) \
	class NAME: RscButton\
	{\
		idc = IDC;\
		x = __EVAL(display_x + 0.02 + XVAL * 0.15);\
		y = __EVAL(display_y + display_h - 0.075);\
		w = 0.13;\
		h = 0.05;\
		text = TEXT;\
		default = DEFAULT;\
		sizeEx = Size_Text_Small;\
	};

#define BUTTON_OK(XVAL) BUTTON(ButtonOK, $STR_DISP_OK, IDC_OK, "", 0.2, XVAL, 0)
#define DEFAULT_BUTTON_OK(XVAL) BUTTON(ButtonOK, $STR_DISP_OK, IDC_OK, "", 0.2, XVAL, 1)
#define BUTTON_CANCEL(XVAL) BUTTON(ButtonCancel, $STR_DISP_CANCEL, IDC_CANCEL, "", 0.2, XVAL, 0)
#define DEFAULT_BUTTON_CANCEL(XVAL) BUTTON(ButtonCancel, $STR_DISP_CANCEL, IDC_CANCEL, "", 0.2, XVAL, 1)

//Island selection screen. Shown when accessing the mission editor.
class RscDisplaySelectIsland: RscStandardDisplay
{
	idd = IDD_SELECT_ISLAND;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_SELECT_ISLAND;};

		//The available islands.
		class Islands: RscListBox
		{
			idc = IDC_SELECT_ISLAND;
			x = 0.025; y = 0.2;
			w = 0.95; h = 0.6;
			rows = 8;
		};
		
		//ToDo: Remove this control.
		//This used to be a button to start the prototype new editor. This editor now replaces the old one.
		class B_Editor: RscActiveText
		{
			idc = IDC_SELECT_ISLAND_EDITOR_OLD;
			x = 0.01; y = 0.9;
			w = 0.3;
			text = "Old-style editor";
		};


		//Cancel back to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.59; y = 0.9;
			w = 0.25;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the selected island and start the new editor.
		class B_OK: B_Cancel
		{
			//idc = IDC_OK; This would launch the old editor.
			idc = IDC_SELECT_ISLAND_EDITOR;
			x = 0.84;
			w = 0.15;
			text = $STR_DISP_OK;
			default = 1;
		};
	};
};

//ToDo: Verify this is working.
//Advanced island selection screen.
class RscDisplayCustomArcade: RscStandardDisplay
{
	idd = IDD_CUSTOM_ARCADE;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_MAIN_DESIGN;};

		//Tree interface for available islands and missions.
		class Game: RscTree
		{
			idc = IDC_CUST_GAME;
			x = 0.24; y = 0.22;
			w = 0.52;	h = 0.56;
			style = TR_AUTOCOLLAPSE;
		};

		//Edit the selected mission.
		class B_Edit: RscButton
		{
			idc = IDC_CUST_EDIT;
			x = 0.22; y = 0.9;
	    w = 0.16; h = 0.05;
			text = $STR_DISP_ERROR;
		};

		//Delete the selected mission.
		class B_Delete: B_Edit
		{
			idc = IDC_CUST_DELETE;
			x = 0.36;
			text = $STR_DISP_DELETE;
		};

		//Play the selected mission.
		class B_Play: B_Edit
		{
			idc = IDC_CUST_PLAY;
			x = 0.52;
			text = $STR_DISP_CUST_PLAY;
			default = 1;
		};

		//Cancel back to the main menu.
		class B_Cancel: B_Edit
		{
			idc = IDC_CANCEL;
			x = 0.66;
			text = $STR_DISP_CANCEL;
		};
	};
};

//Mission editor main screen.
class RscDisplayArcadeMap: RscMap
{
	movingEnable = false;
	idd = IDD_ARCADE_MAP;

  textureClear = ProcTextWhite;
  textureCloudly = ProcTextWhite;
  textureOvercast = ProcTextWhite;
  textureRainy = ProcTextWhite;
  textureStormy = ProcTextWhite;

	class controls: controls
	{
		//The map display.
		class Map: Map {};

		class Background1: RscText
		{
			x = 0.83; y = 0;
			w = 0.17; h = 1;
			colorBackground[] = Color_Background;
		};

		//List of editing modes.
		class ToolboxMode: RscToolbox
		{
			idc = IDC_ARCMAP_MODE;
			x = 0.84; y = 0.11;
			w = 0.15; h = 0.2;

			strings[] =
			{
				$STR_DISP_ARCMAP_UNITS,
				$STR_DISP_ARCMAP_GROUPS,
				$STR_DISP_ARCMAP_SENSORS,
				$STR_DISP_ARCMAP_WAYPOINTS,
				$STR_DISP_ARCMAP_SYNCHRONIZE,
				$STR_DISP_ARCMAP_MARKERS
			};

			rows = 6;
			columns = 1;
		};

		//Open the Intel screen.
		class B_Intel: RscActiveText
		{
			idc = IDC_ARCMAP_INTEL;
			x = 0.83; y = 0.06;
      w = 0.17;
      style = ST_CENTER;
			text = $STR_DISP_ARCMAP_INTEL; 
		};

		//Load a saved mission.
		class B_Load: RscButton
		{
			idc = IDC_ARCMAP_LOAD;
			x = 0.84; y = 0.32;
	    w = 0.15; h = 0.035;
	    sizeEx = Size_Text_Small;
			text = $STR_DISP_ARCMAP_LOAD;
		};

		//Merge two missions.
		class B_Merge: B_Load
		{
			idc = IDC_ARCMAP_MERGE;
			y = 0.38;
			text = $STR_DISP_ARCMAP_MERGE;
		};

		//Save the mission.
		class B_Save: B_Load
		{
			idc = IDC_ARCMAP_SAVE;
			y = 0.44;
			text = $STR_DISP_ARCMAP_SAVE;
		};

		//Clear the mission.
		class B_Clear: B_Load
		{
			idc = IDC_ARCMAP_CLEAR;
			y = 0.5;
			text = $STR_DISP_ARCMAP_CLEAR;
		};

		//Change the mission section that is being edited.
		class Section: RscCombo
		{
			idc = IDC_ARCMAP_SECTION;
			x = 0.84; y = 0.56;
			w = 0.15; h = 0.03;
			wholeHeight = 0.12;
			sizeEx = Size_Text_Small;
		};

		//Enable or disable object ID numbers.
		class B_Ids: B_Load
		{
			idc = IDC_ARCMAP_IDS;
			y = 0.62;
			text = $STR_DISP_ERROR;
		};

		//Enable or disable terrain textures.
		class B_Textures: B_Load
		{
			idc = IDC_ARCMAP_TEXTURES;
			y = 0.68;
			text = $STR_DISP_ERROR;
		};

		//Preview the mission.
		class B_Preview: B_Load
		{
			idc = IDC_ARCMAP_PREVIEW;
			y = 0.755;
			text = $STR_DISP_ARCMAP_PREVIEW;
			default = 1;
		};

		//Continue previewing the mission.
		class B_Continue: B_Load
		{
			idc = IDC_ARCMAP_CONTINUE;
			y = 0.815;
			text = $STR_DISP_ARCMAP_CONTINUE;
		};

		//Cancel back to the main menu.
		class B_Cancel: B_Load
		{
			idc = IDC_CANCEL;
			y = 0.875;
			text = $STR_DISP_ARCMAP_EXIT;
		};
	};
};

//Mission editor Unit pop-up screen.
class RscDisplayArcadeUnit
{
	DISPLAY(IDD_ARCADE_UNIT, 0.15, 0.02, 0.6, 0.95)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, "", IDC_ARCUNIT_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextSide, $STR_DISP_ARCUNIT_SIDE, -1, 0, 0.25)
			//Unit's side.
			COMBO(ValueSide, IDC_ARCUNIT_SIDE, 0.25, 0.25)
			STATIC_TEXT(TextRank, $STR_DISP_ARCUNIT_RANK, -1, 0.5, 0.25)
			//Unit's rank.
			COMBO(ValueRank, IDC_ARCUNIT_RANK, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextClass, $STR_DISP_ARCUNIT_CLASS, -1, 0, 0.25)
			//Unit's class.
			COMBO(ValueClass, IDC_ARCUNIT_CLASS, 0.25, 0.25)
			STATIC_TEXT(TextVehicle, $STR_DISP_ARCUNIT_VEHICLE, -1, 0.5, 0.25)
			//Unit's type.
			COMBO(ValueVehicle, IDC_ARCUNIT_VEHICLE, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextControl, $STR_DISP_ARCUNIT_CTRL, -1, 0, 0.25)
			//Unit is controlled by?
			COMBO(ValueControl, IDC_ARCUNIT_CTRL, 0.25, 0.25)
			STATIC_TEXT(TextSpecial, $STR_DISP_ARCUNIT_SPECIAL, -1, 0.5, 0.25)
			//Unit's special properties.
			COMBO(ValueSpecial, IDC_ARCUNIT_SPECIAL, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextAge, $STR_DISP_ARCUNIT_AGE, -1, 0, 0.25)
			//Unit's info age.
			COMBO(ValueAge, IDC_ARCUNIT_AGE, 0.25, 0.25)
			STATIC_TEXT(TextText, $STR_DISP_ARCUNIT_TEXT, -1, 0.5, 0.25)
			//Unit's name.
			EDIT(ValueText, IDC_ARCUNIT_TEXT, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextLock, $STR_DISP_ARCUNIT_LOCK, -1, 0, 0.25)
			//Unit is locked?
			COMBO(ValueLock, IDC_ARCUNIT_LOCK, 0.25, 0.25)
			STATIC_TEXT(TextSkill, $STR_DISP_ARCUNIT_SKILL, -1, 0.5, 0.25)
			//Unit's skill level.
			SLIDER(ValueSkill, IDC_ARCUNIT_SKILL, 0.75, 0.25)

		END_BOX

		BEGIN_BOX

			STATIC_TEXT(TextInit, $STR_DISP_ARCUNIT_INIT, -1, 0, 0.25)
			//Unit's initialization scripting commands.
			EDIT_SCRIPT(ValueInit, IDC_ARCUNIT_INIT, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextDescription, $STR_DISP_ARCUNIT_DESC, -1, 0, 0.25)
			//Unit's description.
			EDIT(ValueDescription, IDC_ARCUNIT_DESC, 0.25, 0.75)

		END_BOX

		NEXT_LINE

		BEGIN_BOX

			//Change the unit's azimuth.
			class Azimut: RscPicture
			{
				idc = IDC_ARCUNIT_AZIMUT_PICTURE;
				text = ProcTextWhite;
				x = 0.5525; y = __EVAL(box_y - 0.04);
				w = 0.2; h = 0.26;
				colorText[] = {0.08, 0.08, 0.12, 1};
			};

			class TextAzimut: RscText
			{
				x = 0.605; y = __EVAL(box_y + 0.05);
				w = 0.15;
				sizeEx = Size_Text_Small;
				text = $STR_DISP_ARCUNIT_AZIMUT;
			};

			//Unit's current azimuth.
			class ValueAzimut: RscEdit
			{
				idc = IDC_ARCUNIT_AZIMUT;
				x = 0.63; y = __EVAL(box_y + 0.1);
				w = 0.05; h = 0.03;
				sizeEx = Size_Text_Small;
			};

			STATIC_TEXT(TextHealth, $STR_DISP_ARCUNIT_HEALTH, -1, 0, 0.25)
			//Unit's health level.
			SLIDER(ValueHealth, IDC_ARCUNIT_HEALTH, 0.25, 0.4)
			NEXT_LINE

			STATIC_TEXT(TextFuel, $STR_DISP_ARCUNIT_FUEL, -1, 0, 0.25)
			//Unit's fuel level.
			SLIDER(ValueFuel, IDC_ARCUNIT_FUEL, 0.25, 0.4)
			NEXT_LINE

			STATIC_TEXT(TextAmmo, $STR_DISP_ARCUNIT_AMMO, -1, 0, 0.25)
			//Unit's ammo level.
			SLIDER(ValueAmmo, IDC_ARCUNIT_AMMO, 0.25, 0.4)

		END_BOX

		NEXT_LINE

		BEGIN_BOX

			STATIC_TEXT(TextPresence, $STR_DISP_ARCUNIT_PRESENCE, -1, 0, 0.5)
			//Unit's probability of presence.
			SLIDER(ValuePresence, IDC_ARCUNIT_PRESENCE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPresenceCondition, $STR_DISP_ARCUNIT_PRESENCE_COND, -1, 0, 0.5)
			//Unit's condition of presence.
			EDIT_SCRIPT(ValuePresenceCondition, IDC_ARCUNIT_PRESENCE_COND, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPlacement, $STR_DISP_ARCUNIT_PLACE, -1, 0, 0.5)
			//Unit's placement radius.
			EDIT(ValuePlacement, IDC_ARCUNIT_PLACE, 0.5, 0.5)
			NEXT_LINE

		END_BOX

		//Confirm the unit settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Group pop-up screen.
class RscDisplayArcadeGroup
{
	DISPLAY(IDD_ARCADE_GROUP, 0.2, 0.30, 0.6, 0.41)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_ARCGRP_TITLE, -1)

		BEGIN_BOX

			//Change the group's azimuth.
			class Azimut: RscPicture
			{
				idc = IDC_ARCGRP_AZIMUT_PICTURE;
				text = ProcTextWhite;
				x = 0.5725; y = __EVAL(box_y - 0.04);
				w = 0.2; h = 0.26;
				colorText[] = {0.08, 0.08, 0.12, 1};
			};

			class TextAzimut: RscText
			{
				x = 0.625; y = __EVAL(box_y + 0.05);
				w = 0.15;
				sizeEx = Size_Text_Small;
				text = $STR_DISP_ARCUNIT_AZIMUT;
			};

			//Group's current azimuth.
			class ValueAzimut: RscEdit
			{
				idc = IDC_ARCGRP_AZIMUT;
				x = 0.65; y = __EVAL(box_y + 0.1);
				w = 0.05; h = 0.03;
				sizeEx = Size_Text_Small;
			};

			STATIC_TEXT(TextSide, $STR_DISP_ARCGRP_SIDE, -1, 0, 0.25)
			//Group's side.
			COMBO(ValueSide, IDC_ARCGRP_SIDE, 0.25, 0.4)
			NEXT_LINE

			STATIC_TEXT(TextType, $STR_DISP_ARCGRP_TYPE, -1, 0, 0.25)
			//Group's type.
			COMBO(ValueType, IDC_ARCGRP_TYPE, 0.25, 0.4)
			NEXT_LINE

			STATIC_TEXT(TextName, $STR_DISP_ARCGRP_NAME, -1, 0, 0.25)
			//Group's name.
			COMBO(ValueName, IDC_ARCGRP_NAME, 0.25, 0.4)
			NEXT_LINE

			NEXT_LINE

		END_BOX

		//Confirm the group settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Waypoint pop-up screen.
class RscDisplayArcadeWaypoint
{
	DISPLAY(IDD_ARCADE_WAYPOINT, 0.2, 0.05, 0.56, 0.91)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, "", IDC_ARCWP_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextType, $STR_DISP_ARCWP_TYPE, -1, 0, 0.5)
			//Waypoint's type.
			COMBO(ValueType, IDC_ARCWP_TYPE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSequence, $STR_DISP_ARCWP_SEQ, -1, 0, 0.5)
			//Sequence of waypoints for the attached unit.
			COMBO(ValueSequence, IDC_ARCWP_SEQ, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextDescription, $STR_DISP_ARCWP_DESC, -1, 0, 0.5)
			//Waypoint's description.
			EDIT(ValueDescription, IDC_ARCWP_DESC, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextCombatMode, $STR_DISP_ARCWP_SEMAPHORE, -1, 0, 0.5)
			//Waypoint's combat mode.
			COMBO(ValueCombatMode, IDC_ARCWP_SEMAPHORE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextFormation, $STR_DISP_ARCWP_FORM, -1, 0, 0.5)
			//Waypoint's formation.
			COMBO(ValueFormation, IDC_ARCWP_FORM, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSpeed, $STR_DISP_ARCWP_SPEED, -1, 0, 0.5)
			//Waypoint's movement speed.
			COMBO(ValueSpeed, IDC_ARCWP_SPEED, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextCombat, $STR_DISP_ARCWP_COMBAT, -1, 0, 0.5)
			//Waypoint's rules of engagement.
			COMBO(ValueCombat, IDC_ARCWP_COMBAT, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPlacement, $STR_DISP_ARCWP_PLACE, -1, 0, 0.5)
			//Waypoint's placement radius.
			EDIT(ValuePlacement, IDC_ARCWP_PLACE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextHousePos, $STR_DISP_ARCWP_HOUSEPOS, IDC_ARCWP_HOUSEPOSTEXT, 0, 0.5)
			//Waypoint's relative house position.
			COMBO(ValueHousePos, IDC_ARCWP_HOUSEPOS, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTimeout, $STR_DISP_ARCWP_TIMEOUT, -1, 0, 0.25)
			STATIC_TEXT(TextTimeoutMin, $STR_DISP_ARCWP_TIMEOUT_MIN, -1, 0.25, 0.125)
			//Waypoint's minimum timeout or countdown time.
			EDIT(ValueTimeoutMin, IDC_ARCWP_TIMEOUT_MIN, 0.375, 0.125)
			STATIC_TEXT(TextTimeoutMax, $STR_DISP_ARCWP_TIMEOUT_MAX, -1, 0.5, 0.125)
			//Waypoint's maximum timeout or countdown time.
			EDIT(ValueTimeoutMax, IDC_ARCWP_TIMEOUT_MAX, 0.625, 0.125)
			STATIC_TEXT(TextTimeoutMid, $STR_DISP_ARCWP_TIMEOUT_MID, -1, 0.75, 0.125)
			//Waypoint's medium timeout or countdown time.
			EDIT(ValueTimeoutMid, IDC_ARCWP_TIMEOUT_MID, 0.875, 0.125)
			NEXT_LINE

			STATIC_TEXT(TextExpCond, $STR_DISP_ARCWP_EXPCOND, -1, 0, 0.25)
			//Waypoint's condition.
			EDIT(ValueExpCond, IDC_ARCWP_EXPCOND, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpActiv, $STR_DISP_ARCWP_EXPACTIV, -1, 0, 0.25)
			//Waypoint's scripting command execution upon activation.
			EDIT_SCRIPT(ValueExpActiv, IDC_ARCWP_EXPACTIV, 0.25, 0.75)
			NEXT_LINE

			//Waypoint's showing mode.
			class Show: RscToolbox
			{
				idc = IDC_ARCWP_SHOW;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.06;

				strings[] =
				{
					$STR_DISP_ARCWP_SHOW_NEVER,
					$STR_DISP_ARCWP_SHOW_EASY,
					$STR_DISP_ARCWP_SHOW_ALWAYS
				};

				rows = 1;
				columns = 3;
			};
			NEXT_LINE

			STATIC_TEXT(TextExpScript, $STR_DISP_ARCWP_SCRIPT, -1, 0, 0.25)
			//Waypoint's executed script upon activation.
			EDIT(ValueExpScript, IDC_ARCWP_SCRIPT, 0.25, 0.75)

		END_BOX

		//Access this waypoint's special effects.
		LEFT_BUTTON(ButtonEffects, $STR_DISP_ARCWP_EFFECTS, IDC_ARCWP_EFFECTS, "", 0.2, 0, 0)
		//Confirm the waypoint settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Marker pop-up screen.
class RscDisplayArcadeMarker
{
	DISPLAY(IDD_ARCADE_MARKER, 0.2, 0.2, 0.6, 0.5)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, "", IDC_ARCMARK_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_ARCMARK_NAME, -1, 0, 0.5)
			//Marker's name.
			EDIT(ValueName, IDC_ARCMARK_NAME, 0.5, 0.5)
			NEXT_LINE

			//Marker's type.
			class Marker: RscToolbox
			{
				idc = IDC_ARCMARK_MARKER;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.04;

				strings[] =
				{
					$STR_DISP_ARCMARK_ICON,
					$STR_DISP_ARCMARK_RECT,
					$STR_DISP_ARCMARK_ELLIPSE
				};

				rows = 1;
				columns = 3;
			};
			NEXT_LINE

			STATIC_TEXT(TextColorName, $STR_DISP_ARCMARK_COLOR, -1, 0, 0.5)
			//Marker's color.
			COMBO(ValueColorName, IDC_ARCMARK_COLOR, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextType, "", IDC_ARCMARK_TYPE_TEXT, 0, 0.5)
			//Marker's icon type.
			COMBO(ValueIcon, IDC_ARCMARK_TYPE, 0.5, 0.5)
			//Marker's fill type.
			COMBO(ValueFill, IDC_ARCMARK_FILL, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextA, $STR_DISP_ARCMARK_A, -1, 0, 0.167)
			//Marker's width.
			EDIT(ValueA, IDC_ARCMARK_A, 0.167, 0.167)
			STATIC_TEXT(TextB, $STR_DISP_ARCMARK_B, -1, 0.334, 0.167)
			//Marker's height.
			EDIT(ValueB, IDC_ARCMARK_B, 0.501, 0.167)
			STATIC_TEXT(TextAngle, $STR_DISP_ARCMARK_ANGLE, -1, 0.668, 0.167)
			//Marker's angle.
			EDIT(ValueAngle, IDC_ARCMARK_ANGLE, 0.835, 0.167)
			NEXT_LINE

			STATIC_TEXT(TextText, $STR_DISP_ARCMARK_TEXT, -1, 0, 0.5)
			//Marker's text.
			EDIT(ValueText, IDC_ARCMARK_TEXT, 0.5, 0.5)

		END_BOX

		//Confirm market settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Trigger pop-up screen.
class RscDisplayArcadeSensor
{
	DISPLAY(IDD_ARCADE_SENSOR, 0.2, 0.05, 0.56, 0.91)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_ARCSENS_TITLE, IDC_ARCSENS_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextA, $STR_DISP_ARCSENS_A, -1, 0, 0.25)
			//Trigger's width.
			EDIT(ValueA, IDC_ARCSENS_A, 0.25, 0.25)
			STATIC_TEXT(TextB, $STR_DISP_ARCSENS_B, -1, 0.5, 0.25)
			//Trigger's height.
			EDIT(ValueB, IDC_ARCSENS_B, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextAngle, $STR_DISP_ARCSENS_ANGLE, -1, 0, 0.25)
			//Trigger's angle.
			EDIT(ValueAngle, IDC_ARCSENS_ANGLE, 0.25, 0.25)
			NEXT_LINE

			//Trigger's shape.
			class Rectangular: RscToolbox
			{
				idc = IDC_ARCSENS_RECT;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(0.5); h = 0.03;

				strings[] =
				{
					$STR_DISP_ARCSENS_ELLIPSE,
					$STR_DISP_ARCSENS_RECT
				};

				rows = 1;
				columns = 2;
			};

			//Is the trigger repeating?
			class Repeating: RscToolbox
			{
				idc = IDC_ARCSENS_REPEATING;
				x = LINE_X(0.5); y = LINE_Y;
				w = LINE_W(0.5); h = 0.03;

				strings[] =
				{
					$STR_DISP_ARCSENS_ONCE,
					$STR_DISP_ARCSENS_REPEAT
				};

				rows = 1;
				columns = 2;
			};
			NEXT_LINE

			STATIC_TEXT(TextType, $STR_DISP_ARCSENS_TYPE, -1, 0, 0.25)
			//Trigger's type.
			COMBO(ValueType, IDC_ARCSENS_TYPE, 0.25, 0.25)
			STATIC_TEXT(TextActivation, $STR_DISP_ARCSENS_ACTIV, -1, 0.5, 0.25)
			//The trigger is activated by?
			COMBO(ValueActivation, IDC_ARCSENS_ACTIV, 0.75, 0.25)

		END_BOX

		BEGIN_BOX

			//The trigger detects the presence of?
			class Presence: RscToolbox
			{
				idc = IDC_ARCSENS_PRESENCE;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.06;

				strings[] =
				{
					$STR_DISP_ARCSENS_PRESYES,
					$STR_DISP_ARCSENS_PRESNO,
					$STR_DISP_ARCSENS_DETWEST,
					$STR_DISP_ARCSENS_DETEAST,
					$STR_DISP_ARCSENS_DETGUERRILA,
					$STR_DISP_ARCSENS_DETCIVILIAN
				};

				rows = 2;
				columns = 3;
			};
			NEXT_LINE
			NEXT_LINE

			//Does the trigger have timeout or countdown?
			class Interruptable: RscToolbox
			{
				idc = IDC_ARCSENS_INTERRUPT;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(0.5); h = 0.03;

				strings[] =
				{
					$STR_DISP_ARCSENS_COUNTDOWN,
					$STR_DISP_ARCSENS_TIMEOUT
				};

				rows = 1;
				columns = 2;
			};

		END_BOX

		BEGIN_BOX

			STATIC_TEXT(TextTimeoutMin, $STR_DISP_ARCSENS_TIMEOUT_MIN, -1, 0, 0.167)
			//Trigger's minimum timeout or countdown time.
			EDIT(ValueTimeoutMin, IDC_ARCSENS_TIMEOUT_MIN, 0.167, 0.167)
			STATIC_TEXT(TextTimeoutMax, $STR_DISP_ARCSENS_TIMEOUT_MAX, -1, 0.334, 0.167)
			//Trigger's maximum timeout or countdown time.
			EDIT(ValueTimeoutMax, IDC_ARCSENS_TIMEOUT_MAX, 0.501, 0.167)
			STATIC_TEXT(TextTimeoutMid, $STR_DISP_ARCSENS_TIMEOUT_MID, -1, 0.668, 0.167)
			//Trigger's medium timeout or countdown time.
			EDIT(ValueTimeoutMid, IDC_ARCSENS_TIMEOUT_MID, 0.835, 0.167)

		END_BOX

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_ARCSENS_NAME, -1, 0, 0.25)
			//Trigger's name.
			EDIT(ValueName, IDC_ARCSENS_NAME, 0.25, 0.25)
			STATIC_TEXT(TextText, $STR_DISP_ARCSENS_TEXT, -1, 0.5, 0.25)
			//Trigger's text.
			EDIT(ValueText, IDC_ARCSENS_TEXT, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextExpCond, $STR_DISP_ARCSENS_EXPCOND, -1, 0, 0.25)
			//Trigger's activation condition.
			EDIT_SCRIPT(ValueExpCond, IDC_ARCSENS_EXPCOND, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpActiv, $STR_DISP_ARCSENS_EXPACTIV, -1, 0, 0.25)
			//Trigger's scripting commands upon activation.
			EDIT_SCRIPT(ValueExpActiv, IDC_ARCSENS_EXPACTIV, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpDesactiv, $STR_DISP_ARCSENS_EXPDESACTIV, -1, 0, 0.25)
			//Trigger's scripting commands upon deactivation.
			EDIT_SCRIPT(ValueExpDesactiv, IDC_ARCSENS_EXPDESACTIV, 0.25, 0.75)

		END_BOX

		//Access the trigger's special effects.
		LEFT_BUTTON(ButtonEffects, $STR_DISP_ARCSENS_EFFECTS, IDC_ARCSENS_EFFECTS, "", 0.2, 0, 0)
		//Confirm trigger settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Effects pop-up screen.
class RscDisplayArcadeEffects
{
	DISPLAY(IDD_ARCADE_EFFECTS, 0.2, 0.05, 0.6, 0.85)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_ARCEFF_TITLE, -1)

		BEGIN_BOX

			//Activated script.
			EDIT_SCRIPT(Condition, IDC_ARCEFF_CONDITION, 0, 1)
			NEXT_LINE

			STATIC_TEXT(TextSound, $STR_DISP_ARCEFF_SOUND_ANON, -1, 0, 0.5)
			//Anonymous sound source.
			COMBO(ValueSound, IDC_ARCEFF_SOUND, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextVoice, $STR_DISP_ARCEFF_VOICE, -1, 0, 0.5)
			//Voice sound source.
			COMBO(ValueVoice, IDC_ARCEFF_VOICE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSoundEnv, $STR_DISP_ARCEFF_SOUND_ENV, -1, 0, 0.5)
			//Environmental sound source.
			COMBO(ValueSoundEnv, IDC_ARCEFF_SOUND_ENV, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSoundDet, $STR_DISP_ARCEFF_SOUND_DET, -1, 0, 0.5)
			//Trigger sound source.
			COMBO(ValueSoundDet, IDC_ARCEFF_SOUND_DET, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextMusic, $STR_DISP_ARCEFF_TRACK, -1, 0, 0.5)
			//Music track.
			COMBO(ValueMusic, IDC_ARCEFF_MUSIC, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitleType, $STR_DISP_ARCEFF_TITTYPE, -1, 0, 0.5)
			//Type of resource title.
			COMBO(ValueTitleType, IDC_ARCEFF_TITTYPE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitleEffect, $STR_DISP_ARCEFF_TITEFF, -1, 0, 0.5)
			//Type of title effect.
			COMBO(ValueTitleEffect, IDC_ARCEFF_TITEFF, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitle, $STR_DISP_ARCEFF_TITTEXT, IDC_ARCEFF_TEXT_TITTEXT, 0, 0.25)
			//Text for title text.
			EDIT(ValueTitleText, IDC_ARCEFF_TITTEXT, 0.25, 0.75)
			//Type for title resource.
			COMBO(ValueTitleRes, IDC_ARCEFF_TITRES, 0.5, 0.5)
			//Type for title object.
			COMBO(ValueTitleObj, IDC_ARCEFF_TITOBJ, 0.5, 0.5)
			NEXT_LINE

		END_BOX

		//Confirm effect settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the previous screen.
		BUTTON_CANCEL(0)
	};
};

//Mission editor saving pop-up screen.
class RscDisplayTemplateSave
{
	DISPLAY( IDD_TEMPLATE_SAVE, 0.28, 0.2, 0.46, 0.33)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_TEMPL_SAVE, -1)

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_TEMPL_NAME, -1, 0, 0.5)
			//Mission name.
			EDIT(ValueName, IDC_TEMPL_NAME, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextMode, $STR_DISP_TEMPL_MODE, -1, 0, 0.5)
			//Export type.
			COMBO(ValueMode, IDC_TEMPL_MODE, 0.5, 0.5)

		END_BOX

		//Confirm and save.
		DEFAULT_BUTTON_OK(1)
		//Cancel save.
		BUTTON_CANCEL(0)
	};
};

//Mission editor loading pop-up screen.
class RscDisplayTemplateLoad
{
	DISPLAY(IDD_TEMPLATE_LOAD, 0.28, 0.20, 0.46, 0.31)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_TEMPL_LOAD, IDC_TEMPL_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextIsland, $STR_DISP_TEMPL_ISLAND, -1, 0, 0.5)
			//Select mission's map.
			COMBO(ValueIsland, IDC_TEMPL_ISLAND, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextName, $STR_DISP_TEMPL_NAME, -1, 0, 0.5)
			//Select mission's name.
			COMBO(ValueName, IDC_TEMPL_NAME, 0.5, 0.5)
			NEXT_LINE

		END_BOX

		//Confirm and load.
		DEFAULT_BUTTON_OK(1)
		//Cancel load.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Intel pop-up screen.
class RscDisplayIntel
{
	DISPLAY(IDD_INTEL, 0.2, 0.02, 0.64, 0.96)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_INTEL_TITLE, -1)

		BEGIN_BOX

			STATIC_TEXT(TextBriefingName, $STR_DISP_INTEL_NAME, -1, 0, 0.25)
			//Mission's name in the briefing screens.
			EDIT(ValueBriefingName, IDC_INTEL_BRIEFING_NAME, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextBriefingDescription, $STR_DISP_INTEL_DESC, -1, 0, 0.25)
			//Mission's description.
			EDIT(ValueBriefingDescription, IDC_INTEL_BRIEFING_DESC, 0.25, 0.75)
			NEXT_LINE
			NEXT_LINE

			STATIC_TEXT(TextDate, $STR_DISP_INTEL_DATE, -1, 0, 0.125)
			//Month.
			COMBO(ValueMonth, IDC_INTEL_MONTH, 0.125, 0.125)
			//Day.
			COMBO(ValueDay, IDC_INTEL_DAY, 0.25, 0.125)
			STATIC_TEXT(TextTime, $STR_DISP_INTEL_TIME, -1, 0.625, 0.125)
			//Hour.
			COMBO(ValueHour, IDC_INTEL_HOUR, 0.75, 0.125)
			//Minute.
			COMBO(ValueMinute, IDC_INTEL_MINUTE, 0.875, 0.125)
			NEXT_LINE

			//Current weather conditions.
			SLIDER(ValueWeather, IDC_INTEL_WEATHER, 0, 1)
			NEXT_LINE

			//Current fog conditions.
			SLIDER(ValueFog, IDC_INTEL_FOG, 0, 1)
			NEXT_LINE

			//Forecasted weather conditions.
			SLIDER(ValueWeatherForecast, IDC_INTEL_WEATHER_FORECAST, 0, 1)
			NEXT_LINE

			//Forecasted fog conditions.
			SLIDER(ValueFogForecast, IDC_INTEL_FOG_FORECAST, 0, 1)
			NEXT_LINE

			//Resistance stance to other sides.
			class ValueResistance: RscToolbox
			{
				idc = IDC_INTEL_RESISTANCE;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.04;

				strings[] =
				{
					$STR_DISP_INTEL_NONE_FRIENDLY,
					$STR_DISP_INTEL_WEST_FRIENDLY,
					$STR_DISP_INTEL_EAST_FRIENDLY,
					$STR_DISP_INTEL_BOTH_FRIENDLY
				};

				rows = 1;
				columns = 4;
			};

		END_BOX

		//Confirm intel settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//X-box style mission wizard screen.
class RscDisplayXWizardTemplate: RscStandardDisplay
{
	idd = IDD_XWIZARD_TEMPLATE;

  west = ProcTextWhite;
  east = ProcTextWhite;
  guer = ProcTextWhite;
  civl = ProcTextWhite;

	class controls
	{
		class Title: RscTitle {text = $STR_SINGLE_NEW_MISSION_TITLE;};

		class TemplateText: RscText
		{
			x = 0.025; y = 0.16;
			w = 0.3;
			text = $STR_DISP_MPW_TEMPLATE;
		};

		//Available templates.
		class TemplateValue: RscListBox
		{
			idc = IDC_XWIZ_TEMPLATE;
			x = 0.025; y = 0.24;
			w = 0.45; h = 0.57;
		};

		//HTML overview page of the selected template.
		class Overview: RscHTML
		{
			idc = IDC_XWIZ_TEMPLATE_OVERVIEW;
			x = 0.525; y = 0.24;
			w = 0.45; h = 0.57;
		};

		//Cancel template creation and exit.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		//Confirm template settings.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

//X-box style mission wizard configuration screen.
class RscDisplayXWizardIntel: RscStandardDisplay
{
	idd = IDD_XWIZARD_INTEL;

  textureClear = ProcTextWhite;
  textureCloudly = ProcTextWhite;
  textureOvercast = ProcTextWhite;
  textureRainy = ProcTextWhite;
  textureStormy = ProcTextWhite;

	class controls
	{
		class Title: RscTitle {text = $STR_XBOX_WIZARD_EDIT;};

		class SumaTemplateValue: RscText
		{
			idc = IDC_XWIZ_SUM_TEMPLATE;
			x = 0.03; y = 0.14;
			w = 0.3; h = 0.08;
		};

	 	class Unit: RscButton
	 	{
	 		idc = IDC_XWIZ_UNIT;
			x = 0.03; y = 0.2;
			w = 0.25; h = 0.04;
	 		text = $STR_DISP_SRVSETUP_UNITS;
	 	};

		class Island: Unit
		{
			idc = IDC_XWIZ_ISLAND;
			y = 0.26;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_ISLAND;
		};

	 	class Name: Unit
		{
			idc = IDC_XWIZ_NAME;
			y = 0.32;
			text = $STR_DISP_XBOX_EDIT_PROFILE_NAME;
		};

		class Map: Unit
		{
			idc = IDC_XWIZ_MAP;
			y = 0.38;
			text = $STR_USRACT_MAP;
		};

		class Time: Unit
		{
			idc = IDC_XWIZ_TIME;
			y = 0.44;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_TITLE;
		};

		class Weather: Unit
		{
			idc = IDC_XWIZ_WEATHER;
			y = 0.5;
			text = $STR_DISP_INTEL_WEATHER;
		};

		class NameText: RscText
		{
			x = 0.54; y = 0.255;
			w = 0.2; h = 0.04;
			text = $STR_DISP_GAME_NAME;
		};

		class NameValue: RscText
		{
			idc = IDC_XWIZ_SUM_NAME;
			x = 0.64; y = 0.25;
			w = 0.3; h = 0.06;
		};

		class IslandText: NameText
		{
			idc = -1;
			y = 0.339;
			text = $STR_DISP_XBOX_MULTI_ISLAND;
		};

		class IslandValue: NameValue
		{
			idc = IDC_XWIZ_SUM_ISLAND;
			y = 0.33;
			text = "";
		};

		class TimeText: IslandText
		{
			y = 0.417;
			text = $STR_DISP_INTEL_TIME;
		};

		class TimeValue: IslandValue
		{
			idc = IDC_XWIZ_SUM_TIME;
			y = 0.41;
			text = "";
		};

		class DateText: IslandText
		{
			y = 0.495;
			text = $STR_DISP_INTEL_DATE;
		};

		class DateValue: IslandValue
		{
			idc = IDC_XWIZ_SUM_DATE;
			y = 0.49;
			text = "";
		};

		class WeatherCurrentText: IslandText
		{
			y = 0.65;
			w = 0.4;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_CURRENT;
		};

		class WeatherCurrentValue: RscPicture
		{
			idc = IDC_XWIZ_SUM_WEATHER;
			x = 0.835; y = 0.64;
			w = 0.09; h = 0.09;
		};

		class WeatherForecastText: IslandText
		{
			y = 0.72;
			w = 0.4;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_FORECAST;
		};

		class WeatherForecastValue: WeatherCurrentValue
		{
			idc = IDC_XWIZ_SUM_WEATHER_FORECAST;
			y = 0.71;
			text = "";
		};

    // Preview
    class B_OK: RscActiveText
    {
      idc = IDC_OK;
      x = 0.50; y = 0.9;
      w = 0.15;
      text = $STR_DISP_ARCMAP_PREVIEW; 
    };
		//Cancel template creation and exit.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};
	};
};

class RscDisplayXWizardIntelName: RscStandardDisplay
{
	idd = IDD_XWIZARD_NAME;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_EDITOR_WIZARD_NAME_TITLE;};

		class Name: RscEdit
		{
			idc = IDC_PROFILE_NAME_PREVIEW;
			x = 0.025; y = 0.18;
			w = 0.4;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

class RscDisplayXWizardIntelIsland: RscStandardDisplay
{
	idd = IDD_XWIZARD_ISLAND;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_EDITOR_WIZARD_ISLAND_TITLE;};

		class IslandValue: RscListBox
		{
			idc = IDC_XWIZ_ISLAND_LIST;
			x = 0.025; y = 0.18;
			w = 0.4; h = 0.3;
		};

		class IslandMap: RscPicture
		{
			idc = IDC_XWIZ_ISLAND_MAP;
			x = 0.055; y = 0.45;
			w = 0.4; h = 0.4;
		};

		class IslandShots: RscPicture
		{
			idc = IDC_XWIZ_ISLAND_SHOTS;
			x = 0.6; y = 0.17;
			w = 0.3; h = 0.68;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

class RscDisplayXWizardIntelWeather: RscStandardDisplay
{
	idd = IDD_XWIZARD_WEATHER;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_INTEL_WEATHER;};

		class Bourka: RscPicture
		{
			text = ProcTextWhite;
			x = 0.12; y = 0.33;
			w = 0.1; h = 0.12;
		};

		class Jasno: RscPicture
		{
			text = ProcTextWhite;
			x = 0.78; y = 0.33;
			w = 0.1; h = 0.12;
		};

		class WeatherText: RscText
		{
			x = 0.1; y = 0.25;
			w = 0.34;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER;
		};

		class Current: RscText
		{
			idc = IDC_XWIZ_WEATHER_TITLE;
			style = ST_CENTER;
			x = 0.33; y = 0.27;
			w = 0.34;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_CURRENT;
		};

		class WeatherValueTitle: RscText
		{
			idc = IDC_XWIZ_WEATHER_TITLE;
			x = 0.25; y = 0.32;
			w = 0.5;
		};

		class WeatherValue: RscSlider
		{
			idc = IDC_XWIZ_WEATHER_VALUE;
			x = 0.25; y = 0.32;
			w = 0.5;
		};

		class Forecast: Current
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_TITLE;
			y = 0.37;
			text = $STR_DISP_INTEL_FORECAST;
		};

		class ForecastWeatherTitle: RscText
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_TITLE;
			x = 0.25; y = 0.42;
			w = 0.5;
		};

		class ForecastWeatherValue: RscSlider
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_VALUE;
			x = 0.25; y = 0.42;
			w = 0.5;
		};

		class FogText: WeatherText
		{
			y = 0.5;
			h = 0.09;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_FOG;
		};

		class Current2: Current
		{
			idc = IDC_XWIZ_FOG_TITLE;
			y = 0.52;
		};

		class FogValueTitle: RscText
		{
			idc = IDC_XWIZ_FOG_TITLE;
			x = 0.25; y = 0.57;
			w = 0.5;
		};

		class FogValue: RscSlider
		{
			idc = IDC_XWIZ_FOG_VALUE;
			x = 0.25; y = 0.57;
			w = 0.5;
		};

		class Forecast2: Forecast
		{
			idc = IDC_XWIZ_FOG_FORECAST_TITLE;
			y = 0.62;
		};

		class ForecastFogValueTitle: RscText
		{
			idc = IDC_XWIZ_FOG_FORECAST_TITLE;
			x = 0.25; y = 0.67;
			w = 0.5;
		};

		class ForecastFogValue: RscSlider
		{
			idc = IDC_XWIZ_FOG_FORECAST_VALUE;
			x = 0.25; y = 0.67;
			w = 0.5;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

class RscDisplayXWizardIntelTime: RscStandardDisplay
{
	idd = IDD_XWIZARD_TIME;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_TITLE;};

		class HourText: RscText
		{
			x = 0.25; y = 0.26;
			w = 0.2; h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_HOUR;
		};

		class MinuteText: HourText
		{
			y = 0.36;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_MINUTES;
		};

		class DayText: HourText
		{
			y = 0.46;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_DAY;
		};

		class MonthText: HourText
		{
			y = 0.56;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_MONTH;
		};

		class YearText: HourText
		{
			y = 0.66;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_YEAR;
		};

		class Hour: RscCombo
		{
			idc = IDC_XWIZ_TIME_HOUR;
			x = 0.25; y = 0.3;
			w = 0.3; h = 0.06;
		};

		class Minute: Hour
		{
			idc = IDC_XWIZ_TIME_MINUTE;
			y = 0.4;
		};

		class Day: Hour
		{
			idc = IDC_XWIZ_TIME_DAY;
			y = 0.5;
		};

		class Month: Hour
		{
			idc = IDC_XWIZ_TIME_MONTH;
			y = 0.6;
		};

		class Year: Hour
		{
			idc = IDC_XWIZ_TIME_YEAR;
			y = 0.7;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

class RscDisplayXWizardUnit: RscStandardDisplay
{
	idd = IDD_XWIZARD_UNIT;

  west = ProcTextWhite;
  east = ProcTextWhite;
  guer = ProcTextWhite;
  civl = ProcTextWhite;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_CHOOSE;};

		class UnitText: RscText
		{
			x = 0.038; y = 0.14;
			w = 0.4; h = 0.06;
			text = $STR_DISP_ARCUNIT_VEHICLE;
			style = ST_CENTER;
		};

		class UnitValue: RscListBox
		{
			idc = IDC_XWIZ_UNITS;
			x = 0.05; y = 0.23;
			w = 0.87; h = 0.55;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

class RscDisplayXWizardUnitSelect: RscStandardDisplay
{
	idd = IDD_XWIZARD_UNIT_SELECT;

	class controls
	{
		class Title: RscTitle
		{
	    idc = IDC_XWIZ_UNIT_SELECT_TITLE;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
		};

		class UnitText: RscText
		{
			x = 0.038; y = 0.14;
			w = 0.4; h = 0.06;
			text = $STR_DISP_ARCUNIT_VEHICLE;
			style = ST_CENTER;
		};

		class UnitValue: RscListBox
		{
			idc = IDC_XWIZ_UNIT_SELECT;
			x = 0.05; y = 0.23;
			w = 0.87; h = 0.55;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

class RscDisplayXWizardUnitSelectCustom: RscStandardDisplay
{
	idd = IDD_XWIZARD_UNIT_SELECT_CUSTOM;

	class controls
	{
		class Title: RscTitle
		{
      idc = IDC_XWIZ_UNIT_SELECT_CUSTOM_TITLE;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
		};

		class TitleClass: RscText
		{
			x = 0.05; y = 0.25;
			w = 0.45; h = 0.05;
			text = $STR_DISP_ARCUNIT_CLASS;
		};

		class ButtonClass: RscCombo
		{
			idc = IDC_XWIZ_UNIT_CLASS;
			x = 0.05; y = 0.3;
			w = 0.45; h = 0.07;
		};

		class TitleType: RscText
		{
			x = 0.05; y = 0.4;
			w = 0.45; h = 0.05;
			text = $STR_DISP_ARCGRP_TYPE;
		};

		class ButtonType: Buttonclass
		{
			idc = IDC_XWIZ_UNIT_TYPE;
			y = 0.45;
		};

		class TitleCount: RscText
		{
			x = 0.05; y = 0.55;
			w = 0.4; h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT;
		};

		class ButtonCount: Buttonclass
		{
			idc = IDC_XWIZ_UNIT_COUNT;
			y = 0.6;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.85;
			default = 1;
			text = $STR_DISP_OK;
		};
	};
};

class RscDisplayXWizardMap: RscStandardDisplay
{
	idd = IDD_XWIZARD_MAP;

	class controlsBackground
	{
		class Map: RscMapControl
		{
			moveOnEdges = true;
			x = -0.088; y = -0.088;
			w = 1.176; h = 1.176;

			class Command
			{
				icon = ProcTextWhite;
				color[] = {0, 0, 0, 1};
				size = 12;
        importance = 1; // not used
        coefMin = 1; // not used
        coefMax = 1; // not used
			};

			class ActiveMarker
			{
				color[] = {0.3, 0.1, 0.9, 1};
				size = 50;
			};

			scaleMin = 0.03;
			scaleMax = 0.32;
			scaleDefault = 0.096;
		};
	};

	class controls
	{
		class Points: RscText
		{
			idc = IDC_XWIZ_MAP_POINTS;
			x = 0; y = 0;
			w = 1; h = 0.06;
			text = $STR_MISSION_WIZARD_POINTS;
		};

		class Briefing: RscHTML
		{
			idc = IDC_BRIEFING;
			x = 0.12; y = 0.07;
			w = 0.8; h = 0.7;
		};
    // Preview
    class B_OK: RscActiveText
    {
      idc = IDC_OK;
      x = 0.50; y = 0.9;
      w = 0.15;
      text = $STR_DISP_ARCMAP_PREVIEW;
    };
	};
};

class RscDisplayXWizardMapInsertUnit: RscStandardDisplay
{
	idd = IDD_XWIZARD_UNIT_SELECT_CUSTOM;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;};

		class TitleSide: RscText
		{
			x = 0.05; y = 0.23;
			w = 0.45; h = 0.05;
			text = $STR_DISP_ARCUNIT_SIDE;
		};

		class ComboSide: RscCombo
		{
			idc = IDC_XWIZ_UNIT_SIDE;
			x = 0.05; y = 0.28;
			w = 0.45; h = 0.07;
		};

		class TitleClass: RscText
		{
			x = 0.05; y = 0.35;
			w = 0.45; h = 0.05;
			text = $STR_DISP_ARCUNIT_CLASS;
		};

		class Comboclass: ComboSide
		{
			idc = IDC_XWIZ_UNIT_CLASS;
			y = 0.40;
		};

		class TitleType: RscText
		{
			x = 0.05; y = 0.47;
			w = 0.4; h = 0.05;
			text = $STR_DISP_ARCGRP_TYPE;
		};

		class ComboType: ComboSide
		{
			idc = IDC_XWIZ_UNIT_TYPE;
			y = 0.52;
		};

		class TitleCount: RscText
		{
			x = 0.05; y = 0.59;
			w = 0.4; h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT;
		};

		class ComboCount: ComboSide
		{
			idc = IDC_XWIZ_UNIT_COUNT;
			y = 0.64;
		};
	};
};

class RscDisplayXWizardMapInsertWaypoint: RscStandardDisplay
{
	idd = IDD_XWIZARD_WAYPOINT;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_WAYPOINT_TITLE;};

		class TitleType: RscText
		{
			x = 0.1; y = 0.22;
			w = 0.4; h = 0.05;
			text = $STR_DISP_ARCWP_TYPE;
		};

		class ValueType: RscCombo
		{
			idc = IDC_XWIZ_WP_TYPE;
			x = 0.1; y = 0.27;
			w = 0.4; h = 0.07;
		};

		class TitleBehaviour: RscText
		{
			x = 0.1; y = 0.37;
			w = 0.4; h = 0.05;
			text = $STR_DISP_ARCWP_COMBAT;
		};

		class ValueBehaviour: ValueType
		{
			idc = IDC_XWIZ_WP_BEHAVIOUR;
			y = 0.42;
		};

		class TitleFormation: RscText
		{
			x = 0.1; y = 0.52;
			w = 0.4; h = 0.05;
			text = $STR_DISP_ARCWP_FORM;
		};

		class ValueFormation: ValueType
		{
			idc = IDC_XWIZ_WP_FORMATION;
			y = 0.57;
		};

		class TitleCombatMode: RscText
		{
			x = 0.1; y = 0.67;
			w = 0.4; h = 0.05;
			text = $STR_DISP_ARCWP_SEMAPHORE;
		};

		class ValueCombatMode: ValueType
		{
			idc = IDC_XWIZ_WP_COMBAT_MODE;
			y = 0.72;
		};
	};
};
