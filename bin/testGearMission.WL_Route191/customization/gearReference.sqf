_unit = player;
removeallweapons _unit;
removeAllAssignedItems _unit;
removebackpack _unit;
removeVest _unit;
removeUniform _unit;
removeHeadGear _unit;
removeGoggles _unit;
sleep 0;
#define BASIC \
_unit linkItem "ItemMap"; \
_unit linkItem "ItemWatch"; \
_unit linkItem "ItemCompass"; \
_unit addItem "ACRE_PRC343"; \
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

_UniformArray = ["MNP_CombatUniform_Wood_A"];

_HeadgearArray = ["MNP_MC_USW"];

_VestArray = ["MNP_Vest_Light_M81"];
_randomUniform = _UniformArray select floor random count _UniformArray;
_randomHeadgear = _HeadgearArray select floor random count _HeadgearArray;
_randomVest = _VestArray select floor random count _VestArray;

#define UNIFORM \
_unit forceadduniform _randomUniform; \
_unit addvest _randomVest; \
_unit addheadgear _randomHeadgear;
switch (typeOf _unit) do
{
case "B_Soldier_SL_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
_unit addWeapon "Binocular";
_unit additem "ACRE_PRC148";
_unit linkItem "ItemGPS";
BASIC;
};
case "B_Soldier_TL_F":
{
UNIFORM;
_unit addweapon "RH_M16A2";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["SmokeShell",2];
_unit addWeapon "Binocular";
_unit additem "ACRE_PRC148";
_unit linkItem "ItemGPS";
BASIC;
};

case "B_medic_F": //MD
{
UNIFORM;
_unit addmagazines ["30Rnd_556x45_Stanag",11];
_unit addweapon "RH_M16A2";
_unit addbackpack "B_Kitbag_rgr";
[_unit,"MedB"] call bis_fnc_setUnitInsignia;
_unit setvariable ["ace_medical_medicClass", 1, true];
unitbackpack _unit addItemCargoGlobal ["ACE_elasticBandage",30];
unitbackpack _unit addItemCargoGlobal ["ACE_packingBandage",30];
unitbackpack _unit addItemCargoGlobal ["ACE_epinephrine",15];
unitbackpack _unit addItemCargoGlobal ["ACE_Morphine",15];
unitbackpack _unit addItemCargoGlobal ["ACE_personalAidKit",4];
unitbackpack _unit addItemCargoGlobal ["ACE_salineIV_500",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addmagazines ["SmokeShell",1];
_unit linkItem "ItemGPS";
BASIC;
};
case "B_soldier_AR_F": //AR
{
UNIFORM;
_unit addBackpack "MNP_B_WD_FP";
_unit addmagazines ["rhsusf_100Rnd_762x51",6];
_unit addweapon "rhs_weap_m240G"; 
_unit addmagazines ["SmokeShell",2];
_unit addmagazines ["rhs_mag_m67",1];
_unit addmagazines ["SmokeShellGreen",1];
BASIC;
}; 
case "B_soldier_AAR_F": //AAR
{
UNIFORM;
_unit addbackpack "MNP_B_WD_CA";
_unit addmagazines ["30Rnd_556x45_Stanag",12];
_unit addweapon "RH_M16A2";
unitbackpack _unit addmagazineCargoGlobal ["rhsusf_100Rnd_762x51",5];
_unit addmagazines ["rhs_mag_m67",1];
_unit addmagazines ["SmokeShell",1];
BASIC;
}; 
case "B_soldier_LAT_F": //LAT
{
UNIFORM;
_unit addmagazines ["30Rnd_556x45_Stanag",14];
_unit addweapon "RH_M16A2";
_unit addmagazines["rhs_m72a7_mag",1];
_unit addweapon "rhs_weap_m72a7"; 
_unit addmagazines ["rhs_mag_m67",2];
_unit addmagazines ["SmokeShell",1];
BASIC;
};
case "B_Soldier_F": //RIF
{
UNIFORM;
_unit addmagazines ["30Rnd_556x45_Stanag",14];
_unit addweapon "RH_M16A2";
_unit addmagazines ["rhs_mag_m67",2];
_unit addmagazines ["SmokeShell",1];
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
BASIC;
};
case "B_Sharpshooter_F": //DMR
{
UNIFORM;
_unit addmagazines ["20Rnd_762x51_Mag",11];
_unit addweapon "CUP_srifle_M14";
_unit addPrimaryWeaponItem "optic_MRCO";
_unit addmagazines ["rhs_mag_m67",2];
_unit addmagazines ["SmokeShell",1];
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
_unit addmagazines ["rhs_mag_m67",2];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
_unit addWeapon "Binocular";
_unit additem "ACE_CableTie";
_unit linkItem "ItemGPS";
_unit additem "ACRE_PRC148";
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
_unit addmagazines ["rhs_mag_m67",2];
_unit addmagazines ["SmokeShell",1];
_unit addmagazines ["SmokeShellGreen",1];
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
BASIC;
};     
};