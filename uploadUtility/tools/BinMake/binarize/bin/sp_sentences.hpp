// speech sentences

//#include "commonDefs.hpp" included already in config.cpp
#include "languages.hpp"

class RadioProtocol
{
	access=ReadAndWrite;

  // channels
  class GlobalChannel // global radio
  {
    level = 1;
    noise = "loop";
    micOuts = "micOuts";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class SideChannel // side radio
  {
    level = 2;
    noise = "loop";
    micOuts = "micOuts";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class GroupChannel // group radio
  {
    level = 3;
    noise = "loop";
    micOuts = "micOuts";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class VehicleChannel // vehicle intercom
  {
    level = 4;
    noise = "";
    micOuts = "";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class DirectSpeakingChannel
  {
    level = 0;
    noise = "";
    micOuts = "";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;

    sound3D = true;
  };

  // priorities
	class Default
	{
		priority = 0;
		timeout = 1000.0;	// never
	};

	class Report
	{
		priority = 100;
		timeout = 30.0;
	};
	class PriorityReport
	{
		priority = 200;
		timeout = 60.0;
	};


	class Confirmation
	{
		priority = 300;
		timeout = 3.0;
	};

	class Completition
	{
		priority = 400;
		timeout = 5.0;
	};
	class JoinCompleted
	{
		priority = 400;
		timeout = 30.0;
	};

	class Failure
	{
		priority = 500;
		timeout = 30.0;
	};

	class Notify
	{
		priority = 600;
		timeout = 5.0;
	};

	class Detected
	{
		priority = 700;
		timeout = 5.0;
	};

	class NormalCommand
	{
		priority = 800;
		timeout = 1000.0; // never
	};

	class CriticalReport
	{
		priority = 850;
		timeout = 60.0;
	};

	class UrgentCommand
	{
		priority = 900;
		timeout = 1000.0; // never
	};
	class UICommand	// command with context == CtxUI
	{
		priority = 1000;
		timeout = 1000.0; // never
	};
	class Design
	{
		priority = 950;
		timeout = 1000.0; // never
	};

  // sentences

	class SentUnitKilled: CriticalReport
	{
		versions[] =
		{
			Version1, 0.5,
			Version2, 0.3,
			Version3, 0.2
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_UNIT_KILLED_1;
			SpEnglish[] = {%1.1, IsDown};
			SpCzech[] = {%1.1, IsDown};
		};
		class Version2
		{
			text = $STR_SENT_UNIT_KILLED_2;
			SpEnglish[] = {Damned, %1.1, IsDown};
			SpCzech[] = {Damned, %1.1, IsDown};
		};
		class Version3
		{
			text = $STR_SENT_UNIT_KILLED_3;
			SpEnglish[] = {OhNo, %1.1, IsDown};
			SpCzech[] = {OhNo, %1.1, IsDown};
		};
	};
/* !!! Not Used
	class SentAskHeal: NormalCommand
	{
		versions[] = {Version1};
		// params:
		class Version1
		{
			//text = "HELP! I NEED MEDIC!";
			text = "MEDIC!";
			SpEnglish[] = {needMedic};
			SpCzech[] = {needMedic};
		};
	};
	class SentAskRepair: NormalCommand
	{
		versions[] = {Version1};
		// params:
		class Version1
		{
			//text = "HELP! REPAIR MY VEHICLE!";
			text = "NEED REPAIRS!";
			SpEnglish[] = {needRepairs};
			SpCzech[] = {needRapairs};
		};
	};
	class SentAskRefuel: NormalCommand
	{
		versions[] = {Version1};
		// params:
		class Version1
		{
			//text = "HELP! I NEED SOME FUEL!";
			text = "NEED FUEL!";
			SpEnglish[] = {needFuel};
			SpCzech[] = {needFuel};
		};
	};
	class SentAskRearm: NormalCommand
	{
		versions[] = {Version1};
		// params:
		class Version1
		{
			//text = "HELP! I NEED AMMUNITION!";
			text = "NEED AMMO!";
			SpEnglish[] = {needAmmo};
			SpCzech[] = {needAmmo};
		};
	};
	class SentAskSupply: NormalCommand
	{
		versions[] = {Version1};
		// params:
		class Version1
		{
			//text = "HELP! I NEED SUPPORT!";
			text = "REQUEST SUPPORT!";
			SpEnglish[] = {requestSupport};
			SpCzech[] = {requestSupport};
		};
	};
*/

	class SentSupportAskHeal: NormalCommand
	{
		versions[] = {Version1};
		// params:
		// 1 - position
		class Version1
		{
			text = $STR_SENT_SUPPORT_ASK_HEAL_1;
			SpEnglish[] = {needMedic, %1};
			SpCzech[] = {needMedic, %1};
		};
	};
	class SentSupportAskRepair: NormalCommand
	{
		versions[] = {Version1};
		// params:
		// 1 - position
		class Version1
		{
			text = $STR_SENT_SUPPORT_ASK_REPAIR_1;
			SpEnglish[] = {needRepairs, %1};
			SpCzech[] = {needRepairs, %1};
		};
	};
	class SentSupportAskRefuel: NormalCommand
	{
		versions[] = {Version1};
		// params:
		// 1 - position
		class Version1
		{
			text = $STR_SENT_SUPPORT_ASK_REFUEL_1;
			SpEnglish[] = {needFuel, %1};
			SpCzech[] = {needFuel, %1};
		};
	};
	class SentSupportAskRearm: NormalCommand
	{
		versions[] = {Version1};
		// params:
		// 1 - position
		class Version1
		{
			text = $STR_SENT_SUPPORT_ASK_REARM_1;
			SpEnglish[] = {needAmmo, %1};
			SpCzech[] = {needAmmo, %1};
		};
	};
	class SentSupportConfirm: NormalCommand
	{
		versions[] = {Version1};
		// params:
		// 1 - group
		// 2 - position
		class Version1
		{
			text = $STR_SENT_SUPPORT_CONFIRM_1;
			SpEnglish[] = {supporting, at, Position, %2};
			SpCzech[] = {supporting, position, %2};
		};
	};
	class SentSupportReady: NormalCommand
	{
		versions[] = {Version1};
		// params:
		// 1 - group
		// 2 - position
		class Version1
		{
			text = $STR_SENT_SUPPORT_READY_1;
			//SpEnglish[] = {BeepBeep, Position, %2, %1};
			//SpCzech[] = {BeepBeep, Position, %2, %1};
			SpEnglish[] = {Position, %2, Supporting};
			SpCzech[] = {Position, %2, Supporting};
		};
	};
	class SentSupportDone: NormalCommand
	{
		versions[] = {Version1};
		// params:
		class Version1
		{
			text = $STR_SENT_SUPPORT_DONE_1;
			SpEnglish[] = {supportDone};
			SpCzech[] = {supportDone};
		};
	};
	class SentSupportNotAvailable: NormalCommand
	{
		versions[] = {Version1};
		// params:
		class Version1
		{
			text = $STR_SENT_COMMAND_FAILED_1;
			SpEnglish[] = {Negative}; //to be added
			SpCzech[] = {Negative}; //to be added
		};
	};

	class SentHealthCritical: CriticalReport
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_HEALTH_CRITICAL_1;
			SpEnglish[] = {%1.1, Injured};
			SpCzech[] = {%1.1, Injured};
		};

	};
	class SentDammageCritical: CriticalReport
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_DAMMAGE_CRITICAL_1;
			SpEnglish[] = {%1.1, statusRed};
			SpCzech[] = {%1.1, statusRed};
		};

	};
	class SentFuelCritical: CriticalReport
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FUEL_CRITICAL_1;
			SpEnglish[] = {%1.1, outOfFuel};
			SpCzech[] = {%1.1, outOfFuel};
		};
	};
	class SentFuelLow: Report
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FUEL_LOW_1;
			SpEnglish[] = {%1.1, FuelLow};
			SpCzech[] = {%1.1, FuelLow};
		};
	};
	class SentAmmoCritical: CriticalReport
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_AMMO_CRITICAL_1;
			SpEnglish[] = {%1.1, outOfAmmo};
			SpCzech[] = {%1.1, outOfAmmo};
		};
	};
	class SentAmmoLow: Report
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_AMMO_LOW_1;
			SpEnglish[] = {%1.1, ammoLow};
			SpCzech[] = {%1.1, ammoLow};
		};
	};
	class SentReportPosition: Report
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		// 2 - square in map
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_REPORT_POSITION_1;
			SpEnglish[] = {%1, Position, %2};
			SpCzech[] = {%1, Position, %2};
		};
	};
	class SentIsLeader: CriticalReport
	{
		versions[] =
		{
			Version1, 0.5,
			Version2, 0.5
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_IS_LEADER_1;
			SpEnglish[] = {%1, TakingCommand};
			SpCzech[] = {%1, TakingCommand};
		};
		class Version2
		{
			text = $STR_SENT_IS_LEADER_2;
			SpEnglish[] = {ThisIs, %1, TakingCommand, ISayAgain, %1, TakingCommand, Out};
			SpCzech[] = {ThisIs, %1, TakingCommand, ISayAgain, %1, TakingCommand, Out};
		};
	};
	class SentCommandCompleted: Completition
	{
		versions[] =
		{
			Version1, 0.5,
			Version2
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_COMMAND_COMPLETED_1;
			SpEnglish[] = {%1, Ready};
			SpCzech[] = {%1, Ready};
		};
		class Version2
		{
			text = $STR_SENT_COMMAND_COMPLETED_2;
			SpEnglish[] = {%1, Waiting};
			SpCzech[] = {%1, Waiting};
		};
	};

	class SentJoinCompleted: JoinCompleted
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_COMMAND_COMPLETED_1;
			SpEnglish[] = {%1, Ready};
			SpCzech[] = {%1, Ready};
		};
	};

	class SentFireReady: Completition
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FIRE_READY_1;
			SpEnglish[] = {%1, ReadyToFire};
			SpCzech[] = {%1, ReadyToFire};
		};
	};
	class SentFireNegative: Completition
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FIRE_NEGATIVE_1;
			SpEnglish[] = {%1, CannotFire};
			SpCzech[] = {%1, CannotFire};
		};
	};

	class SentCommandFailed: Failure
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_COMMAND_FAILED_1;
			SpEnglish[] = {%1, Negative};
			SpCzech[] = {%1, Negative};
		};
	};
	class SentDestinationUnreacheable: Failure
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_DESTINATION_UNREACHEABLE_1;
			SpEnglish[] = {%1, canNotGetThere};
			SpCzech[] = {%1, canNotGetThere};
		};
	};

	class SentEnemyDetected: Detected
	{
		versions[] =
		{
			Version1,0.5,
			Version2
		};
		// params:
		// 1 - who reported ID
		// 2 - target
		// 3 - position
		// 4 - side
		// 5 - distance
		class Version1
		{
			text = $STR_SENT_ENEMY_DETECTED_1;
			SpEnglish[] = {%3, %4, %2, at, %5};
			SpCzech[] = {%3, %4, %2, %5};
		};
		class Version2
		{
			text = $STR_SENT_ENEMY_DETECTED_2;
			SpEnglish[] = {%3, %2, at, %5};
			SpCzech[] = {%3, %2, %5};
		};
	};
	class SentEnemyDetectedFar: Detected
	{
		versions[] =
		{
			Version1,0.5,
			Version2
		};
		// params:
		// 1 - who reported ID
		// 2 - target
		// 3 - position
		// 4 - side
		// 5 - distance
		class Version1
		{
			text = $STR_SENT_ENEMY_DETECTED_FAR_1;
			SpEnglish[] = {%1, %3, %4, %2, at, %5};
			SpCzech[] = {%1, %3, %4, %2, %5};
		};
		class Version2
		{
			text = $STR_SENT_ENEMY_DETECTED_FAR_2;
			SpEnglish[] = {%1, %3, %2, at, %5};
			SpCzech[] = {%1, %3, %2, %5};
		};
	};
	class SentEnemyDetectedSimple: Detected
	{
		// used for empty (civilian) target
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		// 2 - target
		// 3 - position
		// 4 - side
		// 5 - distance
		class Version1
		{
			text = $STR_SENT_ENEMY_DETECTED_SIMPLE_1;
			SpEnglish[] = {%3, %2, at, %5};
			SpCzech[] = {%3, %2, %5};
		};
	};
	class SentEnemyDetectedSimpleFar: Detected
	{
		// used for empty (civilian) target
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		// 2 - target
		// 3 - position
		// 4 - side
		// 5 - distance
		class Version1
		{
			text = $STR_SENT_ENEMY_DETECTED_SIMPLE_FAR_1;
			SpEnglish[] = {%1, %3, %2};
			SpCzech[] = {%1, %3, %2};
		};
	};
	class SentObjectDestroyed : Completition
	{
		versions[] =
		{
			Version1, 0.5,
			Version2
		};
		// params:
		// 1 - who reported ID
		// 2 - target
		class Version1
		{
			text = $STR_SENT_OBJECT_DESTROYED_1;
			SpEnglish[] = {iVeGotHim};
			SpCzech[] = {iVeGotHim};
		};
		class Version2
		{
			text = $STR_SENT_OBJECT_DESTROYED_2;
			SpEnglish[] = {%2, isHistory};
			SpCzech[] = {%2, isHistory};
		};
	};
	class SentObjectDestroyedUnknown : Completition
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		class Version1
		{
			text = $STR_SENT_OBJECT_DESTROYED_UNKNOWN_1;
			SpEnglish[] = {iVeGotHim};
			SpCzech[] = {iVeGotHim};
		};
	};
	class SentContact : UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		class Version1
		{
			text = $STR_SENT_CONTACT_1;
			SpEnglish[] = {contact};
			SpCzech[] = {contact};
		};
	};
	class SentUnderFire : UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		class Version1
		{
			text = $STR_SENT_UNDER_FIRE_1;
			SpEnglish[] = {underFire};
			SpCzech[] = {underFire};
		};
	};
	class SentClear : NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		class Version1
		{
			text = $STR_SENT_CLEAR_1;
			SpEnglish[] = {clear};
			SpCzech[] = {clear};
		};
	};
	class SentRepeatCommand : NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		class Version1
		{
			text = $STR_SENT_REPEAT_COMMAND_1;
			SpEnglish[] = {repeat};
			SpCzech[] = {repeat};
		};
	};
	class SentWhereAreYou : NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - who reported ID
		class Version1
		{
			text = $STR_SENT_WHERE_ARE_YOU_1;
			SpEnglish[] = {whereAreYou};
			SpCzech[] = {whereAreYou};
		};
	};
	class SentReturnToFormation: NormalCommand
	{
		versions[] =
		{
			Version1, 0.4,
			Version2, 0.6
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_RETURN_TO_FORMATION_1;
			SpEnglish[] = {%1, returnToFormation};
			SpCzech[] = {%1, returnToFormation};
		};
		class Version2
		{
			text = $STR_SENT_RETURN_TO_FORMATION_2;
			SpEnglish[] = {%1, fallBackIntoFormation};
			SpCzech[] = {%1, fallBackIntoFormation};
		};
	};

	class SentFormColumn: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_COLUMN_1;
			SpEnglish[] = {FormColumn};
			SpCzech[] = {FormColumn};
		};
	};
	class SentFormStaggeredColumn: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_STAGGERED_COLUMN_1;
			SpEnglish[] = {FormStageredColumn};
			SpCzech[] = {FormStageredColumn};
		};
	};
	class SentFormWedge: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_WEDGE_1;
			SpEnglish[] = {FormWedge};
			SpCzech[] = {FormWedge};
		};
	};
	class SentFormEcholonLeft: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_ECHOLON_LEFT_1;
			SpEnglish[] = {FormEchelonLeft};
			SpCzech[] = {FormEchelonLeft};
		};
	};
	class SentFormEcholonRight: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_ECHOLON_RIGHT_1;
			SpEnglish[] = {FormEchelonRight};
			SpCzech[] = {FormEchelonRight};
		};
	};
	class SentFormVee: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_VEE_1;
			SpEnglish[] = {FormVee};
			SpCzech[] = {FormVee};
		};
	};
	class SentFormLine: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_LINE_1;
			SpEnglish[] = {FormLine};
			SpCzech[] = {FormLine};
		};
	};

	class SentFormFile: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_COLUMN_COMPACT_1;
			SpEnglish[] = {FormFile};
			SpCzech[] = {FormFile};
		};
	};
	class SentFormDiamond: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		class Version1
		{
			text = $STR_SENT_FORM_DELTA_1;
			SpEnglish[] = {FormDiamond};
			SpCzech[] = {FormDiamond};
		};
	};

	class SentBehaviourCareless : NormalCommand
	{
		// TODO:
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			//text = "%1, CARELESS";
			text = $STR_SENT_BEHAVIOUR_CARELESS_1;
			SpEnglish[] = {%1.1, Careless};
			SpCzech[] = {%1.1, Careless};
		};
	};
	class SentBehaviourSafe : NormalCommand
	{
		// TODO:
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_BEHAVIOUR_SAFE_1;
			SpEnglish[] = {%1.1, AtEase};
			SpCzech[] = {%1.1, AtEase};
		};
	};
	class SentBehaviourAware : NormalCommand
	{
		// TODO:
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_BEHAVIOUR_AWARE_1;
			SpEnglish[] = {%1.1, StayAlert};
			SpCzech[] = {%1.1, StayAlert};
		};
	};
	class SentBehaviourCombat : NormalCommand
	{
		// TODO:
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_BEHAVIOUR_COMBAT_1;
			SpEnglish[] = {%1.1, Danger};
			SpCzech[] = {%1.1, Danger};
		};
	};
	class SentBehaviourStealth : NormalCommand
	{
		// TODO:
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_BEHAVIOUR_STEALTH_1;
			SpEnglish[] = {%1.1, stealth};
			SpCzech[] = {%1.1, stealth};
		};
	};
	class SentOpenFire: NormalCommand
	{
		versions[] =
		{
			Version1, 0.5,
			Version2
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_OPEN_FIRE_1;
			SpEnglish[] = {%1.1, FireAtWill};
			SpCzech[] = {%1.1, FireAtWill};
		};
		class Version2
		{
			text = $STR_SENT_OPEN_FIRE_2;
			SpEnglish[] = {%1.1, WeaponsFree};
			SpCzech[] = {%1.1, WeaponsFree};
		};
	};
	class SentOpenFireInCombat: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_OPEN_FIRE_IN_COMBAT_1;
			SpEnglish[] = {%1.1, GoGoGo};
			SpCzech[] = {%1.1, GoGoGo};
		};
	};
	class SentHoldFire: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_HOLD_FIRE_1;
			SpEnglish[] = {%1.1, HoldFire};
			SpCzech[] = {%1.1, HoldFire};
		};
	};
	class SentHoldFireInCombat: UrgentCommand
	{
		versions[] =
		{
			Version1, 0.5,
			Version2
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_HOLD_FIRE_IN_COMBAT_1;
			SpEnglish[] = {%1.1, CeaseFire};
			SpCzech[] = {%1.1, CeaseFire};
		};
		class Version2
		{
			text = $STR_SENT_HOLD_FIRE_IN_COMBAT_2;
			SpEnglish[] = {%1.1, DontFire};
			SpCzech[] = {%1.1, DontFire};
		};
	};
	class SentCeaseFireInsideGroup: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit
		class Version1
		{
			text = $STR_SENT_CEASE_FIRE_INSIDE_GROUP_1;
			SpEnglish[] = {%1.1, CeaseFire};
			SpCzech[] = {%1.1, CeaseFire};
		};
	};
	class SentCeaseFire: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - group
		// 2 - unit
		class Version1
		{
			text = $STR_SENT_CEASE_FIRE_1;
			SpEnglish[] = {%2.1, CeaseFire};
			SpCzech[] = {%2.1, CeaseFire};
		};
	};
	class SentLooseFormation: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_LOOSE_FORMATION_1;
			SpEnglish[] = {%1.1, engageAtWill};
			SpCzech[] = {%1.1, engageAtWill};
		};
	};
	class SentKeepFormation: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_KEEP_FORMATION_1;
			SpEnglish[] = {%1.1, disengage};
			SpCzech[] = {%1.1, disengage};
		};
	};
	class SentUnitPosDown: NormalCommand
	{
		versions[] =
		{
			Version1, 0.3,
			Version2, 0.3,
			Version3, 0.4
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_UNIT_POS_DOWN_1;
			SpEnglish[] = {%1.1, goProne};
			SpCzech[] = {%1.1, goProne};
		};
		class Version2
		{
			text = $STR_SENT_UNIT_POS_DOWN_2;
			SpEnglish[] = {%1.1, hitTheDirt};
			SpCzech[] = {%1.1, hitTheDirt};
		};
		class Version3
		{
			text = $STR_SENT_UNIT_POS_DOWN_3;
			SpEnglish[] = {%1.1, getDown};
			SpCzech[] = {%1.1, getDown};
		};
	};
	class SentUnitPosMiddle: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_UNIT_POS_CROUCHED_1;
			SpEnglish[] = {%1.1, stayCrouch};
			SpCzech[] = {%1.1, stayCrouch};
		};
	};
	class SentUnitPosUp: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_UNIT_POS_UP_1;
			SpEnglish[] = {%1.1, StandUp};
			SpCzech[] = {%1.1, StandUp};
		};
	};
	class SentUnitPosAuto: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_UNIT_POS_AUTO_1;
			SpEnglish[] = {%1.1, KeepLow};
			SpCzech[] = {%1.1, KeepLow};
		};
	};
	class SentFormPosAdvance: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_FORM_POS_ADVANCE_1;
			SpEnglish[] = {%1.1, Advance};
			SpCzech[] = {%1.1, Advance};
		};
	};
	class SentFormPosStayBack: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_FORM_POS_STAY_BACK_1;
			SpEnglish[] = {%1.1, StayBack};
			SpCzech[] = {%1.1, StayBack};
		};
	};
	class SentFormPosFlankLeft: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_FORM_POS_FLANK_LEFT_1;
			SpEnglish[] = {%1.1, FlankLeft};
			SpCzech[] = {%1.1, FlankLeft};
		};
	};
	class SentFormPosFlankRight: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_FORM_POS_FLANK_RIGHT_1;
			SpEnglish[] = {%1.1, FlankRight};
			SpCzech[] = {%1.1, FlankRight};
		};
	};
	class SentReportStatus: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_REPORT_STATUS_1;
			SpEnglish[] = {%1.1, ReportStatus};
			SpCzech[] = {%1.1, ReportStatus};
		};
	};
	class SentTeam: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list, 2 - team
		class Version1
		{
			text = $STR_SENT_TEAM_1;
			SpEnglish[] = {%1.1, Is, %2};
			SpCzech[] = {%1.1, Is, %2};
		};
	};
  class SentTeamPlural: NormalCommand
  {
    versions[] =
    {
      Version2
    };
    // params:
    // 1 - unit list, 2 - team
    class Version2
    {
      text = $STR_SENT_TEAM_2;
      SpEnglish[] = {%1.1, Are, %2};
      SpCzech[] = {%1.1, Are, %2};
    };
  };

	class SentWatchTgt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_WATCH_TGT_1;
			SpEnglish[] = {%1.1, Watch, that, %2};
			SpCzech[] = {%1.1, Watch, that, %2};
		};
	};
	class SentWatchDir: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_WATCH_DIR_1;
			SpEnglish[] = {%1.1, Watch, %2};
			SpCzech[] = {%1.1, Watch, %2};
		};
	};
	class SentWatchPos: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_WATCH_POS_1;
			SpEnglish[] = {%1.1, Watch, %2};
			SpCzech[] = {%1.1, Watch, %2};
		};
	};
	class SentWatchAround: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_WATCH_AROUND_1;
			SpEnglish[] = {%1.1, scanHorizon};
			SpCzech[] = {%1.1, scanHorizon};
		};
	};
	class SentNoTarget: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_NO_TARGET_1;
			SpEnglish[] = {%1.1, NoTarget};
			SpCzech[] = {%1.1, NoTarget};
		};
	};

	class SentTarget: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - sender
		class Version1
		{
			text = $STR_SENT_TARGET_1;
			SpEnglish[] = {%1, Target, that, %2};
			SpCzech[] = {%1, Target, that, %2};
		};
	};
	class SentEngage: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - sender
		class Version1
		{
			text = $STR_SENT_ENGAGE_1;
			SpEnglish[] = {%1, Engage, that, %2};
			SpCzech[] = {%1, Engage, that, %2};
		};
	};
	class SentFire: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - sender
		class Version1
		{
			text = $STR_SENT_FIRE_1;
			SpEnglish[] = {%1, FireAt, that, %2};
			SpCzech[] = {%1, FireAt, that, %2};
		};
	};

	class SentEngageNoTarget: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - sender
		class Version1
		{
			text = $STR_SENT_ENGAGE_NO_TARGET_1;
			SpEnglish[] = {%1, Engage};
			SpCzech[] = {%1, Engage};
		};
	};
	class SentFireNoTarget: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - sender
		class Version1
		{
			text = $STR_SENT_FIRE_NO_TARGET_1;
			SpEnglish[] = {%1, Fire};
			SpCzech[] = {%1, Fire};
		};
	};

	class SentCmdMove: NormalCommand
	{
		versions[] =
		{
			Version1, 0.5,
			Version2, 0.5
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_MOVE_1;
			SpEnglish[] = {%1.1, MoveTo, %2, XMIT, %3};
			SpCzech[] = {%1.1, MoveTo, %2, XMIT, %3};
		};
		class Version2
		{
			text = $STR_SENT_CMD_MOVE_2;
			SpEnglish[] = {%1.1, GoTo, %2, XMIT, %3};
			SpCzech[] = {%1.1, GoTo, %2, XMIT, %3};
		};
	};
	class SentCmdMoveFar: NormalCommand
	{
		versions[] =
		{
			Version1, 0.5,
			Version2, 0.5
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		// 3 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_MOVE_FAR_1;
			SpEnglish[] = {%1.1, MoveTo, %2};
			SpCzech[] = {%1.1, MoveTo, %2};
		};
		class Version2
		{
			text = $STR_SENT_CMD_MOVE_FAR_2;
			SpEnglish[] = {%1.1, GoTo, %2};
			SpCzech[] = {%1.1, GoTo, %2};
		};
	};
	class SentCmdMoveTo: NormalCommand
	{
		versions[] =
		{
			Version1, 0.5,
			Version2, 0.5
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		// that/at?
		class Version1
		{
			text = $STR_SENT_CMD_MOVE_TO_1;
			SpEnglish[] = {%1.1, MoveTo, that, %2, at, %3};
			SpCzech[] = {%1.1, MoveTo, that, %2, at, %3};
		};
		class Version2
		{
			text = $STR_SENT_CMD_MOVE_TO_2;
			SpEnglish[] = {%1.1, GoTo, that, %2, at, %3};
			SpCzech[] = {%1.1, GoTo, that, %2, at, %3};
		};
	};
	class SentCmdMoveNear: NormalCommand
	{
		versions[] =
		{
			Version1, 1.0
		};
		// params:
		// 1 - unit list
		// 2 - object
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_MOVE_NEAR_1;
			SpEnglish[] = {%1.1, moveTo, that, %2, at, %3};
			SpCzech[] = {%1.1, moveTo, that, %2, at, %3};
		};
	};
	class SentCmdHeal: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_HEAL_1;
			SpEnglish[] = {%1.1, HealAt, %2, %3};
			SpCzech[] = {%1.1, HealAt, %2, %3};
		};
	};
	class SentCmdHealFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		// 3 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_HEAL_FAR_1;
			SpEnglish[] = {%1.1, HealAt, %2};
			SpCzech[] = {%1.1, HealAt, %2};
		};
	};
	class SentCmdHealAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_HEAL_AT_1;
			SpEnglish[] = {%1.1, GoTo, that, %2, at, %3};
			SpCzech[] = {%1.1, GoTo, that, %2, at, %3};
		};
	};
	class SentCmdRepair: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_REPAIR_1;
			SpEnglish[] = {%1.1, RepairAt, %2, %3};
			SpCzech[] = {%1.1, RepairAt, %2, %3};
		};
	};
	class SentCmdRepairFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		// 3 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_REPAIR_FAR_1;
			SpEnglish[] = {%1.1, RepairAt, %2};
			SpCzech[] = {%1.1, RepairAt, %2};
		};
	};
	class SentCmdRepairAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_REPAIR_AT_1;
			SpEnglish[] = {%1.1, RepairAt, that, %2, at, %3};
			SpCzech[] = {%1.1, RepairAt, that, %2, at, %3};
		};
	};
	class SentCmdRefuel: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_REFUEL_1;
			SpEnglish[] = {%1.1, RefuelAt, %2, %3};
			SpCzech[] = {%1.1, RefuelAt, %2, %3};
		};
	};
	class SentCmdRefuelFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		// 3 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_REFUEL_FAR_1;
			SpEnglish[] = {%1.1, RefuelAt, %2};
			SpCzech[] = {%1.1, RefuelAt, %2};
		};
	};
	class SentCmdRefuelAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_REFUEL_AT_1;
			SpEnglish[] = {%1.1, RefuelAt, that, %2, at, %3};
			SpCzech[] = {%1.1, RefuelAt, that, %2, at, %3};
		};
	};
	class SentCmdRearm: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_REARM_1;
			SpEnglish[] = {%1.1, RearmAt, %2, %3};
			SpCzech[] = {%1.1, RearmAt, %2, %3};
		};
	};
	class SentCmdRearmFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		// 3 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_REARM_FAR_1;
			SpEnglish[] = {%1.1, RearmAt, %2};
			SpCzech[] = {%1.1, RearmAt, %2};
		};
	};
	class SentCmdRearmAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target - not in use now
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_REARM_AT_1;
			SpEnglish[] = {%1.1, RearmAt, %3};
			SpCzech[] = {%1.1, RearmAt, %3};
		};
	};

// Marek Please supply more info on the commands below, where it is used and in
// what Context. This comment applies to the 3 support commands below.


	class SentCmdSupport: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_SUPPORT_1;
			SpEnglish[] = {%1.1, supportat, at, %2, %3};
			SpCzech[] = {%1.1, supportat, at, %2, %3};
		};
	};
	class SentCmdSupportFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		// 3 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_SUPPORT_FAR_1;
			SpEnglish[] = {%1.1, supportat, at, %2};
			SpCzech[] = {%1.1, supportat, at, %2};
		};
	};
	class SentCmdSupportAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_SUPPORT_AT_1;
			SpEnglish[] = {%1.1, supportat, that, %2, at, %3};
			SpCzech[] = {%1.1, supportat, that, %2, at, %3};
		};
	};
	class SentCmdDropWeapon: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - weapon
		class Version1
		{
			text = $STR_SENT_CMD_DROP_WEAPON_1;
			SpEnglish[] = {%1.1, drop, that, %2};
			SpCzech[] = {%1.1, drop, that, %2};
		};
	};
	class SentCmdDropMagazine: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - magazine
		class Version1
		{
			text = $STR_SENT_CMD_DROP_MAGAZINE_1;
			SpEnglish[] = {%1.1, drop, that, magazine};
			SpCzech[] = {%1.1, drop, that, magazine};
		};
	};
	class SentCmdTakeWeapon: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - weapon
		// 3 - azimut
		// 4 - distance
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_WEAPON_1;
			SpEnglish[] = {%1.1, Take, that, %2, From, %3, %4};
			SpCzech[] = {%1.1, Take, that, %2, From, %3, %4};
		};
	};
	class SentCmdTakeWeaponFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - weapon
		// 3 - square in map
		// 4 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_WEAPON_FAR_1;
			SpEnglish[] = {%1.1, Take, that, %2, From, %3};
			SpCzech[] = {%1.1, Take, that, %2, From, %3};
		};
	};
	class SentCmdTakeWeaponAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - weapon
		// 3 - target
		// 4 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_WEAPON_AT_1;
			SpEnglish[] = {%1.1, Take, that, %2, From, that, %3, at, %4};
			SpCzech[] = {%1.1, Take, that, %2, From, that, %3, at, %4};
		};
	};
	class SentCmdTakeMagazine: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_MAGAZINE_1;
			SpEnglish[] = {%1.1, Take, that, Magazine, From, %2, %3};
			SpCzech[] = {%1.1, Take, that, Magazine, From, %2, %3};
		};
	};
	class SentCmdTakeMagazineFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		// 3 - sender ID
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_MAGAZINE_FAR_1;
			SpEnglish[] = {%1.1, Take, that, Magazine, From, %2};
			SpCzech[] = {%1.1, Take, that, Magazine, From, %2};
		};
	};
	class SentCmdTakeMagazineAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_MAGAZINE_AT_1;
			SpEnglish[] = {%1.1, Take, that, Magazine, From, that, %2, at, %3};
			SpCzech[] = {%1.1, Take, that, Magazine, From, that, %2, at, %3};
		};
	};
	class SentCmdAction: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - action
		// 3 - azimut
		// 4 - distance
		class Version1
		{
			text = $STR_SENT_CMD_ACTION_1;
			SpEnglish[] = {};
			SpCzech[] = {};
		};
	};
  	class SentCmdActionNear: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - action
		class Version1
		{
			text = $STR_SENT_CMD_ACTION_NEAR_1;
			SpEnglish[] = {};
			SpCzech[] = {};
		};
	};
	class SentCmdActionFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - action
		// 3 - square in map
		class Version1
		{
			text = $STR_SENT_CMD_ACTION_FAR_1;
			SpEnglish[] = {};
			SpCzech[] = {};
		};
	};
	class SentCmdActionAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - action
		// 3 - target
		// 4 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_ACTION_AT_1;
			SpEnglish[] = {};
			SpCzech[] = {};
		};
	};

	// new actions
	class SentCmdTakeFlag: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_FLAG_1;
			SpEnglish[] = {%1.1, takeflag, at, %2, %3};
			SpCzech[] = {%1.1, takeflag, at, %2, %3};
		};
	};
	class SentCmdTakeFlagFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_FLAG_FAR_1;
			SpEnglish[] = {%1.1, takeflag, at, %2};
			SpCzech[] = {%1.1, takeflag, at, %2};
		};
	};
	class SentCmdTakeFlagAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_FLAG_AT_1;
			SpEnglish[] = {%1.1, takeflag, at, that, %2, at, %3};
			SpCzech[] = {%1.1, takeflag, at, that, %2, at, %3};
		};
	};
	class SentCmdReturnFlag: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_RETURN_FLAG_1;
			SpEnglish[] = {%1.1, returnflag, at, %2, %3};
			SpCzech[] = {%1.1, returnflag, at, %2, %3};
		};
	};
	class SentCmdReturnFlagFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		class Version1
		{
			text = $STR_SENT_CMD_RETURN_FLAG_FAR_1;
			SpEnglish[] = {%1.1, returnflag, at, %2};
			SpCzech[] = {%1.1, returnflag, at, %2};
		};
	};
	class SentCmdReturnFlagAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_RETURN_FLAG_AT_1;
			SpEnglish[] = {%1.1, returnflag, at, that, %2, at, %3};
			SpCzech[] = {%1.1, returnflag, at, that, %2, at, %3};
		};
	};
	class SentCmdEject: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_EJECT_1;
			SpEnglish[] = {%1.1, eject};
			SpCzech[] = {%1.1, eject};
		};
	};
	class SentCmdPlaceCharge: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_PLACE_CHARGE_1;
			SpEnglish[] = {%1.1, placecharge};
			SpCzech[] = {%1.1, placecharge};
		};
	};
	class SentCmdDetonate: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_DETONATE_1;
			SpEnglish[] = {%1.1, detonate};
			SpCzech[] = {%1.1, detonate};
		};
	};
	class SentCmdActivateTimer: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_ACTIVATE_TIMER_1;
			SpEnglish[] = {%1.1, activatetimer};
			SpCzech[] = {%1.1, activatetimer};
		};
	};
	class SentCmdDeactivateBomb: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_DEACTIVATE_BOMB_1;
			SpEnglish[] = {%1.1, deactivatebomb};
			SpCzech[] = {%1.1, deactivatebomb};
		};
	};
	class SentCmdDeactivateMine: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_DEACTIVATE_MINE_1;
			SpEnglish[] = {%1.1, deactivatemine};
			SpCzech[] = {%1.1, deactivatemine};
		};
	};
	class SentCmdTakeMine: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_TAKE_MINE_1;
			SpEnglish[] = {%1.1, pickupmine};
			SpCzech[] = {%1.1, pickupmine};
		};
	};
	class SentCmdLightFire: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_LIGHT_FIRE_1;
			SpEnglish[] = {%1.1, lightfire, at, %2, %3};
			SpCzech[] = {%1.1, lightfire, at, %2, %3};
		};
	};
	class SentCmdLightFireFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		class Version1
		{
			text = $STR_SENT_CMD_LIGHT_FIRE_FAR_1;
			SpEnglish[] = {%1.1, lightfire, at, %2};
			SpCzech[] = {%1.1, lightfire, at, %2};
		};
	};
	class SentCmdLightFireAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_LIGHT_FIRE_AT_1;
			SpEnglish[] = {%1.1, lightfire, at, %3};
			SpCzech[] = {%1.1, lightfire, at, %3};
		};
	};
	class SentCmdPutOutFire: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_PUT_OUT_FIRE_1;
			SpEnglish[] = {%1.1, putoutfire, at, %2, %3};
			SpCzech[] = {%1.1, putoutfire, at, %2, %3};
		};
	};
	class SentCmdPutOutFireFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		class Version1
		{
			text = $STR_SENT_CMD_PUT_OUT_FIRE_FAR_1;
			SpEnglish[] = {%1.1, putoutfire, at, %2};
			SpCzech[] = {%1.1, putoutfire, at, %2};
		};
	};
	class SentCmdPutOutFireAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_PUT_OUT_FIRE_AT_1;
			SpEnglish[] = {%1.1, putoutfire, at, %3};
			SpCzech[] = {%1.1, putoutfire, at, %3};
		};
	};
	class SentCmdOpenDoor: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_OPEN_DOOR_1;
			SpEnglish[] = {%1.1, opendoor, at, %2, %3};
			SpCzech[] = {%1.1, opendoor, at, %2, %3};
		};
	};
	class SentCmdOpenDoorFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		class Version1
		{
			text = $STR_SENT_CMD_OPEN_DOOR_FAR_1;
			SpEnglish[] = {%1.1, opendoor, at, %2};
			SpCzech[] = {%1.1, opendoor, at, %2};
		};
	};
	class SentCmdOpenDoorAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_OPEN_DOOR_AT_1;
			SpEnglish[] = {%1.1, opendoor, at, that, %2, at, %3};
			SpCzech[] = {%1.1, opendoor, at, that, %2, at, %3};
		};
	};
	class SentCmdCloseDoor: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - azimut
		// 3 - distance
		class Version1
		{
			text = $STR_SENT_CMD_CLOSE_DOOR_1;
			SpEnglish[] = {%1.1, closedoor, at, %2, %3};
			SpCzech[] = {%1.1, closedoor, at, %2, %3};
		};
	};
	class SentCmdCloseDoorFar: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - square in map
		class Version1
		{
			text = $STR_SENT_CMD_CLOSE_DOOR_FAR_1;
			SpEnglish[] = {%1.1, closedoor, at, %2};
			SpCzech[] = {%1.1, closedoor, at, %2};
		};
	};
	class SentCmdCloseDoorAt: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		// 3 - azimut
		class Version1
		{
			text = $STR_SENT_CMD_CLOSE_DOOR_AT_1;
			SpEnglish[] = {%1.1, closedoor, at, that, %2, at, %3};
			SpCzech[] = {%1.1, closedoor, at, that, %2, at, %3};
		};
	};

	class SentCmdFollowMe: UrgentCommand
	{
		versions[] =
		{
			Version1, 0.4,
			Version2, 0.6
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_FOLLOW_ME_1;
			SpEnglish[] = {%1.1, returnToFormation};
			SpCzech[] = {%1.1, returnToFormation};
		};
		class Version2
		{
			text = $STR_SENT_CMD_FOLLOW_ME_2;
			SpEnglish[] = {%1.1, fallBackIntoFormation};
			SpCzech[] = {%1.1, fallBackIntoFormation};
		};
	};
	class SentCmdFollow: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - whom
		class Version1
		{
			text = $STR_SENT_CMD_FOLLOW_1;
			SpEnglish[] = {%1.1, Follow, %2.1};
			SpCzech[] = {%1.1, Follow, %2.1};
		};
	};

	//TODO improve Attack/Fire commands
	class SentCmdAttack: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_ATTACK_1;
			SpEnglish[] = {%1.1, Attack, that, %2};
			SpCzech[] = {%1.1, Attack, that, %2};
		};
	};
	class SentAttackNoTarget: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_ATTACK_NO_TARGET_1;
			SpEnglish[] = {%1.1, Attack};
			SpCzech[] = {%1.1, Attack};
		};
	};
	class SentCmdFire: UrgentCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_FIRE_1;
			SpEnglish[] = {%1.1, FireAt, that, %2};
			SpCzech[] = {%1.1, FireAt, that, %2};
		};
	};
	class SentCmdGetIn: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_GETIN_1;
			SpEnglish[] = {%1.1, GetIn, that, %2};
			SpCzech[] = {%1.1, GetIn, that, %2};
		};
	};
	class SentCmdGetInCommander: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_GETIN_COMMANDER_1;
			SpEnglish[] = {%1.1, Commander, that, %2};
			SpCzech[] = {%1.1, Commander, that, %2};
		};
	};
	class SentCmdGetInDriver: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_GETIN_DRIVER_1;
			SpEnglish[] = {%1.1, Driver, that, %2};
			SpCzech[] = {%1.1, Driver, that, %2};
		};
	};
	class SentCmdGetInPilot: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_GETIN_PILOT_1;
			SpEnglish[] = {%1.1, Pilot, that, %2};
			SpCzech[] = {%1.1, Pilot, that, %2};
		};
	};
	class SentCmdGetInGunner: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_GETIN_GUNNER_1;
			SpEnglish[] = {%1.1, Gunner, that, %2};
			SpCzech[] = {%1.1, Gunner, that, %2};
		};
	};
	class SentCmdGetInCargo: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		// 2 - target
		class Version1
		{
			text = $STR_SENT_CMD_GETIN_CARGO_1;
			SpEnglish[] = {%1.1, Board, that, %2};
			SpCzech[] = {%1.1, Board, that, %2};
		};
	};
	class SentCmdSwitchToDriver: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_SWITCHTO_DRIVER_1;
			SpEnglish[] = {%1.1, switchDriver};
			SpCzech[] = {%1.1, switchDriver};
		};
	};
	class SentCmdSwitchToGunner: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_SWITCHTO_GUNNER_1;
			SpEnglish[] = {%1.1, switchGunner};
			SpCzech[] = {%1.1, switchGunner};
		};
	};
	class SentCmdSwitchToCommander: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_SWITCHTO_COMMANDER_1;
			SpEnglish[] = {%1.1, switchCommander};
			SpCzech[] = {%1.1, switchCommander};
		};
	};
	class SentCmdSwitchToCargo: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_SWITCHTO_CARGO_1;
			SpEnglish[] = {%1.1, switchCommander};
			SpCzech[] = {%1.1, switchCommander};
		};
	};
	class SentCmdGetOut: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_GETOUT_1;
			SpEnglish[] = {%1.1, Disembark};
			SpCzech[] = {%1.1, Disembark};
		};
	};
	class SentCmdStop: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_STOP_1;
			SpEnglish[] = {%1.1, halt};
			SpCzech[] = {%1.1, halt};
		};
	};
	class SentCmdExpect: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_EXPECT_1;
			SpEnglish[] = {%1.1, WaitForMe};
			SpCzech[] = {%1.1, WaitForMe};
		};
	};
	class SentCmdHide: NormalCommand
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit list
		class Version1
		{
			text = $STR_SENT_CMD_HIDE_1;
			SpEnglish[] = {%1.1, TakeCover};
			SpCzech[] = {%1.1, TakeCover};
		};
	};
  class SentCmdDismiss: NormalCommand
  {
    versions[] =
    {
      Version1
    };
    // params:
    // 1 - unit list
    class Version1
    {
      text = $STR_SENT_CMD_DISMISS_1;
      SpEnglish[] = {%1.1, BeepBeep};
      SpCzech[] = {%1.1, BeepBeep};
    };
  };
	class SentNotifyAttack: Notify
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		// 2 - target
		class Version1
		{
			text = $STR_SENT_NOTIFY_ATTACK_1;
			SpEnglish[] = {%1.1, Engaging};
			SpCzech[] = {%1.1, Engaging};
		};

	};
	class SentNotifySupport: Notify
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - unit ID
		// 2 - target
		class Version1
		{
			text = $STR_SENT_NOTIFY_SUPPORT_1;
			SpEnglish[] = {%1.1, supporting};
			SpCzech[] = {%1.1, supporting};
		};

	};
	class SentConfirmPrivate: Confirmation
	{
		versions[] =
		{
			Version1
		};
		// params:
		class Version1
		{
			text = $STR_SENT_CONFIRM_PRIVATE_1;
			SpEnglish[] = {Roger};
			SpCzech[] = {Roger};
		};
	};
	class SentConfirmMove: Confirmation
	{
		versions[] =
		{
			Version1, 0.6,
			Version2, 0.2,
			Version3, 0.2
		};
		// params:
		class Version1
		{
			text = $STR_SENT_CONFIRM_MOVE_1;
			SpEnglish[] = {Roger};
			SpCzech[] = {Roger};
		};
		class Version2
		{
			text = $STR_SENT_CONFIRM_MOVE_2;
			SpEnglish[] = {movingOn};
			SpCzech[] = {movingOn};
		};
		class Version3
		{
			text = $STR_SENT_CONFIRM_MOVE_3;
			SpEnglish[] = {OnTheWay};
			SpCzech[] = {OnTheWay};
		};
	};

	class SentConfirmAttack: Confirmation
	{
		versions[] =
		{
			Version1, 0.5,
			Version2, 0.25,
			Version3,
		};
		// params: none
		class Version1
		{
			text = $STR_SENT_CONFIRM_ATTACK_1;
			SpEnglish[] = {IAmOnHim};
			SpCzech[] = {IAmOnHim};
		};
		class Version2
		{
			text = $STR_SENT_CONFIRM_ATTACK_2;
			SpEnglish[] = {Roger};
			SpCzech[] = {Roger};
		};
		class Version3
		{
			text = $STR_SENT_CONFIRM_ATTACK_3;
			SpEnglish[] = {OnTheWay};
			SpCzech[] = {OnTheWay};
		};
	};
	class SentConfirmOther: Confirmation
	{
		versions[] =
		{
			Version1
		};
		// params:
		class Version1
		{
			text = $STR_SENT_CONFIRM_OTHER_1;
			SpEnglish[] = {Roger};
			SpCzech[] = {Roger};
		};
	};


	class VehicleMove
	{
		versions[] =
		{
			Version1,0.5,
			Version2,
		};
		// params:
		// 1 - azimut
		// 2 - distance
		class Version1
		{
			text = $STR_SENT_VEHICLE_MOVE_1;
			SpEnglish[] = {MoveTo, %1, XMIT, %2};
			SpCzech[] = {MoveTo, %1, XMIT, %2};
		};
		class Version2
		{
			text = $STR_SENT_VEHICLE_MOVE_2;
			SpEnglish[] = {GoTo, %1, XMIT, %2};
			SpCzech[] = {GoTo, %1, XMIT, %2};
		};
	};
  class VehicleWatchTgt
  {
    versions[] =
    {
      Version1
    };
    // params:
    // 1 - target
    // 2 - position
    class Version1
    {
      text = $STR_SENT_VEHICLE_WATCH_TGT_1;
      SpEnglish[] = {Watch, that, %1, XMIT, at, %2};
      SpCzech[] = {Watch, that, %1, XMIT, at, %2};
    };
  };
  class VehicleWatchPos
  {
    versions[] =
    {
      Version1
    };
    // params:
    // 1 - azimut
    // 2 - distance
    class Version1
    {
      text = $STR_SENT_VEHICLE_WATCH_POS_1;
      SpEnglish[] = {Watch, %1, XMIT, %2};
      SpCzech[] = {Watch, %1, XMIT, %2};
    };
  };
	class VehicleJoin
	{
		versions[] =
		{
			Version1
		};
		// params:
		// no
		class Version1
		{
			text = $STR_SENT_VEHICLE_JOIN_1;
			SpEnglish[] = {KeepFormation};
			SpCzech[] = {KeepFormation};
		};
	};
	class VehicleFire
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - target
		class Version1
		{
			text = $STR_SENT_VEHICLE_FIRE_1;
			SpEnglish[] = {FireAt, that, %1};
			SpCzech[] = {FireAt, that, %1};
		};
	};
	class VehicleTarget
	{
		versions[] =
		{
			Version1
		};
		// params:
		// 1 - target
		class Version1
		{
			text = $STR_SENT_VEHICLE_TARGET_1;
			SpEnglish[] = {Target, that, %1, XMIT, at, %2};
			SpCzech[] = {Target, that, %1, XMIT, at, %2};
		};
	};
	class VehicleNoTarget
	{
		versions[] =
		{
			Version1
		};
		// params:
		class Version1
		{
			text = $STR_SENT_VEHICLE_NO_TARGET_1;
			SpEnglish[] = {NoTarget};
			SpCzech[] = {NoTarget};
		};
	};
	class VehicleCeaseFire
	{
		versions[] =
		{
			Version1
		};
		// params:
		// no
		class Version1
		{
			text = $STR_SENT_VEHICLE_CEASE_FIRE_1;
			SpEnglish[] = {CeaseFire};
			SpCzech[] = {CeaseFire};
		};
	};
	class VehicleForward
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_FORWARD_1;
			SpEnglish[] = {XMIT,Forward};
			SpCzech[] = {XMIT,Forward};
		};
	};
	class VehicleStop
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_STOP_1;
			SpEnglish[] = {XMIT,Halt};
			SpCzech[] = {XMIT,Halt};
		};
	};
	class VehicleBackward
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_BACKWARD_1;
			SpEnglish[] = {XMIT,reverse};
			SpCzech[] = {XMIT,reverse};
		};
	};
	class VehicleFaster
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_FASTER_1;
			SpEnglish[] = {XMIT,Fast};
			SpCzech[] = {XMIT,Fast};
		};
	};
	class VehicleSlower
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_SLOWER_1;
			SpEnglish[] = {XMIT,Slow};
			SpCzech[] = {XMIT,Slow};
		};
	};
	class VehicleLeft
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_LEFT_1;
			SpEnglish[] = {XMIT,Left};
			SpCzech[] = {XMIT,Left};
		};
	};
	class VehicleRight
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_RIGHT_1;
			SpEnglish[] = {XMIT,Right};
			SpCzech[] = {XMIT,Right};
		};
	};
	class VehicleManualFire
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_MANUAL_FIRE_1;
			SpEnglish[] = {manualOn};
			SpCzech[] = {manualOn};
		};
	};
	class VehicleCancelManualFire
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_CANCEL_MANUAL_FIRE_1;
			SpEnglish[] = {manualOff};
			SpCzech[] = {manualOff};
		};
	};
	class VehicleDirectFire
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_DIRECT_FIRE_1;
			SpEnglish[] = {Fire};
			SpCzech[] = {Fire};
		};
	};
	class VehicleLoad
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_LOAD_1;
			SpEnglish[] = {%1};
			SpCzech[] = {%1};
		};
	};
  class VehicleLoadMagazine
  {
    versions[] =
    {
      Version1
    };
    // no params
    class Version1
    {
      text = $STR_SENT_VEHICLE_LOAD_MAGAZINE_1;
      SpEnglish[] = {%1};
      SpCzech[] = {%1};
    };
  };
	class VehicleAzimut
	{
		versions[] =
		{
			Version1
		};
		// no params
		class Version1
		{
			text = $STR_SENT_VEHICLE_AZIMUT_1;
			SpEnglish[] = {%1};
			SpCzech[] = {%1};
		};
	};
	class VehicleFireFailed
	{
		versions[] =
		{
			Version1, 0.5,
			Version2, 0.5
		};
		// params:
		// no
		class Version1
		{
			text = $STR_SENT_VEHICLE_FIRE_FAILED_1;
			SpEnglish[] = {Negative};
			SpCzech[] = {Negative};
		};
		class Version2
		{
			text = $STR_SENT_VEHICLE_FIRE_FAILED_2;
			SpEnglish[] = {CannotFire};
			SpCzech[] = {CannotFire};
		};
	};

  class ClausePosition
  {
    // params:
    // 1 - azimuth
    // 2 - distance
    text = $STR_SENT_CLAUSE_POSITION;
    SpEnglish[] = {%1, %2};
    SpCzech[] = {%1, %2};
  };
  class ClausePositionNear
  {
    // params:
    // 1 - object
    // 2 - azimuth
    text = $STR_SENT_CLAUSE_POSITION_NEAR;
    SpEnglish[] = {that, %1, at, %2};
    SpCzech[] = {that, %1, at, %2};
  };
};
