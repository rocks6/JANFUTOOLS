#include "commonDefs.hpp"
#include "resincl.hpp"
#include "rscCommon.hpp"

//Todo:

//Main multiplayer screen / server browser.
class RscDisplayMultiplayer: RscStandardDisplay
{
	idd = IDD_MULTIPLAYER;

	sortUp = ProcTextWhite;
	sortDown = ProcTextOrange;
	
	showPassworded = ProcTextGreen;
	hidePassworded = ProcTextBlue;
	
	showFull = ProcTextGray;
	hideFull = ProcTextRed;

  colorPingUnknown[] = {1, 1, 1, 1};
  colorPingGood[] = {0, 1, 0, 1};
  colorPingPoor[] = {1, 1, 0, 1};
  colorPingBad[] = {1, 0, 0, 1};

  colorVersionGood[] = {1, 1, 1, 1};
  colorVersionBad[] = {1, 0, 0, 1};

	class controls
	{
		class Title: RscTitle 
		{
			idc = IDC_MULTI_TITLE;
			y = 0.01;
		};

		//Sort using the server name column.
		class IconServer: RscPicture
		{
			idc = IDC_MULTI_SERVER_ICON;
			x = 0.0; y = 0.061;
			w = 0.02; h = 0.02;
			text = ProcTextWhite;
		};

		class ColumnServer: RscActiveText
		{
			idc = IDC_MULTI_SERVER_COLUMN;
			text = $STR_MP_SERVER;
			style = ST_LEFT;
			sizeEx = Size_Main_Small;			
			x = 0.0; y = 0.07;
			w = 0.167;
		};

		//Active server name filter.
		class FilterServer: RscText
		{
			idc = IDC_MULTI_SERVER_FILTER;
			style = ST_CENTER;
			x = 0.18; y = 0.125;
			w = 0.2;
		};

		class ColumnType: ColumnServer
		{
			idc = IDC_MULTI_GAMETYPE_COLUMN;
			//Add new to stringtables
			text = $STR_DISP_ARCSENS_TYPE;
			x = 0.167;
		};
		
		class IconType: IconServer
		{
			idc = IDC_MULTI_GAMETYPE_ICON;
			x = 0.91;
		};
		
		class ColumnMission: ColumnServer
		{
			idc = IDC_MULTI_MISSION_COLUMN;
			text = $STR_SECTION_MISSION;
			x = 0.333;
			w = 0.167;
		};

		//Sort using the mission name column.
		class IconMission: IconServer
		{
			idc = IDC_MULTI_MISSION_ICON;
			x = 0.333;
		};

		//Active mission name filter.
		class FilterMission: FilterServer
		{
			idc = IDC_MULTI_MISSION_FILTER;
			x = 0.167;
			w = 0.3;
		};

		//Sort using the server state column.
		class IconState: IconServer
		{
			idc = IDC_MULTI_STATE_ICON;
			x = 0.5;
		};

		class ColumnState: ColumnServer
		{
			idc = IDC_MULTI_STATE_COLUMN;
			text = $STR_MENU_STATUS;
			x = 0.5;
			w = 0.167;
		};

		//Sort using the player column.
		class IconPlayers: IconServer
		{
			idc = IDC_MULTI_PLAYERS_ICON;
			x = 0.667;
		};

		class ColumnPlayers: ColumnServer
		{
			idc = IDC_MULTI_PLAYERS_COLUMN;
			text = $STR_MPTABLE_PLAYERS;
			x = 0.667;
			w = 0.12;
		};

		//Active player filter.
		class FilterPlayers: FilterServer
		{
			idc = IDC_MULTI_PLAYERS_FILTER;
			x = 0.665;
			w = 0.12;
		};

		//Sort using the ping column.
		class IconPing: IconServer
		{
			idc = IDC_MULTI_PING_ICON;
			x = 0.81;
		};

		class ColumnPing: ColumnServer
		{
			idc = IDC_MULTI_PING_COLUMN;
			text = $STR_DISP_MULTI_PING;
			x = 0.83;
			w = 0.08;
		};

		//Active ping filter.
		class FilterPing: FilterServer
		{
			idc = IDC_MULTI_PING_FILTER;
			x = 0.83;
			w = 0.08;
		};
		
		class FilterType: FilterServer
		{
			idc = IDC_MULTI_TYPE_FILTER;
			x = 0.93;
			w = 0.08;
		};
 

		//List of found servers and properties.
		class ValueSessions: RscListBox
		{
			idc = IDC_MULTI_SESSIONS;
			x = 0.0; y = 0.128;
			w = 1; h = 0.373;
			sizeEx = Size_Main_Small;
			rows = 9;
			password = ProcTextWhite;
			version = ProcTextWhite;
			none = ProcTextWhite;
			star = ProcTextWhite;
			colorPingUnknown[] = {1, 1, 1, 1};
			colorPingGood[] = {0, 1, 0, 1};
			colorPingPoor[] = {1, 1, 0, 1};
			colorPingBad[] = {1, 0, 0, 1};
			columns[] =
			{
				0.167, // session name
				0.167, // game type
				0.167, // mission name
				0.167, // status
				0.167, // players
				0.167  // ping
			};
		};

		//Switch between Internet and LAN servers.
		class B_Internet: RscActiveText
		{
			idc = IDC_MULTI_INTERNET;
			x = 0.0; y = 0.5;
			w = 0.3;
			style = ST_LEFT;
			sizeEx = Size_Main_Small;
		};

		//Connect to a remote server using an IP address.
		class B_Remote: RscActiveText
		{
			idc = IDC_MULTI_REMOTE;
			x = 0.167; y = 0.5;
			w = 0.3;
			style = ST_LEFT;
			sizeEx = Size_Main_Small;
			text = $STR_MULTI_REMOTE;
		};

		//Set a server password.
		class B_Password: RscActiveText
		{
			idc = IDC_MULTI_PASSWORD;
			x = 0.333; y = 0.5;
			w = 0.40;
			style = ST_LEFT;
			sizeEx = Size_Main_Small;
		};

		//Refresh the server list.
		class B_Refresh: RscActiveText
		{
			idc = IDC_MULTI_REFRESH;
			text = $STR_DISP_MULTI_REFRESH;
			x = 0.5; y = 0.5;
			w = 0.3;
			style = ST_LEFT;
			sizeEx = Size_Main_Small;
		};

		//Apply filters to the server list.
		class B_Filter: RscActiveText
		{
			idc = IDC_MULTI_FILTER;
			text = $STR_DISP_MULTI_FILTER;
			x = 0.667; y = 0.5;
			w = 0.3;
			style = ST_LEFT;
			sizeEx = Size_Main_Small;
		};

		//Change the used connection port.
		class B_Port: RscActiveText
		{
			idc = IDC_MULTI_PORT;
			text = $STR_DISP_PORT_TITLE;
			x = 0.833; y = 0.5;
			w = 0.3;
			style = ST_LEFT;
			sizeEx = Size_Main_Small;
		};

		//Server search progress bar.
		class Progress: RscProgress
		{
			idc = IDC_MULTI_PROGRESS;
			x = 0.0; y = 0.11;
			w = 1; h = 0.02;
		};

		class ServerDetailHost: RscText
		{
			idc = IDC_MP_HOST;
			x = 0.0;  y = 0.553;
			w = 0.24;
			sizeEx = Size_Main_Small;
		};

		class ServerDetailType: ServerDetailHost
		{
			idc = IDC_MP_TYPE;
			x = 0.25; 
		};	
		class ServerDetailMission: ServerDetailHost
		{
			idc = IDC_MP_MISSION;
			x = 0.5; 
		};		
		class ServerDetailState: ServerDetailHost
		{
			idc = IDC_MP_STATE;
			x = 0.75;
		};		
		class ServerDetailSlots: ServerDetailHost
		{
			idc = IDC_MP_SLOTS_PUBLIC;
			x = 0.0;  y = 0.603;
		};		
		class ServerDetailPing: ServerDetailHost
		{
			idc = IDC_MP_PING;
			x = 0.25;  y = 0.603;
		};		
		class ServerDetailLanguage: ServerDetailHost
		{
			idc = IDC_MP_LANGUAGE;
			x = 0.5; y = 0.603;
		};		
		class ServerDetailCountry: ServerDetailHost
		{
			idc = IDC_MP_COUNTRY;
			x = 0.75; y = 0.603;

		};
		class ServerDetailVersion: ServerDetailHost
		{
			idc = IDC_MP_VERSION;
			x = 0.0; y = 0.653;

		};		
		class ServerDetailVersionRequired: ServerDetailHost
		{
			idc = IDC_MP_VERSION_REQUIRED;
			x = 0.25; y = 0.653;

		};		
		class ServerDetailMods: ServerDetailHost
		{
			idc = IDC_MP_MODS;
			x = 0.5; y = 0.653;
		};		
		class ServerDetailIsland: ServerDetailHost
		{
			idc = IDC_MP_ISLAND;
			x = 0.75; y = 0.653;
		};		
		class ServerDetailDifficulty: ServerDetailHost
		{
			idc = IDC_MP_DIFFICULTY;
			x = 0.0; y = 0.703;
		};		
		class ServerDetailTimeLeft: ServerDetailHost
		{
			idc = IDC_MP_TIMELEFT;
			x = 0.25; y = 0.703;
		};		

		class ServerDetailPlatform: ServerDetailHost
		{
			idc = IDC_MP_PLATFORM;
			x = 0.5; y = 0.703;
		};			
		class ServerDetailPlayers: ServerDetailHost
		{
			idc = IDC_MP_PLAYERS_ROW;
			x = 0.75; y = 0.703;
		};	
		class ServerDetailPassword: RscPicture
		{
			idc = IDC_MP_PASSWORD;
			x = 0.1; y = 0.8;
			w = 0.05; h = 0.05;
		};		
		class FilterFullServers: RscPicture
		{
			idc = IDC_MULTI_FULL_FILTER;
			x = 0.1; y = 0.8;
			w = 0.05; h = 0.05;
			text = ProcTextWhite;
		};			
		class FilterPasswordedServers: RscPicture
		{
			idc = IDC_MULTI_PASSWORDED_FILTER;
			x = 0.1; y = 0.8;
			w = 0.05; h = 0.05;
			text = ProcTextWhite;
		};				
		//Cancel to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			text = $STR_DISP_CANCEL;
			x = 0.55; y = 0.95;
			w = 0.15;
		};

		//Join the selected server.
		class B_Join: B_Cancel
		{
			idc = IDC_MULTI_JOIN;
			text = $STR_DISP_MULTI_JOIN;
			x = 0.7;
		};

		//Create a new server.
		class B_New: B_Cancel
		{
			idc = IDC_MULTI_NEW;
			text = $STR_DISP_MULTI_NEW;
			x = 0.85;
			default = 1;
		};
	};
};

class RscDisplayHostSettings : RscStandardDisplay
{
  idd = IDD_HOST_SETTINGS;

  class Controls
  {
    class Title: RscTitle
    {
      text = $STR_DISP_SERVER_TITLE;
    };

    // Session name
    class TextName : RscText
    {
      x = 0.025; y = 0.12;
      w = 0.3;
      text = $STR_DISP_GAME_NAME;
    };
    class ValueName : RscEdit
    {
      idc = IDC_HOST_NAME;
      x = 0.35; y = 0.12;
      w = 0.4;
    };

    // Password
    class TextPassword : RscText
    {
      x = 0.025; y = 0.22;
      w = 0.3;
      text = $STR_DISP_PASSWORD;
    };
    class ValuePassword : RscEdit
    {
      idc = IDC_HOST_PASSWORD;
      x = 0.35; y = 0.22;
      w = 0.4;
    };

    // Max. players
    class TextMaxPlayers : RscText
    {
      x = 0.025; y = 0.32;
      w = 0.3;
      text = $STR_DISP_FILTER_MAXPLAYERS;
    };
    class ValueMaxPlayers : RscEdit
    {
      idc = IDC_HOST_MAX_PLAYERS;
      x = 0.35; y = 0.32;
      w = 0.4;
    };

    // Private / public session (reporting to GameSpy)
    class TextPrivate : RscText
    {
      x = 0.025; y = 0.42;
      w = 0.3;
      text = $STR_DISP_FILTER_SERVER;
    };
    class ValuePrivate : RscActiveText
    {
      idc = IDC_HOST_PRIVATE;
      x = 0.35; y = 0.42;
      w = 0.4;
    };

    // Port
    class TextPort : RscText
    {
      x = 0.025; y = 0.52;
      w = 0.3;
      text = $STR_DISP_IP_PORT;
    };
    class ValuePort : RscEdit
    {
      idc = IDC_HOST_PORT;
      x = 0.35; y = 0.52;
      w = 0.4;
    };

    // Buttons
    class B_Cancel : RscActiveText
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      x = 0.55; y = 0.90;
      w = 0.25;
    };
    class B_OK : B_Cancel
    {
      idc = IDC_OK;
      text = $STR_DISP_OK;
      x = 0.75;
      default = 1;
    };
  };
};

//Mission and map selection on a server.
class RscDisplayRemoteMissions: RscStandardDisplay
{
	idd = IDD_SERVER;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_SERVER_TITLE;};

		//Select from available maps.
		class TextMaps: RscText
		{
			x = 0.025; y = 0.12;
			w = 0.3;
			text = $STR_DISP_SERVER_ISLAND;
		};
		class ValueMaps: RscListBox
		{
			idc = IDC_SERVER_ISLAND;
			x = 0.025; y = 0.17;
			w = 0.45; h = 0.6;
			rows = 5;
		};

		//Select fro available missions.
		class TextMissions: TextMaps
		{
			x = 0.525;
			text = $STR_DISP_SERVER_MISSION;
		};
		class ValueMissions: ValueMaps
		{
			idc = IDC_SERVER_MISSION;
			x = 0.525;
			rows = 10;
		};

		//Change the difficulty level.
		class B_Difficulty: RscActiveText
		{
			idc = IDC_SERVER_DIFF;
			x = 0.05; y = 0.90;
			w = 0.25;
		};

		//Open the editor to edit the selected mission.
		class B_Editor: B_Difficulty
		{
			idc = IDC_SERVER_EDITOR;
			x = 0.35;
			text = $STR_DISP_EDIT;
		};

		class B_Cancel: B_Difficulty
		{
			idc = IDC_CANCEL;
			text = $STR_DISP_CANCEL;
			x = 0.55;
		};

		class B_OK: B_Difficulty
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.75;
			default = 1;
		};
	};
};

//ToDo: finalize this display.
//Special display for people who already voted.
class RscDisplayRemoteMissionVoted: RscStandardDisplay
{
	idd = IDD_SERVER_VOTED;

	class controls
	{
		class TextWait: RscText
		{
			text = "Please wait...";
			x = 0.025; y = 0.4;
			w = 0.95;
		};

		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			text = $STR_DISP_CANCEL;
			x = 0.05; y = 0.90;
			w = 0.25;
		};
	};
};

//Create a new server screen.
class RscDisplayServer: RscStandardDisplay
{
	idd = IDD_SERVER;

  //temporary crazy colours, to see, if implementation works;
  colorEditor[] = {1, 0.2, 0.2, 1};
  colorWizard[] = {0.2, 1, 0.2, 1};
  colorMission[] = {0.2, 0.6, 1, 1};
  colorMissionEditor[]  = {1, 0.2, 1, 1};
  colorMissionWizard[] = {0.2, 1, 1, 1};			

  class controls
	{
		class Title: RscTitle {text = $STR_DISP_SERVER_TITLE;};

		class TextIslands: RscText
		{
			x = 0.025; y = 0.2;
			w = 0.3;
			text = $STR_DISP_SERVER_ISLAND;
		};

		//List of the available maps.
		class ValueIslands: RscListBox
		{
			idc = IDC_SERVER_ISLAND;
			x = 0.025; y = 0.25;
			w = 0.45; h = 0.6;
		};

		class TextMissions: RscText
		{
			x = 0.525; y = 0.2;
			w = 0.3;
			text = $STR_DISP_SERVER_MISSION;
		};

		//List of the available missions.
		class ValueMissions: RscListBox
		{
			idc = IDC_SERVER_MISSION;
			x = 0.525; y = 0.25;
			w = 0.45; h = 0.6;
		};

		//Change the difficulty.
		class B_Difficulty: RscActiveText
		{
			idc = IDC_SERVER_DIFF;
			x = 0.05; y = 0.90;
			w = 0.2;
			text = $STR_DISP_ERROR;
		};

		//Edit the mission in the editor.
		class B_Editor: B_Difficulty
		{
			idc = IDC_SERVER_EDITOR;
			x = 0.45;
			text = $STR_DISP_EDIT;
		};

		//Cancel to the main menu.
		class B_Cancel: B_Difficulty
		{
			idc = IDC_CANCEL;
			x = 0.65;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the selected action.
		class B_OK: B_Difficulty
		{
			idc = IDC_OK;
			x = 0.85;
			text = $STR_DISP_OK;
			default = 1;
		};
	};
};

//Client logging on screen.
class RscDisplayClient: RscStandardDisplay
{
	idd = IDD_CLIENT;

	class controls
	{
		class Background: RscText
		{
			idc = IDC_CLIENT_TEXT;
			style = ST_CENTER;
			x = 0; y = 0.08;
			w = 1;
			text = $STR_DISP_CLIENT_TEXT;
		};

		class PlayersTitle: RscText
		{
			x = 0.7; y = 0.7;
			w = 0.25;
			text = $STR_DISP_SRVSETUP_PLAYERS;
			style = ST_LEFT + ST_WITH_RECT;
		};

		//List of players in the server.
		class Players: RscListBox
		{
			idc = IDC_CLIENT_PLAYERS;
			x = 0.7; y = 0.75;
			w = 0.25; h = 0.125;
		};
	};
};

//Multiplayer session setup screen.
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	idd = IDD_MP_SETUP;
	
	none = ProcTextWhite;
	westUnlocked = ProcTextWhite;
	westLocked = ProcTextWhite;
	eastUnlocked = ProcTextWhite;
	eastLocked = ProcTextWhite;
	guerUnlocked = ProcTextWhite;
	guerLocked = ProcTextWhite;
	civlUnlocked = ProcTextWhite;
	civlLocked = ProcTextWhite;
	disabledAllAI = ProcTextWhite;
	enabledAllAI = ProcTextWhite;
	hostLocked = ProcTextWhite;
	hostUnlocked = ProcTextWhite;
	
	colorNotAssigned[] = {0.7, 0, 0, 1};
	colorAssigned[] = {0.8, 0.8, 0, 1};
	colorConfirmed[] = {0, 0.7, 0, 1}; 


			
	class controls
	{
		class Title: RscTitle {text = $STR_DISP_MPSETUP_TITLE;};

		class TextMission: RscText
		{
			x = 0.05; y = 0.17;
			w = 0.15;
			text = $STR_DISP_SRVSETUP_NAME;
		};

		//Mission name.
		class ValueMission: RscText
		{
			idc = IDC_MPSETUP_NAME;
			x = 0.205; y = 0.17;
			w = 0.390;
		};

		class TextIsland: RscText
		{
			x = 0.6; y = 0.17;
			w = 0.12;
			text = $STR_DISP_SRVSETUP_ISLAND;
		};

		//Island name.
		class ValueIsland: RscText
		{
			idc = IDC_MPSETUP_ISLAND;
			x = 0.725; y = 0.17;
			w = 0.24;
		};

		class TextDescription: RscText
		{
			x = 0.05; y = 0.21;
			w = 0.18;
			text = $STR_DISP_SRVSETUP_DESC;
		};

		//Mission description.
		class ValueDescription: RscText
		{
			idc = IDC_MPSETUP_DESC;
			x = 0.225; y = 0.21;
			w = 0.75;
		};

		class TextSide: RscText
		{
			x = 0.025; y = 0.265;
			w = 0.125;
			text = $STR_DISP_MPSETUP_SIDE;
		};

		class B_Side: RscActiveText
		{
			x = 0.02;
			w = 0.085; h = 0.08;
			colorShade[] = Color_White;
			colorDisabled[] = Color_Gray;
			pictureWidth = 0.6;
			pictureHeight = 0.6;
			textHeight = 0.4;
			sideDisabled = ProcTextWhite;
		};

		//Select BLUFOR side.
		class B_West: B_Side
		{
			idc = IDC_MPSETUP_WEST;
			y = 0.34;
			text = $STR_WEST;
			picture = ProcTextWhite;
		};

		//Select OPFOR side.
		class B_East: B_Side
		{
			idc = IDC_MPSETUP_EAST;
			y = 0.44;
			text = $STR_EAST;
			picture = ProcTextWhite;
		};

		//Select Resistance side.
		class B_Guerrila: B_Side
		{
			idc = IDC_MPSETUP_GUERRILA;
			y = 0.54;
			text = $STR_GUERRILA;
			picture = ProcTextWhite;
		};

		//Select Noncombatant side.
		class B_Civilian: B_Side
		{
			idc = IDC_MPSETUP_CIVILIAN;
			y = 0.64;
			text = $STR_CIVILIAN;
			picture = ProcTextWhite;
		};

		//Enable and disable all AI units in the server.
		class B_EnableAll: RscActiveText
		{
			idc = IDC_MPSETUP_ENABLE_ALL;
			x = 0.025; y = 0.772;
			w = 0.05; h = 0.067;
			style = ST_PICTURE;
		};

		//Lock and unlock the server for other clients.
		class B_Lock: RscActiveText
		{
			idc = IDC_MPSETUP_LOCK;
			x = 0.075; y = 0.772;
			w = 0.05; h = 0.067;
			style = ST_PICTURE;
		};

		class TextRoles: RscText
		{
			idc = IDC_MPSETUP_ROLES_TITLE;
			x = 0.15; y = 0.265;
			w = 0.5;
			text = $STR_DISP_ERROR;
		};

		//Available roles for this side.
		class ValueRoles: RscListBox
		{
			idc = IDC_MPSETUP_ROLES;
			x = 0.15; y = 0.32;
			w = 0.5; h = 0.4;
			rows = 6;

			colorPlayer[] = {0, 0.7, 0, 1};
			colorAI[] = {0.8, 0.8, 0, 1};
			colorNobody[] = {0.4, 0.4, 0.4, 1}; 
			
      		enabledAI = ProcTextWhite;
		    disabledAI = ProcTextWhite;
		};

		//Custom mission parameter 1.
		class TextParam1: RscText
		{
			idc = IDC_MPSETUP_PARAM1_TITLE;
			x = 0.15; y = 0.722;
			w = 0.24;
		};

		//Values for custom mission parameter 1.
		class ValueParam1: RscListBox
		{
			idc = IDC_MPSETUP_PARAM1;
			x = 0.15; y = 0.772;
			w = 0.24; h = 0.12;
			rows = 3;
		};

		//Custom mission parameter 2.
		class TextParam2: RscText
		{
			idc = IDC_MPSETUP_PARAM2_TITLE;
			x = 0.41; y = 0.722;
			w = 0.24;
		};

		//Values for custom mission parameter 1.
		class ValueParam2: RscListBox
		{
			idc = IDC_MPSETUP_PARAM2;
			x = 0.41; y = 0.772;
			w = 0.24; h = 0.12;
			rows = 3;
		};

		class TextPool: RscText
		{
			x = 0.675; y = 0.265;
			w = 0.3;
			text = $STR_DISP_SRVSIDE_POOL;
		};

		//Server clients pool.
		class ValuePool: RscListBox
		{
			idc = IDC_MPSETUP_POOL;
			x = 0.675; y = 0.32;
			w = 0.3; h = 0.4;

			rows = 15;
      		canDrag = true;
		};

		class TextMessage: RscText
		{
			idc = IDC_MPSETUP_MESSAGE;
			style = ST_CENTER;
			x = 0.025; y = 0.1;
			w = 0.95;
		};

		//Kick client from the server.
		class B_Kick: RscActiveText
		{
			idc = IDC_MPSETUP_KICK;
			text = $STR_DISP_MP_KICKOFF;
			x = 0.05; y = 0.9;
			w = 0.15;
		};

		//Cancel to the main multiplayer screen.
		class B_Cancel: B_Kick
		{
			idc = IDC_CANCEL;
			text = $STR_DISP_CANCEL;
			x = 0.65;
		};

		//Confirm the selected action.
		class B_OK: B_Kick
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};
	};
};

//Enter a server password screen.
class RscDisplayPassword: RscStandardDisplay
{
	idd = IDD_PASSWORD;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_PASSWORD_TITLE;};

		class TextPassword: RscText
		{
			x = 0.25; y = 0.45;
			w = 0.2;
			text = $STR_DISP_PASSWORD;
		};

		//Enter password field.
		class ValuePassword: RscEdit
		{
			idc = IDC_PASSWORD;
			x = 0.43; y = 0.45;
			w = 0.4;
		};

		//Cancel back to the main multiplayer screen.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			text = $STR_DISP_CANCEL;
			x = 0.55; y = 0.9;
			w = 0.25;
		};

		//Confirm the entered password.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.75;
			default = 1;
		};
	};
};

//Change port screen.
class RscDisplayPort: RscStandardDisplay
{
	idd = IDD_PORT;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_PORT_TITLE;};

		class TextPort: RscText
		{
			x = 0.25; y = 0.45;
			w = 0.2;
			text = $STR_DISP_IP_PORT;
		};

		//Enter a port number field.
		class ValuePort: RscEdit
		{
			idc = IDC_PORT_PORT;
			x = 0.43; y = 0.45;
			w = 0.4;
		};

		//Cancel to the main multiplayer screen.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.55; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the entered port number.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.75;
			text = $STR_DISP_OK;
			default = 1;
		};
	};
};

//Connect to a remote server screen.
class RscDisplayIPAddress: RscStandardDisplay
{
	idd = IDD_IP_ADDRESS;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_IP_TITLE;};

	  class TextAddress: RscText
		{
			x = 0.25; y = 0.45;
			w = 0.2;
			text = $STR_DISP_IP_ADDRESS;
		};

		//Enter IP address field.
		class ValueAddress: RscEdit
		{
			idc = IDC_IP_ADDRESS;
			x = 0.43; y = 0.45;
			w = 0.4;
		};

		class TextPort: RscText
		{
			x = 0.25; y = 0.5;
			w = 0.2;
			text = $STR_DISP_IP_PORT;
		};

		//Enter port number field.
		class ValuePort: RscEdit
		{
			idc = IDC_IP_PORT;
			x = 0.43; y = 0.5;
			w = 0.4;
		};

		//Cancel back to the main multiplayer screen.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.55; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the entered IP address.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			x = 0.75;
			text = $STR_DISP_OK;
			default = 1;
		};
	};
};

//Set server filters screen.
class RscDisplayFilter: RscStandardDisplay
{
	idd = IDD_FILTER;

	#define Display_Filter_Y 0.2

	class controls
	{
  	class Title: RscTitle {text = $STR_DISP_FILTER_TITLE;};

		class TextServer: RscText
		{
			x = 0.1; y = Display_Filter_Y;
			w = 0.275;
			text = $STR_DISP_FILTER_SERVER;
		};

		//Todo: re-enable.
		/*class TextMission: TextServer
		{
			y = Display_Filter_Y + 0.05;
			text = $STR_DISP_FILTER_MISSION;
		};*/

		class TextMaxPing: TextServer
		{
			y = Display_Filter_Y + 0.05;
			text = $STR_DISP_FILTER_MAXPING;
		};

		class TextMinPlayers: TextServer
		{
			y = Display_Filter_Y + 0.1;
			text = $STR_DISP_FILTER_MINPLAYERS;
		};

		class TextMaxPlayers: TextServer
		{
			y = Display_Filter_Y + 0.15;
			text = $STR_DISP_FILTER_MAXPLAYERS;
		};

		//Server name filter field.
		class ValueServer: RscEdit
		{
			idc = IDC_FILTER_SERVER;
			x = 0.4; y = Display_Filter_Y;
			w = 0.4;
		};

		//Todo: re-enable.
		//Mission name filter field.
		/*class ValueMission: ValueServer
		{
			idc = IDC_FILTER_MISSION;
			y = Display_Filter_Y + 0.05;
		};*/

		//Maximum ping filter field.
		class ValueMaxPing: ValueServer
		{
			idc = IDC_FILTER_MAXPING;
			y = Display_Filter_Y + 0.05;
		};

		//Minimum amount of players filter field.
		class ValueMinPlayers: ValueServer
		{
			idc = IDC_FILTER_MINPLAYERS;
			y = Display_Filter_Y + 0.1;
		};

		//Maximum amount of players filter field.
		class ValueMaxPlayers: ValueServer
		{
			idc = IDC_FILTER_MAXPLAYERS;
			y = Display_Filter_Y + 0.15;
		};

		//Show or hide full servers.
		class FullServers: RscActiveText
		{
			idc = IDC_FILTER_FULL;
			x = 0.15; y = 0.5;
			w = 0.7;
		};

		//Show or hide passworded servers.
		class PasswordedServers: FullServers
		{
			idc = IDC_FILTER_PASSWORDED;
			y = 0.57;
		};
		
		class FilterType: RscListbox
		{
			idc = IDC_FILTER_TYPE;
			x = 0.15; y = 0.5;
			w = 0.7; h = 0.2;

		}; 
  	//Restore all filters to the default setting.
  	class B_Default: RscActiveText
  	{
  		idc = IDC_FILTER_DEFAULT;
	 		x = 0.1; y = 0.9;
	 		w = 0.15;
  		text = $STR_DISP_DEFAULT;
  	};

  	//Cancel back to the main menu.
  	class B_Cancel: B_Default
  	{
  		idc = IDC_CANCEL;
  		text = $STR_DISP_CANCEL;
  		x = 0.55;
  	};

  	//Confirm the filter settings.
  	class B_OK: B_Default
  	{
  		idc = IDC_OK;
  		x = 0.75;
  		text = $STR_DISP_OK;
  		default = 1;
  	};
  };
};

//Player information and statistics screen.
class RscDisplayMPPlayers: RscStandardDisplay
{
	idd = IDD_MP_PLAYERS;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_MP_PLAYERS_TITLE;};

		class TextMission: RscTextSmall
		{
			x = 0.025; y = 0.12;
			w = 0.12;
			text = $STR_DISP_SRVSETUP_NAME;
		};

		//Mission being played.
		class ValueMission: RscTextSmall
		{
			idc = IDC_MP_PL_MISSION;
			x = 0.145; y = 0.12;
			w = 0.23;
		};

		class TextIsland: RscTextSmall
		{
			x = 0.40; y = 0.12;
			w = 0.1;
			text = $STR_DISP_SRVSETUP_ISLAND;
		};

		//Map being played on.
		class ValueIsland: RscTextSmall
		{
			idc = IDC_MP_PL_ISLAND;
			x = 0.50; y = 0.12;
			w = 0.2;
		};

		class TextTime: RscTextSmall
		{
			x = 0.625; y = 0.12;
			w = 0.1;
			text = $STR_DISP_MP_PL_TIME;
		};

		//Current playing time.
		class ValueTime: RscTextSmall
		{
			idc = IDC_MP_PL_TIME;
			x = 0.725; y = 0.12;
			w = 0.10;
		};

		//Estimated remaining playing time.
		class ValueRest: RscTextSmall
		{
			idc = IDC_MP_PL_REST;
			x = 0.825; y = 0.12;
			w = 0.15;
		};

		class TextPlayers: RscTextSmall
		{
			x = 0.025; y = 0.15;
			w = 0.25;
			text = $STR_DISP_MP_PLAYERS;
		};

		//Available players on the server.
		class ValuePlayers: RscListBox
		{
			idc = IDC_MP_PLAYERS;
			x = 0.025; y = 0.2;
			w = 0.25; h = 0.65;
			rows = 18.5;
		};

		class TextPlayer: RscTextSmall
		{
			x = 0.3; y = 0.15;
			w = 0.15;
			text = $STR_DISP_MP_PL;
		};

		//Selected player.
		class ValuePlayer: RscTextSmall
		{
			idc = IDC_MP_PL;
			x = 0.45; y = 0.15;
			w = 0.525;
		};

		class TextPlayerName: RscTextSmall
		{
			x = 0.325; y = 0.18;
			w = 0.125;
			text = $STR_DISP_MP_PL_NAME;
		};

		//Player's real name.
		class ValuePlayerName: RscTextSmall
		{
			idc = IDC_MP_PL_NAME;
			x = 0.45; y = 0.18;
			w = 0.525;
		};

		class TextPlayerMail: RscTextSmall
		{
			x = 0.325; y = 0.21;
			w = 0.125;
			text = $STR_DISP_MP_PL_MAIL;
		};

		//Player's e-mail address.
		class ValuePlayerMail: RscTextSmall
		{
			idc = IDC_MP_PL_MAIL;
			x = 0.45; y = 0.21;
			w = 0.525;
		};

		class TextPlayerICQ: RscTextSmall
		{
			x = 0.325; y = 0.24;
			w = 0.125;
			text = $STR_DISP_MP_PL_ICQ;
		};

		//Player's ICQ number.
		class ValuePlayerICQ: RscTextSmall
		{
			idc = IDC_MP_PL_ICQ;
			x = 0.45; y = 0.24;
			w = 0.525;
		};

		class TextPlayerRemark: RscTextSmall
		{
			x = 0.325; y = 0.27;
			w = 0.125;
			text = $STR_DISP_MP_PL_REMARK;
		};

		//Player's custom remark.
		class ValuePlayerRemark: RscTextSmall
		{
			idc = IDC_MP_PL_REMARK;
			x = 0.45; y = 0.27;
			w = 0.525; h = 0.2;
			style = ST_MULTI;
			lines = 5;
		};

		class PingTitle: RscTextSmall
		{
			x = 0.325; y = 0.42;
			w = 0.150;
			text = $STR_DISP_MP_PING;
		};

		//Player's minimum ping.
		class PingMinValue: RscTextSmall
		{
			idc = IDC_MP_PL_MINPING;
			x = 0.48; y = 0.42;
			w = 0.05;
		};

		//Player's average ping.
		class PingAvgValue: RscTextSmall
		{
			idc = IDC_MP_PL_AVGPING;
			x = 0.58; y = 0.42;
			w = 0.05;
		};

		//Player's maximum ping.
		class PingMaxValue: RscTextSmall
		{
			idc = IDC_MP_PL_MAXPING;
			x = 0.68; y = 0.42;
			w = 0.05;
		};

		class BandwidthTitle: RscTextSmall
		{
			x = 0.325; y = 0.45;
			w = 0.15;
			text = $STR_DISP_MP_BANDWIDTH;
		};

		//Player's minimum bandwidth.
		class BandwidthMinValue: RscTextSmall
		{
			idc = IDC_MP_PL_MINBAND;
			x = 0.48; y = 0.45;
			w = 0.05;
		};

		//Player's average bandwidth.
		class BandwidthAvgValue: RscTextSmall
		{
			idc = IDC_MP_PL_AVGBAND;
			x = 0.58; y = 0.45;
			w = 0.05;
		};

		//Player's maximum bandwidth.
		class BandwidthMaxValue: RscTextSmall
		{
			idc = IDC_MP_PL_MAXBAND;
			x = 0.68; y = 0.45;
			w = 0.05;
		};

		class DesyncTitle: RscTextSmall
		{
			x = 0.325; y = 0.48;
			w = 0.15;
			text = $STR_DISP_MP_DESYNC;
		};

		//Player's desynchronization.
		class DesyncValue: RscTextSmall
		{
			idc = IDC_MP_PL_DESYNC;
			x = 0.48; y = 0.48;
			w = 0.05;
		};

		class TextSquad: RscTextSmall
		{
			x = 0.3; y = 0.54;
			w = 0.15;
			text = $STR_DISP_MP_SQ;
		};

		//Player's squad XML information page.
		class ValueSquad: RscTextSmall
		{
			idc = IDC_MP_SQ;
			x = 0.45; y = 0.54;
			w = 0.525;
		};

		class TextSquadName: RscTextSmall
		{
			x = 0.325; y = 0.57;
			w = 0.125;
			text = $STR_DISP_MP_SQ_NAME;
		};

		//Player's squad name.
		class ValueSquadName: RscTextSmall
		{
			idc = IDC_MP_SQ_NAME;
			x = 0.45; y = 0.57;
			w = 0.525;
		};

		class TextSquadId: RscTextSmall
		{
			x = 0.325; y = 0.6;
			w = 0.125;
			text = $STR_DISP_MP_SQ_ID;
		};

		//Player's squad ID number.
		class ValueSquadId: RscTextSmall
		{
			idc = IDC_MP_SQ_ID;
			x = 0.45; y = 0.6;
			w = 0.525;
		};

		class TextSquadMail: RscTextSmall
		{
			x = 0.325; y = 0.63;
			w = 0.125;
			text = $STR_DISP_MP_SQ_MAIL;
		};

		//Player's squad e-mail address.
		class ValueSquadMail: RscTextSmall
		{
			idc = IDC_MP_SQ_MAIL;
			x = 0.45; y = 0.63;
			w = 0.525;
		};

		class TextSquadWeb: RscTextSmall
		{
			x = 0.325; y = 0.66;
			w = 0.125;
			text = $STR_DISP_MP_SQ_WEB;
		};

		//Player's squad website.
		class ValueSquadWeb: RscTextSmall
		{
			idc = IDC_MP_SQ_WEB;
			x = 0.45; y = 0.66;
			w = 0.525;
		};

		class TextSquadPicture: RscTextSmall
		{
			x = 0.325; y = 0.69;
			w = 0.125;
			text = $STR_DISP_MP_SQ_PICTURE;
		};

		//Player's squad logo.
		class ValueSquadPicture: RscText
		{
			idc = IDC_MP_SQ_PICTURE;
			style = ST_PICTURE;
			x = 0.45; y = 0.69;
			w = 0.093; h = 0.124;
			color[] = {1, 1, 1, 1};
		};

		class TextSquadTitle: RscTextSmall
		{
			x = 0.325; y = 0.82;
			w = 0.125;
			text = $STR_DISP_MP_SQ_TITLE;
		};

		//Player's title in the squad.
		class ValueSquadTitle: RscTextSmall
		{
			idc = IDC_MP_SQ_TITLE;
			x = 0.45; y = 0.82;
			w = 0.525;
		};

		//Kick the selected player from the server.
		class B_KickOff: RscActiveText
		{
			idc = IDC_MP_KICKOFF;
			text = $STR_DISP_MP_KICKOFF;
			x = 0.05; y = 0.9;
			w = 0.2;
		};

		//Kick and ban the selected player from the server.
		class B_Ban: B_KickOff
		{
			idc = IDC_MP_BAN;
			text = $STR_DISP_MP_BAN;
			x = 0.3;
		};

		//Cancel back to the game.
		class B_Cancel: B_KickOff
		{
			idc = IDC_CANCEL;
			x = 0.75;
			default = 1;
			text = $STR_DISP_CLOSE;
		};
	};
};

//Waiting screen for clients.
class RscDisplayClientWait: RscDisplayMPPlayers
{
	idd = IDD_CLIENT_WAIT;

	class Title: RscTitle
	{
		idc = IDC_CLIENT_WAIT_TITLE;
		text = $STR_DISP_CLIENT_WAIT_TEXT;
	};

	//Cancel back to the main multiplayer screen.
	class ButtonCancel: RscActiveText
	{
		idc = IDC_CANCEL;
		text = $STR_DISP_CANCEL;
		x = 0.85; y = 0.90;
		w = 0.25;
		default = 1;
	};
};

//Server host waiting screen.
class RscDisplayServerGetReady: RscDisplayGetReady
{
	idd = IDD_SERVER_GET_READY;

	color0[] = {0.7, 0, 0, 1};
	color1[] = {0.8, 0.8, 0, 1};
	color2[] = {0, 0.7, 0, 1}; 
			
	class controls
	{
		class PlayersTitle: RscText
		{
			x = 0.125; y = 0.2;
			w = 0.25;
			text = $STR_DISP_SRVSETUP_PLAYERS;
			style = ST_LEFT + ST_WITH_RECT;
		};

		//List of players in the server.
		class Players: RscListBox
		{
			idc = IDC_SERVER_READY_PLAYERS;
			x = 0.125; y = 0.25;
			w = 0.25; h = 0.3;
		};

		//Start the mission.
		class B_Continue: RscActiveText
		{
			idc = IDC_OK;
			x = 0.25; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CONTINUE;
			default = 1;
		};

		//Cancel the mission.
		class B_Cancel: B_Continue
		{
			idc = IDC_CANCEL;
			x = 0.1;
			text = $STR_DISP_CANCEL;
			default = 0;
		};
	};
};

//Client waiting screen.
class RscDisplayClientGetReady: RscDisplayGetReady
{
	idd = IDD_CLIENT_GET_READY;

	color0[] = {0.7, 0, 0, 1};
	color1[] = {0.8, 0.8, 0, 1};
	color2[] = {0, 0.7, 0, 1}; 

	class controls
	{
		class PlayersTitle: RscText
		{
			x = 0.125; y = 0.2;
			w = 0.25;
			text = $STR_DISP_SRVSETUP_PLAYERS;
			style = ST_LEFT + ST_WITH_RECT;
		};

		//List of players in the server.
		class Players: RscListBox
		{
			idc = IDC_SERVER_READY_PLAYERS;
			x = 0.125; y = 0.25;
			w = 0.25; h = 0.3;

		};

		//Confirm readiness to start the mission.
		class B_Continue: RscActiveText
		{
			idc = IDC_OK;
			x = 0.25; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CONTINUE;
			default = 1;
		};

		//Cancel the mission and disconnect.
		class B_Cancel: B_Continue
		{
			idc = IDC_CANCEL;
			x = 0.1;
			text = $STR_DISP_CANCEL;
			default = 0;
		};
	};
};

//Todo:
class RscMPSetupMessage
{
	access = ReadAndWrite;
	idd = -1;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class Background: RscText
		{
			idc = -1;
			style = "";
			x = 0.130;
			y = 0.38;
			w = 0.755;
			h = 0.33;
			text = "";
			sizeEx = Size_Text_Default;
			colorBackground[] = {0, 0, 0, 1};
			colorText[] = {0, 0, 0, 0};
		};

		class Text
		{
			access = ReadAndWrite;
			type = CT_STRUCTURED_TEXT;
			idc = IDC_MPSETUP_MSG_MESSAGE;
			style = 0;
			x = 0.12;
			y = 0.44;
			w = 0.66;
			h = 0.10;
			size = SizeNormal;
			text = $STR_DISP_ERROR;

			class Attributes
			{
				font = FontMAIN;
				color = #323232;
				align = center;
				shadow = false;
			};
		};

		class Progress
		{
			access = ReadAndWrite;
			type = CT_PROGRESS;
			idc = IDC_MPSETUP_MSG_PROGRESS;
			style = 0;
			x = 0.28;
			y = 0.5;
			w = 0.4;
			h = 0.05;
			colorFrame[] = {0.2, 0.2, 0.2, 1};
			colorBar[] = {0.2, 0.2, 0.2, 1};
		};
		
		class ProgressIcon: RscPicture
		{
          idc = IDC_MPSETUP_MSG_TIME;
          x = 0.28;
          y = 0.6;
          w = 0.05;
          h = 0.05;
          text = ProcTextWhite;
        };
	};
};

class RscDisplayDedicatedServer: RscStandardDisplay
{
	idd = IDD_DEDICATED_SERVER;

	class controls
	{
		class Title: RscTitle {text = $STR_XBOX_DEDICATED_HOST;};

		class Reporting: RscListBox
		{
      idc = IDC_DS_REPORT;
			x = 0.06;
			y = 0.2;
			w = 0.877;
			h = 0.58;
			rowHeight = 0.04;
		};
	};
};

class RscPendingInvitation
{
  textureConnectionQualityPoor=ProcTextOrange;
  textureConnectionQualityBad=ProcTextRed;
  textureDesyncLow=ProcTextOrange;
  textureDesyncHigh=ProcTextRed;
	color[] = {1, 1, 1, 1};
	x = 0.94;
	y = 0.0;
	w = 0.06;
	h = 0.08;
	timeout = 10;
	blinkingPeriod = 2;
};

class RscPendingInvitationInGame
{
  textureConnectionQualityPoor=ProcTextOrange;
  textureConnectionQualityBad=ProcTextRed;
  textureDesyncLow=ProcTextOrange;
  textureDesyncHigh=ProcTextRed;
	color[] = {1, 1, 1, 1};
	x = 0.94;
	y = 0.0;
	w = 0.06;
	h = 0.08;
	timeout = 10;
	blinkingPeriod = 2;
};

