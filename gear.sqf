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
