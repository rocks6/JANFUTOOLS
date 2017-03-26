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
ACRE Radio Scrambler
<br />
<br />
Mission by Aiello<br />
Uses JANFU A3 Framework v1.03 by Aiello<br />
<br />
*TO AVOID HELICOPTER GLITCH DO NOT END MISSION UNTIL ALL HELICOPTERS ARE LANDED OR DESTROYED*
ENDTAB;

switch (side player) do { //Checks what team the player is on
case WEST: { //If player is WEST he receives this briefing

//Self explanatory, also include signalling, for example, 1'1 is wearing blue chemlights on a night op, and 1'2 is wearing green.
NEWTAB("V. Command & Signal:")
<br />
1'1 on SR1<br />
1'2 on SR2<br />
1'3 on SR3<br />
1'0 on SR4<br />
All squads on LR1<br />
Squad leaders and Team leaders have short range radios, normal infantry don't have any radios.<br />
ENDTAB;

//Any points where resupply is possible, Air support, non-player friendlies, etc
NEWTAB("IV. Service Support:")
Small amount of supplies in M113s, more supplies in engineer truck. Engineers have entrenching tools.
ENDTAB;

//Will normally be at CO's discretion unless there are specific courses of action that should be taken/not taken.
NEWTAB("III. Execution:")
At CO's discretion. Advised to have LZ in the north of the AO.
<br />
ENDTAB;

//Include any intel here as well as the overall objective.
NEWTAB("II. Mission:")
Secure the town from enemy forces, defend from any counterattacks.<br />
ENDTAB;

//Self explanatory.
NEWTAB("B. Friendly Forces:")
Platoon of machanized US infantry mounted in M113s
ENDTAB;

//Enemy forces should contain enough info for CO to conduct a thought out plan.
NEWTAB("A. Enemy Forces:")
Composition:<br />
Several squads of infantry with light armor support in the form of BTRs and BRDMs<br />
<br />
Disposition:<br />
Concentration of enemies in the town, smaller units and vehicles present throughout the rest of the AO. Enemy units will garrison buildings.
ENDTAB;

//Insert info about the overall situation of the mission. Give backstory, answer questions like 'why are we here?' and such.
NEWTAB("I. Situation:")
Enemy mechanized forces have siezed the town of Schwemlitz and the good old USA is here to change that.
ENDTAB;
};

case RESISTANCE: { //If player is EAST he receives this briefing

NEWTAB("V. Command & Signal:")
You have no radios, but you have orange chemlights to signal the British. They also have chemlights of their own in various colors.
ENDTAB;

NEWTAB("IV. Service Support:")
None.
ENDTAB;

NEWTAB("III. Execution:")
At CO's discretion.
ENDTAB;

NEWTAB("II. Mission:")
Transport nearby assault boats to a safe and accessible location so British forces can use them to ford the river instead of using the bridge of they so desire. Map out enemy positions, generally help out the British in any way you can. You will become hostile to your occupiers when you pick up a weapon.
ENDTAB;

NEWTAB("B. Friendly Forces:")
You and your buddy. Platoon of British paras will come soon.
ENDTAB;

NEWTAB("A. Enemy Forces:")
Several squads of infantry with light support in the form of BRDMs, BTRs, and DShKM trucks.<br />
ENDTAB;

NEWTAB("I. Situation:")
It is time to #riseup against our occupiers. Free this land by letting new occupiers (the British) take over.
ENDTAB;
};
};