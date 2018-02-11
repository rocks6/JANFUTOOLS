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
BASIC;
};
case "B_Soldier_TL_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
_unit addWeapon "Binocular";
_unit additem "ACRE_PRC148";
BASIC;
};
case "B_medic_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
_unit addbackpack "B_Kitbag_rgr";
[_unit,"MedB"] call bis_fnc_setUnitInsignia;
_unit setvariable ["ace_medical_medicClass", 1, true];
unitbackpack _unit addItemCargoGlobal ["ACE_elasticBandage",30];
unitbackpack _unit addItemCargoGlobal ["ACE_packingBandage",30];
unitbackpack _unit addItemCargoGlobal ["ACE_epinephrine",15];
unitbackpack _unit addItemCargoGlobal ["ACE_Morphine",15];
unitbackpack _unit addItemCargoGlobal ["ACE_personalAidKit",4];
unitbackpack _unit addItemCargoGlobal ["ACE_salineIV_500",1];
_unit addmagazines ["SmokeShell",4];
BASIC;
};
case "B_soldier_AR_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",2];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
_unit addBackpack "MNP_B_WD_FP";
_unit addmagazines ["30Rnd_556x45_Stanag",6];
BASIC;
};
case "B_soldier_AAR_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
_unit addbackpack "MNP_B_WD_CA";
unitbackpack _unit addmagazineCargoGlobal ["30Rnd_556x45_Stanag",5];
BASIC;
};
case "B_soldier_LAT_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
_unit addmagazines["rhs_m72a7_mag",1];
_unit addweapon "rhs_weap_m72a7";
BASIC;
};
case "B_soldier_AAT_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
BASIC;
};
case "B_Soldier_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
BASIC;
};
case "B_Soldier_GL_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
BASIC;
};
case "B_soldier_M_F":
{
UNIFORM;
_unit addweapon "RH_M16A2gl";
_unit addmagazines ["30Rnd_556x45_Stanag",8];
_unit addmagazines ["1Rnd_HE_Grenade_shell",8];
_unit addmagazines ["SmokeShell",2];
BASIC;
};

};
