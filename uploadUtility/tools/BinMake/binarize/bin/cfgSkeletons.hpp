// Skeletons for all the skinning models

class CfgSkeletons
{
  class Default
  {
    isDiscrete = true;
    skeletonInherit = "";
    skeletonBones[] = {};
  };
  class Head : Default
  {
    isDiscrete = false;
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "loboci","",
      "soboci","",
      "poboci","",
      "lkoutek","",
      "skoutek","",
      "pkoutek","",
      "vicka","",
      "spodni ret",""
    };
  };
  class Man : Head
  {
    skeletonInherit = "Head";
    skeletonBones[] =
    {
      "pchodidlo","",
      "lchodidlo","",
      "pprsty","",
      "lprsty","",
      "lholen","",
      "pholen","",
      "pstehno","",
      "lstehno","",
      "pzadek","",
      "lzadek","",
      "bricho","",
      "zebra","",
      "hrudnik","",
      "krk","",
      "prameno","",
      "lrameno","",
      "hlava","",
      "pbiceps","",
      "lbiceps","",
      "ploket","",
      "lloket","",
      "roura","",
      "pruka","",
      "lruka","",
      "zbran",""
    };
  };
  class CfgMovesMC: Man
  {
  };
  class Vehicle : Default
  {
  };
  class Tank : Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "kolL1","",
      "kolL2","",
      "kolL3","",
      "kolL4","",
      "kolL5","",
      "kolL6","",
      "kolL7","",
      "kolL8","",
      "kolP1","",
      "kolP2","",
      "kolP3","",
      "kolP4","",
      "kolP5","",
      "kolP6","",
      "kolP7","",
      "kolP8","",
      "podkoloL1","",
      "podkoloL2","",
      "podkoloL3","",
      "podkoloL4","",
      "podkoloL5","",
      "podkoloL6","",
      "podkoloL7","",
      "podkoloL8","",
      "podkoloP1","",
      "podkoloP2","",
      "podkoloP3","",
      "podkoloP4","",
      "podkoloP5","",
      "podkoloP6","",
      "podkoloP7","",
      "podkoloP8","",
      "koloL1","podkoloL1",
      "koloL2","podkoloL2",
      "koloL3","podkoloL3",
      "koloL4","podkoloL4",
      "koloL5","podkoloL5",
      "koloL6","podkoloL6",
      "koloL7","podkoloL7",
      "koloL8","podkoloL8",
      "koloP1","podkoloP1",
      "koloP2","podkoloP2",
      "koloP3","podkoloP3",
      "koloP4","podkoloP4",
      "koloP5","podkoloP5",
      "koloP6","podkoloP6",
      "koloP7","podkoloP7",
      "koloP8","podkoloP8",
      "OtocVez","",
      "OtocHlaven","OtocVez",
      "OtocVelitele","OtocVez",
      "OtocHlavenVelitele","OtocVelitele",
      "poklop_driver","",
      "poklop_commander","OtocVelitele",
      "poklop_gunner","OtocVez",
      "ukaz_rychlo","",
      "ukaz_rychlo2","",
      "ukaz_rpm","",
      "ukaz_radar","",
      "hodinova","",
      "minutova","",
      "kompas","",
      "ukazsmer",""
    };
  };
  class TankTwoTurrets: Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "kolL1","",
      "kolL2","",
      "kolL3","",
      "kolL4","",
      "kolL5","",
      "kolL6","",
      "kolL7","",
      "kolL8","",
      "kolP1","",
      "kolP2","",
      "kolP3","",
      "kolP4","",
      "kolP5","",
      "kolP6","",
      "kolP7","",
      "kolP8","",
      "podkoloL1","",
      "podkoloL2","",
      "podkoloL3","",
      "podkoloL4","",
      "podkoloL5","",
      "podkoloL6","",
      "podkoloL7","",
      "podkoloL8","",
      "podkoloP1","",
      "podkoloP2","",
      "podkoloP3","",
      "podkoloP4","",
      "podkoloP5","",
      "podkoloP6","",
      "podkoloP7","",
      "podkoloP8","",
      "koloL1","podkoloL1",
      "koloL2","podkoloL2",
      "koloL3","podkoloL3",
      "koloL4","podkoloL4",
      "koloL5","podkoloL5",
      "koloL6","podkoloL6",
      "koloL7","podkoloL7",
      "koloL8","podkoloL8",
      "koloP1","podkoloP1",
      "koloP2","podkoloP2",
      "koloP3","podkoloP3",
      "koloP4","podkoloP4",
      "koloP5","podkoloP5",
      "koloP6","podkoloP6",
      "koloP7","podkoloP7",
      "koloP8","podkoloP8",
      "OtocVez","",
      "OtocHlaven","OtocVez",
      "OtocVelitele","",
      "OtocHlavenVelitele","OtocVelitele",
      "poklop_driver","",
      "poklop_commander","OtocVelitele",
      "poklop_gunner","OtocVez",
      "ukaz_rychlo","",
      "ukaz_rychlo2","",
      "ukaz_rpm","",
      "ukaz_radar","",
      "hodinova","",
      "minutova","",
      "ukazsmer",""
    };
  };
  class Car : Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "volant","",
      "levy predni tlumic","",
      "pravy predni tlumic","",
      "levy dalsi tlumic","",
      "pravy dalsi tlumic","",
      "levy predni zatoc","levy predni tlumic",
      "pravy predni zatoc","pravy predni tlumic",
      "levy dalsi zatoc","levy dalsi tlumic",
      "pravy dalsi zatoc","pravy dalsi tlumic",
      "levy prostredni tlumic","",
      "pravy prostredni tlumic","",
      "levy zadni tlumic","",
      "pravy zadni tlumic","",
      "levy predni","levy predni zatoc",
      "pravy predni","pravy predni zatoc",
      "levy dalsi","levy dalsi zatoc",
      "pravy dalsi","pravy dalsi zatoc",
      "levy prostredni","levy prostredni tlumic",
      "pravy prostredni","pravy prostredni tlumic",
      "levy zadni","levy zadni tlumic",
      "pravy zadni","levy zadni tlumic",
      "ukaz_rychlo","",
      "ukaz_rychlo2","",
      "ukaz_rpm","",
      "OtocVez","",
      "OtocHlaven","OtocVez"
    };
  };
  class Motorcycle : Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "volant","",
      "ukaz_rychlo","volant",
      "ukaz_rychlo2","volant",
      "ukaz_rpm","volant",
      "pravy predni tlumic nerot","",
      "pravy predni tlumic","volant",
      "pravy zadni tlumic","",
      "pravy predni","pravy predni tlumic",
      "pravy zadni","pravy zadni tlumic",
      "OtocVez","",
      "OtocHlaven","OtocVez",
      "stojanek",""
    };
  };
  class Kolo : Motorcycle
  {
    skeletonInherit = "Motorcycle";
    skeletonBones[] =
    {
      "slapky","",
      "slapka l","slapky",
      "slapka p","slapky"
    };
  };
  class Scud : Car
  {
    skeletonInherit = "Car";
    skeletonBones[] =
    {
      "nosic","",
      "kolibka","",
      "raketa",""
    };
  };
  class Plane : Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "alt","",
      "alt2","",
      "mph","",
      "mph2","",
      "vert_speed","",
      "vert_speed2","",
      "nm_alt","",
      "hud_alt","",
      "hud_speed","",
      "rpm","",
      "kompas","",
      "kompas2","",
      "hodinova","",
      "hodinova2","",
      "minutova","",
      "minutova2","",
      "horizont_dive","",
      "horizont","horizont_dive",
      "horizont_dive2","",
      "horizont2","horizont_dive2",
      "lkh klapka","",
      "pkh klapka","",
      "lkd klapka","",
      "pkd klapka","",
      "leva smerovka","",
      "leva vejskovka","",
      "prava smerovka","",
      "prava vejskovka","",
      "ls klapka","",
      "ps klapka","",
      "predni kolo","",
      "levy kolo","",
      "pravy kolo","",
      "predni kolo rot","predni kolo",
      "levy kolo rot","levy kolo",
      "pravy kolo rot","pravy kolo",
      "vrtule 1","",
      "vrtule",""
    };
  };
  class Helicopter : Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "velka vrtule","",
      "mala vrtule","",
      "otocvez","",
      "otochlaven","otocvez",
      "alt","",
      "alt2","",
      "nm_alt","",
      "nm_alt2","",
      "mph","",
      "mph2","",
      "vert_speed","",
      "vert_speed2","",
      "rpm","",
      "rpm2","",
      "horizont_dive","",
      "horizont","horizont_dive",
      "horizont_dive2","",
      "horizont2","horizont_dive2",
      "kompas","",
      "kompas2","",
      "hodinova","",
      "hodinova2","",
      "minutova","",
      "minutova2","",
      "gatling","otochlaven"
    };
  };
  class HelicopterDiveRotors: Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "velka vrtule dive","",
      "mala vrtule dive","",
      "velka vrtule","velka vrtule dive",
      "mala vrtule","mala vrtule dive",
      "otocvez","",
      "otochlaven","otocvez",
      "alt","",
      "alt2","",
      "nm_alt","",
      "nm_alt2","",
      "mph","",
      "mph2","",
      "vert_speed","",
      "vert_speed2","",
      "rpm","",
      "rpm2","",
      "horizont","",
      "horizont2","",
      "kompas","",
      "kompas2","",
      "hodinova","",
      "hodinova2","",
      "minutova","",
      "minutova2","",
      "gatling",""
    };
  };
  class Parachute : Default
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "c1","",
      "c2","",
      "c3","",
      "c4","",
      "c5","",
      "c6","",
      "c7","",
      "c8","",
      "rh","",
      "lh",""
    };
  };
  class Church : Default
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "hodinova1","",
      "minutova1","",
      "hodinova2","",
      "minutova2","",
      "hodinova3","",
      "minutova3","",
      "hodinova4","",
      "minutova4",""
    };
  };
  class Building : Default
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "dvere1","",
      "dvere2",""
    };
  };
  class Fuelstation: Default
  {
    skeletonInherit="Default";
    skeletonBones[]=
    {
      "roofbig","",
      "roof_plank_01","",
      "roof_plank_02","",
      "roof_plank_03","",
      "roof_plank_04","",
      "roof_plank_05","",
      "roof_pillar_02","",
      "roofsmall","",
      "roof_pillar_small_02","",
      "roof_pillar_small_x_01","",
      "roof_plank_small_04","",
      "roof_plank_small_03","",
      "roof_plank_small_02","",
      "roof_plank_small_01","",
      "house","",
      "groundplate","",
      "cystern","",
      "smallhouse","",
      "fuelstat","",
      "fuelstaff","",
      "roof_pillar_01","",
      "roof_pillar_04","",
      "roof_pillar_03","",
      "roof_pillar_small_03","",
      "roof_pillar_small_01","",
      "roof_pillar_small_x_02",""
    };
  };
  class FuelstationArmy: Default
  {
    skeletonInherit="Default";
    skeletonBones[]=
    {
      "cystern","",
      "roofbig","",
      "roof_plank_01","",
      "roof_plank_02","",
      "roof_plank_03","",
      "roof_plank_04","",
      "roof_plank_05","",
      "roof_pillar_02","",
      "roofsmall","",
      "roof_pillar_small_02","",
      "roof_pillar_small_x_01","",
      "roof_plank_small_04","",
      "roof_plank_small_03","",
      "roof_plank_small_02","",
      "roof_plank_small_01","",
      "groundplate","",
      "smallhouse","",
      "fuelstat","",
      "fuelstaff","",
      "roof_pillar_01","",
      "roof_pillar_04","",
      "roof_pillar_03","",
      "roof_pillar_small_03","",
      "roof_pillar_small_01","",
      "roof_pillar_small_x_02","",
      "house","",
      "cover","",
    };
  };
  class Weapon : Default
  {
  };

  class WeaponRevolving: Weapon 
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
		"buben",""
    };
  };
  class MapWatch : Default
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "hodinova","",
      "minutova","",
      "vterinova","",
      "date1","",
      "date2","",
      "day",""
    };
  };
  class MapCompass : Default
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "kompas","",
      "arrow","",
      "vicko",""
    };
  };
  class Ship : Vehicle
  {
    skeletonInherit = "Vehicle";
    skeletonBones[] =
    {
      "otocvez","",
      "otochlaven","otocvez",
      "volant","",
      "radar",""
    };
  };
  class ShipTwoRadars : Ship
  {
    skeletonInherit = "Ship";
    skeletonBones[]=
    {
      "radar-2","radar"
    };
    
  };
  class Flag: Default
  {
  };
  class FlagCarrier: Default
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "stozar","",
      "vlajka",""
    };
  };
  class Most : Default
  {
    skeletonInherit = "Default";
    skeletonBones[] =
    {
      "1","",
      "2","",
      "3","",
      "4","",
      "5","",
      "6","",
      "7","",
      "8","",
      "9",""
    };
  };
};
