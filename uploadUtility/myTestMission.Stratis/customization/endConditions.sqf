_westCasualty = "Blufor" call FNC_CasualtyPercentage;
_eastCasualty = "Opfor" call FNC_CasualtyPercentage;

if (_westCasualty >= 100) exitWith {
	
	"OPFOR DECISIVE VICTORY<br />Blufor force has been destroyed." call FNC_EndMission;
	
};

if (_eastCasualty >= 90) exitWith {
	
	"BLUFOR DECISIVE VICTORY<br />Opfor force has been destroyed." call FNC_EndMission;
	
};


if ((time / 60) >= FW_TimeLimit && FW_TimeLimit != 0) exitWith { //Time limit end condition off by default, edit the "FW_TimeLimit" line in customization\settings.sqf to change. 
	
	"TIME LIMIT REACHED!" call FNC_EndMission;
	
};

if (!alive cache) exitWith { //Ends mission when a cache is destroyed. 
	
	"OBJECTIVE COMPLETE!" call FNC_EndMission;
	
};

sleep (60); //This determines how frequently the end conditions should be checked in seconds