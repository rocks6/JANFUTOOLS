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

_UniformArray = ["MNP_CombatUniform_Wood_A","MNP_CombatUniform_Wood_A","MNP_CombatUniform_Wood_B"];
