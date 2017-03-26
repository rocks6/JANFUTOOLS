
//if !(isServer) exitWith {}; 
_victim = _this select 0;
_killer = _this select 1; 

_victim removeAllEventHandlers "Killed";

// add finisher sounds here with address


_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString;
_soundToPlay = _soundPath + _sound;
playSound3D [_soundToPlay, _killer, false, getPos _killer, 5, 1, 50]; 
//Volume db+10, volume drops off to 0 at 50 meters from _sourceObject


