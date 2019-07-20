from collections import OrderedDict
from copy import deepcopy

class Unit:
    def __init__(self, name, treated_as, team_prefix=""):
        self.name = name
        self.treated_as = treated_as
        self.team_prefix = team_prefix
    
    def __str__(self):
        return self.team_prefix + " " + self.name


# currently unused
class Element:
    def __init__(self, units, squad_identifier):
        self.units = units
        self.squad_identifier = squad_identifier


# unit definitions
rifleman = Unit("Rifleman", "rifleman")
team_lead = Unit("Team Lead", "squad_lead")
squad_lead = Unit("Squad Lead", "squad_lead")
autorifleman = Unit("Autorifleman", "autorifleman")
assistant_ar = Unit("Asst. Autorifleman", "asst_autorifleman")
medic = Unit("Medic", "MD_CNAME_PLACEHOLDER", "medic")
platoon_lead = Unit("Platoon Lead", "squad_lead")
platoon_sgt = Unit("Platoon Sergeant", "squad_lead")


# individual element factories
def infantry_platoon_factory():
    command_element = [deepcopy(x) for x in [platoon_lead, platoon_sgt, medic, *single_squad_factory("1\'1"), *single_squad_factory("1\'2"), *single_squad_factory("1\'3")]]
    for x in range(0,3):
        command_element[x].team_prefix = "1'0"
    return command_element


def single_squad_factory(squad_identifier):
    single_squad = deepcopy([squad_lead, team_lead, autorifleman, assistant_ar, rifleman, team_lead, autorifleman, assistant_ar, rifleman, medic])
    single_squad[0].team_prefix = single_squad[9].team_prefix = squad_identifier
    for x in range(1,5):
        single_squad[x].team_prefix = squad_identifier + "\'A" # set team A
    for x in range(5,9):
        single_squad[x].team_prefix = squad_identifier + "\'B" # set team B
    return single_squad


if __name__=="__main__":
    z = infantry_platoon_factory()
    for x in z:
        print(x)

