// this script is used in singleplayer editor mode to call the gearscript on all playable units. steps to use:
// 0. save this file into your mission directory
// 1. paste your gear.sqf where it says "GEARSCRIPT HERE"
// 2. remove the first line where it says _unit = player
// 3. load into your mission from the editor, press escape and execute the script in the debug window - execVM "testGear.sqf";
// 4. unpause the game and wait a couple seconds, units should start loading their gear
// 5. look for any gearless units and edit the original gear.sqf, then remember you have to do steps 1-2 again

gear = { 
params ["_unit"];

//EDIT THE BELOW GEAR TO YOUR GEARSCRIPT - DO NOT EDIT ABOVE THIS LINE
//REMEMBER TO REMOVE THE "_unit = player;" line RIGHT BELOW THIS, AFTER YOU PASTE YOUR GEARSCRIPT

//GEARSCRIPT HERE

//DO NOT EDIT BELOW THIS LINE
};

{
	if !(isPlayer _x) then
	{
		_x call gear;
	}
} forEach switchableUnits; //allUnits;
