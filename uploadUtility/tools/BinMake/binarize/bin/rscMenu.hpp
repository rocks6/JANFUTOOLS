//Defines the commander menu and its submenus.

#include "commonDefs.hpp"
#include "dikCodes.h"
#include "resincl.hpp"

class RscMainMenu
{
	access = ReadAndWrite;
  title = $STR_COMMAND;
	atomic = false;
 	vocabulary = "";
 	class Items
  {
    class Move
    {
      title = $STR_MOVE;
	    key = DIK_1;
	    character = 1;
	    menu = RscMoveHigh;
	    show = COND_LEADER_OR_VEH_COMMANDER;
	    enable = COND_NOT_EMPTY_OR_COM_DRIVER;
	    speechId = 0;
	  };
	  class Target
	  {
	    title = $STR_WATCH_TARGET;
	    key = DIK_2;
	    character = 2;
	    menu = #WATCH;
	    show = COND_LEADER_OR_VEH_COMMANDER;
	    enable = COND_NOT_EMPTY_OR_COM_GUNNER;
	    speechId = 0;
	  };    
	  class Engage
	  {
	    title = $STR_WATCH;
	    key = DIK_3;
	    character = 3;
	    menu = RscWatchDir;
	    show = COND_LEADER_OR_VEH_COMMANDER;
	    enable = COND_NOT_EMPTY_OR_COM_GUNNER;
	    speechId = 0;
	  };    
	  class GetIn
	  {
	    title = $STR_GETIN;
	    key = DIK_4;
	    character = 4;
	    menu = #GET_IN;
	    show = COND_IS_LEADER;
	    enable = COND_NOT_EMPTY;
	    speechId = 0;
	  };
	  class Status
	  {
	    title = $STR_STATUS;
	    key = DIK_5;
	    character = 5;
	    menu = RscStatus;
	    //show = COND_IS_LEADER;
	    //enable = COND_NOT_EMPTY;
	    speechId = 0;
	  };
	  class Action
	  {
	    title = $STR_ACTION;
	    key = DIK_6;
	    character = 6;
	    menu = #ACTION;
	    show = COND_IS_LEADER;
	    enable = COND_ARE_ACTIONS;
	    speechId = 0;
	  };
	  class CombatMode
	  {
	    title = $STR_COMBAT_MODE;
	    key = DIK_7;
	    character = 7;
	    menu = RscCombatMode;
	    show = COND_LEADER_OR_VEH_COMMANDER;
	    enable = COND_NOT_EMPTY_OR_COM_GUNNER;
	    speechId = 0;
	  };
  	class Formations
  	{
  	  title = $STR_FORMATION;
  		key = DIK_8;
  		character = 8;
  		menu = RscFormations;
  		show = COND_IS_LEADER;
  	 	speechId = 0;
  	};
	  class Assign
    {
      title = $STR_ASSIGN;
      key = DIK_9;
      character = 9;
      menu = RscAssign;
      show = COND_IS_LEADER;
      enable = COND_NOT_EMPTY;
      speechId = 0;
    };
    class Reply
	  {
      title = $STR_REPLY;
      key = DIK_0;
      character = 0; 
      menu = RscReply;
      //show = COND_IS_LEADER;
	    //enable = COND_NOT_EMPTY;
	    speechId = 0;
    };
    class Back
    {
      title = "";
      key = DIK_BACK;
      character = $STR_MENU_BACKSPACE;
      command = CMD_BACK;
      speechId = 0;
    };
  };
};

class RscSubmenu
{
	access = ReadAndWrite;
	atomic=false;
	class Separator
	{
		title = "";
		key = 0;
		character = 0;
		command = CMD_SEPARATOR;
	};
  class Back
  {
     title = "";
     key = DIK_BACK;
     character = $STR_MENU_BACKSPACE;
     command = CMD_BACK;
     speechId = 0;
   };
};

class RscMoveHigh: RscSubmenu
{
	title = $STR_MOVE;
  	vocabulary = "";
	items[] =
	{
		Join, Separator, 
		Advance,StayBack,
		FlankLeft,
		FlankRight,Separator,
		Stop,Expect,Hide,Separator, NextWP,//Other,
		Back
	};
	class Join
	{
		title = $STR_FOLLOW_ME;
		key = DIK_1;
		character = 1;
		command = CMD_JOIN;
		show = COND_LEADER_OR_VEH_COMMANDER;
		enable = COND_NOT_EMPTY_OR_COM_DRIVER;
    speechId = 0;
	};
	class Advance
	{
		title = $STR_ADVANCE;
		key = DIK_2;
		character = 2;
		command = CMD_ADVANCE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class StayBack
	{
		title = $STR_STAY_BACK;
		key = DIK_3;
		character = 3;
		command = CMD_STAY_BACK;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class FlankLeft
	{
		title = $STR_FLANK_LEFT;
		key = DIK_4;
		character = 4;
		command = CMD_FLANK_LEFT;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class FlankRight
	{
		title = $STR_FLANK_RIGHT;
		key = DIK_5;
		character = 5;
		command = CMD_FLANK_RIGHT;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class Stop
	{
		title = $STR_STOP;
		key = DIK_6;
		character = 6;
		command = CMD_STOP;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
   		 speechId = 0;
	};
	class Expect
	{
		title = $STR_EXPECT;
		key = DIK_7;
		character = 7;
		command = CMD_EXPECT;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class Hide
	{
		title = $STR_HIDE;
		key = DIK_8;
		character = 8;
		command = CMD_HIDE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class NextWP
	{
		title = $STR_NEXT_WAYPOINT;
		key = DIK_9;
		character = 9;
		command = CMD_NEXT_WAYPOINT;
		show = COND_LEADER_OR_VEH_COMMANDER;
		enable = COND_NOT_EMPTY_OR_COM_DRIVER;
   		 speechId = 0;
	};
/*	class Other
	{
		title = $STR_MOVE_OTHER;
		key = DIK_0;
		character = 0;
		menu = RscMoveDir;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};*/
};

class RscMoveDir: RscSubmenu
{
	atomic = true;
	title = $STR_MOVE_DIR;
  vocabulary = "";
	items[] = {N,NE,E,SE,S,SW,W,NW,Back};
	class N
	{
		title = $STR_MOVE_N;
		key = DIK_1;
		character = 1;
		menu = RscMoveDist;
		class Params
		{
			dir = 0;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class NE
	{
		title = $STR_MOVE_NE;
		key = DIK_2;
		character = 2;
		menu = RscMoveDist;
		class Params
		{
			dir = 45;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class E
	{
		title = $STR_MOVE_E;
		key = DIK_3;
		character = 3;
		menu = RscMoveDist;
		class Params
		{
			dir = 90;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class SE
	{
		title = $STR_MOVE_SE;
		key = DIK_4;
		character = 4;
		menu = RscMoveDist;
		class Params
		{
			dir = 135;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class S
	{
		title = $STR_MOVE_S;
		key = DIK_5;
		character = 5;
		menu = RscMoveDist;
		class Params
		{
			dir = 180;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class SW
	{
		title = $STR_MOVE_SW;
		key = DIK_6;
		character = 6;
		menu = RscMoveDist;
		class Params
		{
			dir = 225;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class W
	{
		title = $STR_MOVE_W;
		key = DIK_7;
		character = 7;
		menu = RscMoveDist;
		class Params
		{
			dir = 270;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class NW
	{
		title = $STR_MOVE_NW;
		key = DIK_8;
		character = 8;
		menu = RscMoveDist;
		class Params
		{
			dir = 315;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
};


class RscReply: RscSubmenu
{
	title = $STR_REPLY_MENU;
  vocabulary = "";
	items[] =
	{
		Done,Fail,
		FireReady,FireNotReady,
		Repeat,Copy,
		UserRadio,Radio,
		Back
	};
	class Done
	{
		title = $STR_REPLY_DONE;
		key = DIK_1;
		character = 1;
		command = CMD_REPLY_DONE;
		enable = COND_CAN_ANSWER;
	};
	class Fail
	{
		title = $STR_REPLY_FAIL;
		key = DIK_2;
		character = 2;
		command = CMD_REPLY_FAIL;
		enable = COND_CAN_ANSWER;
	};

	class FireReady
	{
		title = $STR_REPLY_FIREREADY;
		key = DIK_3;
		character = 3;
		command = CMD_REPLY_FIREREADY;
		//enable = COND_IS_COMMANDER;
	};
	class FireNotReady
	{
		title = $STR_REPLY_FIRENOTREADY;
		key = DIK_4;
		character = 4;
		command = CMD_REPLY_FIRENOTREADY;
		//enable = COND_IS_COMMANDER;
	};

	class Repeat
	{
		title = $STR_REPLY_REPEAT;
		key = DIK_7;
		character = 7;
		command = CMD_REPLY_REPEAT;
		enable = COND_CAN_ANSWER;
	};
	class Copy
	{
		title = $STR_REPLY_COPY;
		key = DIK_8;
		character = 8;
		command = CMD_REPLY_COPY;
		enable = COND_CAN_ANSWER;
	};

	class UserRadio
	{
		title = $STR_RADIO_CUSTOM;
		key = DIK_9;
		character = 9;
		menu = #CUSTOM_RADIO;
	};
	class Radio
	{
		title = $STR_RADIO;
		key = DIK_0;
		character = 0;
		menu = RscRadio;
		enable = COND_HAS_RADIO;
	};

};

class RscCallSupport: RscSubmenu
{
	title = $STR_SUPPORT_MENU;
  vocabulary = "";
	items[] =
	{
		Medic,Repair,Rearm,Refuel,
		Done,
		Back
	};

	class Medic
	{
		title = $STR_SUPPORT_MEDIC;
		key = DIK_1;
		character = 1;
		command = CMD_SUPPORT_MEDIC;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class Repair
	{
		title = $STR_SUPPORT_REPAIR;
		key = DIK_2;
		character = 2;
		command = CMD_SUPPORT_REPAIR;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class Rearm
	{
		title = $STR_SUPPORT_REARM;
		key = DIK_3;
		character = 3;
		command = CMD_SUPPORT_REARM;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class Refuel
	{
		title = $STR_SUPPORT_REFUEL;
		key = DIK_4;
		character = 4;
		command = CMD_SUPPORT_REFUEL;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class Done
	{
		title = $STR_SUPPORT_DONE;
		key = DIK_5;
		character = 5;
		command = CMD_SUPPORT_DONE;
		show = COND_IS_LEADER;
    speechId = 0;
	};
};

class RscStatus: RscSubmenu
{
	title = $STR_MENU_STATUS;
  vocabulary = "";
	items[] =
	{
		Support,
		FuelLow,AmmoLow,
		Injured,
		WhereAreYou, Report,
		UnderFire,OneLess,IsDown,
		Back
	};


	class Support
	{
		title = $STR_CALL_SUPPORT;
		key = DIK_1;
		character = 1;
		menu = RscCallSupport;
		//show = COND_IS_LEADER;
	};
	class FuelLow
	{
		title = $STR_REPLY_FUEL_LOW;
		key = DIK_2;
		character = 2;
		command = CMD_REPLY_FUEL_LOW;
	};
	class AmmoLow
	{
		title = $STR_REPLY_AMMO_LOW;
		key = DIK_3;
		character = 3;
		command = CMD_REPLY_AMMO_LOW;
	};
	class Injured
	{
		title = $STR_REPLY_INJURED;
		key = DIK_4;
		character = 4;
		command = CMD_REPLY_INJURED;
	};

	class WhereAreYou
	{
		title = $STR_REPLY_WHERE_ARE_YOU;
		key = DIK_5;
		character = 5;
		command = CMD_REPLY_WHERE_ARE_YOU;
		show = COND_NOT_LEADER;
	};
	class Report
	{
		title = $STR_REPORT;
		key = DIK_5;
		character = 5;
		command = CMD_REPORT;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};

	class UnderFire
	{
		title = $STR_REPLY_UNDER_FIRE;
		key = DIK_6;
		character = 6;
		command = CMD_REPLY_UNDER_FIRE;
	};

	class OneLess
	{
		title = $STR_REPLY_ONE_LESS;
		key = DIK_7;
		character = 7;
		command = CMD_REPLY_ONE_LESS;
	};
	class IsDown
	{
		title = $STR_REPLY_KILLED;
		key = DIK_8;
		character = 8;
		command = CMD_REPLY_KILLED;
		//show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
};

class RscWatchDir: RscSubmenu
{
	title = $STR_WATCH;
  vocabulary = "";
	items[] =
	{
		OpenFire,HoldFire,Fire,Separator,
		Engage,EngageAtWill,Disengage,
		Separator,
		LookAround,WatchDir,
		Back
	};

	class OpenFire
	{
		title = $STR_OPEN_FIRE;
		key = DIK_1;
		character = 1;
		command = CMD_OPEN_FIRE;
		show = COND_LEADER_OR_VEH_COMMANDER;
		enable = COND_NOT_EMPTY_OR_COM_GUNNER;
	};
	class HoldFire
	{
		title = $STR_HOLD_FIRE;
		key = DIK_2;
		character = 2;
		command = CMD_HOLD_FIRE;
		show = COND_LEADER_OR_VEH_COMMANDER;
		enable = COND_NOT_EMPTY_OR_COM_GUNNER;
	};
	class Fire
	{
		title = $STR_FIRE;
		key = DIK_3;
		character = 3;
		command = CMD_FIRE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};

	class Engage
	{
		title = $STR_ENGAGE_NOW;
		key = DIK_4;
		character = 4;
		command = CMD_ENGAGE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class EngageAtWill
	{
		title = $STR_ENGAGE_AT_WILL;
		key = DIK_5;
		character = 5;
		command = CMD_LOOSE_FORM;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class Disengage
	{
		title = $STR_DISENGAGE;
		key = DIK_6;
		character = 6;
		command = CMD_KEEP_FORM;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class Auto
	{
		title = $STR_WATCH_AUTO;
		key = DIK_7;
		character = 7;
		command = CMD_WATCH_AUTO;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	
	class LookAround
	{
		title = $STR_LOOK_AROUND;
		key = DIK_7;
		character = 7;
		command = CMD_WATCH_AROUND;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class WatchDir
	{
		title = $STR_WATCH_DIR;
		key = DIK_8;
		character = 8;
		menu = RscWatchMoreDir;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
};

class RscWatchMoreDir: RscSubmenu
{
	title = $STR_WATCH_DIR;
	atomic=true;
  vocabulary = "";
	items[] = {N,NE,E,SE,S,SW,W,NW,Back};
	class N
	{
		title = $STR_MOVE_N;
		key = DIK_1;
		character = 1;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 0;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class NE
	{
		title = $STR_MOVE_NE;
		key = DIK_2;
		character = 2;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 45;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class E
	{
		title = $STR_MOVE_E;
		key = DIK_3;
		character = 3;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 90;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class SE
	{
		title = $STR_MOVE_SE;
		key = DIK_4;
		character = 4;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 135;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class S
	{
		title = $STR_MOVE_S;
		key = DIK_5;
		character = 5;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 180;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class SW
	{
		title = $STR_MOVE_SW;
		key = DIK_6;
		character = 6;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 225;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class W
	{
		title = $STR_MOVE_W;
		key = DIK_7;
		character = 7;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 270;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class NW
	{
		title = $STR_MOVE_NW;
		key = DIK_8;
		character = 8;
		command = CMD_WATCH_DIR;
    class Params
    {
      dir = 315;
    };
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
}

class RscMoveDist: RscSubmenu
{
	title = $STR_MOVE_DIST;
  vocabulary = "";
	items[] = {D50,D100,D200,D500,D1000,D2000,Back};
	class D50
	{
		title = $STR_MOVE_50;
		key = DIK_1;
		character = 1;
		command = CMD_MOVE;
		class Params
		{
			dist = 50;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class D100
	{
		title = $STR_MOVE_100;
		key = DIK_2;
		character = 2;
		command = CMD_MOVE;
		class Params
		{
			dist = 100;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class D200
	{
		title = $STR_MOVE_200;
		key = DIK_3;
		character = 3;
		command = CMD_MOVE;
		class Params
		{
			dist = 200;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class D500
	{
		title = $STR_MOVE_500;
		key = DIK_4;
		character = 4;
		command = CMD_MOVE;
		class Params
		{
			dist = 500;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class D1000
	{
		title = $STR_MOVE_1000;
		key = DIK_5;
		character = 5;
		command = CMD_MOVE;
		class Params
		{
			dist = 1000;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class D2000
	{
		title = $STR_MOVE_2000;
		key = DIK_6;
		character = 6;
		command = CMD_MOVE;
		class Params
		{
			dist = 2000;
		};
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
};

class RscFormations: RscSubmenu
{
	title = $STR_FORMATION;
  vocabulary = "";
	items[] = {Column,Staggered,Wedge,EchL,EchR,Vee,Line,File,Diamond, Back};
	class Column
	{
		title = $STR_COLUMN;
		key = DIK_1;
		character = 1;
		command = CMD_FORM_COLUMN;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class Staggered
	{
		title = $STR_STAGGERED;
		key = DIK_2;
		character = 2;
		command = CMD_FORM_STAGCOL;
		show = COND_IS_LEADER;
	};
	class Wedge
	{
		title = $STR_WEDGE;
		key = DIK_3;
		character = 3;
		command = CMD_FORM_WEDGE;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class EchL
	{
		title = $STR_ECHL;
		key = DIK_4;
		character = 4;
		command = CMD_FORM_ECHLEFT;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class EchR
	{
		title = $STR_ECHR;
		key = DIK_5;
		character = 5;
		command = CMD_FORM_ECHRIGHT;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class Vee
	{
		title = $STR_VEE;
		key = DIK_6;
		character = 6;
		command = CMD_FORM_VEE;
		show = COND_IS_LEADER;
	};
	class Line
	{
		title = $STR_LINE;
		key = DIK_7;
		character = 7;
		command = CMD_FORM_LINE;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class File
	{
		title = $STR_FILE;
		key = DIK_8;
		character = 8;
		command = CMD_FORM_FILE;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class Diamond
	{
		title = $STR_DIAMOND;
		key = DIK_9;
		character = 9;
		command = CMD_FORM_DIAMOND;
		show = COND_IS_LEADER;
    speechId = 0;
	};


};

class RscCombatMode: RscSubmenu
{
	title = $STR_COMBAT_MODE;
  vocabulary = "";
	items[] =
		{
			//OpenFire, HoldFire, Fire, Separator, EngageAtWill, Disengage,
			Stealth,Combat,Aware,Safe,
			Separator,PosUp,PosCrouch,PosDown,PosAuto,Back
		};
/*	class OpenFire
	{
		title = $STR_OPEN_FIRE;
		key = DIK_1;
		character = 1;
		command = CMD_OPEN_FIRE;
		show = COND_LEADER_OR_VEH_COMMANDER;
		enable = COND_NOT_EMPTY_OR_COM_GUNNER;
    speechId = 0;
	};
	class HoldFire
	{
		title = $STR_HOLD_FIRE;
		key = DIK_2;
		character = 2;
		command = CMD_HOLD_FIRE;
		show = COND_LEADER_OR_VEH_COMMANDER;
		enable = COND_NOT_EMPTY_OR_COM_GUNNER;
    speechId = 0;
	};
	class Fire
	{
		title = $STR_FIRE;
		key = DIK_3;
		character = 3;
		command = CMD_FIRE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};

	class EngageAtWill
	{
		title = $STR_ENGAGE_AT_WILL;
		key = DIK_4;
		character = 4;
		command = CMD_LOOSE_FORM;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};
	class Disengage
	{
		title = $STR_DISENGAGE;
		key = DIK_5;
		character = 5;
		command = CMD_KEEP_FORM;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
    speechId = 0;
	};*/

	class Stealth
	{
		title = $STR_STEALTH;
		key = DIK_1;
		character = 1;
		command = CMD_STEALTH;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class Combat
	{
		title = $STR_COMBAT;
		key = DIK_2;
		character = 2;
		command = CMD_COMBAT;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class Aware
	{
		title = $STR_AWARE;
		key = DIK_3;
		character = 3;
		command = CMD_AWARE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class Safe
	{
		title = $STR_SAFE;
		key = DIK_4;
		character = 4;
		command = CMD_SAFE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY;
	};
	class PosUp
	{
		title = $STR_POS_UP;
		key = DIK_6;
		character = 6;
		command = CMD_POS_UP;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY_SOLDIERS;
    speechId = 0;
	};
	class PosCrouch
	{
		title = $STR_POS_CROUCH;
		key = DIK_7;
		character = 7;
		command = CMD_POS_MIDDLE;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY_SOLDIERS;
    speechId = 0;
	};
	class PosDown
	{
		title = $STR_POS_DOWN;
		key = DIK_8;
		character = 8;
		command = CMD_POS_DOWN;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY_SOLDIERS;
    speechId = 0;
	};
	class PosAuto
	{
		title = $STR_POS_AUTO;
		key = DIK_9;
		character = 9;
		command = CMD_POS_AUTO;
		show = COND_IS_LEADER;
		enable = COND_NOT_EMPTY_SOLDIERS;
    speechId = 0;
	};
};

class RscTeam: RscSubmenu
{
	title = $STR_TEAM;
  vocabulary = "";
	items[] =
	{
		TeamRed,TeamGreen,TeamBlue,TeamYellow,TeamMain,
		Separator,Assign,
		Back
	};
	class TeamRed
	{
		title = $STR_TEAM_RED;
		key = DIK_1;
		character = 1;
		command = CMD_TEAM_RED;
		show = COND_IS_LEADER;
		enable = COND_RED_TEAM;
	};
	class TeamGreen
	{
		title = $STR_TEAM_GREEN;
		key = DIK_2;
		character = 2;
		command = CMD_TEAM_GREEN;
		show = COND_IS_LEADER;
		enable = COND_GREEN_TEAM;
	};
	class TeamBlue
	{
		title = $STR_TEAM_BLUE;
		key = DIK_3;
		character = 3;
		command = CMD_TEAM_BLUE;
		show = COND_IS_LEADER;
		enable = COND_BLUE_TEAM;
	};
	class TeamYellow
	{
		title = $STR_TEAM_YELLOW;
		key = DIK_4;
		character = 4;
		command = CMD_TEAM_YELLOW;
		show = COND_IS_LEADER;
		enable = COND_YELLOW_TEAM;
	};
	class TeamMain
	{
		title = $STR_TEAM_MAIN;
		key = DIK_5;
		character = 5;
		command = CMD_TEAM_MAIN;
		show = COND_IS_LEADER;
		enable = COND_MAIN_TEAM;
	};
	class Assign
	{
		title = $STR_ASSIGN;
		key = DIK_9;
		character = 9;
		menu = RscAssign;
		show = COND_IS_LEADER;
	};
};

class RscAssign: RscSubmenu
{
	title = $STR_ASSIGN;
  vocabulary = "";
	items[] = {AssignRed,AssignGreen,AssignBlue,AssignYellow,AssignMain,Back};
	class AssignRed
	{
		title = $STR_ASSIGN_RED;
		key = DIK_1;
		character = 1;
		command = CMD_ASSIGN_RED;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class AssignGreen
	{
		title = $STR_ASSIGN_GREEN;
		key = DIK_2;
		character = 2;
		command = CMD_ASSIGN_GREEN;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class AssignBlue
	{
		title = $STR_ASSIGN_BLUE;
		key = DIK_3;
		character = 3;
		command = CMD_ASSIGN_BLUE;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class AssignYellow
	{
		title = $STR_ASSIGN_YELLOW;
		key = DIK_4;
		character = 4;
		command = CMD_ASSIGN_YELLOW;
		show = COND_IS_LEADER;
    speechId = 0;
	};
	class AssignMain
	{
		title = $STR_ASSIGN_MAIN;
		key = DIK_5;
		character = 5;
		command = CMD_ASSIGN_MAIN;
		show = COND_IS_LEADER;
    speechId = 0;
	};
};

class RscRadio: RscSubmenu
{
	title = $STR_RADIO;
  vocabulary = "";
	items[] ={Alpha, Bravo, Charlie, Delta, Echo, Foxtrot, Golf, Hotel, India, Juliet, Back};
	class Alpha
	{
		title = $STR_RADIO_ALPHA;
		key = DIK_1;
		character =1;
		command = CMD_RADIO_ALPHA;
    speechId = 0;
	};
	class Bravo
	{
		title = $STR_RADIO_BRAVO;
		key = DIK_2;
		character =2;
		command = CMD_RADIO_BRAVO;
    speechId = 0;
	};
	class Charlie
	{
		title = $STR_RADIO_CHARLIE;
		key = DIK_3;
		character =3;
		command = CMD_RADIO_CHARLIE;
    speechId = 0;
	};
	class Delta
	{
		title = $STR_RADIO_DELTA;
		key = DIK_4;
		character =4;
		command = CMD_RADIO_DELTA;
    speechId = 0;
	};
	class Echo
	{
		title = $STR_RADIO_ECHO;
		key = DIK_5;
		character = 5;
		command = CMD_RADIO_ECHO;
    speechId = 0;
	};
	class Foxtrot
	{
		title = $STR_RADIO_FOXTROT;
		key = DIK_6;
		character = 6;
		command = CMD_RADIO_FOXTROT;
    speechId = 0;
	};
	class Golf
	{
		title = $STR_RADIO_GOLF;
		key = DIK_7;
		character = 7;
		command = CMD_RADIO_GOLF;
    speechId = 0;
	};
	class Hotel
	{
		title = $STR_RADIO_HOTEL;
		key = DIK_8;
		character = 8;
		command = CMD_RADIO_HOTEL;
    speechId = 0;
	};
	class India
	{
		title = $STR_RADIO_INDIA;
		key = DIK_9;
		character = 9;
		command = CMD_RADIO_INDIA;
    speechId = 0;
	};
	class Juliet
	{
		title = $STR_RADIO_JULIET;
		key = DIK_0;
		character = 0;
		command = CMD_RADIO_JULIET;
    speechId = 0;
	};
};


class RscMenuBasicLevel
{
  //used on Xbox only
	access = ReadAndWrite;
	title = $STR_COMMAND;
	atomic=false;
  vocabulary = "";
	items[] =
	{	};
};
