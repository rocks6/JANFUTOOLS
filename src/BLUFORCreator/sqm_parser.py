from lark import Lark, tree, Transformer

easy_test_data = '''
class AddonsMetaData
{
    assgn=5;
    dataType="TestData";
    class ItemIDProvider
    {
        nextID=241;
    };

};
'''
test_data = '''
class EditorData 
    {
    moveGridStep=1;
    angleGridStep=0.2617994;
    scaleGridStep=1;
    addons[]=
    {
        "A3_Modules_F",
        "acex_headless",
        "A3_Characters_F",
        "A3_Ui_F",
        "WW2_Core_c_IF_Gui_c",
        "asr_ai3_skills",
        "ace_explosives",
        "A3_Characters_F_Mark"
    };
    autoGroupingDist=10;
    toggles=1;
    class ItemIDProvider
    {
        nextID=241;
    };
    class MarkerIDProvider
    {
        nextID=2;
    };
    class Camera
    {
        pos[]={8123.0957,219.47508,11568.785};
        dir[]={-0.88210899,-0.45828655,-0.108938};
        up[]={-0.45483336,0.88880163,-0.056170892};
        aside[]={-0.12256727,-2.6600901e-008,0.99246353};
        };
};
'''

grammar = '''
    data: (ASSIGNMENT | class_object | array)*
    class_object: "class " CLASSNAME "{" data? "};"
    array: ARRAY_NAME "[]=" "{" array_contents "};"
    array_contents: ARRAY_ITEM*
    
    ARRAY_ITEM: /"\S+",*/
    ARRAY_NAME: /.+(?=\[\]=)/
    ASSIGNMENT: /(\S+=.+;)/
    CLASSNAME: /.+(?=\s*{)/
    OPEN_BRACKET: "{"
    CLOSED_BRACKET: "};"
    
    %import common.WS
    %import common.ESCAPED_STRING
    %ignore WS
'''




class SqmTransformer(Transformer):
    def class_object(self, items):
        to_return = "class " + str(items[0]) + "\n{\n" + str("\n".join(["\t"+item.value if type(item) is not str else item for item in items[1]])) + " \n};"
        return to_return

    def data(self, data):
        return list(data)

    def ASSIGNMENT(self, data):
        return data

    def CLASSNAME(self, items):
        return items


def make_png(data):
    tree.pydot__tree_to_png(data, "out.png")


if __name__ == '__main__':
    f = open("bfc_test_mission.sqm", "r+")
    test_mission_sqm = f.read()

    # test the parser
    # parser = Lark(grammar, start='data')
    # parsed_data = parser.parse(easy_test_data)
    # make_png(parsed_data)
    # rebuilt = SqmTransformer().transform(parsed_data)
    # print(rebuilt[0])