#include "commonDefs.hpp"
#include "resincl.hpp"
#include "rscCommon.hpp"

//Todo:
//Rename to rscMenu.
//Reimplement GPS, Notepad and Radio.

class RscDisplayEditDiaryRecord
{
  access = ReadAndWrite;
  idd = IDD_EDIT_DIARY_RECORD;
  movingEnable = true;

  class Controls
  {
    class RecordBackground: RscText
    {
      colorBackground[] = Color_Background;
      x = 0.52; y = 0.155;
      w = 0.45; h = 0.34;
    };

  	class RecordTitle: RscTitle
  	{
  		style = ST_TITLE;
  		text = $STR_UI_RECORD_TITLE;
			x = 0.52; y = 0.165;
			w = 0.45;
  	};

    class Record: RscEdit
    {
      idc = IDC_EDIT_DIARY_RECORD;
      style = ST_MULTI;
      x = 0.53; y = 0.23;
      w = 0.43; h = 0.2;
      sizeEx = Size_Text_Small;
    };

    class B_OK: RscButton
    {
      idc = IDC_OK;
      x = 0.53; y = 0.435;
      w = 0.2; h = 0.05;
      text = $STR_DISP_OK;
      sizeEx = Size_Text_Small;
      default = true;
    };
    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.76;
      text = $STR_DISP_CANCEL;
      default = false;
    };
  };
};

class RscDisplayDiary
{
  access = ReadAndWrite;
  idd = IDD_DIARY; //129.
  movingEnable = true;

  onKeyDown = "if ((_this select 1) == 22) then {closeDialog 129; true} else {false}";

  class Controls
  {
  	class DiaryBackground: RscText
  	{
			x = 0.1; y = 0.025;
			w = 0.8; h = 0.95;
			colorBackground[] = Color_Background;
  	};

  	class DiaryTitle: RscTitle
  	{
  		style = ST_TITLE;
  		text = $STR_UI_DIARY_TITLE;
			x = 0.1; y = 0.035;
			w = 0.8;
  	};

    class DiaryPage: RscCombo
    {
      idc = IDC_DIARY_PAGE;
      x = 0.6; y = 0.1;
      w = 0.29; h = 0.05;
      sizeEx = Size_Text_Small;
    };

    class B_Add: RscButton
    {
      idc = IDC_DIARY_ADD;
      x = 0.6; y = 0.155;
      w = 0.29; h = 0.05;
      colorText[] = Color_Text_Default;
      text = $STR_UI_DIARY_ADDRECORD;
      sizeEx = Size_Text_Small;
    };

    class DiaryIndex: RscTree
    {
      idc = IDC_DIARY_INDEX;
      x = 0.6; y = 0.21;
      w = 0.29; h = 0.7;
      colorBackground[] = Color_GrayLight;
      colorSelect[] = Color_Black;
      colorText[] = Color_Text_Default;
      sizeEx = Size_Text_Small;
    };

    class B_Quit: B_Add
    {
    	idc = IDC_CANCEL;
    	y = 0.915;
    	text = $STR_UI_DIARY_QUIT;
			default = 1;
    };

    class Diary: RscHTML
    {
      idc = IDC_DIARY;
      x = 0.11; y = 0.1;
      w = 0.48; h = 0.865;
      colorBackground[] = Color_GrayLight;
      colorText[] = Color_Text_Default;
      class H1
      {
        font = FontMAIN;
        fontBold = FontMAIN;
        sizeEx = Size_Text_Default;
      };
      class P
      {
        font = FontMAIN;
        fontBold = FontMAIN;
        sizeEx = Size_Text_Small;
      };
    };
  };
};

//Main map display.
class RscDisplayMainMap
{
	access = ReadAndWrite;
	idd = IDD_MAIN_MAP;
	movingEnable = false;
	saveParams = false;

	controlsBackground[] =
	{
		Map
	};

	class Map: RscMapControl
	{
		moveOnEdges = true;
		x = -0.088; y = -0.088;
		w = 1.176; h = 1.176;

		class Command
		{
			icon = ProcTextWhite;
			color[] = {0, 0, 0, 1};
			size = 18;
      importance = 1; // not used
      coefMin = 1; // not used
      coefMax = 1; // not used
		};

		class ActiveMarker
		{
			color[] = {0.3, 0.1, 0.9, 1};
			size = 50;
		};
	};

	class controls
	{
	};

	class objects
	{
		//The map watch.
		class Watch: RscObject
		{
			idc = IDC_MAP_WATCH;
			type = CT_OBJECT;
			model = "\core\watch\watch.p3d";
			selectionDate1 = "date1";
			selectionDate2 = "date2";
			selectionDay = "day";
			x = 0.7; xBack = 0.7;
			y = 0.12; yBack = 0.12;
			z = 0.22; zBack = 0.22;
			inBack = false;
			enableZoom = false;
      		direction[] = {0, 0, 1};
			up[] = {0, 1, 0};
			zoomDuration = 1;
			scale = 0.7;
	    	waitForLoad = false;

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

		//The map compass.
		class Compass: RscObject
		{
			idc = IDC_MAP_COMPASS;
			type = CT_OBJECT;
			model = "\core\compass\compass.p3d";
			selectionArrow = "arrow";
			x = 0.92; xBack = 0.92;
			y = 0.08; yBack = 0.08;
			z = 0.22; zBack = 0.22;
			inBack = False;
			enableZoom = false;
			direction[] = {1, 0, 0};
			up[] = {0, 1, 0};
			zoomDuration = 1;
			scale = 0.6;
	    waitForLoad = false;

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

		//The map GPS.
		class GPS: RscObject
		{
			idc = IDC_MAP_GPS;
			type = CT_OBJECT_CONTAINER;
			model = "\core\gps\gps.p3d";
			x = 0.3; xBack = 0.3;
			y = 0.08; yBack = 0.08;
			z = 0.22; zBack = 0.22;
			inBack = false;
			enableZoom = false;
			up[] = {0, 1, 0};
			direction[] = {0, 50, 1};
			zoomDuration = 1;
			scale = 1;
			waitForLoad = false;

	    class Areas
	    {
	    	#define Y_Factor_GPS_Display 0.660

	      class Display
	      {
	        selection = "display";
					class controls
					{
						class GPSSquare: RscText
						{
							style = ST_CENTER;
							idc = IDC_GPS;
							x = 0; y = 0 * Y_Factor_GPS_Display;
							w = 1; h = 1 * Y_Factor_GPS_Display;
							color[] = {0, 0, 0, 1};
							sizeEx = 1 * Y_Factor_GPS_Display;
							text = "";
						};
					};
				};
			};
		};

		//The map radio.
		class WalkieTalkie: RscObject
		{
			idc = IDC_MAP_WALKIE_TALKIE;
			type = CT_OBJECT_CONTAINER;
			model = "\core\radio\radio.p3d";
			position[] = {0.094, -0.043, 0.25};
			scale = 1.3;
			direction[] = {0, 1, 0};
			up[] = {0, 0, -1};
			positionBack[] = {0.280, -0.155, 0.625};
			inBack = true;
			enableZoom = true;
			zoomDuration = 0.5;

			class Areas
			{
				#define Y_Factor_WalkieTalkie_Papir 1.359

				class Papir
				{
					selection = "papir";
					class controls
					{
						class RscRadioText: RscActiveText
						{
							idc = -1;
							sizeEx = 0.12 * Y_Factor_WalkieTalkie_Papir;
							color[] = Color_Black;
							colorActive[] = Color_Gray;
							style = ST_LEFT;
							x = 0.05; y = 0.02 * Y_Factor_WalkieTalkie_Papir;
							w = 0.95; h = 0.08 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioAlpha: RscRadioText
						{
							idc = IDC_RADIO_ALPHA;
							y = 0.02 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioBravo: RscRadioText
						{
							idc = IDC_RADIO_BRAVO;
							y = 0.12 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioCharlie: RscRadioText
						{
							idc = IDC_RADIO_CHARLIE;
							y = 0.22 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioDelta: RscRadioText
						{
							idc = IDC_RADIO_DELTA;
							y = 0.32 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioEcho: RscRadioText
						{
							idc = IDC_RADIO_ECHO;
							y = 0.42 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioFoxtrot: RscRadioText
						{
							idc = IDC_RADIO_FOXTROT;
							y = 0.52 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioGolf: RscRadioText
						{
							idc = IDC_RADIO_GOLF;
							y = 0.62 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioHotel: RscRadioText
						{
							idc = IDC_RADIO_HOTEL;
							y = 0.72 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioIndia: RscRadioText
						{
							idc = IDC_RADIO_INDIA;
							y = 0.82 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioJuliet: RscRadioText
						{
							idc = IDC_RADIO_JULIET;
							y = 0.92 * Y_Factor_WalkieTalkie_Papir;
						};
					};
				};
			};
		};

		//The map notepad.
		class Notepad: RscObject
		{
			idc = IDC_MAP_NOTEPAD;
			type = CT_OBJECT_CONTAINER;
			model = "\core\notepad\notepad.p3d";
			selectionPaper = "paper";
			position[] = {-0.08, 0, 0.32};
			scale = 1.2;
			positionBack[] = {-0.325, 0.197, 0.80};
			inBack = false;
			enableZoom = true;
			zoomDuration = 0.5;

			paper1 = ProcTextWhite;
			paper2 = ProcTextWhite;
			paper3 = ProcTextWhite;
			paper4 = ProcTextWhite;
			paper5 = ProcTextWhite;
			paper6 = ProcTextWhite;
			paper7 = ProcTextWhite;

			class Areas
			{
				#define Y_Factor_Notepad_Paper 2.082

				class Paper
				{
					selection = "paper";
					class controls
					{
						class Name: RscText
						{
							sizeEx = 0.04 * Y_Factor_Notepad_Paper;
							color[] = Color_Text_Default;
							idc = IDC_MAP_NAME;
							style = ST_CENTER;
							x = 0; y = 0 * Y_Factor_Notepad_Paper;
							w = 1; h = 0.05 * Y_Factor_Notepad_Paper;
						};

						class RscBookmarkText: RscActiveText
						{
							idc = -1;
							sizeEx = 0.04 * Y_Factor_Notepad_Paper;
							color[] = Color_Text_Default;
							colorActive[] = Color_WhiteDark;
							style = ST_CENTER;
							x = 0; y = 0.05 * Y_Factor_Notepad_Paper;
							w = 0.25; h = 0.05 * Y_Factor_Notepad_Paper;
						};

						class Bookmark1: RscBookmarkText
						{
							idc = IDC_MAP_PLAN;
							x = 0;
							text = $STR_MAP_PLAN;
						};

						class Bookmark2 : RscBookmarkText
						{
							idc = IDC_MAP_NOTES;
							x = 0.25;
							text = $STR_MAP_NOTES;
						};

						class Bookmark3: RscBookmarkText
						{
							idc = IDC_MAP_GROUP;
							x = 0.5;
							text = $STR_MAP_GROUP;
						};
						
						
						class Bookmark4: RscBookmarkText
						{
							idc = IDC_MAP_TEAM_SWITCH;
							x = 0.75;
							text = $STR_BRIEF_TEAM_SWITCH;
						};

						class Briefing: RscHTML
						{
							size = 1 * Y_Factor_Notepad_Paper;
							idc = IDC_BRIEFING;
							x = 0.02; y = 0.11 * Y_Factor_Notepad_Paper;
							w = 0.98; h = 0.89 * Y_Factor_Notepad_Paper;

							class H1: H1
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H2: H2
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H3: H3
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H4: H4
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H5: H5
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H6: H6
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class P: P
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};
						};
					};
				};
			};
		};
	};
};

//Main menu.
class RscDisplayMain: RscStandardDisplay
{
	idd = IDD_MAIN;

	#define MAIN_ACTIVETEXT_Y 0.2

	//Todo:
	//BISML™ 1.0 Strict testing:
	/*class controlsBackground
	{
		BISML_BODY(0, 0, 1, 1)
				BISML_CELL(Cell1, 0.2, 0.1)
					//Controls
			BISML_NEXTROW

			BISML_CELL(Cell2, 0.1, 0.05)
					//Controls
			BISML_CELL(Cell3, 0.3, 0.2)
					//Controls
	};*/

	class controls
	{
		//Version number of the application.
		class Version: RscText
		{
		  idc = IDC_MAIN_VERSION;
		  style = ST_CENTER;
		  x = 0.2; y = 0.1;
		  w = 0.2;
		  sizeEx = Size_Text_Small;
		};

		//Current real date.
		class Date: Version
		{
		  idc = IDC_MAIN_DATE;
		  x = 0.6;
		};

		//Open the campaign selection screen.
		class B_Campaign: RscButton
		{
			idc = IDC_MAIN_GAME;
			x = 0.133; y = MAIN_ACTIVETEXT_Y;
			text = $STR_DISP_MAIN_XBOX_CAMPAIGN;
		};

		//Open the single mission screen.
		class B_SingleMission: B_Campaign
		{
			idc = IDC_MAIN_SINGLE;
			y = MAIN_ACTIVETEXT_Y + 0.1;
			text = $STR_DISP_MAIN_SINGLE;
			default = 1;
		};

		//Open the multiplayer browser.
		class B_MultiPlayer: B_Campaign
		{
			idc = IDC_MAIN_MULTIPLAYER;
			y = MAIN_ACTIVETEXT_Y + 0.2;
			text = $STR_DISP_MAIN_MULTI;
		};

		//Start the mission editor.
		class B_MissionEditor: B_Campaign
		{
			idc = IDC_MAIN_EDITOR;
			y = MAIN_ACTIVETEXT_Y + 0.3;
			text = $STR_DISP_MAIN_CUSTOM;
		};

		//Open the options menu.
		class B_Options: RscButton
		{
			idc = IDC_MAIN_OPTIONS;
			x = 0.566; y = MAIN_ACTIVETEXT_Y;
			text = $STR_DISP_MAIN_OPTIONS;
		};

		//Open the profile screen.
		class B_Player: B_Options
		{
			idc = IDC_MAIN_PLAYER;
			y = MAIN_ACTIVETEXT_Y + 0.1;
			text = $STR_DISP_ERROR;
		};

		//Start the credits
		class B_Credits: B_Options
		{
			idc = IDC_MAIN_CREDITS;
			y = MAIN_ACTIVETEXT_Y + 0.2;
			text = $STR_DISP_MAIN_CREDITS;
		};

		//Exit the application
		class B_Quit: B_Options
		{
			idc = IDC_MAIN_QUIT;
			y = MAIN_ACTIVETEXT_Y + 0.3;
			text = $STR_DISP_MAIN_QUIT;
		};
	};
};

//Single mission selection screen.
class RscDisplaySingleMission: RscStandardDisplay
{
	idd = IDD_SINGLE_MISSION;
  none = ProcTextWhite;
  done = ProcTextWhite;
  locked = ProcTextWhite;
  package = ProcTextWhite;

	class controls
	{
	  class Title: RscTitle {text = $STR_DISP_SINGLE_TITLE;};

		//Lists all the available single missions and subfolders with more missions.
		class Missions: RscListBox
		{
			idc = IDC_SINGLE_MISSION;
	  	x = 0.067; y = 0.15;
			h = 0.65;
		};

		//Todo: make this control interactive to change pages.
		//HTML briefing screen is displayed in this field.
		class Overview: RscHTML
		{
			idc = IDC_SINGLE_OVERVIEW;
			x = 0.53; y = 0.15;
			w = 0.4; h = 0.65;
	  };

	  //Difficulty selection button.
	  class B_Difficulty: RscActiveText
	  {
	    idc = IDC_SINGLE_DIFF;
	    x = 0.03; y = 0.9;
	  };

	  //Cancel back to the main menu.
	  class B_Cancel: B_Difficulty
	  {
	    idc = IDC_CANCEL;
	    x = 0.21;
	    text = $STR_DISP_CANCEL;
	  };

	  //Restart mission button.
	  class B_Start: B_Difficulty
	  {
	    idc = IDC_SINGLE_LOAD;
	    x = 0.39;
	  };

	  //Continue from a save or start the mission.
	  class B_Continue: B_Difficulty
	  {
	    idc = IDC_OK;
	    x = 0.57;
	    w = 0.4;
	    default = 1;
	  };
	};
};

//Campaign selection screen.
class RscDisplayCampaignLoad: RscStandardDisplay
{
	idd = IDD_CAMPAIGN_LOAD;

	class controls
	{
		class Title: RscTitle {idc = IDC_CAMPAIGN_CAMPAIGN;};

		//Select the previous campaign.
		class B_Prev: RscActiveText
		{
			idc = IDC_CAMPAIGN_PREV;
			x = 0.025; y = 0.1;
			w = 0.15;
			text = $STR_DISP_CAMPAIGN_PREVIOUS;
		};

		//Select the next campaign.
		class B_Next: B_Prev
		{
			idc = IDC_CAMPAIGN_NEXT;
			x = 0.875;
			text = $STR_DISP_CAMPAIGN_NEXT;
		};

		class Contents: RscText
		{
			x = 0.025; y = 0.18;
			w = 0.15;
			text = $STR_DISP_CAMPAIGN_CONTENTS;
			style = ST_LEFT;
		};

		//The campaign history / played missions and cutscenes.
		class History: RscListBox
		{
			idc = IDC_CAMPAIGN_HISTORY;
			x = 0.067; y = 0.24;
			w = 0.4; h = 0.5;
		};

		//The selected mission name.
		class Mission: RscText
		{
			idc = IDC_CAMPAIGN_MISSION;
			x = 0; y = 0.18;
			w = 1;
			style = ST_CENTER;
		};

		//HTML description of the campaign.
		class Description: RscHTML
		{
			idc = IDC_CAMPAIGN_DESCRIPTION;
			x = 0.53; y = 0.24;
			w = 0.4; h = 0.5;
		};

		class BookText: RscText
		{
			x = 0.025;
			w = 0.2;
			y = -5;
			style = ST_LEFT;
			sizeEx = Size_Text_Small;
		};

		//Todo: Verify this works.
		//Date of last play.
		class Date: BookText
		{
			idc = IDC_CAMPAIGN_DATE;
			y = 0.76;
		};

		//Current mission and total score.
		class Score: BookText
		{
			idc = IDC_CAMPAIGN_SCORE;
			y = 0.79;
		};

		//Current mission and total duration.
		class Duration: BookText
		{
			idc = IDC_CAMPAIGN_DURATION;
			y = 0.82;
		};

		//Current mission and total casualties.
		class Casualties: BookText
		{
			idc = IDC_CAMPAIGN_CASUALTIES;
			y = 0.85;
		};

		//ToDo: Shows when it shouldn't.
		class BookTableItem: BookText
		{
			x = 0.35;
			w = 0.1; h = 0.03;
			style = ST_CENTER + ST_WITH_RECT;
		};

		//Statistics table.
		class KillsTitle: BookTableItem
		{
			idc = IDC_CAMPAIGN_KILLS_TITLE;
			y = 0.76;
			text = $STR_CAMPAIGN_KILLS;
		};

		class EnemyRow: BookTableItem
		{
			idc = IDC_CAMPAIGN_ENEMY_ROW;
			y = 0.79;
			text = $STR_DISP_CAMPAIGN_ENEMY;
		};

		class FriendlyRow: BookTableItem
		{
			idc = IDC_CAMPAIGN_FRIENDLY_ROW;
			y = 0.82;
			text = $STR_DISP_CAMPAIGN_FRIENDLY;
		};

		class CivilianRow: BookTableItem
		{
			idc = IDC_CAMPAIGN_CIVILIAN_ROW;
			y = 0.85;
			text = $STR_DISP_CAMPAIGN_CIVILIAN;
		};

		class InfantryColumn: BookTableItem
		{
			idc = IDC_CAMPAIGN_INFANTRY_COLUMN;
			x = 0.45; y = 0.76;
			text = $STR_MPTABLE_INFANTRY;
		};

		class SoftColumn: BookTableItem
		{
			idc = IDC_CAMPAIGN_SOFT_COLUMN;
			x = 0.55; y = 0.76;
			text = $STR_MPTABLE_SOFT;
		};

		class ArmoredColumn: BookTableItem
		{
			idc = IDC_CAMPAIGN_ARMORED_COLUMN;
			x = 0.65; y = 0.76;
			text = $STR_MPTABLE_ARMORED;
		};

		class AircraftColumn: BookTableItem
		{
			idc = IDC_CAMPAIGN_AIRCRAFT_COLUMN;
			x = 0.75; y = 0.76;
			text = $STR_MPTABLE_AIR;
		};

		class TotalColumn: BookTableItem
		{
			idc = IDC_CAMPAIGN_TOTAL_COLUMN;
			x = 0.85; y = 0.76;
			text = $STR_MPTABLE_TOTAL;
		};

		class EInf: BookTableItem
		{
			idc = IDC_CAMPAIGN_EINF;
			x = 0.45; y = 0.79;
		};

		class ESoft: BookTableItem
		{
			idc = IDC_CAMPAIGN_ESOFT;
			x = 0.55; y = 0.79;
		};

		class EArm: BookTableItem
		{
			idc = IDC_CAMPAIGN_EARM;
			x = 0.65; y = 0.79;
		};

		class EAir: BookTableItem
		{
			idc = IDC_CAMPAIGN_EAIR;
			x = 0.75; y = 0.79;
		};

		class ETot: BookTableItem
		{
			idc = IDC_CAMPAIGN_ETOT;
			x = 0.85; y = 0.79;
		};

		class FInf: BookTableItem
		{
			idc = IDC_CAMPAIGN_FINF;
			x = 0.45; y = 0.82;
		};

		class FSoft: BookTableItem
		{
			idc = IDC_CAMPAIGN_FSOFT;
			x = 0.55; y = 0.82;
		};

		class FArm: BookTableItem
		{
			idc = IDC_CAMPAIGN_FARM;
			x = 0.65; y = 0.82;
		};

		class FAir: BookTableItem
		{
			idc = IDC_CAMPAIGN_FAIR;
			x = 0.75; y = 0.82;
		};

		class FTot: BookTableItem
		{
			idc = IDC_CAMPAIGN_FTOT;
			x = 0.85; y = 0.82;
		};

		class CInf: BookTableItem
		{
			idc = IDC_CAMPAIGN_CINF;
			x = 0.45; y = 0.85;
		};

		class CSoft: BookTableItem
		{
			idc = IDC_CAMPAIGN_CSOFT;
			x = 0.55; y = 0.85;
		};

		class CArm: BookTableItem
		{
			idc = IDC_CAMPAIGN_CARM;
			x = 0.65; y = 0.85;
		};

		class CAir: BookTableItem
		{
			idc = IDC_CAMPAIGN_CAIR;
			x = 0.75; y = 0.85;
		};

		class CTot: BookTableItem
		{
			idc = IDC_CAMPAIGN_CTOT;
			x = 0.85; y = 0.85;
		};

		//Select the campaign difficulty.
		class B_Difficulty: RscActiveText
		{
			idc = IDC_CAMPAIGN_DIFF;
			x = 0.033; y = 0.90;
			w = 0.2;
		};

		//Revert the campaign's progress to the selected mission.
		class B_Replay: B_Difficulty
		{
			idc = IDC_CAMPAIGN_REPLAY;
			x = 0.266;
			text = $STR_DISP_CAMPAIGN_REPLAY;
			default = 1;
		};

		//Cancel to the main menu.
		class B_Cancel: B_Difficulty
		{
			idc = IDC_CANCEL;
			x = 0.499;
			text = $STR_DISP_CANCEL;
		};

		//Continue or replay the campaign.
		class B_OK: B_Difficulty
		{
			idc = IDC_OK;
			x = 0.733;
		};
	};
};

//Campaign reverting screen.
class RscDisplayRevert: RscStandardDisplay
{
	idd = IDD_REVERT;

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_REVERT_TITLE;
			text = $STR_SURE;
		};

		class Question: RscText
		{
			idc = IDC_REVERT_QUESTION;
			x = 0.54; y = 0.35;
			w = 0.4; h = 0.5;
			text = $STR_DISP_REVERT_QUESTION;
			style = ST_CENTER;
		};
	};
};

//Difficulty selection screen.
class RscDisplaySelectDifficulty: RscStandardDisplay
{
	idd = IDD_SELECT_DIFFICULTY;

  class controls
  {
  	//List of difficulties.
		class Difficulty: RscListBox
		{
			idc = IDC_DIFF_LIST;
			x = 0.03; y = 0.2;
			w = 0.44; h = 0.16;
		};

		//Description of difficulties.
		class Description: RscHTML
		{
			idc = IDC_DIFF_DESC;
			x = 0.52; y = 0.15;
			w = 0.42; h = 0.7;
			align = "center";
		};
	};
};

//Main briefing screen (for single missions).
class RscDisplayGetReady: RscDisplayMainMap
{
	idd = IDD_INTEL_GETREADY;
  	showGearOnExit = false;

	class controlsBackground
	{
		//In-game map.
		class Map1: Map
		{
			x = 0.5; y = 0.05;
			w = 0.45; h = 0.9;
		};

		class Background1: RscText
		{
			x = 0; y = 0;
			w = 0.5; h = 1;
			colorBackground[] = Color_Background;
		};

		class Background2: Background1
		{
			x = 0.5; y = 0;
			h = 0.05;
		};

		class Background3: Background2
		{
			y = 0.95;
		};

		class Background4: Background1
		{
			x = 0.95;
			w = 0.05;
		};
	};

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_GETREADY_TITLE;
			x = 0;
			w = 0.5;
		};

		//Todo: Buttons don't respond.
		//Go to the gear screen.
		class B_Continue: RscActiveText
		{
			idc = IDC_OK;
			x = 0.1; y = 0.90;
			w = 0.15;
			text = $STR_DISP_CONTINUE;
			default = true;
		};

		//Cancel back to the single mission screen.
		class B_Cancel: B_Continue
		{
			idc = IDC_CANCEL;
			x = 0.25;
			text = $STR_DISP_CANCEL;
			default = false;
		};
	};
};

//Main gear screen.
class RscDisplayGear: RscStandardDisplay
{
	idd = IDD_GEAR;
	emptyGun = ProcTextWhite;
	emptySec = ProcTextWhite;
	emptyEq = ProcTextWhite;
	emptyMag = ProcTextWhite;
	emptyMag2 = ProcTextWhite;
	emptyHGun = ProcTextWhite;
	emptyHGunMag = ProcTextWhite;

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_GEAR_UNIT;
			text = $STR_GEAR_TITLE;
		};


		// Pool of weapons and magazines.
		class Pool : RscListBox
		{
			idc = IDC_GEAR_POOL;
			style = LB_TEXTURES;
			x = 0.05; y = 0.6;
			w = 0.4; h = 0.3;
			color[] = Color_Black; // make it readable
		};

		//Selected unit's skill level.
		class Skill: RscPicture
		{
			idc = IDC_GEAR_SKILL;
			x = 0.73; y = 0.20;
			w = 0.05; h = 0.05;
		};

		//Selected unit's vehicle.
		class Vehicle: RscPicture
		{
			idc = IDC_GEAR_VEHICLE;
			x = 0.8; y = 0.2;
			w = 0.06; h = 0.06;
		};

		//Selected unit's equipment.
		class Weapons: RscHtml
		{
			idc = IDC_GEAR_WEAPONS;
			x = 0.55; y = 0.18;
			w = 0.4; h = 0.6;
			align = "center";
			cycleLinks = false;
		};
  

		//Rearm soldier
		class B_Rearm: RscActiveText
		{
			idc = IDC_GEAR_REARM;
			x = 0.75; y = 0.9;
			w = 0.15;
			text = $STR_GEAR_REARM;
		};

		//Exit the gear screen.
		class B_Close: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.85; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CLOSE;
			default = 1;
		};
	};
};

//Todo: Verify this works.
//Switching the piece of equipment.
class RscDisplayGearWeapon: RscStandardDisplay
{
	idd = IDD_GEAR_SELECT;

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_GEAR_SELECT_TITLE;
		};

		//Available equipment.
		class Weapon: RscListBox
		{
			idc = IDC_GEAR_SELECT_LIST;
			style = LB_TEXTURES;
			x = 0.07; y = 0.2;
			w = 0.44; h = 0.6;
			rowHeight = 0.065;
		};

		//HTML overview of the selected piece of equipment.
		class Overview: RscHtml
		{
			idc = IDC_GEAR_SELECT_OVERVIEW;
			x = 0.523; y = 0.2;
			w = 0.422; h = 0.68;
			align = "center";
		};

		//Drop the piece of equipment.
		class B_Drop: RscActiveText
		{
			idc = IDC_GEAR_SELECT_DROP;
			x = 0.25; y = 0.9;
			w = 0.15;
			text = $STR_TOOLTIP_DROP; // maybe different string should be used
			default = 1;
		};

		//Select the piece of equipment and exit.
		class B_OK: B_Drop
		{
			idc = IDC_OK;
			x = 0.85;
			text = $STR_DISP_OK;
			default = 1;
		};

		class B_CANCEL: B_Drop
		{
			idc = IDC_CANCEL;
			x = 0.9;
			text = $STR_DISP_CANCEL;
			default = 1;
		};

	};
};

class RscDisplayEmpty
{
	access = ReadAndWrite;
	movingEnable = false;

	class controls {};
};

//In-game mission screen.
class RscDisplayMission: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_MISSION;
};

//In-game intro screen.
class RscDisplayIntro: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_INTRO;
};

//In-game outro screen.
class RscDisplayOutro: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_OUTRO;
};

//In-game award screen.
class RscDisplayAward: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_AWARD;
};

//In-game campaign screen.
class RscDisplayCampaign: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_CAMPAIGN;
};

//Dead screen.
class RscDisplayMissionEnd: RscStandardDisplay
{
	idd = IDD_MISSION_END;

	#define MissionEnd_Y 0.2

	class controls
	{
		class Title: RscTitle {text = $STR_MISSION_KILLED;};

		//Quote of famous person.
		class Quotation: RscText
		{
			idc = IDC_ME_QUOTATION;
			style = ST_MULTI;
			lineSpacing = 1;
			x = 0.1; y = 0.7;
			w = 0.85; h = 0.2;
		};

		//Famous person.
		class Author: RscText
		{
			idc = IDC_ME_AUTHOR;
			style = ST_RIGHT;
			x = 0.45; y = 0.85;
			w = 0.4;
		};

		//Load a previous save.
		class B_Load: RscButton
		{
			idc = IDC_ME_LOAD;
			x = 0.35;
			y = MissionEnd_Y;
			text = $STR_DISP_ME_LOAD;
		};

		//Retry the mission from the last autosave.
		class B_Retry: B_Load
		{
			idc = IDC_ME_RETRY;
			y = MissionEnd_Y + 0.1;
			text = $STR_DISP_ME_RETRY;
			default = 1;
		};

		//Restart the mission.
		class B_Restart: B_Load
		{
		  idc = IDC_ME_RESTART;
		  y = MissionEnd_Y + 0.2;
		  text = $STR_XBOX_PLAY_AGAIN;
		};

		//Abort the mission.
		class B_Abort: B_Load
		{
			idc = IDC_CANCEL;
			y = MissionEnd_Y + 0.3;
			text = $STR_DISP_ME_ABORT;
		};

	    // Team switch.
	    class B_TeamSwitch: B_Load
	    {
	      idc = IDC_ME_TEAM_SWITCH;
	      y = MissionEnd_Y + 0.4;
	      text = $STR_DISP_ME_TEAM_SWITCH;
	    };
  };
};

class RscDisplayTeamSwitch: RscStandardDisplay
{
  idd = IDD_TEAM_SWITCH;
  movingEnable = false;
  
  colorPlayer[] = Color_Text_Default;
  colorPlayerSelected[] = Color_Orange;
  
  class Controls
  {
    class Background : RscText
    {
      x = 0.60000;
      y = 0.00000;
      w = 0.40000;
      h = 0.40000;

      style = ST_HUD_BACKGROUND;
      colorBackground[] = {0.1, 0.1, 0.1, 1};
    };
    class Roles : RscListBox
    {
      idc = IDC_TEAM_SWITCH_ROLES;
      style = LB_TEXTURES;
      x = 0.61; y = 0.01;
      w = 0.39; h = 0.29;
    };
    class ButtonOK : RscButton
    {
      idc = IDC_OK;
      x = 0.61; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_OK;
      default = 1;
    };
    class ButtonCancel : RscButton
    {
      idc = IDC_CANCEL;
      x = 0.81; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_CANCEL;
    };
  };
};

//In-game pause screen.
class RscDisplayInterrupt: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

	#define Interrupt_Y 0.2

  class controls
  {
		class Title: RscTitle {text = $STR_DISP_INT_TITLE;};

		//Continue the mission.
		class B_Continue: RscButton
		{
			idc = IDC_CANCEL;
			x = 0.35;
			y = Interrupt_Y;
			h = 0.08;
			text = $STR_DISP_INT_CONTINUE;
			default = 1;
		};

		//Manually save the mission.
		class B_Save: B_Continue
		{
			idc = IDC_INT_SAVE;
			y = Interrupt_Y + 0.08;
			text = $STR_DISP_INT_SAVE;
			default = 0;
		};

		//Load from the last manual save.
		class B_Load: B_Continue
		{
			idc = IDC_INT_LOAD;
			y = Interrupt_Y + 0.16;
			text = $STR_DISP_INT_LOAD;
			default = 0;
		};

		//Retry from the last autosave.
		class B_Retry: B_Continue
		{
			idc = IDC_INT_RETRY;
			y = Interrupt_Y + 0.24;
			text = $STR_DISP_INT_RETRY;
			default = 0;
		};

		//Open the options menu.
		class B_Options: B_Continue
		{
			idc = IDC_INT_OPTIONS;
			y = Interrupt_Y + 0.32;
			text = $STR_DISP_INT_OPTIONS;
			default = 0;
		};

		//Abort the mission.
		class B_Abort: B_Continue
		{
			idc = IDC_INT_ABORT;
			y = Interrupt_Y + 0.56;
			text = $STR_DISP_INT_ABORT;
			default = 0;
		};
	};
};

//In-game pause screen multiplayer.
class RscDisplayMPInterrupt: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

	#define MP_Interrupt_Y 0.2

  class controls
	{
		class Title: RscTitle
		{
			idc = IDC_INT_MISSION;
		};

		class B_Continue: RscButton
		{
			idc = IDC_CANCEL;
			x = 0.35; y = MP_Interrupt_Y;
			h = 0.08;
			text = $STR_DISP_INT_CONTINUE;
			default = 1;
		};

		class B_Players: B_Continue
		{
			idc = IDC_INT_PLAYERS;
			y = MP_Interrupt_Y + 0.16;
			text = $STR_MPTABLE_PLAYERS;
			default = 0;
		};

		class B_Options: B_Continue
		{
			idc = IDC_INT_SETTINGS;
			y = MP_Interrupt_Y + 0.24;
			text = $STR_DISP_INT_OPTIONS;
			default = 0;
		};

		class B_Abort: B_Continue
		{
			idc = IDC_INT_ABORT;
			y = MP_Interrupt_Y + 0.4;
			text = $STR_DISP_INT_ABORT;
			default = 0;
		};
	};
};

//Debriefing screen.
class RscDisplayDebriefing: RscStandardDisplay
{
	idd = IDD_DEBRIEFING;
	statisticsLinks = false;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_DEBRIEFING;};
		
		class MissionTitle: RscText 
		{
			x = 0.25; y = 0.05;
			w = 0.5; h = 0.05;
			idc = IDC_DEBRIEFING_TITLE;
		};

		class MissionResult: RscText 
		{
			x = 0.25; y = 0.15;
			w = 0.5; h = 0.05;
			idc = IDC_DEBRIEFING_RESULT;
		};

		//Debriefing statistics.
		class DebriefingInfo: RscHTML
		{
			idc = IDC_DEBRIEFING_INFO;
			x = 0.25; y = 0.25;
			w = 0.5; h = 0.2;
		};

		//Debriefing statistics.
		class DebriefingText: RscHTML
		{
			idc = IDC_DEBRIEFING_DEBRIEFING;
			x = 0.25; y = 0.5;
			w = 0.5; h = 0.2;
		};
		
		//Debriefing statistics.
		class DebriefingObjectives: RscHTML
		{
			idc = IDC_DEBRIEFING_OBJECTIVES;
			x = 0.25; y = 0.75;
			w = 0.5; h = 0.2;
		};


		//Mission debriefing.
		class Right: RscHTML
		{
			idc = IDC_SINGLE_OVERVIEW;
			x = 0.75; y = 0.05;
			w = 0.4; h = 0.15;
		};
		
		class Left: RscHTML
		{
			idc = IDC_DEBRIEFING_STAT;
			x = 0.25; y = 0.18;
			w = 0.5; h = 0.1;
		};


		class PlayersTitle: RscText
		{
			idc = IDC_DEBRIEFING_PLAYERS_TITLE;
			x = 0.7; y = 0.7;
			w = 0.25;
			text = $STR_DISP_SRVSETUP_PLAYERS;
			style = ST_LEFT + ST_WITH_RECT;
		};

		//List of players in the server.
		class Players: RscListBox
		{
			idc = IDC_DEBRIEFING_PLAYERS;
			x = 0.7; y = 0.75;
			w = 0.25; h = 0.125;
		};

		//Restart the mission.
		class B_Restart: RscActiveText
		{
			idc = IDC_DEBRIEFING_RESTART;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_DEBRIEFING_RESTART;
		};

		//Continue.
		class B_Continue: B_Restart
		{
			idc = IDC_CANCEL;
			x = 0.8;
			text = $STR_DISP_CONTINUE;
			default = 1;
		};
	};
};

//User profile selection screen.
class RscDisplayLogin: RscStandardDisplay
{
	idd = IDD_LOGIN;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_LOGIN_TITLE;};

		class TextUser: RscText
		{
			x = 0.1; y = 0.15;
			w = 0.45;
			text = $STR_DISP_LOGIN_USER;
		};

		//Available profiles.
		class ValueUser: RscListBox
		{
			idc = IDC_LOGIN_USER;
			x = 0.1; y = 0.2;
			w = 0.45; h = 0.5;
			rows = 10;
		};

		//Create a new profile.
		class B_New: RscActiveText
		{
			idc = IDC_LOGIN_NEW;
			x = 0.65; y = 0.2;
			w = 0.2;
			text = $STR_DISP_NEW;
		};

		//Edit the selected profile.
		class B_Edit: RscActiveText
		{
			idc = IDC_LOGIN_EDIT;
			x = 0.65; y = 0.25;
			w = 0.2;
			text = $STR_DISP_EDIT;
		};

		//Delete the selected profile.
		class B_Delete: RscActiveText
		{
			idc = IDC_LOGIN_DELETE;
			x = 0.65; y = 0.3;
			w = 0.2;
			text = $STR_DISP_DELETE;
		};

		//Cancel back to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.6; y = 0.9;
			w = 0.12;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the selected profile.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};
	};
};

//User profile editing screen.
class RscDisplayNewUser: RscStandardDisplay
{
	idd = IDD_NEW_USER;

	class controls
	{
		class Title: RscTitle {idc = IDC_NEW_USER_TITLE;};

		class TextName: RscText
		{
			x = 0.025; y = 0.25;
			w = 0.45;
			text = $STR_DISP_NEW_USER_NAME;
		};

		//Profile name field.
		class ValueName: RscEdit
		{
			idc = IDC_NEW_USER_NAME;
			x = 0.025; y = 0.3;
			w = 0.45; h = 0.06;
		};

		//Assigned user ID number.
		class ValueId: RscText
		{
			idc = IDC_NEW_USER_ID;
			x = 0.025; y = 0.2;
			w = 0.45;
		};

		class TextFace: RscText
		{
			x = 0.525; y = 0.2;
			w = 0.45;
			text = $STR_DISP_NEW_USER_FACE;
		};

		//Available avatar faces.
		class ValueFace: RscListBox
		{
			idc = IDC_NEW_USER_FACE;
			x = 0.525; y = 0.25;
			w = 0.45; h = 0.18;
			rows = 3;
		};

		class TextGlasses: RscText
		{
			x = 0.525; y = 0.45;
			w = 0.45;
			text = $STR_DISP_NEW_USER_GLASSES;
		};

		//Available avatar glasses.
		class ValueGlasses: RscListBox
		{
			idc = IDC_NEW_USER_GLASSES;
			x = 0.525; y = 0.5;
			w = 0.45; h = 0.12;
			rows = 2;
		};

		class TextSpeaker: RscText
		{
			x = 0.525; y = 0.65;
			w = 0.45;
			text = $STR_DISP_NEW_USER_SPEAKER;
		};

		//Available avatar voices.
		class ValueSpeaker: RscListBox
		{
			idc = IDC_NEW_USER_SPEAKER;
			x = 0.525; y = 0.7;
			w = 0.45; h = 0.12;
			rows = 2;
		};

		class TextPitch: RscText
		{
			x = 0.025; y = 0.5;
			w = 0.45;
			text = $STR_DISP_NEW_USER_PITCH;
		};

		//Avatar voice pitch.
		class ValuePitch: RscSlider
		{
			idc = IDC_NEW_USER_PITCH;
			x = 0.025; y = 0.55;
			w = 0.45; h = 0.05;
		};

		class TextSquad: RscText
		{
			idc = IDC_NEW_USER_SQUAD_TEXT;
			x = 0.025; y = 0.37;
			w = 0.45;
			text = $STR_DISP_NEW_USER_SQUAD;
		};

		//User's squad XML page.
		class ValueSquad: RscEdit
		{
			idc = IDC_NEW_USER_SQUAD;
			x = 0.025; y = 0.42;
			w = 0.45; h = 0.06;
		};

		//Cancel to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			text = $STR_DISP_CANCEL;
			x = 0.70; y = 0.90;
			w = 0.15;
		};

		//Confirm and save the profile.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};
	};
};

//Main options screen.
class RscDisplayOptions: RscStandardDisplay
{
	idd = IDD_OPTIONS;

	#define Display_Options_Y 0.2

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_TITLE;};

		//Open the video options.
		class Video: RscButton
		{
			idc = IDC_OPTIONS_VIDEO;
			style = ST_CENTER;
			x = 0.35; y = Display_Options_Y;
			h = 0.05;
			text = $STR_DISP_OPTIONS_VIDEO;
		};

		//Open the audio options.
		class Audio: Video
		{
			idc = IDC_OPTIONS_AUDIO;
			y = Display_Options_Y + 0.1;
			text = $STR_DISP_OPTIONS_AUDIO;
		};

		//Open the input options.
		class Configure: Video
		{
			idc = IDC_OPTIONS_CONFIGURE;
			y = Display_Options_Y + 0.2;
			text = $STR_DISP_OPTIONS_CONFIGURE;
		};

		//Open the difficulty options.
		class Difficulty: Video
		{
			idc = IDC_OPTIONS_DIFFICULTY;
			y = Display_Options_Y + 0.3;
			text = $STR_DISP_OPTIONS_DIFFICULTY;
		};

		//Watch the credits.
		class B_Credits: RscActiveText
		{
			idc = IDC_OPTIONS_CREDITS;
			x = 0.05; y = 0.9;
			w = 0.15;
			text = $STR_DISP_MAIN_CREDITS;
		};

		//Close the options screen.
		class B_Close: B_Credits
		{
			idc = IDC_CANCEL;
			x = 0.85;
			text = $STR_DISP_CLOSE;
			default = 1;
		};
	};
};

//Video options screen.
class RscDisplayOptionsVideo: RscStandardDisplay
{
	idd = IDD_OPTIONS_VIDEO;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_VIDEO;};

		__EXEC(_xInit = 0.019; _yInit = 0.135; _xSpacing = 0.195;)
		
		//Select the screen resolution.
		class TextLanguage: RscText
		{
			x = __EVAL(_xInit + (0 * _xSpacing));
			y = __EVAL(_yInit);
			w = 0.20;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_LANGUAGE;
		};
		class ValueLanguage: RscListBox
		{
			idc = IDC_OPTIONS_LANGUAGE;
			x = __EVAL(_xInit + (0 * _xSpacing));
			y = __EVAL(_yInit + 0.045);
			w = 0.185;
			h = 0.21;
			rowheight = 0.03;
			sizeEx = Size_Text_Small;
		};
		
		//Select the screen resolution.
		class TextResolution: TextLanguage
		{
			x = __EVAL(_xInit + (0 * _xSpacing));
			text = $STR_DISP_OPT_RESOLUTION;
		};
		class ValueResolution: ValueLanguage
		{
			idc = IDC_OPTIONS_RESOLUTION;
			x = __EVAL(_xInit + (0 * _xSpacing));
		};

		//Select the aspect ratio.
		class TextAspectRatio: TextLanguage
		{
			x = __EVAL(_xInit + (1 * _xSpacing));
			text = $STR_DISP_OPT_ASPECT_RATIO;
		};
		class ValueAspectRatio: ValueLanguage
		{
			idc = IDC_ASPECT_RATIO;
			x = __EVAL(_xInit + (1 * _xSpacing));
		};

		//Select the screen refresh rate.
		class TextRefresh: TextLanguage
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			text = $STR_DISP_OPT_REFRESH;
		};

		class ValueRefresh: ValueLanguage
		{
			idc = IDC_OPTIONS_REFRESH;
			x = __EVAL(_xInit + (2 * _xSpacing));
			w = 0.145;
		};

		__EXEC(_xInit = 0.019; _yInit = 0.415; _xSpacing = 0.195; _ySpacing = 0.20)

		//Select the objects detail.
		class TextObjectsDetail: RscText
		{
			x = __EVAL(_xInit + (0 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = 0.185;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_OBJECTS_DETAIL;
		};
		class ValueObjectsDetail: RscListBox
		{
			idc = IDC_OBJECTS_DETAIL;
			x = __EVAL(_xInit + (0 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			w = 0.185; h = 0.135;
			sizeEx = Size_Text_Small;
			rows = 5;
		};

		//Select the texture detail.
		class TextTextureDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing));
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_TEXTURE_DETAIL;
		};
		class ValueTextureDetail: ValueObjectsDetail
		{
			idc = IDC_TEXTURE_DETAIL;
			sizeEx = Size_Text_Small;
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
		};

		//Select the quality preference.
		class TextQualityPreference: TextObjectsDetail
		{
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing));
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_QUALITY_PREFERENCE;
		};
		class ValueQualityPreference: ValueObjectsDetail
		{
			idc = IDC_QUALITY_PREFERENCE;
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the shading detail.
		class TextShadingDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (0 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_SHADING_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueShadingDetail: ValueObjectsDetail
		{
			idc = IDC_SHADING_DETAIL;
			x = __EVAL(_xInit + (0 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the terrain detail.
		class TextTerrain: TextObjectsDetail
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_TERRAIN;
			sizeEx = Size_Text_Small;
		};
		class ValueTerrain: ValueObjectsDetail
		{
			idc = IDC_OPTIONS_TERRAIN;
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the shadow detail.
		class TextShadowDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_SHADOW_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueShadowDetail: ValueObjectsDetail
		{
			idc = IDC_SHADOW_DETAIL;
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the  HDR Quality .
		class TextHDRDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing));
			text = $STR_DISP_OPT_HDR_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueHDRDetail: ValueObjectsDetail
		{
			idc = IDC_HDR_DETAIL;
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};


		//Select the Anisotropic Filtering Quality.
		class TextAnisotropicDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_ANISO_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueAnisotropicDetail: ValueObjectsDetail
		{
			idc = IDC_ANISO_DETAIL;
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the Reflections Quality.
		class TextPostprocessEffects: TextObjectsDetail
		{
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing));
			text = $STR_DISP_OPT_POSTPROCESS_EFFECTS;
			sizeEx = Size_Text_Small;
		};
		class ValuePostprocessEffects: ValueObjectsDetail
		{
			idc = IDC_POSTPROCESS_EFFECTS;
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the Antialiasing Quality.
		class TextAntialiasing: TextObjectsDetail
		{
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_FSAA_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueAntialiasing: ValueObjectsDetail
		{
			idc = IDC_FSAA_DETAIL;
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		#define Display_Options_Video_YSpacing 0.03

		//Enable or disable object w-buffer.
		class TextWBuffer: RscTextSmall
		{
			x = __EVAL(_xInit + (0 * _xSpacing));
			y = __EVAL(_yInit + (2 * _ySpacing));
			w = 0.3;
			text = $STR_DISP_OPT_WBUFFER;
		};
		class ValueWBuffer: RscActiveText
		{
			idc = IDC_OPTIONS_WBUFFER;
			x = __EVAL(_xInit + (0 * _xSpacing)) + 0.16;
			y = __EVAL(_yInit + (2 * _ySpacing));
			w = 0.15; h = 0.03;
			sizeEx = Size_Text_Small;
		};


		//Enable or disable blood.
		class TextBlood: TextWBuffer
		{
			idc = IDC_OPTIONS_BLOOD_TEXT;
			x = __EVAL(_xInit + (1.5 * _xSpacing));
			text = $STR_DISP_OPT_BLOOD;
		};
		class ValueBlood: ValueLanguage
		{
			idc = IDC_OPTIONS_BLOOD;
			x = __EVAL(_xInit + (1.5 * _xSpacing)) + 0.16;
			y = __EVAL(_yInit + (2 * _ySpacing));
			w = 0.07; 			
		};

		class TextBrightness: RscText
		{
			x = 0.56; y = 0.135;
			w = 0.3;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_BRIGHT;
		};
		//The current brightness value.
		class ValueBrightness: RscText
		{
			idc = IDC_OPTIONS_BRIGHT_VALUE;
			x = 0.86; y = 0.135;
			w = 0.10;
			sizeEx = Size_Text_Small;
		};
		//Change the brightness.
		class SliderBrightness: RscSlider
		{
			idc = IDC_OPTIONS_BRIGHT_SLIDER;
			x = 0.56; y = 0.19;
			w = 0.415;
		};

		class TextGamma: RscText
		{
			x = 0.56; y = 0.225;
			w = 0.3;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_GAMMA;
		};
		//The current gamma level.
		class ValueGamma: RscText
		{
			idc = IDC_OPTIONS_GAMMA_VALUE;
			x = 0.86; y = 0.225;
			w = 0.1;
			sizeEx = Size_Text_Small;
		};
		//Change the gamma level.
		class SliderGamma: RscSlider
		{
			idc = IDC_OPTIONS_GAMMA_SLIDER;
			x = 0.56; y = 0.28;
			w = 0.415;
		};

		class TextVisibility: RscText
		{
			x = 0.56; y = 0.315;
			w = 0.3;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_VISIBILITY;
		};
		//The current viewing distance.
		class ValueVisibility: RscText
		{
			idc = IDC_OPTIONS_VISIBILITY_VALUE;
			x = 0.86; y = 0.315;
			w = 0.1;
			sizeEx = Size_Text_Small;
		};
		//Change the viewing distance.
		class SliderVisibility: RscSlider
		{
			idc = IDC_OPTIONS_VISIBILITY_SLIDER;
			x = 0.56; y = 0.37;
			w = 0.415;
		};

		//Cancel back to the main options screen.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.6; y = 0.9;
			w = 0.13;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the video options.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};

    //Restore all setting to their default.
    class B_Default: RscActiveText
    {
      idc = IDC_OPTIONS_VIDEO_DEFAULT;
      x = 0.05; y = 0.9;
      w = 0.15;
      text = $STR_DISP_DEFAULT;
    };
  };
};

//Audio options screen.
class RscDisplayOptionsAudio: RscStandardDisplay
{
	idd = IDD_OPTIONS_AUDIO;

	#define Display_Options_Audio_Y 0.6
  #define Display_Options_Audio_YSpacing 0.04

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_AUDIO;};

		class TextEffects: RscText
		{
			x = 0.35; y = 0.2;
			w = 0.3;
			text = $STR_DISP_OPT_EFFECTS;
		};

		//The current volume for sound effects.
		class ValueEffects: RscText
		{
			idc = IDC_OPTIONS_EFFECTS_VALUE;
			x = 0.5; y = 0.2;
		};

		//Change the volume for sound effects.
		class SliderEffects: RscSlider
		{
			idc = IDC_OPTIONS_EFFECTS_SLIDER;
			x = 0.2; y = 0.25;
			w = 0.6;
		};

		class TextVoices: RscText
		{
			x = 0.35; y = 0.3;
			w = 0.3;
			text = $STR_DISP_OPT_VOICES;
		};

		//The current volume for voices.
		class ValueVoices: RscText
		{
			idc = IDC_OPTIONS_VOICES_VALUE;
			x = 0.5; y = 0.3;
		};

		//Change the volume for voices.
		class SliderVoices: RscSlider
		{
			idc = IDC_OPTIONS_VOICES_SLIDER;
			x = 0.2; y = 0.35;
			w = 0.6;
		};

		class TextMusic: RscText
		{
			x = 0.35; y = 0.4;
			w = 0.3;
			text = $STR_DISP_OPT_MUSIC;
		};

		//The current volume for music.
		class ValueMusic: RscText
		{
			idc = IDC_OPTIONS_MUSIC_VALUE;
			x = 0.5; y = 0.4;
		};

		//Change the volume for music.
		class SliderMusic: RscSlider
		{
			idc = IDC_OPTIONS_MUSIC_SLIDER;
			x = 0.2; y = 0.45;
			w = 0.6;
		};

		class TextHWAcc: RscText
		{
			x = 0.22; y = Display_Options_Audio_Y;
			w = 0.40;
			text = $STR_DISP_OPT_HWACC;
		};

		//Enable or disable hardware accelerated audio.
		class ValueHWAcc: RscActiveText
		{
			idc = IDC_OPTIONS_HWACC;
			x = 0.62; y = Display_Options_Audio_Y;
			w = 0.15;
		};

		class TextEAX: TextHWAcc
		{
	    y = Display_Options_Audio_Y + (1 * Display_Options_Audio_YSpacing);
			text = $STR_DISP_OPT_EAX;
		};

		//Enable or disable EAX sound.
		class ValueEAX: ValueHWAcc
		{
			idc = IDC_OPTIONS_EAX;
	    y = Display_Options_Audio_Y + (1 * Display_Options_Audio_YSpacing);
		};

    class TextPlayerVoice: TextHWAcc
    {
      y = Display_Options_Audio_Y + (3 * Display_Options_Audio_YSpacing);
      text = $STR_DISP_OPT_PLAYER_VOICE;
    };

    //Enable or disable player voice-over in dialogs.
    class ValuePlayerVoice: ValueHWAcc
    {
      idc = IDC_OPTIONS_PLAYER_VOICE;
      y = Display_Options_Audio_Y + (3 * Display_Options_Audio_YSpacing);
    };

		//Cancel back to the main options screen.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.6; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the audio options and exit.
	  class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};

    //Restore all setting to their default.
    class B_Default: RscActiveText
    {
      idc = IDC_OPTIONS_AUDIO_DEFAULT;
      x = 0.05; y = 0.9;
      w = 0.15;
      text = $STR_DISP_DEFAULT;
    };
	};
};

//Difficulty options screen.
class RscDisplayDifficulty: RscStandardDisplay
{
	idd = IDD_DIFFICULTY;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_DIFFICULTY;};

		class TextName: RscText
		{
			x = 0.025; y = 0.2;
			w = 0.95 * 0.6;
			text = $STR_DISP_DIFF_NAME;
		};

		class TextCadet: RscText
		{
			x = 0.025 + 0.95 * 0.6; y = 0.2;
			w = 0.95 * 0.2;
			text = $STR_DISP_DIFF_CADET;
		};

		class TextVeteran: RscText
		{
			x = 0.025 + 0.95 * 0.8; y = 0.2;
			w = 0.95 * 0.2;
			text = $STR_DISP_DIFF_VETERAN;
		};

		//List of the various difficulty options.
		class ValueDifficulties: RscListBox
		{
			idc = IDC_DIFFICULTIES_DIFFICULTIES;
			x = 0.025; y = 0.25;
			w = 0.95; h = 0.12;
			rowHeight = 0.03;
			rows = 0.12 / 0.03;
		};

		class TextEnemyLevel: RscText
		{
			x = 0.025; y = 0.392;
			w = 0.95 * 0.6;
			text = $STR_DISP_DIFF_ENEMY_LEVEL;
		};

		class TextFriendlyLevel: RscText
		{
			x = 0.025; y = 0.517;
			w = 0.95 * 0.6;
			text = $STR_DISP_DIFF_FRIENDLY_LEVEL;
		};

		class TextEnemySkill: RscText
		{
			idc = IDC_DIFF_TEXT_ENEMY_SKILL;
			x = 0.025; y = 0.642;
			w = 0.95 * 0.6;
			text = $STR_DISP_DIFF_ENEMY_SKILL;
		};

		class TextFriendlySkill: RscText
		{
			idc = IDC_DIFF_TEXT_FRIENDLY_SKILL;
			x = 0.025; y = 0.715;
			w = 0.95 * 0.6;
			text = $STR_DISP_DIFF_FRIENDLY_SKILL;
		};

		//Level of the enemy forces on Cadet mode.
		class ValueCadetEnemyLevel: RscListBox
		{
			idc = IDC_DIFF_CADET_ENEMY_LEVEL;
			x = 0.025 + 0.95 * 0.6; y = 0.392;
			w = 0.95 * 0.18; h = 0.1;
			rows = 2;
		};

		//Level of the friendly forces on Cadet mode.
		class ValueCadetFriendlyLevel: RscListBox
		{
			idc = IDC_DIFF_CADET_FRIENDLY_LEVEL;
			x = 0.025 + 0.95 * 0.6; y = 0.517;
			w = 0.95 * 0.18; h = 0.1;
			rows = 2;
		};

		//Level of the enemy forces on Veteran mode.
		class ValueVeteranEnemyLevel: RscListBox
		{
			idc = IDC_DIFF_VETERAN_ENEMY_LEVEL;
			x = 0.025 + 0.95 * 0.8; y = 0.392;
			w = 0.95 * 0.18; h = 0.1;
			rows = 2;
		};

		//Level of the friendly forces on Veteran mode.
		class ValueVeteranFriendlyLevel: RscListBox
		{
			idc = IDC_DIFF_VETERAN_FRIENDLY_LEVEL;
			x = 0.025 + 0.95 * 0.8; y = 0.517;
			w = 0.95 * 0.18; h = 0.1;
			rows = 2;
		};

		//The current skill level for enemies in Cadet mode.
		class EchoCadetEnemySkill: RscText
		{
			idc = IDC_DIFF_CADET_ENEMY_SKILL_ECHO;
			x = 0.025 + 0.95 * 0.6; y = 0.67;
			w = 0.95 * 0.18;
			style = ST_CENTER;
		};

		//The current skill level for friendlies in Cadet mode.
		class EchoCadetFriendlySkill: RscText
		{
			idc = IDC_DIFF_CADET_FRIENDLY_SKILL_ECHO;
			x = 0.025 + 0.95 * 0.6; y = 0.743;
			w = 0.95 * 0.18;
			style = ST_CENTER;
		};

		//The current skill level for enemies in Veteran mode.
		class EchoVeteranEnemySkill: RscText
		{
			idc = IDC_DIFF_VETERAN_ENEMY_SKILL_ECHO;
			x = 0.025 + 0.95 * 0.8; y = 0.67;
			w = 0.95 * 0.18;
			style = ST_CENTER;
		};

		//The current skill level for friendlies in Veteran mode.
		class EchoVeteranFriendlySkill: RscText
		{
			idc = IDC_DIFF_VETERAN_FRIENDLY_SKILL_ECHO;
			x = 0.025 + 0.95 * 0.8; y = 0.743;
			w = 0.95 * 0.18;
			style = ST_CENTER;
		};

		//Change the skill level for enemies in Cadet mode.
		class ValueCadetEnemySkill: RscSlider
		{
			idc = IDC_DIFF_CADET_ENEMY_SKILL;
			x = 0.025 + 0.95 * 0.6; y = 0.642;
			w = 0.95 * 0.18;
		};

		//Change the skill level for friendlies in Cadet mode.
		class ValueCadetFriendlySkill: RscSlider
		{
			idc = IDC_DIFF_CADET_FRIENDLY_SKILL;
			x = 0.025 + 0.95 * 0.6; y = 0.715;
			w = 0.95 * 0.18;
		};

		//Change the skill level for enemies in Veteran mode.
		class ValueVeteranEnemySkill: RscSlider
		{
			idc = IDC_DIFF_VETERAN_ENEMY_SKILL;
			x = 0.025 + 0.95 * 0.8; y = 0.642;
			w = 0.95 * 0.18;
		};

		//Change the skill level for friendlies in Veteran mode.
		class ValueVeteranFriendlySkill: RscSlider
		{
			idc = IDC_DIFF_VETERAN_FRIENDLY_SKILL;
			x = 0.025 + 0.95 * 0.8; y = 0.715;
			w = 0.95 * 0.18;
		};

		//Enable of disable subtitles.
		class EnableSubtitles: RscActiveText
		{
			idc = IDC_OPTIONS_SUBTITLES;
			x = 0.1; y = 0.817;
			w = 0.4;
			style = ST_CENTER;
		};

		//Enable of disable radio subtitles.
		class EnableRadio: RscActiveText
		{
			idc = IDC_OPTIONS_RADIO;
			x = 0.5; y = 0.817;
			w = 0.4;
			style = ST_CENTER;
		};

		//Restore all setting to their default.
		class B_Default: RscActiveText
		{
			idc = IDC_DIFFICULTIES_DEFAULT;
			x = 0.05; y = 0.9;
			w = 0.15;
			text = $STR_DISP_DEFAULT;
		};

		//Confirm the difficulty options and exit.
		class B_OK: B_Default
		{
			idc = IDC_OK;
			x = 0.85;
			text = $STR_DISP_OK;
			default = 1;
		};

		//Cancel back to the main options screen.
		class B_Cancel: B_Default
		{
			idc = IDC_CANCEL;
			x = 0.6;
			text = $STR_DISP_CANCEL;
		};
	};
};

//Input options screen.
class RscDisplayConfigure: RscStandardDisplay
{
	idd = IDD_CONFIGURE;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_CONFIGURE;};

		class TextName: RscText
		{
			x = 0.025; y = 0.2;
			w = 0.95 * 0.95 * 0.4;
			text = $STR_DISP_CONF_NAME;
		};

		class TextKeys: RscText
		{
			x = 0.025 + 0.95 * 0.95 * 0.4; y = 0.2;
			w = 0.95 * 0.95 * 0.6;
			text = $STR_DISP_CONF_KEYS;
		};

    //Combo to specify the controls page
    class ControlsPage : RscCombo
    {
      idc = IDC_CONFIG_CONTROLS_PAGE;
      x = 0.3; y = 0.25;
      w = 0.29; h = 0.04;
      sizeEx = Size_Text_Small;
    };

    //List of the keyboard, mouse and joystick controls.
		class ValueKeys: RscListBox
		{
			idc = IDC_CONFIG_KEYS;
			x = 0.025; y = 0.25;
			w = 0.95; h = 0.4;
			rowHeight = 0.03;
			rows = 0.4 / 0.03;
		};

		class TextReserved: RscText
		{
			x = 0.025; y = 0.667;
			w = 0.95;
			text = $STR_DISP_CONF_RES;
		};

		class TextMouseSens: RscText
		{
			x = 0.01; y = 0.70;
			w = 0.6; h = 0.15;
			text = $STR_DISP_CONF_SENS;
		};

		//The current mouse sensitivity on the X axis.
		class TextXAxis: RscText
		{
			x = 0.05; y = 0.785;
			w = 0.15;
			text = $STR_DISP_CONF_XAXIS;
		};

		//Change the mouse sensitivity on the X axis.
		class ValueXAxis: RscSlider
		{
			idc = IDC_CONFIG_XAXIS;
			x = 0.2; y = 0.8;
			w = 0.35; h = 0.03;
		};

		//The current mouse sensitivity on the Y axis.
		class TextYAxis: RscText
		{
			x = 0.05; y = 0.83;
			w = 0.15;
			text = $STR_DISP_CONF_YAXIS;
		};

		//Change the mouse sensitivity on the Y axis.
		class ValueYAxis: RscSlider
		{
			idc = IDC_CONFIG_YAXIS;
			x = 0.2; y = 0.85;
			w = 0.35; h = 0.03;
		};
		
		//Setting of the floating zone
		class TextFloatingZone: RscText
		{
			x = 0.05; y = 0.88;
			w = 0.15;
			text = $STR_DISP_CONF_FLOATING_ZONE;
		};

		//Change the setting of the floating zone 
		//(area whitin you can move cursor without rotating view)
		class ValueFloatingZone: RscSlider
		{
			idc = IDC_CONFIG_FLOATING_ZONE;
			x = 0.2; y = 0.9;
			w = 0.35; h = 0.03;
		};

		//Enable or disable a reversed Y axis.
		class ValueYReversed: RscActiveText
		{
			idc = IDC_CONFIG_YREVERSED;
			x = 0.6; y = 0.75;
			w = 0.35;
			style = ST_CENTER;
		};

		class TextButtons: RscText
		{
			x = 0.6; y = 0.8;
			w = 0.3;
			text = $STR_DISP_CONF_MOUSE_BUTTON;
		};

		//ToDo: Verify this button works.
		//Enable or disable reversed mouse buttons.
		class ValueButtons: RscActiveText
		{
			idc = IDC_CONFIG_BUTTONS;
			x = 0.9; y = 0.8;
			w = 0.075;
			style = ST_CENTER;
		};

		//Enable or disable a joystick.
		class ValueJoystick: RscActiveText
		{
			idc = IDC_CONFIG_JOYSTICK;
			x = 0.6; y = 0.85;
			w = 0.35;
			style = ST_CENTER;
		};

		//Restore the settings to their default.
		class B_Default: RscActiveText
		{
			idc = IDC_CONFIG_DEFAULT;
			x = 0.05; y = 0.9;
			w = 0.15;
			text = $STR_DISP_DEFAULT;
		};

		//Confirm the input options and exit.
		class B_OK: B_Default
		{
			idc = IDC_OK;
	  	x = 0.85;
			text = $STR_DISP_OK;
			default = 1;
		};

		//Cancel back to the main options screen.
		class B_Cancel: B_Default
		{
			idc = IDC_CANCEL;
			x = 0.6;
			text = $STR_DISP_CANCEL;
		};
	};
};

// Configure single Input action
class RscDisplayConfigureAction
{
  idd = IDD_CONFIGURE_ACTION;

  access = ReadAndWrite;
  movingEnable = false;
  enableSimulation = false;
  enableDisplay = false;

  class ControlsBackground
  {
    class Background: RscText
    {
      x = 0.2; y = 0.2;
      w = 0.6; h = 0.7;
      colorBackground[] = Color_Background;
    };
  };

  class Controls
  {
    class Title: RscText
    {
      idc = IDC_CONFIGURE_ACTION_TITLE;
      style = ST_CENTER;
      x = 0.2;
      y = 0.2;
      w = 0.6;
      text = $STR_DISP_CONFACT_TITLE;
    };
    class TextHelp: RscText
    {
      x = 0.2; y = 0.65;
      w = 0.95;
      text = $STR_DISP_CONF_HELP;
    };
    class TextReserved: RscText
    {
      x = 0.2; y = 0.86;
      w = 0.95;
      text = $STR_DISP_CONF_RES;
    };

    class ValueCurrentKeys : RscListBox
    {
      idc = IDC_CONFIGURE_ACTION_KEYS;
      x = 0.2; y = 0.25;
      w = 0.25; h = 0.4;
      rowHeight = 0.03;
      rows = 0.4 / 0.03;
      canDrag = true;
    };
    class ValueSpecialKeys: RscListBox
    {
      idc = IDC_CONFIGURE_ACTION_SPECIAL;
      x = 0.55; y = 0.25;
      w = 0.25; h = 0.4;
      rowHeight = 0.03;
      rows = 0.4 / 0.03;
      canDrag = true;
      colorSelect[] = Color_Black;
      colorSelect2[] = Color_Black;
      colorSelectBackground[] = Color_Background;
      colorSelectBackground2[] = Color_Background;
    };
    class RscConfActionButton: RscButton
    {
      w = 0.1; h = 0.05;
      font = FontMAIN;
      sizeEx = Size_Text_Small;
    };
    class B_Delete: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_DELETE;
      x = 0.2; y = 0.7;
      text = $STR_DISP_DELETE;
    };
    class B_Default: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_DEFAULT;
      x = 0.325; y = 0.7;
      text = $STR_DISP_DEFAULT;
    };
    class B_Clear: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_CLEAR;
      x = 0.450; y = 0.7;
      text = $STR_DISP_CONFACT_UNDO;
    };
    class B_Cancel: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_CANCEL;
      x = 0.575; y = 0.7;
      text = $STR_DISP_CANCEL,;
    };
    class B_Prev: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_PREV;
      x = 0.2; y = 0.77;
      text = $STR_USRACT_MENU_DOWN;
    };
    class B_Next: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_NEXT;
      x = 0.325; y = 0.77;
      text = $STR_USRACT_MENU_UP;
    };
    //Confirm the input options and exit.
    class B_OK : RscConfActionButton
    {
      idc = IDC_OK;
      x = 0.700; y = 0.7;
      text = $STR_DISP_OK;
      default = 1;
    };
  };
};

//The main menu credits screen.
class RscDisplayCredits: RscStandardDisplay
{
	idd = IDD_CREDITS;

	class controls
	{
		class Text1: RscText
		{
			idc = 50001; //ToDo: Temp.
			x = 0; y = 0.4;
			w = 1;
			style = ST_CENTER;
			text = $STR_CREDIT_FP2ENGINE;
		};

		class Text2: Text1
		{
			idc = 50002; //ToDo: Temp.
			y = 0.45;
			sizeEx = Size_Text_Small;
			text = $STR_CREDIT_COPYRIGHT;
		};

		class Text3: Text1
		{
			idc = 50003; //ToDo: Temp.
			y = 0.48;
			sizeEx = Size_Text_Small;
			text = $STR_CREDIT_RIGHTS;
		};

		//Cancel back to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.4; y = 0.9;
			w = 0.2;
			text = $STR_DISP_CANCEL;
		};
	};
};
