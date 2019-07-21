from collections import OrderedDict
from copy import deepcopy


class Unit:
    def __init__(self, name, treated_as, team_prefix=""):
        self.name = name
        self.treated_as = treated_as
        self.team_prefix = team_prefix
    
    def __str__(self):
        return self.team_prefix + " " + self.name


# currently unused, may be useful in future
class Element:
    def __init__(self, units, squad_identifier):
        self.units = units
        self.squad_identifier = squad_identifier


# unit definitions
rifleman = Unit("Rifleman", "rifleman")
rifleman_lat = Unit("Rifleman (LAT)", "rifleman_lat")
team_lead = Unit("Team Lead", "squad_lead")
squad_lead = Unit("Squad Lead", "squad_lead")
autorifleman = Unit("Autorifleman", "autorifleman")
assistant_ar = Unit("Asst. Autorifleman", "asst_autorifleman")
medic = Unit("Medic", "medic")
platoon_lead = Unit("Platoon Lead", "squad_lead")
platoon_sgt = Unit("Platoon Sergeant", "squad_lead")
heavy_machinegunner = Unit("Heavy Machine Gunner", "hmg")
heavy_mg_assistant = Unit("Assistant Heavy Machine Gunner", "asst_hmg")
veh_driver = Unit("Driver", "crewman")
veh_gunner = Unit("Gunner", "crewman")
veh_commander = Unit("Commander", "crewman")
at_gunner = Unit("AT Gunner", "at_gunner")
at_asst = Unit("AT Assistant", "at_asst")

# individual element factories
# the function below assumes the infantry platoon is always the first element
def infantry_platoon_factory():
    command_element = [deepcopy(x) for x in [platoon_lead, platoon_sgt, medic, *single_squad_factory("1\'1"), *single_squad_factory("1\'2"), *single_squad_factory("1\'3")]]
    for x in range(0,3):
        command_element[x].team_prefix = "1'0"
    return command_element


def single_squad_factory(squad_identifier):
    single_squad = [deepcopy(x) for x in [squad_lead, team_lead, autorifleman, assistant_ar, rifleman, team_lead, autorifleman, assistant_ar, rifleman, medic]]
    single_squad[0].team_prefix = single_squad[9].team_prefix = squad_identifier
    for x in range(1,5):
        single_squad[x].team_prefix = squad_identifier + "\'A" # set team A
    for x in range(5,9):
        single_squad[x].team_prefix = squad_identifier + "\'B" # set team B
    return single_squad


def hmg_squad_factory(squad_identifier):
    hmg_squad = [deepcopy(x) for x in [squad_lead, heavy_machinegunner, heavy_mg_assistant, heavy_machinegunner, heavy_mg_assistant]]
    hmg_squad[0].team_prefix = squad_identifier
    hmg_squad[1].team_prefix = hmg_squad[2].team_prefix = squad_identifier + "\'A"
    hmg_squad[3].team_prefix = hmg_squad[4].team_prefix = squad_identifier + "\'B"
    return hmg_squad


def vehicle_3crew_factory(squad_identifier):
    crew = [deepcopy(x) for x in [veh_driver, veh_gunner, veh_commander]]
    for x in range(3):
        crew[x].team_prefix = squad_identifier
    return crew


def vehicle_2crew_factory(squad_identifier):
    crew = [deepcopy(x) for x in [veh_driver, veh_gunner]]
    for x in range(2):
        crew[x].team_prefix = squad_identifier
    return crew


def generic_unit_factory(squad_identifier, units):
    new_units = [deepcopy(x) for x in units]
    for z in len(new_units):
        new_units[z].team_prefix = squad_identifier
    return new_units


# TODO: inject created units into mission.sqm, maybe at the center or a corner of the map

# main used for debug
if __name__=="__main__":
    z = infantry_platoon_factory()
    for k in vehicle_3crew_factory("2'1"):
        z.append(k)
    for k in vehicle_3crew_factory("2'2"):
        z.append(k)
    for x in z:
        print(x)

