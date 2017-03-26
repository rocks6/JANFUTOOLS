[] execVM "customization\briefing.sqf";
[1,true,true,"ColorWEST","'#0066CC'"] execVM "modules\team_roster\roster.sqf";
#define framework
#include "core\init.sqf" //DO NOT REMOVE
#include "customization\settings.sqf" //DO NOT REMOVE
#include "core\dia\debug\dia_debug.sqf" //DO NOT REMOVE

if (isServer) then {

	"" call FNC_StartingCount; //DO NOT REMOVE

	[] spawn { //Spawns code running in parallel
	
		while {!FW_MissionEnded} do { //Loops while the mission is not ended
			
			"" call FNC_CurrentCount; //DO NOT REMOVE
			
			#include "customization\endConditions.sqf" //DO NOT REMOVE
			
		};	
	};
};

#include "modules\modules.sqf" //DO NOT REMOVE
#include "core\postChecks.sqf" //DO NOT REMOVE

[] execVM "VCOMAI\init.sqf";

//function injured 
fnc_injured = { 
	_unit = _this select 0;
    _unit removeAllMPEventHandlers "MPHit";
	_unit removeAllEventHandlers "Killed";

[ _unit ] remoteExec [ "Lar_fnc_setunconscious", 2 ];





sleep 3;

//animations
_anim = [
"UnconsciousReviveArms_A","UnconsciousReviveArms_B","UnconsciousReviveArms_C","UnconsciousReviveBody_A",
"UnconsciousReviveBody_B","UnconsciousReviveDefault_A","UnconsciousReviveDefault_B","UnconsciousReviveHead_A",
"UnconsciousReviveHead_B","UnconsciousReviveHead_C","UnconsciousReviveLegs_A","UnconsciousReviveLegs_B"
 ] call bis_fnc_selectRandom;

[[[_unit,_anim],"animation.sqf"],"BIS_fnc_execVM",true,false] call BIS_fnc_MP;

//play sounds while man is injured, not dead
//change sleep time numbers to play sound loop time
while {(true)} do {

//change sound play loop time here
sleep (10 + random 20);

_ls = lifeState _unit;

if (_ls != "INCAPACITATED") exitWith {};

//add in pain sound here	
_sound = [
"pain1", "pain2", "pain8", "pain9", "pain10"
] call BIS_fnc_selectRandom;

_unit say3D [_sound, 100, 1];

sleep (10 + random 20);
	
};
	};








