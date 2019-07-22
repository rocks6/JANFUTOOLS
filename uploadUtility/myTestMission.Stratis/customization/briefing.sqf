#define NEWTAB(NAME) \
player createDiaryRecord ["Diary",[NAME,"

#define ENDTAB \
"]];

//See "VI. Mission notes:" for inspiration about briefing syntax
//"<br />" makes line switches

waitUntil {!(isNull player)};//This is needed for JIP compatibility since this code is spawned not called

//Put additional scripts and modules in here, as well as any essential notes regarding technical aspects for all players.
NEWTAB("VI. Mission notes:")
<br />
Modules:<br />
ACE Advancded Medical<br />
ACE Cargo<br />
ACE Repair<br />
ACE Explosives<br />
<br />
Non-Default Scripts:<br />//Mention any scripts not contained within the framework's core modules
Dynamic AI Creator<br />
<br />
Mission by Aiello<br />
Uses JANFU A3 Framework v1.03 by Aiello
ENDTAB;

switch (side player) do { //Checks what team the player is on
case WEST: { //If player is WEST he receives this briefing

//Self explanatory, also include signalling, for example, 1'1 is wearing blue chemlights on a night op, and 1'2 is wearing green.
NEWTAB("V. Command & Signal:")
1'1 on SR 1<br />
1'2 on SR 2<br />
<br />
All squads on LR 1<br />
ENDTAB;

//Any points where resupply is possible, Air support, non-player friendlies, etc
NEWTAB("IV. Service Support:")
None
ENDTAB;

//Will normally be at CO's discretion unless there are specific courses of action that should be taken/not taken.
NEWTAB("III. Execution:")
At CO's discretion.
ENDTAB;

//Include any intel here as well as the overall objective.
NEWTAB("II. Mission:")
Clear AO of enemies.
ENDTAB;

//Self explanatory.
NEWTAB("B. Friendly Forces:")
Squad of infantry with attached MMG squad, 1x Bradley and 1x UH60.
ENDTAB;

//Enemy forces should contain enough info for CO to conduct a thought out plan.
NEWTAB("A. Enemy Forces:")
Composition:<br />
Two squads of infantry, light AT capabilities.<br />
<br />
Disposition:<br />
Most enemies are situated within the main compound in the AO. Smaller units may be patrolling the immediate area.
ENDTAB;

//Insert info about the overall situation of the mission. Give backstory, answer questions like 'why are we here?' and such.
NEWTAB("I. Situation:")
We are simply here to demonstrate the framework, nothing else.
ENDTAB;
};

case EAST: { //If player is EAST he receives this briefing

NEWTAB("V. Command & Signal:")
//Text goes here
ENDTAB;

NEWTAB("IV. Service Support:")
//Text goes here
ENDTAB;

NEWTAB("III. Execution:")
//Text goes here
ENDTAB;

NEWTAB("II. Mission:")
//Text goes here
ENDTAB;

NEWTAB("B. Friendly Forces:")
//Text goes here
ENDTAB;

NEWTAB("A. Enemy Forces:")
//Text goes here
ENDTAB;

NEWTAB("I. Situation:")
//Text goes here
ENDTAB;
};
};