//JANFU Gear Script by Aiello, inspired by gear script in Olsen's Framework V5
//test gearscript preset by red62 for JANFUTOOLS
// ====================================================================================
//
// Defined loadouts:
//              SL                      - Platoon/Squad Leader
//              FL                      - Fireteam Leader
//              MD                      - Medic
//              AR                      - Auto. Rifleman
//              AAR                     - Assistant Auto. Rifleman
//              LAT                     - Rifleman (AT)
//              RIF                     - Rifleman
//              MG                      - Machinegunner
//              AMG                     - Assistant Machinegunner
//              CREW                     - Vehicle Crewman
//              PIL                     - Pilot
//
// =====================================================================================
_unit = player;

removeallweapons _unit;
removeAllAssignedItems _unit;
removebackpack _unit;
removeVest _unit;
removeUniform _unit;
removeHeadGear _unit;
removeGoggles _unit;
sleep 0;

//Defines basic gear for all units, MUST GO LAST IN CASE
#define BASIC \
_unit linkItem "ItemMap"; \
_unit linkItem "ItemWatch"; \
_unit linkItem "ItemCompass"; \
_unit additem "ACE_Earbuds";\
_unit additem "ACE_Morphine";\
_unit additem "ACE_elasticBandage";\
_unit additem "ACE_elasticBandage";\
_unit additem "ACE_elasticBandage";\
_unit additem "ACE_elasticBandage";\
_unit additem "ACE_elasticBandage";\
_unit additem "ACE_elasticBandage";\
_unit additem "ACE_packingBandage";\
_unit additem "ACE_packingBandage";\
_unit additem "ACE_packingBandage";\
_unit additem "ACE_packingBandage";\
_unit additem "ACE_packingBandage";\
_unit additem "ACE_packingBandage";

//Randomized containers and headgear for varied appearance.
_UniformArray = ["MNP_CombatUniform_Wood_A","MNP_CombatUniform_Wood_A","MNP_CombatUniform_Wood_B"];
_HeadgearArray = ["H_LIB_US_Helmet_Net_os","H_LIB_US_Helmet","H_LIB_US_Helmet_Net_os","H_LIB_US_Helmet_Net"];
_GogglesArray = ["classname1","classname2"];
_WeaponsArray = ["rhs_weap_ak74m","rhs_weap_ak74m","rhs_weap_ak74m_desert"];
_VestArray = ["V_LIB_US_Vest_Bar"];

_randomUniform = _UniformArray select floor random count _UniformArray;
_randomHeadgear = _HeadgearArray select floor random count _HeadgearArray;
_randomGoggles = _GogglesArray select floor random count _GogglesArray;
_randomVest = _VestArray select floor random count _VestArray;
_randomWeapon = _WeaponsArray select floor random count _WeaponsArray;
 
//Defines Uniform for all units (Replace classnames with arrays from random containers above to randomize each element of gear respectively; remember to remove the quotes!).
#define UNIFORM \
_unit forceadduniform "U_LIB_US_Rangers_Uniform"; \
_unit addvest "V_LIB_US_Vest_45"; \
_unit addheadgear _randomHeadgear;

 
switch (typeOf _unit) do
{ 
case "O_officer_F": //1LT
{
UNIFORM;
removeVest _unit;
removeHeadgear _unit;
_unit addVest "V_LIB_US_Vest_45";
_unit addHeadgear "H_LIB_US_Helmet_First_lieutenant";
_unit addmagazines ["LIB_7Rnd_45ACP",12];
_unit addweapon "LIB_Colt_M1911";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addWeapon "Binocular";
_unit addbackpack "B_LIB_SOV_RA_Paradrop";
BASIC;
};  
case "O_soldier_exp_F": //2LT
{
UNIFORM;
removeVest _unit;
removeHeadgear _unit;
_unit addVest "V_LIB_US_Vest_Carbine";
_unit addHeadgear "H_LIB_US_Helmet_Second_lieutenant";
_unit addmagazines ["LIB_15Rnd_762x33",12];
_unit addweapon "LIB_M1_Carbine";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addWeapon "Binocular";
_unit addbackpack "B_LIB_SOV_RA_Paradrop";
BASIC;
};   
case "O_Soldier_SL_F": //SL
{
UNIFORM;
removeVest _unit;
_unit addVest "V_LIB_US_Vest_Thompson";
_unit addmagazines ["LIB_30Rnd_45ACP",6];
_unit addweapon "LIB_M1A1_Thompson";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addWeapon "Binocular";
_unit addbackpack "B_LIB_SOV_RA_Paradrop";
BASIC;
};
case "O_Soldier_TL_F": //FL
{
UNIFORM;
removeVest _unit;
_unit addVest "V_LIB_US_Vest_Thompson";
_unit addmagazines ["LIB_30Rnd_45ACP",6];
_unit addweapon "LIB_M1A1_Thompson";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop";
BASIC;
};
case "O_medic_F": //MD
{
UNIFORM;
removeVest unit;
_unit addvest "V_LIB_US_Vest_Medic2";
_unit addbackpack "B_LIB_US_MedicBackpack_Empty";
_unit addmagazines ["LIB_15Rnd_762x33",8];
_unit addweapon "LIB_M1_Carbine";
[_unit,"MedB"] call bis_fnc_setUnitInsignia;
_unit setvariable ["ace_medical_medicClass", 1, true];
unitbackpack _unit addItemCargoGlobal ["ACE_elasticBandage",2];
unitbackpack _unit addItemCargoGlobal ["ACE_packingBandage",2];
unitbackpack _unit addItemCargoGlobal ["ACE_epinephrine",4];
unitbackpack _unit addItemCargoGlobal ["ACE_Morphine",3];
unitbackpack _unit addItemCargoGlobal ["ACE_personalAidKit",1];
unitbackpack _unit addItemCargoGlobal ["ACE_salineIV_500",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addmagazines ["SmokeShell",1];
BASIC;
};
case "O_Soldier_AR_F": //AR
{
UNIFORM;
removeVest _unit;
_unit addVest "V_LIB_US_Vest_Bar";
_unit addmagazines ["LIB_20Rnd_762x63",12];
_unit addweapon "LIB_M1918A2_BAR";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
}; 
case "O_Soldier_AAR_F": //AAR
{
UNIFORM;
removeVest _unit;
_unit addVest "V_LIB_US_Vest_Garand";
_unit addmagazines ["LIB_8Rnd_762x63",12];
_unit addmagazines ["LIB_20Rnd_762x63",6];
_unit addweapon "LIB_M1_Garand";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
}; 
case "O_Soldier_LAT_F": //LAT
{
UNIFORM;
removeVest _unit;
_unit addVest "V_LIB_US_Vest_Garand";
_unit addmagazines ["LIB_8Rnd_762x63",15];
_unit addweapon "LIB_M1_Garand";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};
case "O_Soldier_F": //RIF
{
UNIFORM;
removeVest _unit;
_unit addVest "V_LIB_US_Vest_Garand";
_unit addmagazines ["LIB_8Rnd_762x63",15];
_unit addweapon "LIB_M1_Garand";
_unit addmagazines ["LIB_US_Mk_2",1];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};  
case "B_support_MG_F": //MG
{
UNIFORM;
_unit addBackpack "CUP_B_SLA_Medicbag";
_unit addmagazines ["rhs_100Rnd_762x54mmR",5];
_unit addWeapon "rhs_weap_pkm"; 
_unit addmagazines ["rhs_mag_rgd5",1];
_unit addmagazines ["SmokeShell",2];
_unit addmagazines ["SmokeShellGreen",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
}; 
case "B_support_AMG_F": //AMG
{
UNIFORM;
_unit addmagazines ["rhsgref_30rnd_556x45_m21",10];
_unit addweapon "rhs_weap_m21a";
_unit addbackpack "CUP_B_HikingPack_Civ";   
unitbackpack _unit addmagazineCargoGlobal ["rhs_100Rnd_762x54mmR",5];
_unit addmagazines ["rhs_mag_rgd5",1];
_unit addmagazines ["SmokeShell",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};
case "B_Sharpshooter_F": //DMR
{
UNIFORM;
_unit addmagazines ["20Rnd_762x51_Mag",11];
_unit addweapon "CUP_srifle_M14";
_unit addPrimaryWeaponItem "optic_MRCO";
_unit addmagazines ["LIB_US_Mk_2",2];
_unit addmagazines ["SmokeShell",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};
case "B_soldier_AT_F": //AT
{
UNIFORM;
_unit addbackpack "B_Kitbag_rgr";
_unit addmagazines ["30Rnd_556x45_Stanag",10];
_unit addmagazines ["rhs_mag_smaw_SR",3];
_unit addweapon "RH_M16A2";
_unit addweapon "rhs_weap_smaw_green";
_unit addSecondaryWeaponItem "rhs_weap_optic_smaw";
unitbackpack _unit addmagazineCargoGlobal ["rhs_mag_smaw_HEDP",2];
_unit addmagazines ["SmokeShell",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};
case "B_soldier_AAT_F": //AT
{
UNIFORM;
_unit addbackpack "B_Kitbag_rgr";
_unit addmagazines ["30Rnd_556x45_Stanag",10];
_unit addmagazines ["rhs_mag_smaw_SR",2];
_unit addweapon "RH_M16A2";
unitbackpack _unit addmagazineCargoGlobal ["rhs_mag_smaw_HEDP",3];
_unit addmagazines ["SmokeShell",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};
case "B_soldier_UAV_F": //Engy SL
{
UNIFORM;
removeHeadgear _unit;
_unit addHeadgear "MNP_MC_USW";
_unit addbackpack "MNP_B_WD_CA";
_unit addItemToBackpack "ACE_EntrenchingTool";
_unit addItemToBackpack "ACE_Clacker";
_unit addItemToBackpack "DemoCharge_Remote_Mag";
_unit addItemToBackpack "DemoCharge_Remote_Mag";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["30Rnd_556x45_Stanag_Tracer_Yellow",3];
_unit addweapon "RH_M16A2";
_unit addmagazines ["LIB_US_Mk_2",2];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addWeapon "Binocular";
_unit additem "ACE_CableTie";
_unit linkItem "ItemGPS";
_unit additem "ACRE_PRC148";
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};
case "B_engineer_F": //Engy
{
UNIFORM;
_unit addbackpack "MNP_B_WD_CA";
_unit addItemToBackpack "ACE_EntrenchingTool";
_unit addItemToBackpack "ACE_Clacker";
_unit addItemToBackpack "DemoCharge_Remote_Mag";
_unit addItemToBackpack "DemoCharge_Remote_Mag";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["30Rnd_556x45_Stanag_Tracer_Yellow",3];
_unit addweapon "RH_M16A2";
_unit addmagazines ["LIB_US_Mk_2",2];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};
case "B_crew_F": //CREW
{
_unit forceadduniform "MNP_CombatUniform_M81_Rg";
_unit addvest "LOP_6sh46";
removeheadgear _unit;
_unit addheadgear "H_HelmetCrew_I";
_unit addmagazines ["CUP_30Rnd_9x19_MP5",6];
_unit addweapon "CUP_smg_MP5A5";  
_unit addmagazines ["SmokeShell",2];
_unit addmagazines ["SmokeShellGreen",1];
_unit additem "ACRE_PRC148";
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};      
case "B_Pilot_F": //PIL
{
_unit forceadduniform "rhs_uniform_m88_patchless";
_unit addvest "LOP_6sh46";
removeheadgear _unit;
_unit addheadgear "rhs_zsh7a_mike_green";
_unit addmagazines ["rhs_30Rnd_545x39_AK",5];
_unit addweapon "rhs_weap_aks74u";  
_unit addmagazines ["SmokeShell",2];
_unit addmagazines ["SmokeShellGreen",1];
_unit additem "ACRE_PRC148";
_unit addbackpack "B_LIB_SOV_RA_Paradrop"; 
BASIC;
};     
};