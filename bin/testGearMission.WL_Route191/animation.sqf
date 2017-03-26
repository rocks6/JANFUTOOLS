


_unit = _this select 0;
_anim = _this select 1;

    _unit disableAI "TARGET";
    _unit disableAI "AUTOTARGET";
    _unit disableAI "MOVE";
    _unit disableAI "TEAMSWITCH";
    _unit disableAI "FSM";
    _unit disableAI "AIMINGERROR";
    _unit disableAI "SUPPRESSION";
    _unit disableAI "COVER";
    _unit disableAI "AUTOCOMBAT";
    _unit disableAI "PATH";
	
	
	
while {true} do {
		
_ls = lifeState _unit;
if (_ls != "INCAPACITATED") exitWith {};


_unit playMove _anim;
	

sleep 5;	
	
};










