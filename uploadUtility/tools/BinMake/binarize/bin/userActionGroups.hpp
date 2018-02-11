class UserActionsConflictGroups
{
  // helper groups to define collision groups
  class ActionGroups {
    basic[] = {
      ToggleWeapons,
      SwitchWeapon,
      DefaultAction,
      ReloadMagazine,
      LockTarget,   // lock target - RIGHT MOUSE BUTTON
      RevealTarget,
      PrevAction,
      NextAction,
      Action,
      Headlights,
      NightVision,
      Binocular,
      Compass,
      CompassToggle,
      Watch,
      WatchToggle,
      MiniMap,
      MiniMapToggle,
      ShowMap,
      HideMap,
      Help,
      TimeInc,
      TimeDec,
      Optics,
      PersonView,
      TacticalView,
      ZoomIn,
      ZoomOut,
      ZoomCont, // continuous zoom
      LookAround,
      LookAroundToggle,
      LookLeftDown,
      LookDown,
      LookRightDown,
      LookLeft,
      LookCenter,
      LookRight,
      LookLeftUp,
      LookUp,
      LookRightUp,
      LookLeftCont,
      LookRightCont,
      LookDownCont,
      LookUpCont,
      PrevChannel,
      NextChannel,
      Chat,
      VoiceOverNet,
      PushToTalk,
      PushToTalkAll,
      PushToTalkSide,
      PushToTalkGroup,
      PushToTalkVehicle,
      PushToTalkDirect,
      NetworkStats,
      NetworkPlayers,
      SelectAll,
      Turbo,
      Slow,
      HoldBreath,
      IngamePause,
      MenuSelect,
      MenuBack,
      ForceCommandingMode,
      SwapGunner,
      CancelAction,
      CommandWatch,
      TeamSwitch,
      TeamSwitchPrev,
      TeamSwitchNext,
      Gear,
      Cheat1,
      Cheat2,
      Diary
    };
    /*!
      \patch 5099 Date 12/8/2006 by Ondra
      - Fixed: False conflict reported for Handgun, Salute and SitDown actions for vehicles.
    */
    ManBasic[] = {
      TempRaiseWeapon,
      ToggleRaiseWeapon,
      Handgun,
      Salute,
      SitDown,
      LockTargets  // next / prev target - DIK_TAB
    };
    VehBasic[] = {
      Fire,
      VehicleTurbo,
      HeliManualFire,
      VehLockTargets, // next / prev target in vehicles
      GetOut,
      Eject
    };
    ManMove[] = {
      AimUp,
      AimDown,
      AimLeft,
      AimRight,
      MoveForward,
      MoveBack,
      TurnLeft,
      TurnRight,
      MoveUp,
      MoveDown,
      MoveFastForward,
      MoveSlowForward,
      MoveLeft,
      MoveRight,
      EvasiveForward,
      EvasiveLeft,
      EvasiveRight,
      EvasiveBack,
      Stand,
      Crouch,
      Prone,
      LeanLeft,
      LeanRight,
      LeanLeftToggle,
      LeanRightToggle,
      WalkRunToggle,
      WalkRunTemp
    };
    AimingHead[] = {
      AimHeadUp,
      AimHeadDown,
      AimHeadLeft,
      AimHeadRight
    };
    Heli[] = {
      HeliUp,       // Helicopter control
      HeliDown,
      HeliLeft,
      HeliRight,
      HeliCyclicLeft,
      HeliCyclicRight,
      HeliRudderLeft,
      HeliRudderRight,
      HeliForward,
      HeliBack,
      HeliFastForward,
      AutoHover,
      AutoHoverCancel,
      LandGear,
      LandGearUp,
      FlapsDown,
      FlapsUp
    };
    CarMovement[] = {
      CarLeft, // Car control
      CarRight,
      CarForward,
      CarBack,
      CarFastForward,
      CarSlowForward
    };
    CarFreelook[] = {
      CarAimUp,
      CarAimDown,
      CarAimLeft,
      CarAimRight
    };
    Tank[] = {
      TurnIn,
      TurnOut,
    };
    SeaGull[] = { // Seagull control
      SeagullUp,
      SeagullDown,
      SeagullForward,
      SeagullBack,
      SeagullFastForward
    };
    Command[] = {
      CommandLeft, // Vehicle commands
      CommandRight,
      CommandForward,
      CommandBack,
      CommandFast,
      CommandSlow
    };
    buldozer[] = {
      BuldSwitchCamera,
      BuldFreeLook,
      BuldSelect,
      BuldResetCamera,
      BuldMagnetizePoints,
      BuldMagnetizePlanes,
      BuldMagnetizeYFixed,
      BuldTerrainRaise1m,
      BuldTerrainLower1m,
      BuldTerrainRaise5m,
      BuldTerrainLower5m,
      BuldTerrainShowNode,
      BuldSelectionType,
      BuldLeft,
      BuldRight,
      BuldForward,
      BuldBack,
      BuldMoveLeft,
      BuldMoveRight,
      BuldMoveForward,
      BuldMoveBack,
      BuldTurbo,
      BuldUp,
      BuldDown,
      BuldLookLeft,
      BuldLookRight,
      BuldLookUp,
      BuldLookDown,
      BuldZoomIn,
      BuldZoomOut,
      BuldTextureInfo
    };
  };
  // CollisionGroups uses the actionGroups within array definitions
  // actions within one collisionGroup collides
  class CollisionGroups {
    manMain[] = {basic, manBasic};
    vehMain[] = {basic, vehBasic};
    manMove[] = {manMove, manBasic, basic};
    commander[] = {command, vehBasic, basic};
    aimingHead[] = {aimingHead, manBasic, basic};
    heli[] = {heli, vehBasic, basic};
    carMove[] = {CarMovement, vehBasic, basic};
    carLook[] = {CarFreelook, vehBasic, basic};
    TankMove[] = {CarMovement, Tank, vehBasic, basic};
    TankLook[] = {CarFreelook, Tank, vehBasic, basic};
    seagull[] = {seagull};
    buldozer[] = {buldozer};
  };
  // Exceptions groups are prioritized: actions within the same group cannot collide
  class Exceptions {
    leftAlt[] = {lookAround, commandWatch};
    map[] = {showMap, hideMap};
    lockRevealTarget[] = {lockTarget, revealTarget, holdBreath};
    rollLeft[] = {EvasiveLeft, LeanLeft};
    rollRight[] = {EvasiveRight, LeanRight};
    landGear[] = {LandGear, LandGearUp};
  };
};

class UserActionGroups
{
  class All
  {
    name = $STR_USRACT_GROUP_ALL;
    group[] = {
      MoveForward,
      MoveBack,
      TurnLeft,
      TurnRight,
      MoveUp,
      MoveDown,
      MoveFastForward,
      MoveSlowForward,
      MoveLeft,
      MoveRight,
      EvasiveForward,
      EvasiveLeft,
      EvasiveRight,
      Stand,
      Crouch,
      Prone,
      LeanLeft,
      LeanRight,
      LeanLeftToggle,
      LeanRightToggle,
      WalkRunToggle,
      WalkRunTemp,

      ToggleWeapons,
      SwitchWeapon,
      Fire,
      DefaultAction,
      ReloadMagazine,
      LockTargets,  // next / prev target - DIK_TAB
      LockTarget,   // lock target - RIGHT MOUSE BUTTON
      RevealTarget,
      TempRaiseWeapon,
      ToggleRaiseWeapon,
      PrevAction,
      NextAction,
      Action,
      Headlights,
      NightVision,
      Binocular,
      Handgun,
      Compass,
      CompassToggle,
      Watch,
      WatchToggle,
      MiniMap,
      MiniMapToggle,
      ShowMap,
      HideMap,
      Help,
      TimeInc,
      TimeDec,
      Optics,
      PersonView,
      TacticalView,
      ZoomIn,
      ZoomOut,
      ZoomCont, // continuous zoom
      LookAround,
      LookAroundToggle,
      LookLeftDown,
      LookDown,
      LookRightDown,
      LookLeft,
      LookCenter,
      LookRight,
      LookLeftUp,
      LookUp,
      LookRightUp,
      LookLeftCont,
      LookRightCont,
      LookDownCont,
      LookUpCont,
      PrevChannel,
      NextChannel,
      Chat,
      VoiceOverNet,
      PushToTalk,
      PushToTalkAll,
      PushToTalkSide,
      PushToTalkGroup,
      PushToTalkVehicle,
      PushToTalkDirect,
      NetworkStats,
      NetworkPlayers,
      SelectAll,
      Turbo,
      VehicleTurbo,
      Slow,

      HoldBreath,
      Salute,
      SitDown,

      AimUp,
      AimDown,
      AimLeft,
      AimRight,

      AimHeadUp,
      AimHeadDown,
      AimHeadLeft,
      AimHeadRight,

      IngamePause,

      MenuSelect,
      MenuBack,
      ForceCommandingMode,
      // Helicopter control
      HeliUp,
      HeliDown,
      HeliLeft,
      HeliRight,
      HeliCyclicLeft,
      HeliCyclicRight,
      HeliRudderLeft,
      HeliRudderRight,
      HeliForward,
      HeliBack,
      HeliFastForward,
      AutoHover,
      AutoHoverCancel,
      LandGear,
      LandGearUp,
      FlapsDown,
      FlapsUp,

      // Seagull control
      SeagullUp,
      SeagullDown,
      SeagullForward,
      SeagullBack,
      SeagullFastForward,

      // Car control
      CarLeft,
      CarRight,
      CarForward,
      CarBack,
      CarFastForward,
      CarSlowForward,

      IndicateLeft,
      IndicateRight,
      IndicateHazard,

      CarAimUp,
      CarAimDown,
      CarAimLeft,
      CarAimRight,

      // Vehicle commands
      CommandLeft,
      CommandRight,
      CommandForward,
      CommandBack,
      CommandFast,
      CommandSlow,

      VehLockTargets, // next / prev target in vehicles

      SwapGunner,
      HeliManualFire,
      TurnIn,
      TurnOut,
      InteractVeh,
      GetOut,
      Eject,

      CancelAction,

      CommandWatch,

      TeamSwitch,
      TeamSwitchPrev,
      TeamSwitchNext,
      Gear,

      Cheat1,
      Cheat2,

      Diary
    };
  };
  class BasicInfantryControls
  {
    name = $STR_USRACT_GROUP_INFANTRY;
    group[] = {
        MoveForward,
        MoveBack,
        TurnLeft,
        TurnRight,
        MoveFastForward,
        MoveSlowForward,
        MoveLeft,
        MoveRight,
        EvasiveForward,
        EvasiveLeft,
        EvasiveRight,
        Stand,
        Crouch,
        Prone,
        LeanLeft,
        LeanRight,
        LeanLeftToggle,
        LeanRightToggle,
        WalkRunToggle,
        WalkRunTemp,

        ToggleWeapons,
        SwitchWeapon,
        DefaultAction,
        ReloadMagazine,

        LockTargets,  // next / prev target - DIK_TAB
        LockTarget,   // lock target - RIGHT MOUSE BUTTON
        RevealTarget,
        TempRaiseWeapon,
        ToggleRaiseWeapon,
        PrevAction,
        NextAction,
        MenuBack,
        Action,

        Optics,
        LookAround,
        LookAroundToggle,

        TeamSwitch,
        TeamSwitchPrev,
        TeamSwitchNext,

        Gear,
        Compass,
        CompassToggle,
        Watch,
        WatchToggle,
        MiniMap,
        MiniMapToggle,

        ForceCommandingMode,
        Diary,

        Headlights,
        NightVision,
        Binocular,
        Handgun,
        ShowMap,
        HideMap,

        PersonView,
        TacticalView,

        ZoomIn,
        ZoomOut,

        HoldBreath,
        Salute,
        SitDown,

        VoiceOverNet,
        PrevChannel,
        NextChannel,
        Chat,
        PushToTalk,
        PushToTalkAll,
        PushToTalkSide,
        PushToTalkGroup,
        PushToTalkVehicle,
        PushToTalkDirect,

        AimUp,
        AimDown,
        AimLeft,
        AimRight,

        AimHeadUp,
        AimHeadDown,
        AimHeadLeft,
        AimHeadRight,

        LookLeftDown,
        LookDown,
        LookRightDown,
        LookLeft,
        LookCenter,
        LookRight,
        LookLeftUp,
        LookUp,
        LookRightUp,
        LookLeftCont,
        LookRightCont,
        LookDownCont,
        LookUpCont
    };
  };
  class Car
  {
    name = $STR_USRACT_GROUP_VEHICLE;
    group[] = {
        // Car control
        CarLeft,
        CarRight,
        CarForward,
        CarBack,
        CarFastForward,
        CarSlowForward,

        IndicateLeft,
        IndicateRight,
        IndicateHazard,

        CarAimUp,
        CarAimDown,
        CarAimLeft,
        CarAimRight,

        TurnIn,
        TurnOut,
        InteractVeh,
        GetOut,
        Eject,

        Fire
    };
  };
  class Air
  {
    name = $STR_USRACT_GROUP_FLYING;
    group[] = {
      // Helicopter control
      HeliUp,
      HeliDown,
      HeliLeft,
      HeliRight,
      HeliCyclicLeft,
      HeliCyclicRight,
      HeliRudderLeft,
      HeliRudderRight,
      HeliForward,
      HeliBack,
      HeliFastForward,
      HeliManualFire,
      AutoHover,
      AutoHoverCancel,
      LandGear,
      LandGearUp,
      FlapsDown,
      FlapsUp,
      InteractVeh,
      GetOut,
      Eject,
      // Seagull control
      SeagullUp,
      SeagullDown,
      SeagullForward,
      SeagullBack,
      SeagullFastForward,

      Fire
    };
  };
  class Buldozer
  {
    name = $STR_USRACT_GROUP_BULDOZER;
    group[] = {
      // Buldozer actions
      BuldSwitchCamera,
      BuldFreeLook,
      BuldSelect,
      BuldResetCamera,
      BuldMagnetizePoints,
      BuldMagnetizePlanes,
      BuldMagnetizeYFixed,
      BuldTerrainRaise1m,
      BuldTerrainLower1m,
      BuldTerrainRaise5m,
      BuldTerrainLower5m,
      BuldTerrainShowNode,
      BuldSelectionType,
      BuldLeft,
      BuldRight,
      BuldForward,
      BuldBack,
      BuldMoveLeft,
      BuldMoveRight,
      BuldMoveForward,
      BuldMoveBack,
      BuldTurbo,
      BuldUp,
      BuldDown,
      BuldLookLeft,
      BuldLookRight,
      BuldLookUp,
      BuldLookDown,
      BuldZoomIn,
      BuldZoomOut,
      BuldTextureInfo
    };
  };
};
