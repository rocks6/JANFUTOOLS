//#include "commonDefs.hpp" not needed since that one is already included in config.cpp
#include "userActionGroups.hpp"

// Product dependent options:

TrackIR_Developer_ID = 10601;

overviewLockedMission = "dtaext\lockedmission";
overviewMyMissions = "dtaext\mymissions";
overviewNewMission = "dtaext\newmission";

//ToDo:
//[*] Move to resources.
//[*] Move definitions to common define.

//Define procedural textures in several colors.
#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"
#define ProcTextBlack "#(argb,8,8,3)color(0,0,0,1)"
#define ProcTextGray "#(argb,8,8,3)color(0.3,0.3,0.3,1)"
#define ProcTextRed "#(argb,8,8,3)color(1,0,0,1)"
#define ProcTextGreen "#(argb,8,8,3)color(0,1,0,1)"
#define ProcTextBlue "#(argb,8,8,3)color(0,0,1,1)"
#define ProcTextClear "#(argb,8,8,3)color(0,0,0,0)"
#define ProcTextYellow "#(argb,8,8,3)color(1,1,0,1)"
#define ProcTextAqua "#(argb,8,8,3)color(0,1,1,1)"
#define ProcTextOrange "#(argb,8,8,3)color(1,0.53,0.12,1)"
#define ProcTextPurple "#(argb,8,8,3)color(0.75,0,0.75,1)"

fontPlate = FontMAIN;
fontHelicopterHUD = FontMAIN;
fontClanName = FontMAIN;

class CfgEditCamera
{
	// speed multipliers for camera movement
	speedFwdBack = 1.0;
	speedLeftRight = 1.0;
	speedUpDown = 1.0;
	speedRotate = 1.0;
	speedElevation = 1.0;
	speedTurboMultiplier = 4.0;

	// object selected icon
	iconSelect = "";

	// size of object selected icon
	iconSelectSizeX = 0.75;
	iconSelectSizeY = 1;
};

class CfgWrapperUI
{
	access = ReadAndWrite;

	class Colors
	{
		color1[] = {Gray1, 1.0};
		color2[] = {Gray2, 1.0};
		color3[] = {Gray3, 1.0};
		color4[] = {Gray4, 1.0};
		color5[] = {Gray5, 1.0};
	};

	class Background
	{
		alpha = 0.75;
		texture = ProcTextWhite;
	};

	class TitleBar
	{
		alpha = 0.3;
		texture = ProcTextWhite;
	};

	class GroupBox
	{
		alpha = 0.2;
	};

	class GroupBox2
	{
		alpha = 0.5;
		texture = ProcTextWhite;
	};

	class Button
	{
		color1[] = {Gray1, 0.3};
		color2[] = {Gray2, 0.3};
		color3[] = {Gray3, 0.3};
		color4[] = {Gray4, 0.3};
		color5[] = {Gray5, 0.3};
	};

  class ListBox
  {
    line = ProcTextWhite;
    thumb = ProcTextWhite;
    arrowEmpty = ProcTextWhite;
    arrowFull = ProcTextWhite;
    border = ProcTextWhite;
    boxLeft = ProcTextWhite;
    boxRight = ProcTextWhite;
    boxHorz = ProcTextWhite;
  };

  class Slider
  {
    arrowEmpty = ProcTextWhite;
    arrowFull = ProcTextWhite;
    border = ProcTextWhite;
    thumb = ProcTextWhite;
  };

	class Cursors
	{
		class Arrow
		{
			texture = ProcTextWhite;
			width = 16;
			height = 16;
			hotspotX = 0;
			hotspotY = 0;
			color[] = {White, 1};
		};

		class Track
		{
			texture = ProcTextWhite;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Red, 1};
		};

		class Move
		{
			texture = ProcTextWhite;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Green, 1};
		};

		class Scroll
		{
			texture = ProcTextWhite;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Yellow, 1};
		};

		class Wait
		{
			texture = ProcTextWhite;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Blue, 1};
		};
	};
};

class CfgInGameUI
{
	access = ReadAndWrite;

	imageCornerElement = ProcTextWhite;
	xboxStyle = true;
	colorBackground[] = {0.2, 0.15, 0.1, 0.8};
	colorBackgroundCommand[] = {Black, 0.3};
	colorBackgroundHelp[] = {0.2, 0.15, 0.1, 0.8};
	colorText[] = {White, 1};

	class PlayerColors
	{
		class ColNone
		{
			texture = ProcTextClear;
			text = "None";
		};
		class ColWhite
		{
			texture = ProcTextWhite;
			text = "White";
		};
		class ColRed
		{
			texture = ProcTextRed;
			text = "Red";
		};
		class ColOrange
		{
			texture = ProcTextOrange;
			text = "Orange";
		};
		class ColYellow
		{
			texture = ProcTextYellow;
			text = "Yellow";
		};
		class ColGreen
		{
			texture = ProcTextGreen;
			text = "Green";
		};
		class ColAqua
		{
			texture = ProcTextAqua;
			text = "Aqua";
		};
		class ColBlue
		{
			texture = ProcTextBlue;
			text = "Blue";
		};
		class ColPurple
		{
			texture = ProcTextPurple;
			text = "Purple";
		};
		class ColGrey
		{
			texture = ProcTextGray;
			text = "Grey";
		};
		class ColBlack
		{
			texture = ProcTextBlack;
			text = "Black";
		};
	};

	class SideColors
	{
		colorFriendly[] = {Green, 1};
		colorEnemy[] = {Red, 1};
		colorNeutral[] = {White, 1};
		colorCivilian[] = {White, 1};
		colorUnknown[] = {Yellow, 1};
	};

	class IslandMap
	{
		colorFriendly[] = {0, 0.5, 0, 1};
		colorEnemy[] = {0.5, 0, 0, 1};
		colorNeutral[] = {0.5, 0.5, 0.5, 1};
		colorCivilian[] = {0, 0, 1, 1};
		colorUnknown[] = {0.5, 0.5, 0, 1};

		iconPlayer = ProcTextWhite;
		iconCheckpoint = ProcTextWhite;
		iconCamera = ProcTextWhite;
		iconSelect = ProcTextWhite;
		iconSensor = ProcTextWhite;

		sizeLeader = 24;
		size = 20;
    sizePlayer = 16;

		colorMe[] = {Red, 1};
		colorPlayable[] = {0.7, 0, 0.7, 1};
		colorSelect[] = {Green, 0.5};
		colorCamera[] = {Blue, 1};
		colorSensor[] = {Blue, 1};

		colorDragging[] = {White, 1};

		colorInactive[] = {1,1,1, 0.6};

		colorExposureEnemy[] = {1.0, 0.2, 0.2, 0.5};
		colorExposureUnknown[] = {0.8, 0.8, 0.2, 0.5};
    colorTracks[] = {0.35, 0.2, 0.1, 0.8};
    colorRoads[] = {0.35, 0.2, 0.1, 1};
    colorMainRoads[] = {0, 0, 0, 1};
    colorTracksFill[] = {0, 0, 0, 0};
    colorRoadsFill[] = {1, 0.92, 0.74, 1};
    colorMainRoadsFill[] = {0.93, 0.11, 0.14, 0.8};
		colorGrid[] = {0.15, 0.15, 0.05, 0.9};
		colorGridMap[] = {0.25, 0.25, 0.1, 0.75};
		colorCheckpoints[] = {0.2, 0.2, 0.2, 1.0};
		colorMissions[] = {0.5, 0.5, 0.0, 0.5};
		colorActiveMission[] = {0.0, 0.0, 0.0, 1.0};

		colorPath[] = {0.0, 0.0, 1, 0.9};
		colorInfoMove[] = {1.0, 1.0, 1.0, 1.0};

		colorGroups[] = {0.0, 0.5, 0.5, 0.5};
		colorActiveGroup[] = {0.0, 1.0, 1.0, 1.0};

		colorSync[] = {0.0, 0.0, 1.0, 1.0};

		colorDetectorSync = {0,1,0,1};

		colorLabelBackground[] = {0.0, 0.0, 0.0, 1.0};

		cursorLineWidth = 3;
	};

	class MPTable
	{
		color[] = {0.7, 0.7, 0.7, 1};
		colorTitleBg[] = {0.1,0.15,0.15,1};
		colorBg[] = {0.1,0.15,0.1,0.9};
		colorSelected[] = {0.7, 0.7, 0.7, 0.4};
		colorWest[] = {0.7, 0.95, 0.7, 1};
		colorEast[] = {0.95, 0.7, 0.7, 1};
		colorCiv[] = {0.8, 0.8, 0.8, 1};
		colorRes[] = {0.7, 0.7, 0.95, 1};
		font = FontMAIN;
		size = SizeNormal;

    class Columns
    {
      class Order
      {
        width = 0.046;
       	colorBg[] = {0.1,0.27,0.1,0.8};
        doubleLine = false;
      };

      class Player
      {
        width = 0.25;
        colorBg[] = {0.1,0.23,0.1,0.8};
        doubleLine = true;
      };

      class KillsInfantry
      {
        width = 0.11;
        doubleLine = false;
        colorBg[] = {0.1,0.15,0.1,0.8};
        picture =ProcTextWhite;
      };

      class KillsSoft
      {
        width = 0.10;
        doubleLine = false;
        colorBg[] = {0.1,0.15,0.1,0.8};
        picture =ProcTextWhite;
      };

      class KillsArmor
      {
        width = 0.11;
        doubleLine = false;
        colorBg[] = {0.1,0.15,0.1,0.8};
        picture = ProcTextWhite;
      };

      class KillsAir
      {
        width = 0.10;
        doubleLine = true;
        colorBg[] = {0.1,0.15,0.1,0.8};
        picture = ProcTextWhite;
      };

      class Killed
      {
        width = 0.10;
        doubleLine = true;
        colorBg[] = {0.1,0.15,0.1,0.8};
        picture =ProcTextWhite;
      };

      class KillsTotal
      {
        width = 0.10;
        doubleLine = false;
        colorBg[] = {0.1,0.35,0.1,0.9};
        picture =ProcTextWhite;
      };
    };

    class RespawnMessage
    {
      x = 0.05;
      y = 0.05;
      font = FontMAIN;
      size = SizeMedium;
      color[] = {0.6, 0.8, 0.5, 1};
      xBg = -0.1;
      yBg = -0.1;
      wBg = 1.20;
      hBg = 0.23;
      colorBg[] = {0, 0, 0, 0.70};
    };
	};

	class TankDirection
	{
		left = 0.035;
		top = 0.16;
		width = 0.18;
		height = 0.26;

		color[] = {White, 1};
		colorHalfDammage[] = {Yellow, 1};
		colorFullDammage[] = {Red, 1};
		imageTower = ProcTextWhite;
		imageTurret = ProcTextWhite;
		imageGun = ProcTextWhite;
		imageObsTurret = ProcTextWhite;
		imageEngine = ProcTextWhite;
		imageHull = ProcTextWhite;
		imageLTrack = ProcTextWhite;
		imageRTrack = ProcTextWhite;
    imageMoveStop = ProcTextWhite;
    imageMoveBack = ProcTextWhite;
    imageMoveForward = ProcTextWhite;
    imageMoveFast = ProcTextWhite;
    imageMoveLeft = ProcTextWhite;
    imageMoveRight = ProcTextWhite;
    imageMoveAuto = ProcTextWhite;
	};

	class Capture
	{
		colorBackground[] = {Black, 0.93};
		colorText[] = {Yellow, 1};
		colorLine[] = {White, 1};
	};

	class Picture
	{
		color[] = {White, 1};
		colorProblems[] = {Red, 1};
		imageBusy = ProcTextWhite;
		imageWaiting = ProcTextWhite;
		imageCommand = ProcTextWhite;
	};

 	class Bar
	{
		imageBar = ProcTextWhite;
		colorBackground[] = {0.1, 0.4, 0.1, 0.7};
		colorGreen[] = {Green, 1.0};
		colorYellow[] = {Yellow, 1.0};
		colorRed[] = {Red, 0.9};
		colorBlinkOn[] = {ShineRed, 1};
		colorBlinkOff[] = {Red, 0.9};
		height = 0.01;
	};

	class Messages
	{
		color1[] = {Yellow, 0.9};
		color2[] = {Green, 0.9};
		color3[] = {White, 0.9};
	}

	class TacticalDisplay: SideColors
	{
		left = 0.0;
		top = 0.042;
		width = 1.0;
		height = 0.1;
		colorCamera[] = {0.4, 0.4, 0.4, 0.4};

		class Cursor
		{
			width = 0.015;
			height = 0.02;
			color[] = {White, 1};
		};
	};

	class ProgressFont
	{
		font = FontMAIN;
		size = SizeNormal;
	};

  class DebugFont
  {
    //!!Don't change without programmer permission (needs special font)!!
    font = FontDEBUG;
    size = SizeList;
  };

  class CheatXFont
  {
    font = FontDEBUG;
    size = SizeList;
  };

  class FadeFont
  {
    font = FontDEBUG;
    size = SizeList;
  };

  class DragAndDropFont
  {
    font = FontMAIN;
    size = SizeSmall;
    colorEnabled[] = {White, 0.75};
    colorDisabled[] = {Red, 0.75};
    hideCursor = false;
  };

  class TooltipFont
  {
    font = FontMAIN;
    size = SizeSmall;
  };

	class Compass
	{
		left = 0.0;
		top = 0.0;
		width = 1.0;
		height = 0.04;
		color[] = {White, 1};
		dirColor[] = {White, 1};
		turretDirColor[] = {Yellow, 1};
    texture0 = ProcTextWhite;
    texture90 = ProcTextWhite;
    texture180 = ProcTextWhite;
    texture270 = ProcTextWhite;
	};

	class Menu
	{
		left = 0.02;
		top = 0.02;
		width = 0.25;
		height = 0.5;

		left2 = 0.28;
		top2 =	0.02;
		width2 = 0.25;
		height2 = 0.5;

		colorChecked[] = {Yellow, 1};
		colorEnabled[] = {White, 1};
		colorDisabled[] = {0.4, 0.4, 0.4, 1};
		colorSelected[] = {0.39, 0.68, 0.44, 0.6};
		hideTime = 60;
		font = FontMAIN;
		size = SizeSmall;
	};

	class GameInfo
	{
		left = 0.78;
		top =	0.9;
		width = 0.2;
		height = 0.08;
	};

	class GroupDir
	{
		image = ProcTextWhite;

		left = 0.00;
		top = 0.63;
		width = 0.12;
		height = 0.15;

		left2 = 0.02;
		top2 = 0.84;
		width2 = 0.12;
		height2 = 0.15;

		dimmStartTime = 8;
		dimmEndTime = 20;
	};

	class PlayerInfo
	{
		colorTime[] = {White, 1};
		left = 0.02;
		top =	0.02;
		width = 0.2;
		height = 0.28;

		class UnitPicture
		{
			width = 0.15;
			height = 0.16;
		};

		class Sign
		{
			height = 0.03;
			widthSector = 0.04;
			widthGroup = 0.02;
			widthUnit = 0.02;
		}

		class Side
		{
			height = 0.072;
			width = 0.06;
		};

		class HealthBar
		{
			width =	0.12;
		};

		class ArmorBar
		{
			width =	0.12;
		};

		class FuelBar
		{
			width =	0.12;
		};

		class ExperienceBar
		{
			width =	0.12;
			color[] = {White, 1};
		};

		dimmStartTime = 5;
		dimmEndTime = 10;
	};

	class Hint
	{
		dimmStartTime = 30;
		dimmEndTime = 35;
		sound[] = {"", db-10, 1};
	};

	class Chat
	{
		sound[] = {"", db-10, 1};
	};

	class Actions
	{
		font = FontMAIN;
		size = SizeSmall;
		right = 1.0;
		bottom = 0.81;
		rows = 4;
    colorBackground[] = {0.2, 0.15, 0.1, 0.8};
    colorText[] = {0.8, 0.8, 0.8, 1};
    colorSelect[] = {0.2, 0.8, 0.2, 1};
    background = ProcTextBlack;
	};

  class DefaultAction
  {
    showHint = true;
    showNext = true;
    showLine = true;
    font = FontMAIN;
    size = SizeNormal;
    fontNext = FontMAIN;
    sizeNext = SizeSmall;
    // position of default action
    offsetX = 0;
    offsetY = 0;
    relativeToCursor = 1; // 0 ... fixed position on screen, 1 ... attached to cursor
    // default action hotspot (which point of default action is referenced)
    hotspotX = 0.5;
    hotspotY = 0.5;
    background = ProcTextClear;
  };

	class GroupInfo
	{
		left = 0.02;
		top =	0.90;
		width = 0.96;
		height = 0.08;
		colorIDNone[] = {Black, 1};
		colorIDNormal[] = {White, 1};
		colorIDSelected[] = {Green, 1};
		colorIDPlayer[] = {Yellow, 1};

		class Semaphore
		{
			imageSemaphore = ProcTextWhite;
			width = 0.0075;
			height = 0.01;
			colorHoldFire[] = {Red, 1};
		};

		imageDefaultWeapons = ProcTextWhite;
		imageNoWeapons = ProcTextWhite;
    imageCommander = ProcTextGreen;
    imageDriver = ProcTextRed;
    imageGunner = ProcTextBlue;
    imageCargo = ProcTextClear;
    imagePrevPage = ProcTextRed;
    imageNextPage = ProcTextRed;
		fontUnitID = FontMAIN;
		sizeUnitID = SizeSmall;
		fontCommand = FontMAIN;
		sizeCommand = SizeSmall;
		dimm = 0.3;
	};

	class ConnectionLost
	{
		left = 0.0;
		top =	0.45;
		width = 1.0;
		height = 0.10;
		font = FontMAIN;
		size = SizeSmall;
		color[] = {1.0, 0.5, 0.25, 1.0};
	};

	class Cursor
	{
		aim = ProcTextWhite;
		weapon = ProcTextWhite;

		outArrow = ProcTextWhite;

		select_target = ProcTextWhite;
		lock_target = ProcTextWhite;

		me = ProcTextWhite;
		meColor[] = {White, 0.65};
		dimmMe = 0.0;
		dimmMeStartTime = 5;
		dimmMeEndTime = 10;
		dimmCmdStartTime = 5;
		dimmCmdEndTime = 10;
		select = ProcTextWhite;
		selectColor[] = {Green, 0.65};
		leader = ProcTextWhite;
		leaderColor[] = {Green, 0.65};
		mission = ProcTextWhite;
		missionColor1[] = {Yellow, 0.5};
    missionColor2[] = {Yellow, 1.0};
    blinkingPeriod = 2.0;

		font = FontMAIN;
		size = SizeSmall;

		tactical = ProcTextWhite;
		move = ProcTextWhite;
		selected = ProcTextWhite;
		attack = ProcTextWhite;
		getIn = ProcTextWhite;
		watch = ProcTextWhite;

		color[] = {White, 1};
		colorBackground[] = {Black, 0.65};
		colorLocked[] = {Red, 1};
		dimm = 0.15;

		class Sign
		{
			height = 0.015;
			widthSector = 0.02;
			widthGroup = 0.01;
			widthUnit = 0.01;
		};

		activeWidth = 0.1875;
		activeHeight = 0.25;
		activeMinimum = 0.07;
		activeMaximum = 0.12;
		enemyActiveColor[] = {Red, 0.5};
	};

	class PeripheralVision
	{
	  cueTexture = ProcTextWhite;
	  bloodTexture = ProcTextWhite;
	  bloodColor[] = {0.8, 0.1, 0.15,1};
	  cueColor[] = {1, 1, 1, 0.7};
	  cueEnemyColor[] = {1, 0.3, 0.3, 1};
	  cueFriendlyColor[] = {0.5, 1, 0.5, 0.7};
	};
};

/// List of user actions types, their default parameters
class CfgActions
{
  //Such action is not created in the program, but need to be listed.
  //Used as a default here.
  class None
  {
    //picture = ; //Path to texture shown as an action image.
    priority = 0; //Base priority.
    show = true; //If set to false, action will not be displayed in the actions menu (but still accessible through shortcut).
    showWindow = false; //Action is displayed as a default action.
    hideOnUse = true; //Action menu is hidden when this action is processed.
    shortcut = ; //Name of input action used as a shortcut (see class ControllerSchemes for list of input actions).
    text = ; //Structured parametrized text, shown in the actions menu.
    textDefault = ; //Structured parametrized text, shown as a default action; if empty, "text" is used instead.
    textSimple = ; //Raw parametrized text, used in radio protocol for example; if empty, "text" is used instead.
  };
  class GetInCommander: None
  {
    //Not used now.
    priority = 0.899;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_COMMANDER;
    textDefault = $STR_ACTION_GETIN_COMMANDER;
  };
  class GetInDriver: None
  {
    priority = 0.900; //Added <-0.3, 0> in the program (by the distance).
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_DRIVER;
    textDefault = $STR_ACTION_GETIN_DRIVER;
  };
  class GetInPilot: None
  {
    priority = 0.901; //Added <-0.3, 0> in the program (by the distance).
    showWindow = true;
    //New action, same implementation as GetInDriver, other description.
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_PILOT;
    textDefault = $STR_ACTION_GETIN_PILOT;
  };
  class GetInGunner: None
  {
    //Not used now.
    priority = 0.898;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_GUNNER;
    textDefault = $STR_ACTION_GETIN_GUNNER;
  };
  class GetInCargo: None
  {
    priority = 0.897; //added <-0.3, 0> in the program (by the distance).
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_CARGO;
    textDefault = $STR_ACTION_GETIN_CARGO;
  };
  class GetInTurret: None
  {
    priority = 0.898; //Added <-0.3, 0> in the program (by the distance).
    showWindow = true;
    //Parameters:
    //%1 - action target.
    //%2 - turret (vehicle position) name.
    text = $STR_ACTION_GETIN_TURRET;
    textDefault = $STR_ACTION_GETIN_TURRET;
  };
  class Heal: None
  {
    priority = 0.5;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_HEAL;
    textDefault = $STR_ACTION_HEAL;
  };
  class Repair: None
  {
    priority = 0.5;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_REPAIR;
    textDefault = $STR_ACTION_REPAIR;
  };
  class Refuel: None
  {
    priority = 0.5;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_REFUEL;
    textDefault = $STR_ACTION_REFUEL;
  };
  class Rearm: None
  {
    priority = 0.5;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_REARM;
    textDefault = $STR_ACTION_REARM;
  };
  class GetOut: None
  {
    priority = 0.9;
    showWindow = true;
    shortcut = GetOut;
    //No parameters.
    text = $STR_ACTION_GETOUT;
    textDefault = $STR_ACTION_GETOUT;
  };
  class LightOn: None
  {
    priority = 0.3;
    //No parameters.
    text = $STR_ACTION_LIGHTON;
    textDefault = $STR_ACTION_LIGHTON;
  };
  class LightOff: None
  {
    priority = 0.3;
    //No parameters.
    text = $STR_ACTION_LIGHTOFF;
    textDefault = $STR_ACTION_LIGHTOFF;
  };
  class EngineOn: None
  {
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_ENGINEON;
    textDefault = $STR_ACTION_ENGINEON;
  };
  class EngineOff: None
  {
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_ENGINEOFF;
    textDefault = $STR_ACTION_ENGINEOFF;
  };
  class SwitchWeapon: None
  {
    priority = 0.5; //Decreased by 0.01 * index of weapon, or increased by 0.01 for primary weapon.
    shortcut = SwitchWeapon;
    //Parameters:
    //%1 - weapon name.
    text = $STR_ACTION_WEAPON;
    textDefault = $STR_ACTION_WEAPON;
  };
  class SwitchMagazine: SwitchWeapon
  {
    //New action, same implementation as SwitchWeapon, other shortcut.
    //Parameters:
    //%1 - weapon name.
    shortcut = ReloadMagazine;
  };
  class HideWeapon: SwitchWeapon
  {
    //New action, same implementation as SwitchWeapon, other description.
    //Parameters:
    //%1 - weapon name
    text = $STR_ACTION_HIDE_WEAPON;
    textDefault = $STR_ACTION_HIDE_WEAPON;
  };
  class UseWeapon: None
  {
    //Not used now.
    priority = 0.5;
    //Description defined in the weapon mode config.
    //Parameters:
    //%1 - action description, defined in weapon mode config "useActionTitle".
    text = "%1";
    textDefault = "%1";
    //The parameters "useActionTitle":
    //%1 - weapon mode name.
    //%2 - remaining number of magazines.
  };
  class LoadMagazine: None
  {
    priority = 0.35; //Decreased by 0.01 for magazine of other type than current.
    shortcut = ReloadMagazine; //Can be removed by the program (left only for a single action of this type).
    //Parameters:
    //%1 - magazine name.
    text = $STR_ACTION_MAGAZINE;
    textDefault = $STR_ACTION_MAGAZINE;
  };
  class LoadOtherMagazine: LoadMagazine
  {
    //New action - used for reload of magazine of other type than current magazine have
  };
  class LoadEmptyMagazine: LoadMagazine
  {
    //New action - same effect as LoadMagazine, but other parameters.
    priority = 1.5; //Decreased by 0.01 for magazine of other type than current.
    showWindow = true;
  };
  class TakeWeapon: None
  {
    priority = 0.52; //Added <0, 0.004) in the program (by the weapon type).
    showWindow = true;
    //Parameters:
    //%1 - weapon name.
    //%2 - remaining count of weapons (empty in retail version).
    text = $STR_ACTION_TAKEWEAPON;
    textDefault = $STR_ACTION_TAKEWEAPON;
  };
  class TakeDropWeapon: TakeWeapon
  {
    //New action, same implementation as TakeWeapon, other description.
    //Parameters:
    //%1 - weapon name.
    //%2 - list of weapons to drop.
    //%3 - remaining count of weapons (empty in retail version).
    text = $STR_ACTION_DROPTAKEWEAPON;
    textDefault = $STR_ACTION_DROPTAKEWEAPON;
  };
  class TakeMagazine: None
  {
    priority = 0.53; //Added <0, 0.004) in the program (by the weapon type).
    showWindow = true;
    //Parameters:
    //%1 - magazine name.
    //%2 - remaining count of magazines (empty in retail version).
    text = $STR_ACTION_TAKEMAGAZINE;
    textDefault = $STR_ACTION_TAKEMAGAZINE;
  };
  class TakeDropMagazine: TakeMagazine
  {
    //New action, same implementation as TakeMagazine, other description.
    //Parameters:
    //%1 - magazine name.
    //%2 - list of magazines to drop.
    //%3 - remaining count of magazines (empty in retail version).
    text = $STR_ACTION_DROPTAKEMAGAZINE;
    textDefault = $STR_ACTION_DROPTAKEMAGAZINE;
  };
  class TakeFlag: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_TAKEFLAG;
    textDefault = $STR_ACTION_TAKEFLAG;
  };
  class ReturnFlag: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_RETURNFLAG;
    textDefault = $STR_ACTION_RETURNFLAG;
  };
  class TurnIn: None
  {
    priority = 0.95;
    shortcut = TurnIn;
    //No parameters.
    text = $STR_ACTION_TURNIN;
    textDefault = $STR_ACTION_TURNIN;
  };
  class TurnOut: None
  {
    priority = 0.6;
    shortcut = TurnOut;
    //No parameters.
    text = $STR_ACTION_TURNOUT;
    textDefault = $STR_ACTION_TURNOUT;
  };
  class WeaponInHand: None
  {
    show = false;
    priority = 2;
    //Parameters:
    //%1 - name of the weapon.
    text = $STR_ACTION_WEAPONINHAND;
    textDefault = $STR_ACTION_WEAPONINHAND;
  };
  class WeaponOnBack: None
  {
    show = false;
    priority = 0.3;
    //Parameters:
    //%1 - name of the weapon.
    text = $STR_ACTION_WEAPONONBACK;
    textDefault = $STR_ACTION_WEAPONONBACK;
  };
  class SitDown: None
  {
    priority = 0.1;
    shortcut = SitDown;
    show = false;
    //No parameters.
    text = $STR_ACTION_SITDOWN;
    textDefault = $STR_ACTION_SITDOWN;
  };
  class Land: None
  {
    priority = 0.9;
    //No parameters.
    text = $STR_ACTION_LAND;
    textDefault = $STR_ACTION_LAND;
  };
  class CancelLand: None
  {
    priority = 0.9;
    //No parameters.
    text = $STR_ACTION_CANCEL_LAND;
    textDefault = $STR_ACTION_CANCEL_LAND;
  };
  class Eject: None
  {
    priority = 0.05;
    //No parameters.
    shortcut = Eject;
    text = $STR_ACTION_EJECT;
    textDefault = $STR_ACTION_EJECT;
  };
  class MoveToDriver: None
  {
    priority = 0.04;
    shortcut = SwapGunner;
    //No parameters.
    text = $STR_ACTION_TO_DRIVER;
    textDefault = $STR_ACTION_TO_DRIVER;
  };
  class MoveToPilot: MoveToDriver
  {
    //New action, same implementation as MoveToDriver, other description.
    //No parameters.
    text = $STR_ACTION_TO_PILOT;
    textDefault = $STR_ACTION_TO_PILOT;
  };
  class MoveToGunner: None
  {
    //Not used now.
    priority = 0.04;
    shortcut = SwapGunner;
    //No parameters.
    text = $STR_ACTION_TO_GUNNER;
    textDefault = $STR_ACTION_TO_GUNNER;
  };
  class MoveToCommander: None
  {
    //Not used now.
    priority = 0.04;
    shortcut = SwapGunner;
    //No parameters.
    text = $STR_ACTION_TO_COMMANDER;
    textDefault = $STR_ACTION_TO_COMMANDER;
  };
  class MoveToCargo: None
  {
    priority = 0.01;
    //No parameters.
    text = $STR_ACTION_TO_CARGO;
    textDefault = $STR_ACTION_TO_CARGO;
  };
  class MoveToTurret: None
  {
    priority = 0.02;
    shortcut = SwapGunner;
    //Parameters:
    //%1 - action target.
    //%2 - turret (vehicle position) name.
    text = $STR_ACTION_TO_TURRET;
    textDefault = $STR_ACTION_TO_TURRET;
  };
  class HideBody: None
  {
    priority = 0.51;
    //No parameters.
    text = $STR_ACTION_HIDE_BODY;
    textDefault = $STR_ACTION_HIDE_BODY;
  };
  class TouchOff: None
  {
    priority = 0.515;
    //Parameters:
    //%1 - number of bombs.
    text = $STR_ACTION_TOUCH_OFF;
    textDefault = $STR_ACTION_TOUCH_OFF;
  };
  class SetTimer: None
  {
    priority = 0.516;
    showWindow = true;
    //Parameters:
    //%1 - time we are adding.
    //%2 - remaining time.
    text = $STR_ACTION_SET_TIMER;
    textDefault = $STR_ACTION_SET_TIMER;
  };
  class StartTimer: SetTimer
  {
    //New action, same implementation as SetTimer, other description.
    //Parameters:
    //%1 - time we are setting.
    text = $STR_ACTION_START_TIMER;
    textDefault = $STR_ACTION_START_TIMER;
  };
  class Deactivate: None
  {
    priority = 0.514;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_DEACTIVATE;
    textDefault = $STR_ACTION_DEACTIVATE;
  };
  class NVGoggles: None
  {
    priority = 0.511;
    //No parameters.
    text = $STR_ACTION_TAKEON_GOGGLES;
    textDefault = $STR_ACTION_TAKEON_GOGGLES;
  };
  class NVGogglesOff: NVGoggles
  {
    //New action, same implementation as NVGoggles, other description.
    //No parameters.
    text = $STR_ACTION_TAKEOFF_GOGGLES;
    textDefault = $STR_ACTION_TAKEOFF_GOGGLES;
  };
  class ManualFire: None
  {
    priority = 0.59;
    shortcut = HeliManualFire; //Depend on vehicle type, replaced by the program.
    //No parameters.
    text = $STR_ACTION_MANUAL_FIRE;
    textDefault = $STR_ACTION_MANUAL_FIRE;
  };
  class ManualFireCancel: ManualFire
  {
    //New action, same implementation as ManualFire, other description.
    //No parameters.
    text = $STR_ACTION_MANUAL_FIRE_CANCEL;
    textDefault = $STR_ACTION_MANUAL_FIRE_CANCEL;
  };
  class AutoHover: None
  {
    shortcut = AutoHover;
    priority = 0.9;
    //No parameters.
    text = $STR_ACTION_HOVER;
    textDefault = $STR_ACTION_HOVER;
  };
  class AutoHoverCancel: AutoHover
  {
    //New action, same implementation as AutoHover, other description.
    //No parameters.
    shortcut = AutoHoverCancel;
    text = $STR_ACTION_HOVER_CANCEL;
    textDefault = $STR_ACTION_HOVER_CANCEL;
    showWindow = true;
    priority = 1.9;
  };
  class StrokeFist: None
  {
    //Not used now.
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_STROKEFIST;
    textDefault = $STR_ACTION_STROKEFIST;
  };
  class StrokeGun: None
  {
    //Not used now.
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_STROKEGUN;
    textDefault = $STR_ACTION_STROKEGUN;
  };
  class LadderUp: None
  {
    //Used only by AI.
    //No parameters.
    text = $STR_ACTION_LADDERUP;
    textDefault = $STR_ACTION_LADDERUP;
  };
  class LadderDown: None
  {
    //Used only by AI.
    //No parameters.
    text = $STR_ACTION_LADDERDOWN;
    textDefault = $STR_ACTION_LADDERDOWN;
  };
  class LadderOnDown: None
  {
    priority = 10;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_LADDERDOWN;
    textDefault = $STR_ACTION_LADDERDOWN;
  };
  class LadderOnUp: None
  {
    priority = 10;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_LADDERUP;
    textDefault = $STR_ACTION_LADDERUP;
  };
  class LadderOff: None
  {
    priority = 10;
    //No parameters.
    text = $STR_ACTION_LADDEROFF;
    textDefault = $STR_ACTION_LADDEROFF;
  };
  class FireInflame: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_FIRE_INFLAME;
    textDefault = $STR_ACTION_FIRE_INFLAME;
  };
  class FirePutDown: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_FIRE_PUT_DOWN;
    textDefault = $STR_ACTION_FIRE_PUT_DOWN;
  };
  class LandGear: None
  {
    priority = 0.8;
    hideOnUse = false;
    shortcut = LandGear;
    //No parameters.
    text = $STR_ACTION_GEAR_DOWN;
    textDefault = $STR_ACTION_GEAR_DOWN;
  };
  class LandGearUp: LandGear
  {
    //New action, same implementation as LandGear, other description.
    //No parameters.
    shortcut = LandGearUp;
    text = $STR_ACTION_GEAR_UP;
    textDefault = $STR_ACTION_GEAR_UP;
  };
  class FlapsDown: None
  {
    priority = 0.7;
    hideOnUse = false;
    //No parameters.
    shortcut = FlapsDown;
    text = $STR_ACTION_FLAPS_DOWN;
    textDefault = $STR_ACTION_FLAPS_DOWN;
  };
  class FlapsUp: None
  {
    priority = 0.7;
    hideOnUse = false;
    //No parameters.
    shortcut = FlapsUp;
    text = $STR_ACTION_FLAPS_UP;
    textDefault = $STR_ACTION_FLAPS_UP;
  };
  class Salute: None
  {
    priority = 0.11;
    shortcut = Salute;
    show = false;
    //No parameters.
    text = $STR_ACTION_SALUTE;
    textDefault = $STR_ACTION_SALUTE;
  };
  class ScudLaunch: None
  {
    priority = 0.04;
    //No parameters.
    text = $STR_ACTION_SCUDLAUNCH;
    textDefault = $STR_ACTION_SCUDLAUNCH;
  };
  class ScudStart: None
  {
    priority = 0.04;
    //No parameters.
    text = $STR_ACTION_SCUDSTART;
    textDefault = $STR_ACTION_SCUDSTART;
  };
  class ScudCancel: None
  {
    priority = 0.039;
    //No parameters.
    text = $STR_ACTION_SCUDCANCEL;
    textDefault = $STR_ACTION_SCUDCANCEL;
  };
  class User: None
  {
    priority = 1.5; //Decreased by 0.001 * id of action.
    showWindow = true;
    //Description defined by action itself.
    //Parameters:
    //%1 - action description
    text = "%1";
    textDefault = "%1";
  };
  class DropWeapon: None
  {
    //Not used from actions menu.
    //Parameters:
    //%1 - weapon name
    text = $STR_ACTION_DROP_WEAPON;
    textDefault = $STR_ACTION_DROP_WEAPON;
  };
  class PutWeapon : DropWeapon
  {
    //New action, same implementation as DropWeapon, other description.
    //Parameters:
    //%1 - weapon name.
    //%2 - action target.
    text = $STR_ACTION_PUT_WEAPON;
    textDefault = $STR_ACTION_PUT_WEAPON;
  };
  class DropMagazine: None
  {
    //Not used from actions menu
    //Parameters:
    //%1 - magazine type name.
    text = $STR_ACTION_DROP_MAGAZINE;
    textDefault = $STR_ACTION_DROP_MAGAZINE;
  };
  class PutMagazine: DropMagazine
  {
    //New action, same implementation as DropMagazine, other description.
    //Parameters:
    //%1 - magazine type name.
    //%2 - action target.
    text = $STR_ACTION_PUT_MAGAZINE;
    textDefault = $STR_ACTION_PUT_MAGAZINE;
  };
  class UserType : None
  {
    priority = 1.4; //Decreased by 0.001 * id of action.
    showWindow = true;
    //Description defined by action itself.
    //Parameters:
    //%1 - action description.
    //%2 - default action description.
    text = "%1";
    textDefault = "%2";
  };
  class HandGunOn: None
  {
    priority = 0.4;
    //Parameters:
    //%1 - name of the hand gun weapon.
    text = $STR_ACTION_WEAPON;
    textDefault = $STR_ACTION_WEAPON;
  };
  class HandGunOnStand: HandGunOn
  {
    //New action, same implementation as HandGunOn, other description.
    //Parameters:
    //%1 - name of the hand gun weapon.
    text = $STR_ACTION_WEAPONINHAND;
    textDefault = $STR_ACTION_WEAPONINHAND;
  };
  class HandGunOff: None
  {
    priority = 0.4;
    //Parameters:
    //%1 - name of the primary weapon.
    text = $STR_ACTION_WEAPON;
    textDefault = $STR_ACTION_WEAPON;
  };
  class HandGunOffStand: HandGunOff
  {
    //New action, same implementation as HandGunOff, other description.
    //Parameters:
    //%1 - name of the primary weapon.
    text = $STR_ACTION_WEAPONINHAND;
    textDefault = $STR_ACTION_WEAPONINHAND;
  };
  class TakeMine: None
  {
    priority = 0.512;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_TAKE_MINE;
    textDefault = $STR_ACTION_TAKE_MINE;
  };
  class DeactivateMine: None
  {
    priority = 0.513;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_DEACTIVATE_MINE;
    textDefault = $STR_ACTION_DEACTIVATE_MINE;
  };
  class UseMagazine: None
  {
    priority = 0.519; // decreased by 0.0001 * magazine index.
    //description defined in the magazine config.
    //Parameters:
    //%1 - action description, defined in magazine config "useActionTitle".
    text = "%1";
    textDefault = "%1";
    //The parameters "useActionTitle":
    //%1 - magazine name.
    //%2 - remaining number of magazines.
  };
  class IngameMenu: None
  {
    //Not used now.
    priority = -1;
    shortcut = MenuSelect;
    //No parameters.
    text = $STR_ACTION_INGAME_MENU;
    textDefault = $STR_ACTION_INGAME_MENU;
  };
  class CancelTakeFlag: None
  {
    priority = 21;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_CANCEL_ACTION;
    textDefault = $STR_ACTION_CANCEL_ACTION;
  };
  class CancelAction: None
  {
    priority = 20;
    showWindow = true;
    shortcut = CancelAction;
    //No parameters.
    text = $STR_ACTION_CANCEL_ACTION;
    textDefault = $STR_ACTION_CANCEL_ACTION;
  };
  class MarkEntity: None
  {
    priority = 0.5199;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_MARK_ENTITY;
    textDefault = $STR_ACTION_MARK_ENTITY;
  };
  class MarkWeapon: MarkEntity
  {
    //New action, same implementation as MarkEntity, other description.
    //No parameters.
    text = $STR_ACTION_MARK_WEAPON;
    textDefault = $STR_ACTION_MARK_WEAPON;
  };
  class TeamSwitch: None
  {
    priority = 0;
    shortcut = TeamSwitch;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_TEAM_SWITCH;
    textDefault = $STR_ACTION_TEAM_SWITCH;
  };
  class Gear: None
  {
    priority = 0.5198;
    showWindow = true;
    shortcut = Gear;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GEAR;
    textDefault = $STR_ACTION_GEAR;
  };
  class Talk: None
  {
  	//Upped from 0.41 by Joris.
    priority = 2;
    showWindow = true;
    //Parameters:
    //%1 - name of target person.
    text = $STR_ACTION_ASK;
    textDefault = $STR_ACTION_ASK;
  };
  class Diary: None
  {
    priority = -1;
    shortcut = Diary;
    //No parameters.
    text = $STR_ACTION_DIARY;
    textDefault = $STR_ACTION_DIARY;
  };
};

class PreloadTextures
{
  // any texture corresponding to the entry below is preloaded
  // and kept in the memory permanently
  // actual texture file is looked up in the corresponding config entry
  // lookup values:
  //  "*" - path is relative to Data unless it starts with a backslash
  //  "\*" - path is always absolute
  // "@*" - model name (rel. to data3d) is given in the config - load all textures for itreferenced by it
  // "\@*" - model name (abs) is given in the config - load all textures for itreferenced by it
  // in future other values or combinations may be possible,
  // like for textures which need to be loaded, but not all mipmaps are needed
  class CfgInGameUI
  {
    imageCornerElement = "*";
    class GroupDir
    {
      image = "*";
    };

    class PeripheralVision
    {
      cueTexture = "\*";
      bloodTexture = "\*";
    };

    class Cursor
    {
      me = "*";
      aim = "*";
      weapon = "*";
      select_target = "*";
      lock_target = "*";
      leader = "*";
      mission = "*";
      tactical = "*";
      move = "*";
      selected = "*";
      attack = "*";
      getIn = "*";
      watch = "*";
      outArrow = "*";
    };
  };

  class CfgCloudletShapes
  {
    cloudletSmoke = "@*";
    cloudletWater = "@*";
    cloudletFire = "@*";
  };
};

class CfgMissions
{
  class Cutscenes
  {
  };
  class Campaigns
  {
  };
  class Missions
  {
  };
  class MPMissions
  {
  };
  class Templates
  {
  };
  class MPTemplates
  {
  };
};

#include "dikCodes.h"

#define INPUT_DEVICE_KEYBOARD   0x00000000
#define INPUT_DEVICE_MOUSE      0x00010000 //! mouse button
#define INPUT_DEVICE_STICK      0x00020000 //! stick button
#define INPUT_DEVICE_STICK_AXIS 0x00030000 //! stick axis
#define INPUT_DEVICE_STICK_POV  0x00040000 //! stick pov switch
#define INPUT_DEVICE_TRACKIR    0x00080000 //! track IR
#define INPUT_DEVICE_MOUSE_AXIS 0x00100000 //! mouse axis
#define INPUT_CTRL_OFFSET           512
#define KEYBOARD_DOUBLE_TAP_OFFSET  256
//#define KEYBOARD_COMBO_OFFSET       16777216 //do not use it as offset here, use array {comboDik, keyDik} for key combinations!
#define MOUSE_CLICK_OFFSET          128
#define MOUSE_DOUBLE_CLICK_OFFSET   256

//@{ specific mouse axes
#define INPUT_DEVICE_MOUSE_AXIS_UP (INPUT_DEVICE_MOUSE_AXIS+2)
#define INPUT_DEVICE_MOUSE_AXIS_DOWN (INPUT_DEVICE_MOUSE_AXIS+3)
#define INPUT_DEVICE_MOUSE_AXIS_LEFT (INPUT_DEVICE_MOUSE_AXIS+0)
#define INPUT_DEVICE_MOUSE_AXIS_RIGHT (INPUT_DEVICE_MOUSE_AXIS+1)
#define INPUT_DEVICE_MOUSE_WHEEL_UP (INPUT_DEVICE_MOUSE_AXIS+4)
#define INPUT_DEVICE_MOUSE_WHEEL_DOWN (INPUT_DEVICE_MOUSE_AXIS+5)
//@}

/*!
\patch 5128 Date 2/14/2007 by Ondra
- New: New double-tap bindings for compass and watch, new binding (Ctrl-M) for minimap.
*/
class CfgDefaultKeysMapping
{
  moveForward[] = {DIK_W, DIK_UP};
  moveBack[] = {DIK_S, DIK_DOWN};
  turnLeft[] = {DIK_A, DIK_LEFT};
  turnRight[] = {DIK_D, DIK_RIGHT};
  moveUp[] = {DIK_PRIOR};
  moveDown[] = {DIK_NEXT};
  moveFastForward[] = {};
  moveSlowForward[] = {};
  moveLeft[] = {DIK_DELETE};
  moveRight[] = {DIK_END};
  evasiveForward[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_W};
  evasiveLeft[] = {DIK_Q};
  evasiveRight[] = {DIK_E};
  evasiveBack[] = {};
  stand[] = {DIK_C};
  crouch[] = {DIK_X};
  prone[] = {DIK_Z};
  toggleWeapons[] = {DIK_F, INPUT_DEVICE_STICK + 2};
  switchWeapon[] = {};
  fire[] = {DIK_LCONTROL};
  defaultAction[] = {INPUT_DEVICE_MOUSE,INPUT_DEVICE_STICK};
  reloadMagazine[] = {DIK_R, DIK_HOME};
  lockTargets[] = {DIK_TAB, INPUT_DEVICE_STICK + 1};
  lockTarget[] = {INPUT_DEVICE_MOUSE + 1};
  revealTarget[] = {INPUT_DEVICE_MOUSE + 1};
  tempRaiseWeapon[] = {};
  toggleRaiseWeapon[] = {INPUT_CTRL_OFFSET + DIK_R, KEYBOARD_DOUBLE_TAP_OFFSET+DIK_LCONTROL};

  prevAction[] = {DIK_LBRACKET, INPUT_DEVICE_STICK+6, INPUT_DEVICE_MOUSE_WHEEL_UP};
  nextAction[] = {DIK_RBRACKET, INPUT_DEVICE_STICK+4, INPUT_DEVICE_MOUSE_WHEEL_DOWN};
  action[] = {DIK_RETURN, INPUT_DEVICE_MOUSE + 2, INPUT_DEVICE_STICK+5};
  headlights[] = {DIK_L};
  nightVision[] = {DIK_N};
  binocular[] = {DIK_B};
  handgun[] = {DIK_SEMICOLON};
  compass[] = {DIK_K};
  watch[] = {DIK_O};
  minimap[] = {};
  compassToggle[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_K};
  watchToggle[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_O};
  minimapToggle[] = {INPUT_CTRL_OFFSET+DIK_M};
  showMap[] = {DIK_M};
  hideMap[] = {DIK_M};
  help[] = {DIK_H};
  timeInc[] = {DIK_EQUALS};
  timeDec[] = {DIK_MINUS};
  optics[] = {DIK_V, DIK_NUMPAD0, INPUT_DEVICE_MOUSE+MOUSE_CLICK_OFFSET+1};
  personView[] = {DIK_NUMPADENTER};
  tacticalView[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_SPACE, DIK_DECIMAL};
  zoomIn[] = {DIK_ADD, INPUT_DEVICE_STICK+3};
  zoomOut[] = {DIK_SUBTRACT};
  zoomCont[] = {INPUT_DEVICE_TRACKIR + 5};
  lookAround[] = {DIK_LMENU};
  lookAroundToggle[] = {DIK_MULTIPLY, KEYBOARD_DOUBLE_TAP_OFFSET+DIK_LMENU};
  lookLeftDown[] = {DIK_NUMPAD1, INPUT_DEVICE_STICK_POV + 5};
  lookDown[] = {DIK_NUMPAD2, INPUT_DEVICE_STICK_POV + 4};
  lookRightDown[] = {DIK_NUMPAD3, INPUT_DEVICE_STICK_POV + 3};
  lookLeft[] = {DIK_NUMPAD4, INPUT_DEVICE_STICK_POV + 6};
  lookCenter[] = {DIK_NUMPAD5};
  lookRight[] = {DIK_NUMPAD6, INPUT_DEVICE_STICK_POV + 2};
  lookLeftUp[] = {DIK_NUMPAD7, INPUT_DEVICE_STICK_POV + 7};
  lookUp[] = {DIK_NUMPAD8, INPUT_DEVICE_STICK_POV + 0};
  lookRightUp[] = {DIK_NUMPAD9, INPUT_DEVICE_STICK_POV + 1};
  lookLeftCont[] = {INPUT_DEVICE_TRACKIR + 1};
  lookRightCont[] = {INPUT_DEVICE_TRACKIR + 7};
  lookDownCont[] = {INPUT_DEVICE_TRACKIR + 0};
  lookUpCont[] = {INPUT_DEVICE_TRACKIR + 6};
  leanLeft[] = {DIK_Q, INPUT_DEVICE_TRACKIR + 3};
  leanRight[] = {DIK_E, INPUT_DEVICE_TRACKIR + 9};
  leanLeftToggle[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_Q};
  leanRightToggle[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_E};
  prevChannel[] = {DIK_COMMA};
  nextChannel[] = {DIK_PERIOD};
  chat[] = {DIK_SLASH};
  voiceOverNet[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_CAPITAL};
  pushToTalk[] = {DIK_CAPITAL};
  networkStats[] = {DIK_I};
  networkPlayers[] = {DIK_P};
  selectAll[] = {DIK_GRAVE};
  turbo[] = {};
  vehicleTurbo[] = {DIK_LSHIFT};
  holdBreath[] = {INPUT_DEVICE_MOUSE + 1};
  salute[] = {DIK_BACKSLASH};
  sitDown[] = {DIK_APOSTROPHE};
  walk[] = {};
  walkRunToggle[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_LSHIFT};
  walkRunTemp[] = {DIK_LSHIFT};

  aimUp[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
  aimDown[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
  aimLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
  aimRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};

  aimHeadUp[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
  aimHeadDown[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
  aimHeadLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
  aimHeadRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};

  ingamePause[] = {DIK_ESCAPE};
  menuSelect[] = {};
  menuBack[] = {DIK_BACK};
  forceCommandingMode[] = {DIK_SPACE};

  heliUp[] = {DIK_Q, DIK_PRIOR};
  heliDown[] = {DIK_Z, DIK_NEXT};
  heliLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
  heliRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};
  heliCyclicLeft[] = {DIK_A, DIK_LEFT, INPUT_DEVICE_STICK_AXIS+8};
  heliCyclicRight[] = {DIK_D, DIK_RIGHT, INPUT_DEVICE_STICK_AXIS+0};
  heliRudderLeft[] = {DIK_X, DIK_DELETE};
  heliRudderRight[] = {DIK_C, DIK_END};
  heliForward[] = {DIK_W, DIK_UP, INPUT_DEVICE_MOUSE_AXIS_DOWN, INPUT_DEVICE_STICK_AXIS+9};
  heliBack[] = {DIK_S, DIK_DOWN, INPUT_DEVICE_MOUSE_AXIS_UP, INPUT_DEVICE_STICK_AXIS+1};
  heliFastForward[] = {DIK_E};
  landGear[] = {INPUT_CTRL_OFFSET + DIK_G};
  landGearUp[] = {INPUT_CTRL_OFFSET + DIK_G};
  flapsDown[] = {INPUT_CTRL_OFFSET + DIK_K};
  flapsUp[] = {INPUT_CTRL_OFFSET + DIK_L};
  /*!
    \patch 5099 Date 12/8/2006 by Ondra
    - Changed: Helicopter autohover default binding changed to double backslash key to improve A/S/D/W precision.
  */
  autoHover[] = {KEYBOARD_DOUBLE_TAP_OFFSET+DIK_BACKSLASH};
  autoHoverCancel[] = {DIK_BACKSLASH};

  seagullUp[] = {DIK_Q, DIK_PRIOR, INPUT_DEVICE_MOUSE_AXIS_DOWN,INPUT_DEVICE_STICK_AXIS+1};
  seagullDown[] = {DIK_Z, DIK_NEXT, INPUT_DEVICE_MOUSE_AXIS_UP,INPUT_DEVICE_STICK_AXIS+9};
  seagullForward[] = {DIK_W, DIK_UP};
  seagullBack[] = {DIK_S, DIK_DOWN};
  seagullFastForward[] = {DIK_E};

  carLeft[] = {DIK_A, DIK_LEFT, INPUT_DEVICE_MOUSE_AXIS_LEFT, INPUT_DEVICE_STICK_AXIS+8};
  carRight[] = {DIK_D, DIK_RIGHT, INPUT_DEVICE_MOUSE_AXIS_RIGHT, INPUT_DEVICE_STICK_AXIS+0};
  carForward[] = {DIK_W, DIK_UP, INPUT_DEVICE_STICK_AXIS+9};
  carBack[] = {DIK_S, DIK_DOWN, INPUT_DEVICE_STICK_AXIS+1};
  carFastForward[] = {DIK_E};
  carSlowForward[] = {DIK_Q};

  carAimUp[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
  carAimDown[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
  carAimLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
  carAimRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};

  commandLeft[] = {DIK_A, DIK_LEFT};
  commandRight[] = {DIK_D, DIK_RIGHT};
  commandForward[] = {DIK_W, DIK_UP};
  commandBack[] = {DIK_S, DIK_DOWN};
  commandFast[] = {DIK_E};
  commandSlow[] = {DIK_Q};

  vehLockTargets[] = {DIK_TAB, INPUT_DEVICE_STICK + 1};
  swapGunner[] = {};
  /*!
    \patch 5099 Date 12/8/2006 by Ondra
    - New: Added manual fire default binding to ' (apostrophe) key.
  */
  heliManualFire[] = {DIK_APOSTROPHE};
  turnIn[] = {DIK_X, DIK_C};
  turnOut[] = {DIK_Z};

  cancelAction[] = {};

  commandWatch[] = {DIK_LMENU};

  teamSwitch[] = {DIK_T};
  teamSwitchPrev[] = {DIK_Y};
  teamSwitchNext[] = {DIK_U};
  gear[] = {DIK_G};

  cheat1[] = {DIK_RWIN};
  cheat2[] = {DIK_RMENU};

  buldSwitchCamera[] = {DIK_INSERT};
  buldFreeLook[] = {DIK_NUMPAD5};
  buldSelect[] = {DIK_SPACE};
  buldResetCamera[] = {DIK_NUMPAD0};
  buldMagnetizePoints[] = {DIK_F5};
  buldMagnetizePlanes[] = {DIK_F6};
  buldMagnetizeYFixed[] = {DIK_F7};
  buldTerrainRaise1m[] = {DIK_U};
  buldTerrainLower1m[] = {DIK_J};
  buldTerrainRaise5m[] = {DIK_I};
  buldTerrainLower5m[] = {DIK_K};
  buldTerrainShowNode[] = {DIK_H};
  buldSelectionType[] = {DIK_S};

  buldLeft[] = {DIK_LEFT};
  buldRight[] = {DIK_RIGHT};
  buldForward[] = {DIK_UP};
  buldBack[] = {DIK_DOWN};
  buldMoveLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
  buldMoveRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};
  buldMoveForward[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
  buldMoveBack[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
  buldTurbo[] = {DIK_LSHIFT};

  buldUp[] = {DIK_PGUP};
  buldDown[] = {DIK_PGDN};
  buldLookLeft[] = {DIK_NUMPAD4};
  buldLookRight[] = {DIK_NUMPAD6};
  buldLookUp[] = {DIK_NUMPAD8};
  buldLookDown[] = {DIK_NUMPAD2};
  buldZoomIn[] = {DIK_NUMPADPLUS};
  buldZoomOut[] = {DIK_NUMPADMINUS};
  buldTextureInfo[] = {DIK_T};

  diary[] = {DIK_U};
};
