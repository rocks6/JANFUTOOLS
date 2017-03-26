[[nil,"JIPinit.sqf"],"BIS_fnc_execVM",true,true] call BIS_fnc_MP;
//by Larrow
Lar_fnc_setunconscious = {
	params[ "_unit" ];
[ _unit, true ] remoteExec [ "setUnconscious", _unit ];
	
};


_null = [] execvm "injured.sqf";
