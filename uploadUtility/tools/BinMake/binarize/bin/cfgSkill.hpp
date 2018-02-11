//ToDo: Move to common define.

#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"

//define experiences
class CfgExperience
{
  access = ReadAndCreate;

  destroyUnit[]={unit1, unit2, unit3, unit4};
  // four price levels
  //    max price, basic experience
  unit1[] = {2000, 0};
  unit2[] = {200000, 200};
  unit3[] = {500000, 500};
  unit4[] = {1000000, 1000};

  destroyEnemy = 1;
  destroyFriendly = -7;
  destroyCivilian = -2;
  destroyStatic = 0; // buldings are free to destroy - nobody cares
  destroyYourUnit = -0.2; //for leadership only

  renegadeLimit = -2000;

  playerKilled = 0;

  commandCompleted = 0; //for subordinate soldier only
  commandFailed = 0; //for subordinate soldier only
  followMe = 0; //for subordinate soldier only

  missionCompleted = 0; //for leadership only
  missionFailed = 0; //for leadership only

  ranks[] =
  {
    0, //Private
    500, //Corporal
    1500, //Sergeant
    2500, //Lieutenant
    3500, //Captain
    5000, //Major
    7500  //Colonel
  };
};

class CfgAISkill
{
  // source skill value, target skill value, ...
  /// precision related skills
  aimingAccuracy[]=
  {
    0,0, 1,1
  };
  aimingShake[]=
  {
    0,0, 1,1
  };

  /// skill related skills
  aimingSpeed[]=
  {
    0,0.5, 1,1
  };
  endurance[]=
  {
    0,0, 1,1
  };
  spotDistance[]=
  {
    0,0.2, 1,0.4
  };
  spotTime[]=
  {
    0,0, 1,0.7
  };
  courage[]=
  {
    0,0, 1,1
  };
  reloadSpeed[]=
  {
    0,0, 1,1
  };
  commanding[]=
  {
    0,0, 1,1
  };
  general[]=
  {
    0,0, 1,1
  };
};

class CfgDifficulties
{
  default = Regular;
 /* class Recruit
  {
    displayName = $STR_XBOX_DIFF_RECRUIT;
    description = "";
    showCadetHints = true;
    showCadetWP = true;
    maxPilotHeight = 150;
    scoreImage = ProcTextWhite;
    scoreChar = "o";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    skillFriendly = 0.65;
    precisionFriendly = 0.65;

    skillEnemy = 0.4;
    precisionEnemy = 0.4;

    myArmorCoef = 5.0;
    groupArmorCoef = 4.0;
    autoAimSizeFactor = 0.8; // size of the sphere around the target relative to the target size
    autoAimDistance = 1.2; // max. distance of the target sphere from the weapon line
    autoAimAngle = 7; // max. angle to the target sphere from the weapon line
    peripheralVisionAid = 0.8; // strenght of peripheral vision, <0,1>
    visionAid =0.8; /// strengh of on-screen vision aid, <0,1>

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {true, true};
      friendlyTag[] = {true, true};
      enemyTag[] = {false, true};
      hud[] = {true, true};
      hudPerm[] = {true, true};
      hudWp[] = {true, true};
      hudWpPerm[] = {true, true};
      autoSpot[] = {true, true};
      map[] = {true, true};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {true, true};
      clockIndicator[] = {true, true};
      3rdPersonView[] = {true, true};
      tracers[] = {true, true};
      ultraAI[] = {false, true};
      autoAim[] = {false, true};
      unlimitedSaves[] = {false, false};
    };
  }; */

  class Regular
  {
    displayName = $STR_XBOX_DIFF_REGULAR;
    description = "";
    showCadetHints = true;
    showCadetWP = true;
    maxPilotHeight = 400;
    scoreImage = ProcTextWhite;
    scoreChar = "o";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    skillFriendly = 0.75;
    skillEnemy = 0.6;

    myArmorCoef = 3.0;
    groupArmorCoef = 2.4;
    autoAimSizeFactor = 0.9; // size of the sphere around the target relative to the target size
    autoAimDistance = 1.3; // max. distance of the target sphere from the weapon line
    autoAimAngle = 6; // max. angle to the target sphere from the weapon line
    peripheralVisionAid = 0.9; // strenght of peripheral vision, <0,1>
    visionAid = 0; /// strengh of on-screen vision aid, <0,1>

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {true, true};
      friendlyTag[] = {true, true};
      enemyTag[] = {false, true};
      hud[] = {true, true};
      hudPerm[] = {true, true};
      hudWp[] = {true, true};
      hudWpPerm[] = {true, true};
      autoSpot[] = {true, true};
      map[] = {true, true};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {true, true};
      clockIndicator[] = {true, true};
      3rdPersonView[] = {true, true};
      tracers[] = {true, true};
      ultraAI[] = {false, true};
      autoAim[] = {false, true};
      unlimitedSaves[] = {true, true};

      // VBS2-specific difficulty settings
      deathMessages[] = {true, true};
      netStats[] = {true, true};
      allowSeagull[] = {true, true};
      suppressPlayer[] = {true, true};
      realisticFatigue[] = {true, true};
    };
  };

  class Veteran
  {
    displayName = $STR_XBOX_DIFF_VETERAN;
    description = "";
    showCadetHints = false;
    showCadetWP = true;
    maxPilotHeight = 10000;
    scoreImage = ProcTextWhite;
    scoreChar = "*";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    skillFriendly = 0.85;
    skillEnemy = 0.85;

    myArmorCoef = 1.2;
    groupArmorCoef = 1.1;
    autoAimSizeFactor = 0.7; // size of the sphere around the target relative to the target size
    autoAimDistance = 1; // max. distance of the target sphere from the weapon line
    autoAimAngle = 4; // max. angle to the target sphere from the weapon line
    peripheralVisionAid = 0.6; // strenght of peripheral vision, <0,1>
    visionAid = 0; /// strengh of on-screen vision aid, <0,1>

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {false, false};
      friendlyTag[] = {false, false};
      enemyTag[] = {false, false};
      hud[] = {true, true};
      hudPerm[] = {false, false};
      hudWp[] = {true, true};
      hudWpPerm[] = {true, true};
      autoSpot[] = {false, false};
      map[] = {false, false};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {false, false};
      clockIndicator[] = {true, true};
      3rdPersonView[] = {true, true};
      tracers[] = {true, true};
      ultraAI[] = {false, true};
      autoAim[] = {false, false};
      unlimitedSaves[] = {false, false};

      // VBS2-specific difficulty settings
      deathMessages[] = {true, true};
      netStats[] = {true, true};
      allowSeagull[] = {true, true};
      suppressPlayer[] = {true, true};
      realisticFatigue[] = {true, true};
    };
  };
  /*
  class Mercenary
  {
    displayName = $STR_XBOX_DIFF_MERCENARY;
    description = "";
    showCadetHints = false;
    showCadetWP = false;
    maxPilotHeight = 10000;
    scoreImage = ProcTextWhite;
    scoreChar = "*";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    skillFriendly = 1.0;
    precisionFriendly = 1.0;

    skillEnemy = 0.85;
    precisionEnemy = 0.85;

    myArmorCoef = 1.0;
    groupArmorCoef = 1.0;
    autoAimSizeFactor = 0.3; // size of the sphere around the target relative to the target size
    autoAimDistance = 0.6; // max. distance of the target sphere from the weapon line
    autoAimAngle = 2.5; // max. angle to the target sphere from the weapon line
    peripheralVisionAid = 0.25; // strenght of peripheral vision, <0,1>
    visionAid = 0; /// strengh of on-screen vision aid, <0,1>

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {false, false};
      friendlyTag[] = {false, false};
      enemyTag[] = {false, false};
      hud[] = {true, true};
      hudPerm[] = {false, false};
      hudWp[] = {false, false};
      hudWpPerm[] = {false, false};
      autoSpot[] = {false, false};
      map[] = {false, false};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {false, false};
      clockIndicator[] = {false, false};
      3rdPersonView[] = {false, false};
      tracers[] = {false, false};
      ultraAI[] = {false, false};
      autoAim[] = {false, false};
      unlimitedSaves[] = {false, false};
    };
  };*/
};
