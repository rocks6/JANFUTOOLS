class ClassSQM:
    def __init__(self, classname, data):
        self.classname = classname
        self.data = data

    def dump(self, tabLevel=0):
        constructed_string = "class " + self.classname + "\n" + "\t"*tabLevel + "{\n"
        if type(self.data) != list:
            self.data = [self.data]
        for item in self.data:
            if type(item).__name__ in ["ClassSQM", "AssignmentSQM", "ArraySQM"]:
                constructed_string = "\t"*tabLevel + constructed_string + item.dump(tabLevel+1)
            else:
                constructed_string = constructed_string + "\t" + str(item) + ";\n"
        constructed_string = constructed_string + "\t"*tabLevel + "};\n"
        return constructed_string


class AssignmentSQM:
    def __init__(self, lhs, rhs):
        if type(rhs) == str:
            rhs = "\"" + rhs + "\""
        self.data = str(lhs) + "=" + str(rhs) + ";"

    def dump(self, tabLevel):
        constructed_string = "\t"*tabLevel + self.data + "\n"
        return constructed_string

class ArraySQM:
    def __init__(self, name, data):
        self.name = name
        if type(data) != list:
            self.data = [data]
        else:
            self.data = data

    def dump(self, tabLevel):
        constructed_string = "\t"*tabLevel + self.name + "[]=\n" + "\t"*tabLevel + "{\n"
        for item in self.data:
            newItem = "\"" + item + "\"" if type(item) == str else item  # add quotes if necessary
            constructed_string = constructed_string + "\t"*(tabLevel+1) + str(newItem) + ",\n"
        constructed_string = constructed_string[::-1].replace(",", "", 1)[::-1]  # remove last comma
        constructed_string = constructed_string + "\t"*tabLevel + "};\n"
        return constructed_string


def create_unit_sqm(item_number, position, description, unit_id, type, isPlayer=False):
    player_setting = "isPlayer" if isPlayer else "isPlayable"
    unit_data = []
    unit_data.append(AssignmentSQM("dataType", "Object"))
    unit_data.append(ClassSQM("PositionInfo", ArraySQM("position", position)))
    unit_data.append(AssignmentSQM("side", "West"))
    unit_data.append(AssignmentSQM("flags", 7))
    unit_data.append(ClassSQM("Attributes", [AssignmentSQM("description", description), AssignmentSQM(player_setting, 1)]))
    unit_data.append(AssignmentSQM("id", unit_id))
    unit_data.append(AssignmentSQM("type", type))
    unit_data.append(ClassSQM("CustomAttributes", AssignmentSQM("nAttributes",0)))
    unit_object = ClassSQM("Item" + str(item_number), unit_data)

    new_pos = [position[0]+5, position[1], position[2]]
    new_id = unit_id + 1
    new_item_no = item_number + 1
    return unit_object, new_pos, new_id, new_item_no

def sqm_oo_test1():
    arr = ArraySQM("addons", ["A3_Modules_F", "acex_headless", "A3_Characters_F", "A3_Ui_F", "WW2_Core_c_IF_Gui_c", "asr_ai3_skills", "ace_explosives", "A3_Characters_F_Mark"])
    items = [AssignmentSQM("dataType",6), AssignmentSQM("grid","north"), ClassSQM("EditorData", AssignmentSQM("lasagna",-83)), arr]
    group = ClassSQM("AddonsMetaData", items)
    print(group.dump(0))


def generate_command_element():
    pos = [3000, 1, 4000]
    unit_id = 1
    item_no = 0
    plt_lead, pos, unit_id, item_no = create_unit_sqm(item_no, pos, "1\'0 Platoon Lead", unit_id, "B_Soldier_SL_F", isPlayer=True)
    plt_sgt, pos, unit_id, item_no = create_unit_sqm(item_no, pos, "1\'0 Platoon Sergeant", unit_id, "B_Soldier_SL_F")
    plt_rif, pos, unit_id, item_no = create_unit_sqm(item_no, pos, "1\'0 Rifleman", unit_id, "B_Soldier_F")
    plt_md, pos, unit_id, item_no = create_unit_sqm(item_no, pos, "1\'0 Medic", unit_id, "B_medic_F")
    squad = [plt_lead, plt_sgt, plt_rif, plt_md]

    with open("out.sqm", "w") as f:
        for unit in squad:
            f.write(unit.dump())


def build_inf_group_test():
    group = ClassSQM("Item0")  # TODO: remember to actually calculate how many items exist
    data = []
    data.append(AssignmentSQM("dataType", "Group"))
    data.append(AssignmentSQM("side", "West"))

    entities_data = [AssignmentSQM("items",4)]
    entities = ClassSQM("Entities", entities_data)
    data.append(entities)

if __name__ == '__main__':
    f = open("bfc_test_mission.sqm", "r+")
    test_mission_sqm = f.read()

    create_unit_sqm()