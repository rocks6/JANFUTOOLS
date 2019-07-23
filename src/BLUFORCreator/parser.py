from lark import Lark, tree

easy_test_data = '''
class EditorData {
    threeData=6;
    class TwoDeep
    {
    twoData=5;
    };
    type[]=
    {
        "SCALAR",
        "ITEM2"
    };
};
'''
test_data = '''
class EditorData 
    {
    moveGridStep=1;
    angleGridStep=0.2617994;
    scaleGridStep=1;
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
    class: CLASSNAME OPEN_BRACKET internal CLOSED_BRACKET
    internal: class internal?
    | ASSIGNMENT internal?
    | array internal?
    array: ARRAY_NAME ARRAY_ASSIGNMENT OPEN_BRACKET array_contents CLOSED_BRACKET
    array_contents: ARRAY_ITEM+
    
    ARRAY_ITEM: /"\S+",*/
    ARRAY_NAME: /.+(?=\[\]=)/
    ASSIGNMENT: /(\S+=\S+;)/
    CLASSNAME: /class.+(?=\s*{)/
    OPEN_BRACKET: "{"
    CLOSED_BRACKET: "};"
    ARRAY_ASSIGNMENT: "[]="
    
    %import common.WS
    %ignore WS
'''

def make_png(data):
    tree.pydot__tree_to_png(parser.parse(data), "out.png")

if __name__ == '__main__':
    parser = Lark(grammar, start='class')
    print(parser.parse(easy_test_data).pretty())
    make_png(easy_test_data)