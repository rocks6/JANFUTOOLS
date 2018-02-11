// describe some properties models need to meet
// this was introduces in order to maintain consistent
// section management for HW T&L

class CfgModels
{
  class Default
  {
    sections[] = {};
    sectionsInherit="";
    skeletonName = "";
  };

  // some generic model requirements
  class Head: Default
  {
    sections[] =
    {
      "osobnost",
      "brejle"
    };
    skeletonName = "Head";
  };
  class Man: Default
  {
    sections[] =
    {
      "head injury","body injury",
      "l arm injury","r arm injury","p arm injury",
      "l leg injury","r leg injury","p leg injury",
      "medic",
      "zasleh"
    };
    sectionsInherit=Head;
    skeletonName = "CfgMovesMC";
  };
  class Vehicle: Default
  {
    sections[] =
    {
      "cislo",
      "grupa",
      "side",
      "sektor",
      "clan",
      "clan_sign",
      "podsvit pristroju",
      "poskozeni",
      "L svetlo",
      "P svetlo",
      "zasleh"
    };
  };
  class Tank: Vehicle
  {
    sectionsInherit="Vehicle";
    sections[]=
    {
      "zadni svetlo",
      "brzdove svetlo",
      "PasOffsetP","PasOffsetL",
      "pruh"
    };
    skeletonName = "Tank";
  };
  class TankTwoTurrets: Tank
  {
    skeletonName = "TankTwoTurrets";
  };
  class Car: Vehicle
  {
    sectionsInherit="Vehicle";
    sections[]=
    {
      "ammo",
      "sklo predni p",
      "sklo predni l",
      "zadni svetlo",
      "brzdove svetlo",
      "spz"
    };
    skeletonName = "Car";
  };
  class Helicopter: Vehicle
  {
    sectionsInherit="Vehicle";
    sections[]=
    {
      "sklo predni p",
      "sklo predni l",
      "velka vrtule staticka",
      "velka vrtule blur",
      "mala vrtule staticka",
      "mala vrtule blur"
    };
    skeletonName = "Helicopter";
  };
  class HelicopterDiveRotors: Helicopter
  {
    skeletonName = "HelicopterDiveRotors";
  };


  class Weapon: Default
  {
    sections[] = {"zasleh"};
  };

  class MapWatch: Default
  {
    sections[] = {"date1","date2","day"};
    skeletonName = "MapWatch";
  };
  class MapCompass: Default
  {
    sections[] = {"arrow"};
    skeletonName = "MapCompass";
  };
  class MapNotepad: Default 
  {
	  sections[] = {"paper"};
  };

  class xkompas: MapCompass {};
  class kompas: MapCompass {};

  class xkosei: MapWatch {};
  class kosei: MapWatch {};

  class Notepad: MapNotepad {};

  // ships
  class Ship: Vehicle
  {
    sectionsInherit="Vehicle";
    sections[]=
    {
      "zadni svetlo"
    };
    skeletonName = "Ship";
  };
  class ShipTwoRadars: Vehicle
  {
    skeletonName = "ShipTwoRadars";
  };

  // special models:
  class Flag: Default
  {
    sections[] = {"latka"};
  };


};
