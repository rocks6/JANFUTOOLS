#include "commonDefs.hpp"
#include "resincl.hpp"
#include "rscCommon.hpp"

//Todo:
//Move displays to other files.

//Template for message boxes (error messages).
class RscMsgBox
{
	access = ReadAndWrite;

	class Background: RscText
	{
		colorBackground[] = {0.2, 0.2, 0.2, 1};
	};

	class SubBackground: Background {};

	class Text: RscText
	{
		style = ST_MULTI;
		lineSpacing = 1;
		colorText[] = Color_Text_White;
	};

	class Button: RscButton
	{
		h = 0.05;
	};

	class ButtonOK: Button
	{
		idc = IDC_OK;
		text = $STR_DISP_OK;
		default = 1;
	};

	class ButtonCancel: Button
	{
		idc = IDC_CANCEL;
		text = $STR_DISP_CANCEL;
		default = 1;
	};
};

class RscMap
{
	access = ReadAndWrite;

	class controls
	{
		class Map: RscMapControl
		{
			moveOnEdges = false;
			x = 0;
			y = 0;
			w = 0.83;
			h = 1;
		};
	};
};

class RscDisplayChannel
{
	idd = IDD_CHANNEL;
	movingEnable = true;

	class controls
	{
		class Channel: RscText
		{
			idc = IDC_CHANNEL;
			x = 0.41;
			y = 0.74;
			w = 0.18;
			h = 0.04;
			style = ST_CENTER;
			text = $STR_DISP_ERROR;
			colorBackground[] = {0, 0, 0, 0.75};
		};

		class Background: RscText
		{
			x = 0.41;
			y = 0.62;
			w = 0.18;
			h = 0.12;
			colorBackground[] = {0, 0, 0, 0.75};
			colorText[] = {0, 0, 0, 1};
			text = ;
		};

		class Picture: RscPicture
		{
			idc = IDC_CHANNEL_VOICE;
			text = ProcTextWhite;
			x = 0.46;
			y = 0.63;
			w = 0.08;
			h = 0.1;
			colorText[] = {1, 1, 1, 1};
		};
	};
};

class RscDisplayChat
{
	idd = IDD_CHAT;
	movingEnable = true;

	class controls
	{
		class Background: RscText
		{
			x = 0.14;
			y = 0.81;
			w = 0.50;
			colorBackground[] = {0, 0, 0, 0.75};
			colorText[] = {0, 0, 0, 1};
			text = ;
		};

		class Line: RscEdit
		{
			idc = IDC_CHAT;
			x = 0.14;
			y = 0.81;
			w = 0.50;
			text = "";
			colorBackground[] = {0, 0, 0, 0.5};
			colorText[] = {1, 1, 1, 1};
			autocomplete = "general";
		};
	};
};

class RscDisplayVoiceChat
{
	idd = IDD_VOICE_CHAT;
	movingEnable = true;

	class controls
	{
		class Background: RscText
		{
			x = 0.015;
			y = 0.773;
			w = 0.04;
			h = 0.05;
			colorBackground[] = {0, 0, 0, 0.75};
			colorText[] = {0, 0, 0, 1};
			text = ;
		};

		class Picture: RscPicture
		{
			idc = IDC_VOICE_CHAT;
			text = ProcTextWhite;
			x = 0.015;
			y = 0.773;
			w = 0.04;
			h = 0.05;
			colorText[] = {1, 1, 1, 1};
		};
	};
};

class RscDisplayMissionEditor
{
  idd = IDD_MISSION_EDITOR;
  movingEnable = false;

  class ControlsBackground
  {
    // transparent background for 3D view
    class Background : RscListBox
    {
      idc = IDC_EDITOR_BACKGROUND;
      x = 0;
      y = 0;
      w = 1;
      h = 1;
      colorBackground[] = {0, 0, 0, 0};
    };
  };

  class Controls
  {
		class T_Background1: RscText
		{
			x = 0; y = 0;
  		w = 1; h = 0.06;
			colorBackground[] = Color_Background;
		};

		class T_Frame1: RscText
		{
			x = 0; y = 0;
			w = 1; h = 0.06;
			style = ST_FRAME;
		};

		__EXEC(B_Load_x = 0.29; B_Load_w = 0.1; B_Load_space = 0.01)

		//Load buton.
		class B_Load: RscButton
		{
			idc = IDC_EDITOR_LOAD;
			x = __EVAL(B_Load_x + 0 * B_Load_w + 0 * B_Load_space); y = 0.01;
			w = __EVAL(B_Load_w); h = 0.04;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_ARCMAP_LOAD;
			toolTip = $STR_UI_EDITOR_LOAD_T;
			default = 0;
		};

		//Save button.
		class B_Save: B_Load
		{
			idc = IDC_EDITOR_SAVE;
			x = __EVAL(B_Load_x + 1 * B_Load_w + 1 * B_Load_space);
			text = $STR_DISP_ARCMAP_SAVE;
			toolTip = $STR_UI_EDITOR_SAVE_T;
		};

		//Restart button.
		class B_Restart: B_Load
		{
      idc = IDC_EDITOR_RESTART;
			x = __EVAL(B_Load_x + 2 * B_Load_w + 2 * B_Load_space);
			text = $STR_UI_EDITOR_RESTART;
			toolTip = $STR_UI_EDITOR_RESTART_T;
		};

		//Clear button.
		class B_Clear: B_Load
		{
      idc = IDC_EDITOR_CLEAR;
			x = __EVAL(B_Load_x + 3 * B_Load_w + 3 * B_Load_space);
			text = $STR_DISP_ARCMAP_CLEAR;
			toolTip = $STR_UI_EDITOR_CLEAR_T;
		};

		//Preview button.
		class B_Preview: B_Load
		{
      idc = IDC_EDITOR_PREVIEW;
			x = __EVAL(B_Load_x + 4 * B_Load_w + 4 * B_Load_space);
			text = $STR_DISP_ARCMAP_PREVIEW;
			toolTip = $STR_UI_EDITOR_PREVIEW_T;
			default = 1;
		};

		//Map button.
		class B_Map: B_Load
		{
      idc = IDC_EDITOR_MAP;
			x = __EVAL(B_Load_x + 5 * B_Load_w + 5 * B_Load_space);
			text = $STR_UI_EDITOR_HIDE_MAP;
			toolTip = $STR_UI_EDITOR_HIDE_MAP_T;
		};

		//Minimize button.
		class B_Exit: B_Load
		{
			idc = IDC_CANCEL;
			x = __EVAL(B_Load_x + 6 * B_Load_w + 6 * B_Load_space);
			w = 0.04;
			text = "X";
			toolTip = $STR_UI_EDITOR_QUIT_T;
		};

		class T_Background2: RscText
		{
			x = 0.75; y = 0.06;
  		w = 0.25; h = 0.94;
			colorBackground[] = Color_Background;
		};

		//Object tree.
		class T_ObjectBrowser: RscTree
		{
			idc = IDC_EDITOR_OBJECTS;
      style = 0;
      x = 0.75; y = 0.06;
      w = 0.25; h = 0.59;
			sizeEx = Size_Text_Very_Small;
      colorBackground[] = {0, 0, 0, 0};
		};

		//Object info.
		class L_ObjectInfo: RscListBox
		{
			idc = IDC_EDITOR_ATTRIBUTES;
      x = 0.75; y = 0.65;
      w = 0.25; h = 0.175;
			sizeEx = Size_Text_Small;
      colorSelect[] = Color_Black;
      colorSelect2[] = Color_Black;
			colorSelectBackground[] = Color_White;
			colorSelectBackground2[] = Color_White;
      rowHeight = 0.029;
      period = 0;
		};

		//New object combo.
		class L_NewObject: RscListBox
		{
			idc = IDC_EDITOR_TYPE_LIST;
			x = 0.75; y = 0.825;
			w = 0.25; h = 0.175;
			sizeEx = Size_Text_Small;
			colorSelect[] = Color_Black;
			colorSelect2[] = Color_Black;
			colorSelectBackground[] = Color_White;
			colorSelectBackground2[] = Color_White;
			rowHeight = 0.029;
			period = 0;
		};

  	//Map.
  	class M_Map: RscMapControl
  	{
      moveOnEdges = false;
      x = 0; y = 0.06;
      w = 0.75; h = 0.94;
  	};
  };

  class Menu
  {
    type = CT_CONTEXT_MENU;
    idc = IDC_EDITOR_MENU;
    style = 0;
    x = 0; y = 0; w = 0; h = 0;
    colorBackground[] = Color_Background;
    colorBorder[] = Color_White;
    colorSeparator[] = Color_White;
    colorSelectBackground[] = {1, 1, 1, 0.3};
    colorChecked[] = {0, 0, 1, 1};
    colorEnabled[] = Color_Text_Default;
    colorDisabled[] = {1, 1, 1, 0.5};
    sizeEx = 0.025;
    font = FontMAIN;
  };
};

class RscDisplayEditObject
{
  idd = IDD_EDIT_OBJECT;
  movingEnable = true;

  class Controls
  {
    class T_Background: RscText
    {
      colorBackground[] = Color_Background;
      x = 0.02; y = 0.08;
      w = 0.71; h = 0.9;
    };

		class T_Title: RscTitle
		{
			style = ST_TITLE;
			x = 0.02; y = 0.09;
			w = 0.71;
			text = $STR_UI_EDITOR_OBJECT_PROPERTIES;
		};

    class G_ControlsGroup: RscControlsGroup
    {
      idc = IDC_EDIT_OBJECT_CONTROLS;
      x = 0.02; y = 0.15;
      w = 0.71; h = 0.73;

      class Controls
      {
        //Controls are added by the program.
      };
    };

    class B_OK: RscButton
    {
      idc = IDC_OK;
      x = 0.23; y = 0.915;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };

    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.37;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
  };

  class Title: RscText
  {
    x = 0.02; y = 0;
    w = 0.19; h = 0.025;
    sizeEx = 0.025;
    text = "";
  };

  class Edit: RscEdit
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.025;
    sizeEx = 0.025;
    text = "";
    colorSelection[] = {1, 1, 1, 0.25};
  };

  class Combo: RscCombo
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.025;
    wholeHeight = 0.125;
    sizeEx = 0.025;
  };

  class Slider: RscSliderH
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.025;
  };

  class Tree: RscTree
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.39;
    sizeEx = 0.025;
  };
};

class RscDisplayMissionLoad
{
  idd = IDD_MISSION_LOAD;
  movingEnable = true;

  class Controls
  {
    class T_Background: RscText
    {
      x = 0.175; y = 0.32;
      w = 0.4; h = 0.3;
      colorBackground[] = Color_Background;
    };

		class T_Title: RscTitle
		{
			style = ST_TITLE;
			x = 0.175; y = 0.33;
			w = 0.4;
			text = $STR_UI_EDITOR_LOAD_TITLE;
		};

    class T_Island: RscText
    {
      x = 0.18; y = 0.4;
      w = 0.14; h = 0.03;
      sizeEx = 0.03;
      text = $STR_UI_EDITOR_LOAD_ISLAND;
    };

    class C_Island: RscCombo
    {
      idc = IDC_MISSION_LOAD_ISLAND;
      x = 0.325; y = 0.4;
      w = 0.24; h = 0.03;
      wholeHeight = 0.24;
      sizeEx = 0.03;
    };

    class T_Mission: T_Island
    {
      y = 0.45;
      text = $STR_UI_EDITOR_LOAD_MISSION;
    };

    class C_Mission: C_Island
    {
      idc = IDC_MISSION_LOAD_MISSION;
      y = 0.45;
    };

    class B_OK: RscButton
    {
      idc = IDC_OK;
      x = 0.24; y = 0.55;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };
    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.38;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
  };
};

class RscDisplayMissionSave
{
  idd = IDD_MISSION_SAVE;
  movingEnable = true;

  class Controls
  {
    class T_Background: RscText
    {
      x = 0.175; y = 0.32;
      w = 0.4; h = 0.3;
      colorBackground[] = Color_Background;
    };

		class T_Title: RscTitle
		{
			style = ST_TITLE;
			x = 0.175; y = 0.33;
			w = 0.4;
			text = $STR_UI_EDITOR_SAVE_TITLE;
		};

    class T_Mission: RscText
    {
      x = 0.18; y = 0.4;
      w = 0.14; h = 0.03;
      sizeEx = 0.03;
      text = $STR_UI_EDITOR_SAVE_MISSION;
    };

    class E_Mission: RscEdit
    {
      idc = IDC_MISSION_SAVE_MISSION;
      x = 0.325; y = 0.4;
      w = 0.24; h = 0.03;
      sizeEx = 0.03;
    };

    class T_Placement: T_Mission
    {
      y = 0.45;
      text = $STR_UI_EDITOR_SAVE_EXPORT;
    };

    class C_Placement: RscCombo
    {
      idc = IDC_MISSION_SAVE_PLACEMENT;
      x = 0.325; y = 0.45;
      w = 0.24; h = 0.03;
      wholeHeight = 0.24;
      sizeEx = 0.03;
    };

    class B_OK: RscButtonSmall
    {
      idc = IDC_OK;
      x = 0.24; y = 0.55;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };
    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.38;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
  };
};

//Interrupt screen when previewing a mission from the editor.
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

	__EXEC(int_y = 0.2; int_h = 0.08;)

  class controls
  {
		class Title: RscTitle {text = $STR_DISP_INT_TITLE;};

		class B_Edit2D: RscButton
		{
			idc = IDC_INT_EDIT_MAP;
			x = 0.35; y = __EVAL(int_y + 0 * int_h);
			h = 0.08;
			text = $STR_UI_EDITOR_INT_EDIT2D;
			default = 0;
		};
		class B_Edit3D: B_Edit2D
		{
			idc = IDC_INT_EDIT_3D;
			y = __EVAL(int_y + 1 * int_h);
			text = $STR_UI_EDITOR_INT_EDIT3D;
		};
		class B_Restart: B_Edit2D
		{
			idc = IDC_INT_RETRY;
			y = __EVAL(int_y + 2 * int_h);
			text = $STR_UI_EDITOR_RESTART;
		};

		class B_Options: B_Edit2D
		{
			idc = IDC_INT_OPTIONS;
			y = __EVAL(int_y + 4 * int_h);
			text = $STR_DISP_INT_OPTIONS;
		};

		class B_Quit: B_Edit2D
		{
			idc = IDC_INT_ABORT;
			y = __EVAL(int_y + 6 * int_h);
			text = $STR_UI_EDITOR_INT_QUIT;
		};
		class B_Cancel: B_Edit2D
		{
			idc = IDC_CANCEL;
			y = __EVAL(int_y + 7 * int_h);
			text = $STR_UI_EDITOR_INT_CONTINUE;
			default = 1;
		};
	};
};

//Interrupt screen when editing a mission in 3D.
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

  class controls
  {
		class Title: RscTitle {text = $STR_DISP_INT_3DEDIT_TITLE;};

		class B_Edit2D: RscButton
		{
			idc = IDC_INT_EDIT_MAP;
			x = 0.35; y = __EVAL(int_y + 0 * int_h);
			h = 0.08;
			text = $STR_UI_EDITOR_INT_EDIT2D;
			default = 0;
		};
		class B_Preview: B_Edit2D
		{
			idc = IDC_INT_EDIT_PREVIEW;
			y = __EVAL(int_y + 1 * int_h);
			text = $STR_DISP_ARCMAP_PREVIEW;
		};
		class B_Restart: B_Edit2D
		{
			idc = IDC_INT_RETRY;
			y = __EVAL(int_y + 2 * int_h);
			text = $STR_UI_EDITOR_RESTART;
		};

		class B_Options: B_Edit2D
		{
			idc = IDC_INT_OPTIONS;
			y = __EVAL(int_y + 4 * int_h);
			text = $STR_DISP_INT_OPTIONS;
		};

		class B_Quit: B_Edit2D
		{
			idc = IDC_INT_ABORT;
			y = __EVAL(int_y + 6 * int_h);
			text = $STR_UI_EDITOR_INT_QUIT;
		};
		class B_Cancel: B_Edit2D
		{
			idc = IDC_CANCEL;
			y = __EVAL(int_y + 7 * int_h);
			text = $STR_UI_EDITOR_INT_CONTINUE;
			default = 1;
		};
	};
};
