// define some Xbox specific values

class CfgRumble
{
  coefEngineToLeft = 1.5;
  coefEngineToRight = 1.2;
  coefSurfaceToLeft = 0.25;
  coefSurfaceToRight = 0.45;
  coefWeaponToLeft = 4;
  coefWeaponToRight = 4;
};

class CfgMPGameTypes
{
	class DM
	{
		name = $STR_XBOX_MPTYPE_DM;
		shortcut = $STR_XBOX_MPTYPE_DM_SHORT;
		stats = MPDM;
		id = 0; // identification for matchmaking service
	};
	class CTF
	{
		name = $STR_XBOX_MPTYPE_CTF;
		shortcut = $STR_XBOX_MPTYPE_CTF_SHORT;
		stats = MPCTF;
		id = 1;
	};
	class FF
	{
		name = $STR_XBOX_MPTYPE_FF;
		shortcut = $STR_XBOX_MPTYPE_FF_SHORT;
		stats = MPFF;
		id = 2;
	};
	class Coop
	{
		name = $STR_XBOX_MPTYPE_COOP;
		shortcut = $STR_XBOX_MPTYPE_COOP_SHORT;
		stats = MPCoop;
		id = 3;
	};
	class Team
	{
		name = $STR_XBOX_MPTYPE_TEAM;
		shortcut = $STR_XBOX_MPTYPE_TEAM_SHORT;
		stats = MPTeam;
		id = 4;
	};

	class Unknown
	{
		name = $STR_XBOX_MPTYPE_UNKNOWN;
		shortcut = $STR_XBOX_MPTYPE_UNKNOWN_SHORT;
		stats = MPUnknown;
		id = -1;
	};

	class Scont
	{
		name = $STR_XBOX_MPTYPE_SCONTROL;
		shortcut = $STR_XBOX_MPTYPE_SCONTROL_SHORT;
		stats = MPSControl;
		id = 5;
	};

	class Hold
	{
		name = $STR_XBOX_MPTYPE_HOLDLOCATION;
		shortcut = $STR_XBOX_MPTYPE_HOLDLOCATION_SHORT;
		stats = MPHold;
		id = 6;
	};
};

class CfgLiveStats
{
  class SPSingle
  {
    name = $STR_XBOX_LIVE_STATS_SINGLE;
    board = 1;
    algorithm = 0;
    coefRecruit = 1;
    coefRegular = 2;
    coefVeteran = 3;
    coefMercenary = 4;
    columns = 15;
    total = SPTotal;
    widthRank = 0.1;
    widthRating = 0.18;//0.1;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_POINTS;
 };
  class SP1985
  {
    name = $STR_XBOX_LIVE_STATS_CAMPAIN1985;
    board = 2;
    algorithm = 1;
    coefRecruit = 1;
    coefRegular = 2;
    coefVeteran = 3;
    coefMercenary = 4;
    total = SPTotal;
    widthRank = 0.1;
    widthRating = 0.18;//0.1;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_POINTS;
  };
  class SPResistance : SP1985
  {
    name = $STR_XBOX_LIVE_STATS_CAMPAIN_RES;
    board = 3;
  };
  class SPTotal
  {
    name = $STR_XBOX_LIVE_STATS_TOTAL;
    board = 8;
    class Columns
    {
      class SPSingle
      {
        column = 0;
        coef = 1;
      };
      class SP1985
      {
        column = 1;
        coef = 1;
      };
      class SPResistance
      {
        column = 2;
        coef = 1;
      };
    };
    widthRank = 0.1;
    widthRating = 0.18;//0.1;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_POINTS;
  };
  class MPDM
  {
    name = $STR_XBOX_LIVE_STATS_DM;
    board = 9;
    algorithm = 2;
    dropouts = true;
    coefWin = 10; // multiplier
    coefLoose = -10; // multiplier
    // Handicap calculation
    coefM1 = 1;
    coefS1 = 100;
    coefM2 = 1;
    coefS2 = 100;
    coefMin = 0.1; // handicap saturation
    coefMax = 10.0; // handicap saturation
    total = MPTotal;
    widthRank = 0.1;
    widthDropouts = 0.3;//0.245;//0.2;
    widthRating = 0.18;//0.1;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_POINTS;
    titleDropouts = $STR_LIVE_STATS_DROPOUT;
  };
  class MPCTF
  {
    name = $STR_XBOX_LIVE_STATS_CTF;
    board = 10;
    algorithm = 3;
    dropouts = true;
    coefWin = 10; // multiplier
    coefLoose = -10; // multiplier
    // Handicap calculation
    coefM1 = 1;
    coefS1 = 100;
    coefM2 = 1;
    coefS2 = 100;
    coefMin = 0.1; // handicap saturation
    coefMax = 10.0; // handicap saturation
    coefAI = 0.5;
    total = MPTotal;
    widthRank = 0.1;
    widthDropouts = 0.3;//0.245;//0.2;
    widthRating = 0.18;//0.1;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_POINTS;
    titleDropouts = $STR_LIVE_STATS_DROPOUT;
  };
  class MPFF : MPDM
  {
    name = $STR_XBOX_LIVE_STATS_FF;
    board = 11;
  };
  class MPCoop : SPSingle
  {
    name = $STR_XBOX_LIVE_STATS_COOP;
    board = 12;
    dropouts = true;
    columns = 12;
    total = MPTotal;
    widthDropouts = 0.3;//0.245;//0.2;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_POINTS;
    titleDropouts = $STR_LIVE_STATS_DROPOUT;
  };
  class MPTeam : MPCTF
  {
    name = $STR_XBOX_LIVE_STATS_TEAM;
    board = 13;
  };
  class MPSControl : MPCTF
  {
    name = $STR_XBOX_LIVE_STATS_SCONTROL;
    board = 14;
  };
  class MPHold : MPCTF
  {
    name = $STR_XBOX_LIVE_STATS_HOLD;
    board = 15;
  };
/*  class MPUnknown : MPDM
  {
    name = $STR_XBOX_LIVE_STATS_UNKNOWN;
    board = 19;
  };
*/  class MPTotal
  {
    name = $STR_XBOX_LIVE_STATS_MPTOTAL;
    board = 20;
    dropouts = true;
    class Columns
    {
      class MPDM
      {
        column = 0;
        coef = 1;
      };
      class MPCTF
      {
        column = 1;
        coef = 1;
      };
      class MPFF
      {
        column = 2;
        coef = 1;
      };
      class MPCoop
      {
        column = 3;
        coef = 1;
      };
      class MPTeam
      {
        column = 4;
        coef = 1;
      };
      class MPSControl
      {
        column = 5;
        coef = 1;
      };
      class MPHold
      {
        column = 6;
        coef = 1;
      };
      class MPUnknown
      {
        column = 7;
        coef = 0;
      };
    };
    widthRank = 0.1;
    widthDropouts = 0.3;//0.245;//0.2;
    widthRating = 0.18;//0.1;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_POINTS;
    titleDropouts = $STR_LIVE_STATS_DROPOUT;
  };
  class DSTime
  {
   name = $STR_XBOX_LIVE_STATS_DDSERVER;
    board = 18;
    algorithm = 4;
    widthRank = 0.1;
    widthRating = 0.2;
    widthTime = 0.15;//0.1;
    titleRank = $STR_LIVE_STATS_RANK;
    titleName = $STR_LIVE_STATS_NAME;
    titleRating = $STR_LIVE_STATS_DEDICATED_POINTS;
    titleTime = $STR_LIVE_STATS_DEDICATED_TIME;
  };
};

// Xbox voice masks
class CfgVoiceMask
{
  // the first is default
  class None
  {
    name = $STR_VOICE_MASK_NONE;
    specEnergyWeight = -1;
    pitchScale = -1;
    whisperValue = -1;
    roboticValue = -1;
  };
	class Anonymous
	{
		name = $STR_VOICE_MASK_ANONYMOUS;
    specEnergyWeight = 0.95;
    pitchScale = 0.50;
    whisperValue = 0.35;
    roboticValue = -1;
	};
  class Cartoon
  {
    name = $STR_VOICE_MASK_CARTOON;
    specEnergyWeight = 0.1;
    pitchScale = -1;
    whisperValue = -1;
    roboticValue = -1;
  };
  class BigGuy
  {
    name = $STR_VOICE_MASK_BIGGUY;
    specEnergyWeight = 0.90;
    pitchScale = 0.05;
    whisperValue = -1;
    roboticValue = -1;
  };
  class Child
  {
    name = $STR_VOICE_MASK_CHILD;
    specEnergyWeight = 0.1;
    pitchScale = 0.7;
    whisperValue = -1;
    roboticValue = -1;
  };
  class Robot
  {
    name = $STR_VOICE_MASK_ROBOT;
    specEnergyWeight = 0.5;
    pitchScale = -1;
    whisperValue = -1;
    roboticValue = 0.05;
  };
  class DarkMaster
  {
    name = $STR_VOICE_MASK_DARKMASTER;
    specEnergyWeight = 1;
    pitchScale = 0;
    whisperValue = -1;
    roboticValue = -1;
  };
  class Whisper
  {
    name = $STR_VOICE_MASK_WHISPER;
    specEnergyWeight = 0.5;
    pitchScale = -1;
    whisperValue = 0.01;
    roboticValue = -1;
  };
};