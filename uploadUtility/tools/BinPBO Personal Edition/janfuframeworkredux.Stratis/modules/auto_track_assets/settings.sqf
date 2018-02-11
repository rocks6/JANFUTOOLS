//This module automatically uses [asset, name, team] call FNC_TrackAsset; on all vehicles which are manned on spawn
//and tracks them based their crews sides. It only tracks the sides west, east and resistance and names them after their config names.

//To manually track an asset use [asset, name, team] call FNC_TrackAsset; in its init field, the team has to correspond with the teams declared in customization\settings.sqf.

//Example:
//[this, "M113", "US"] call FNC_TrackAsset;
//[this, "BTR-80", "Russia"] call FNC_TrackAsset;