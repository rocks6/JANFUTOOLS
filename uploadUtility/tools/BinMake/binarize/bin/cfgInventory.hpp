// inventory definition
// - in future, this config will be obsolete (it is used only as a reference)

class CfgInventory
{
  // list of all types of slots
  // - this will not be present probably in the final config, but is good for keeping of strictly definition here
  class SlotTypes
  {
    // man foreground slots (items in these slots are in use somehow)
    class WeaponInUse {};
    class RightHand {};
    class LeftHand {};
    class Googles {};
    // man inventory slots (items in these slots are only owned)
    class Back {};
    // other slots
    class Weapon {};
    class Common {};
  };
  // list of inventory containers and items
  // - items of this list will be defined in CfgVehicles, CfgNonAIVehicles and other configs finally
  class Objects
  {
    class Man // container only
    {
      simulation = Man;
      // ... more of common attributes
      // container definition
      class InventorySlots
      {
        // special (foreground) slots
        class Weapon // sometimes use of this slot disable slots RightHand and LeftHand - will be in action description
        {
          type = WeaponInUse; // special slot type to handle priorities
          size = 1;
        };
        class RightHand
        {
          type = RightHand;
          size = 1;
        };
        class LeftHand
        {
          type = LeftHand;
          size = 1;
        };
        class Goggles
        {
          type = Goggles;
          size = 1;
        };
        // regular (inventory slots)
        class Back
        {
          type = Back; // place for rucksack or other bag
          size = 1;
        };
      };
    };

    class Rucksack // both item and container
    {
      simulation = Baggage;
      // ... more of common attributes
      // item definition
      weight = 1.5; // weight of empty item
      class InventoryPlacements
      {
        class OnBack
        {
          type = Back;
          size = 1;
          priority = 1;
        };
        class InHands
        {
          // used when we need to manipulate with it (in both hands)
          type = WeaponInUse;
          size = 1;
          priority = 0;
        };
      };
      // container definition
      class InventorySlots
      {
        class Inside
        {
          type = Common;
          size = 16; // 16 common items of standard size
        };
        class Weapon1
        {
          type = Weapon;
          size = 1;
          // Remark: to make content of the slot visible, following steps need to be done:
          // 1. In model, create proxy on position where item should be displayed
          // 2. Register the proxy in the config (CfgNonAIVehicles) with:
          //  - simulation = ProxyInventory;
          //  - inventoryType = Weapon1; (name of the slot)
        };
        class Weapon2
        {
          type = Weapon;
          size = 1;
        };
        class Bottle
        {
          type = Bottle;
          size = 1;
        };
        // TODO: more slots
      };
    };

    class Bottle // item only
    {
      simulation = InventoryItem;
      // ... more of common attributes
      // item definition
      weight = 0.5;
      class InventoryPlacements
      {
        class Bottle
        {
          type = Bottle;
          size = 1;
          priority = 1;
        };
      };
    };
  };
};