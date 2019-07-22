# lookup table for ammo classnames
weapon_classnames_to_ammo_classnames = {
    "TEST_WEAPON_CLASSNAME": ["ammo_classname", "optional_GL_classname"]
}


# contains a set of uniform classnames that fit together in-game, such as all one camouflage type/environment
class UniformSet:
    def __init__(self, name, uniform_cname, headgear_cname, vest_cname, backpack_cname):
        self.name = name
        self.uniform_cname = uniform_cname
        self.headgear_cname = headgear_cname
        self.vest_cname = vest_cname
        self.backpack_cname = backpack_cname


# contains a set of weapon classnames that fit together for a unit, i.e. [M4, M249, LAW] etc
class WeaponSet:
    # weapons mapping maps the unit type to the weapon classname it is supposed to have
    def __init__(self, weapons_mapping):
        self.weapons_mapping = weapons_mapping
        for weapon_classname in self.weapons_mapping.keys():
            self.ammo_mapping[weapon_classname] = weapon_classnames_to_ammo_classnames[weapon_classname]


def inject_additem(itemname):
    return "_unit additem \"" + itemname + "\"; \\\n"


# define a mapping between the programmatic 'names' for each class (i.e. squad_lead) and the ARMA 3 classnames (i.e. B_Soldier)
names_to_classnames = {
    "rifleman": "B_Soldier_F",
    "rifleman_lat": "B_soldier_LAT_F",
    "squad_lead": "B_Soldier_SL_F",
    "autorifleman": "B_soldier_AR_F",
    "asst_autorifleman": "B_soldier_AAR_F",
    "medic": "B_medic_F",
    "hmg": "B_HeavyGunner_F",
    "asst_hmg": "B_support_AMG_F",
    "at_gunner": "B_soldier_LAT2_F",
    "at_asst": "B_soldier_AAT_F",
    "crewman": "B_crew_F"
}


# code to remove the weapons from a unit and define the basic macro, to be injected into the gearscript before the uniform stuff
gearscript_prelude = '''_unit = player;
removeallweapons _unit;
removeAllAssignedItems _unit;
removebackpack _unit;
removeVest _unit;
removeUniform _unit;
removeHeadGear _unit;
removeGoggles _unit;
sleep 0;

#define BASIC \
_unit linkItem \"ItemMap\"; \
_unit linkItem \"ItemWatch\"; \
_unit linkItem \"ItemCompass\"; \
''' + inject_additem("ACRE_PRC343") + inject_additem("ACE_Earbuds") + inject_additem("ACE_Morphine") + \
                     inject_additem("ACE_elasticBandage") * 6 + inject_additem("ACE_packingBandage") * 6 + \
                     '''_unit addmagazines [\"SmokeShell\",2];
'''

add_binocs = "_unit addWeapon \"Binocular\";"
add_148 = "_unit additem \"ACRE_PRC148\";"
add_smoke = "_unit addmagazines [\"SmokeShell\",1];"
add_medic_supplies = '''_unit addbackpack \"B_Kitbag_rgr\";
[_unit,\"MedB\"] call bis_fnc_setUnitInsignia;
_unit setvariable [\"ace_medical_medicClass\", 1, true];
unitbackpack _unit addItemCargoGlobal [\"ACE_elasticBandage\",30];
unitbackpack _unit addItemCargoGlobal [\"ACE_packingBandage\",30];
unitbackpack _unit addItemCargoGlobal [\"ACE_epinephrine\",15];
unitbackpack _unit addItemCargoGlobal [\"ACE_Morphine\",15];
unitbackpack _unit addItemCargoGlobal [\"ACE_personalAidKit\",4];
unitbackpack _unit addItemCargoGlobal [\"ACE_salineIV_500\",1];
'''

