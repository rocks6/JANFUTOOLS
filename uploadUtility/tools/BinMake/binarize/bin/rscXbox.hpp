#include "commonDefs.hpp"
#include "resincl.hpp"
#include "rscCommon.hpp"

//Todo:

//Possibly temporary file to store all X-box specific displays.
class RscButtonImages
{
	class Controller
	{
		XBoxA[] = {"\XMisc\a_butt.paa",1};
		XBoxB[] = {"\XMisc\b_butt.paa",1};
		XBoxX[] = {"\XMisc\x_butt.paa",1};
		XBoxY[] = {"\XMisc\y_butt.paa",1};
		XBoxUp[] = {"\XMisc\u_arrow.paa",1};
		XBoxDown[] = {"\XMisc\d_arrow.paa",1};
		XBoxLeft[] = {"\XMisc\l_arrow.paa",1};
		XBoxRight[] = {"\XMisc\r_arrow.paa",1};
		XBoxStart[] = {"\XMisc\start.paa",1};
		XBoxBack[] = {"\XMisc\back.paa",1};
		XBoxBlack[] = {"\XMisc\black_butt.paa",1};
		XBoxWhite[] = {"\XMisc\white_butt.paa",1};
		XBoxLeftTrigger[] = {"\XMisc\l_butt.paa",1};
		XBoxRightTrigger[] = {"\XMisc\r_butt.paa",1};
		XBoxLeftThumb[] = {"\XMisc\l_stick_push.paa",1.2};
		XBoxRightThumb[] = {"\XMisc\r_stick_push.paa",1.2};

		XBoxLeftThumbXRight[] = {"\XMisc\l_stick_right.paa",1.2};
		XBoxLeftThumbYUp[] = {"\XMisc\l_stick_up.paa",1.2};
		XBoxRightThumbXRight[] = {"\XMisc\r_stick_right.paa",1.2};
		XBoxRightThumbYUp[] = {"\XMisc\r_Stick_up.paa",1.2};

		XBoxLeftThumbXLeft[] = {"\XMisc\l_stickw.paa",1.2};
		XBoxLeftThumbYDown[] = {"\XMisc\l_sticks.paa",1.2};
		XBoxRightThumbXLeft[] = {"\XMisc\r_stickw.paa",1.2};
		XBoxRightThumbYDown[] = {"\XMisc\r_sticks.paa",1.2};
	};

	class ControllerS
	{
		XBoxA[] = {"\XMisc\a_butt.paa",1};
		XBoxB[] = {"\XMisc\b_butt.paa",1};
		XBoxX[] = {"\XMisc\x_butt.paa",1};
		XBoxY[] = {"\XMisc\y_butt.paa",1};
		XBoxUp[] = {"\XMisc\u_arrow.paa",1};
		XBoxDown[] = {"\XMisc\d_arrow.paa",1};
		XBoxLeft[] = {"\XMisc\l_arrow.paa",1};
		XBoxRight[] = {"\XMisc\r_arrow.paa",1};
		XBoxStart[] = {"\XMisc\start.paa",1};
		XBoxBack[] = {"\XMisc\back.paa",1};
		XBoxBlack[] = {"\XMisc\black_butt.paa",1};
		XBoxWhite[] = {"\XMisc\white_butt.paa",1};
		XBoxLeftTrigger[] = {"\XMisc\l_butt.paa",1};
		XBoxRightTrigger[] = {"\XMisc\r_butt.paa",1};
		XBoxLeftThumb[] = {"\XMisc\l_stick_push.paa",1.2};
		XBoxRightThumb[] = {"\XMisc\r_stick_push.paa",1.2};

		XBoxLeftThumbXRight[] = {"\XMisc\l_stick_right.paa",1.2};
		XBoxLeftThumbYUp[] = {"\XMisc\l_stick_up.paa",1.2};
		XBoxRightThumbXRight[] = {"\XMisc\r_stick_right.paa",1.2};
		XBoxRightThumbYUp[] = {"\XMisc\r_Stick_up.paa",1.2};

		XBoxLeftThumbXLeft[] = {"\XMisc\l_stick_left.paa",1.2};
		XBoxLeftThumbYDown[] = {"\XMisc\l_stick_down.paa",1.2};
		XBoxRightThumbXLeft[] = {"\XMisc\r_stick_left.paa",1.2};
		XBoxRightThumbYDown[] = {"\XMisc\r_stick_down.paa",1.2};
	};
};

#define pictureLeftRight "<img image='\xmisc\ctrl_strafe.paa'/>"
#define HeliXCurve 0,{"Gamma",1,1.5}
#define HeliYCurve 0,{"Gamma",1,1.5}

#define HELI_CONTROLS_R_AIM \
	HeliUp[] = {KEY_XBOX_LeftThumbYUp,HeliYCurve}; \
	HeliDown[] = {KEY_XBOX_LeftThumbYDown,HeliYCurve}; \
	HeliCyclicLeft[] = {KEY_XBOX_LeftThumbXLeft,HeliXCurve}; \
	HeliCyclicRight[] = {KEY_XBOX_LeftThumbXRight,HeliXCurve}; \
 	HeliRudderLeft[] = {KEY_XBOX_RightThumbXLeft,HeliXCurve}; \
	HeliRudderRight[] = {KEY_XBOX_RightThumbXRight,HeliXCurve}; \
	HeliBack[] = {KEY_XBOX_RightThumbYUp,HeliYCurve,HeliFastForward}; \
	HeliFastForward[] = {KEY_XBOX_RightThumbYDown,HeliYCurve,HeliBack}; \
	HeliForward[] = {}; \
  SeagullUp[] = {KEY_XBOX_LeftThumbYUp,HeliYCurve}; \
  SeagullDown[] = {KEY_XBOX_LeftThumbYDown,HeliYCurve}; \
  SeagullBack[] = {KEY_XBOX_RightThumbYUp,HeliYCurve,SeagullFastForward}; \
  SeagullFastForward[] = {KEY_XBOX_RightThumbYDown,HeliYCurve,SeagullBack}; \
  SeagullForward[] = {}; \

#define CarXCurve 0,{"Gamma",1.0,3}
#define CarYCurve 0,{"Gamma",1.0,1.5}

#define CAR_CONTROLS \
	CarLeft[] = {KEY_XBOX_RightThumbXLeft,CarXCurve}; \
	CarRight[] = {KEY_XBOX_RightThumbXRight,CarXCurve}; \
	CarForward[] = {}; \
	CarBack[] = {KEY_XBOX_LeftThumbYDown,CarYCurve}; \
	CarFastForward[] = {KEY_XBOX_LeftThumbYUp,CarYCurve}; \
	CarSlowForward[] = {}; \
  CarAimUp[] = {KEY_XBOX_RightThumbYUp,CarAimYCurve,CarAimDown}; \
	CarAimDown[] = {KEY_XBOX_RightThumbYDown,CarAimYCurve,CarAimUp}; \
	CarAimLeft[] = {KEY_XBOX_RightThumbXLeft,CarAimXCurve}; \
	CarAimRight[] = {KEY_XBOX_RightThumbXRight,CarAimXCurve};

#define DefButtonDeadZone {64,48}
#define FireDeadZone {80,64}
#define RevealDeadZone {192,128}

class ButtonDeadZonesDefault
{
	deadZone_A[]=DefButtonDeadZone;
	deadZone_B[]=DefButtonDeadZone;
	deadZone_X[]=DefButtonDeadZone;
	deadZone_Y[]=DefButtonDeadZone;

	deadZone_Up[]=DefButtonDeadZone;
	deadZone_Down[]=DefButtonDeadZone;
	deadZone_Left[]=DefButtonDeadZone;
	deadZone_Right[]=DefButtonDeadZone;

	deadZone_Start[]=DefButtonDeadZone;
	deadZone_Back[]=DefButtonDeadZone;

	deadZone_Black[]=DefButtonDeadZone;
	deadZone_White[]=DefButtonDeadZone;

	deadZone_LeftThumb[]=DefButtonDeadZone;
	deadZone_RightThumb[]=DefButtonDeadZone;
};

#define RightStickDeadZoneX 0.21
#define RightStickDeadZoneY 0.23
#define LeftStickDeadZoneX 0.21
#define LeftStickDeadZoneY 0.23
#define WheelDeadZone 0.17

class ControllerTypes
{
  class Gamepad
  {
    resource = RscDisplayProfileController;
    hint = $STR_XBOX_GAMEPAD;
    imageRightA = false;
    imageRightB = false;
    imageRightY = false;
    imageRightX = false;
    imageRightWhite = false;
    imageRightBlack = false;
    imageRightLeft = true;
    imageRightRight = true;
    imageRightUp = true;
    imageRightDown = true;
    imageRightBack = true;
    imageRightStart = true;
  };

  class Joystick
  {
    resource = RscDisplayProfileControllerJoystick;
    hint = $STR_XBOX_JOYSTICK;
    imageRightA = false;
    imageRightB = false;
    imageRightY = true;
    imageRightX = true;
    imageRightWhite = true;
    imageRightBlack = true;
    imageRightLeft = true;
    imageRightRight = true;
    imageRightUp = true;
    imageRightDown = true;
    imageRightBack = false;
    imageRightStart = false;
  };

  class Wheel
  {
    resource = RscDisplayProfileControllerWheel;
    hint = $STR_XBOX_WHEEL;
    imageRightA = false;
    imageRightB = false;
    imageRightY = false;
    imageRightX = false;
    imageRightWhite = false;
    imageRightBlack = false;
    imageRightLeft = true;
    imageRightRight = true;
    imageRightUp = true;
    imageRightDown = true;
    imageRightBack = true;
    imageRightStart = true;
  };
};

class ControllerSchemes
{
	#define AimXCurve 0, \
	  {"LinRampZoom", \
	    {1.0, 0.7,0.075, 0.85,0.60, 1.0, 7.50}, \
	    {0.7, 0.7,0.075, 0.85,0.55, 1.0, 5.50}, \
	    {0.3, 0.7,0.075, 0.85,0.20, 1.0, 1.50} \
	  }

	#define AimYCurve 0, \
	  {"LinRampZoom", \
	    {1.0, 0.8,0.09, 0.9,0.12, 1.0, 0.70}, \
	    {0.7, 0.8,0.07, 0.9,0.10, 1.0, 0.60}, \
	    {0.3, 0.8,0.05, 0.9,0.07, 1.0, 0.40}, \
	  }
	#define CarAimXCurve 0, \
	  {"LinRampZoom", \
	    {1.0, 0.7,0.075, 0.85,0.80, 1.0, 9.50}, \
	    {0.7, 0.7,0.075, 0.85,0.50, 1.0, 5.50}, \
	    {0.3, 0.7,0.075, 0.85,0.30, 1.0, 1.50} \
	  }

	#define CarAimYCurve 0, \
	  {"LinRampZoom", \
	    {1.0, 0.8,0.1, 0.9,0.14, 1.0, 1.0}, \
	    {0.7, 0.8,0.08, 0.9,0.12, 1.0, 0.80}, \
	    {0.3, 0.8,0.06, 0.9,0.09, 1.0, 0.60}, \
	  }

  #define AimHeadXCurve 0,{"Gamma",2,4}
  #define AimHeadYCurve 0,{"Gamma",1,2.5}

  #define MoveXCurve 0,{"Gamma",1,2}
  #define MoveYCurve 0,{"Gamma",1,4}

  #define WheelCurve 0,{"Gamma",1.5,4}

	class Default
	{
		name = $STR_XBOX_CONTROLER_SCHEME_DEFAULT;

    class Gamepad
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_B};
        DefaultAction[] = {KEY_XBOX_RightTrigger};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_LeftTrigger};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_LeftTrigger};

        VehLockTargets[] = {KEY_XBOX_LeftThumb};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        MenuBack[] = {KEY_XBOX_Left};
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {KEY_XBOX_White};
        ShowMap[] = {KEY_XBOX_Black};
        HideMap[] = {KEY_XBOX_Black};
        ZoomCont[] = {KEY_XBOX_LeftTrigger};
        PersonView[] = {KEY_XBOX_Back};
        IngamePause[] = {KEY_XBOX_Start};
        Optics[] = {KEY_XBOX_RightThumb};

        CommandLeft[] = {KEY_XBOX_LeftThumbXLeft,CarXCurve};
        CommandRight[] = {KEY_XBOX_LeftThumbXRight,CarXCurve};
        CommandForward[] = {KEY_XBOX_LeftThumbYUp,CarYCurve};
        CommandBack[] = {KEY_XBOX_LeftThumbYDown,CarYCurve};
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Joystick
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_B};
        DefaultAction[] = {KEY_XBOX_A};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_RightThumb};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_RightThumb};

        VehLockTargets[] = {KEY_XBOX_White};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_LeftThumb};
        MenuSelect[] = {KEY_XBOX_Right};
        MenuBack[] = {KEY_XBOX_Left};
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        ShowMap[] = {KEY_XBOX_Black};
        HideMap[] = {KEY_XBOX_Black};
        ZoomCont[] = {KEY_XBOX_RightThumb};
        PersonView[] = {KEY_XBOX_Back};
        IngamePause[] = {KEY_XBOX_Start};
        Optics[] = {};

        CommandLeft[] = {KEY_XBOX_RightThumbXLeft,CarXCurve};
        CommandRight[] = {KEY_XBOX_RightThumbXRight,CarXCurve};
        CommandForward[] = {KEY_XBOX_RightTrigger,CarYCurve};
        CommandBack[] = {KEY_XBOX_LeftTrigger,CarYCurve};
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Wheel
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_B};
        DefaultAction[] = {KEY_XBOX_Black};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_White};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_LeftTrigger};

        VehLockTargets[] = {};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        MenuBack[] = {KEY_XBOX_Left};
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        ShowMap[] = {KEY_XBOX_Y};
        HideMap[] = {KEY_XBOX_Y};
        ZoomCont[] = {KEY_XBOX_White};
        PersonView[] = {KEY_XBOX_Back};
        Optics[] = {};
        IngamePause[] = {KEY_XBOX_Start};

        CommandLeft[] = {KEY_XBOX_LeftThumbXLeft,CarXCurve};
        CommandRight[] = {KEY_XBOX_LeftThumbXRight,CarXCurve};
        CommandForward[] = {KEY_XBOX_LeftThumbYUp,CarYCurve};
        CommandBack[] = {KEY_XBOX_LeftThumbYDown,CarYCurve};
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

		class Vehicles
		{
  		class Characters
  		{
  			name = $STR_XBOX_CONTROLER_CHARACTERS;
  			axisY = false;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_STRAFE;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_UP;

          textRThumb = $STR_XBOX_CONTROLER_AIM;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_UD_AIM;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_LR_AIM;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_OPTICS;

          class Actions
          {
            MoveBack[] = {KEY_XBOX_LeftThumbYDown,MoveYCurve};
            TurnLeft[] = {KEY_XBOX_LeftThumbXLeft,MoveXCurve};
            TurnRight[] = {KEY_XBOX_LeftThumbXRight,MoveXCurve};
            MoveFastForward[] = {KEY_XBOX_LeftThumbYUp,MoveYCurve};
            MoveUp[] = {KEY_XBOX_LeftThumb};
            MoveDown[] = {KEY_XBOX_Y};
            AimUp[] = {KEY_XBOX_RightThumbYUp,AimYCurve,AimDown};
            AimDown[] = {KEY_XBOX_RightThumbYDown,AimYCurve,AimUp};
            AimLeft[] = {KEY_XBOX_RightThumbXLeft,AimXCurve};
            AimRight[] = {KEY_XBOX_RightThumbXRight,AimXCurve};
            AimHeadUp[] = {KEY_XBOX_RightThumbYUp,AimHeadYCurve,AimHeadDown};
            AimHeadDown[] = {KEY_XBOX_RightThumbYDown,AimHeadYCurve,AimHeadUp};
            AimHeadLeft[] = {KEY_XBOX_RightThumbXLeft,AimHeadXCurve};
            AimHeadRight[] = {KEY_XBOX_RightThumbXRight,AimHeadXCurve};
          };
        };

        class Joystick
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = $STR_XBOX_CONTROLER_RS_STRAFE;
          textLThumbPS = $STR_XBOX_CONTROLER_RS_KNEEL;

          textRThumb = $STR_XBOX_CONTROLER_AIM;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_UD_AIM;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_LR_AIM;
          textRThumbPS = $STR_XBOX_CONTROLER_LS_ZOOM;

          class Actions
          {
            MoveBack[] = {KEY_XBOX_LeftTrigger,MoveYCurve};
            TurnLeft[] = {KEY_XBOX_RightThumbXLeft,MoveXCurve};
            TurnRight[] = {KEY_XBOX_RightThumbXRight,MoveXCurve};
            MoveFastForward[] = {KEY_XBOX_RightTrigger,MoveYCurve};
            MoveUp[] = {};
            MoveDown[] = {KEY_XBOX_Y};
            AimUp[] = {KEY_XBOX_LeftThumbYUp,AimYCurve,AimDown};
            AimDown[] = {KEY_XBOX_LeftThumbYDown,AimYCurve,AimUp};
            AimLeft[] = {KEY_XBOX_LeftThumbXLeft,AimXCurve};
            AimRight[] = {KEY_XBOX_LeftThumbXRight,AimXCurve};
            AimHeadUp[] = {KEY_XBOX_LeftThumbYUp,AimHeadYCurve,AimHeadDown};
            AimHeadDown[] = {KEY_XBOX_LeftThumbYDown,AimHeadYCurve,AimHeadUp};
            AimHeadLeft[] = {KEY_XBOX_LeftThumbXLeft,AimHeadXCurve};
            AimHeadRight[] = {KEY_XBOX_LeftThumbXRight,AimHeadXCurve};
          };
        };

        class Wheel
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_STRAFE;
          textLThumbPS = "";

          textRThumb = "";
          textRThumbLR = "";
          textRThumbUD = "";
          textRThumbPS = "";

          class Actions
          {
            MoveBack[] = {KEY_XBOX_LeftTrigger,MoveYCurve};
            TurnLeft[] = {KEY_XBOX_LeftThumbXLeft,WheelCurve};
            TurnRight[] = {KEY_XBOX_LeftThumbXRight,WheelCurve};
            MoveFastForward[] = {KEY_XBOX_RightTrigger,MoveYCurve};
            MoveUp[] = {};
            MoveDown[] = {};
            AimUp[] = {};
            AimDown[] = {};
            AimLeft[] = {};
            AimRight[] = {};
            AimHeadUp[] = {};
            AimHeadDown[] = {};
            AimHeadLeft[] = {KEY_XBOX_LeftThumbXLeft,AimHeadXCurve};
            AimHeadRight[] = {KEY_XBOX_LeftThumbXRight,AimHeadXCurve};
          };
        };
  		};

  		class Ground
  		{
  			name = $STR_XBOX_CONTROLER_VEHICLE_GROUND;
  			axisY = false;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = "";
          textLThumbPS = "";

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = "";
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TURN;
          textRThumbPS = "";

          class Actions
          {
            CAR_CONTROLS
            SwapGunner[] = {KEY_XBOX_Y};
          };
        };

        class Joystick
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = "";
          textLThumbPS = "";

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = "";
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TURN;
          textRThumbPS = "";

          class Actions
          {
	          CarLeft[] = {KEY_XBOX_LeftThumbXLeft,CarXCurve};
	          CarRight[] = {KEY_XBOX_LeftThumbXRight,CarXCurve};
	          CarForward[] = {};
	          CarBack[] = {KEY_XBOX_LeftTrigger,CarYCurve};
	          CarFastForward[] = {KEY_XBOX_RightTrigger,CarYCurve};
	          CarSlowForward[] = {};
            CarAimUp[] = {KEY_XBOX_LeftThumbYUp,CarAimYCurve,CarAimDown};
	          CarAimDown[] = {KEY_XBOX_LeftThumbYDown,CarAimYCurve,CarAimUp};
	          CarAimLeft[] = {KEY_XBOX_LeftThumbXLeft,CarAimXCurve};
          	CarAimRight[] = {KEY_XBOX_LeftThumbXRight,CarAimXCurve};
            SwapGunner[] = {KEY_XBOX_Y};
          };
        };

        class Wheel
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_STRAFE;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbPS = "";

          textRThumb = "";
          textRThumbLR = "";
          textRThumbUD = "";
          textRThumbPS = "";

          class Actions
          {
            CarLeft[] = {KEY_XBOX_LeftThumbXLeft,CarXCurve};
            CarRight[] = {KEY_XBOX_LeftThumbXRight,CarXCurve};
            CarForward[] = {};
            CarBack[] = {KEY_XBOX_LeftTrigger,CarYCurve};
            CarFastForward[] = {KEY_XBOX_RightTrigger,CarYCurve};
            CarSlowForward[] = {};
            CarAimUp[] = {};
            CarAimDown[] = {};
            CarAimLeft[] = {KEY_XBOX_LeftThumbXLeft,AimHeadXCurve};
            CarAimRight[] = {KEY_XBOX_LeftThumbXRight,AimHeadXCurve};
            SwapGunner[] = {KEY_XBOX_A};
          };
        };
  		};

  		class Aircraft
  		{
  			name = $STR_XBOX_CONTROLER_AIR;
  			axisY = true;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_FLY;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_RUDDER;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_LOCK;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_TILT_MOVE;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TILT;
          textRThumbPS = "";

          class Actions
          {
            HELI_CONTROLS_R_AIM
            HeliManualFire[] = {KEY_XBOX_Y};
          };
        };

        class Joystick
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_FLY;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_RUDDER;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_LOCK;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_TILT_MOVE;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TILT;
          textRThumbPS = "";

          class Actions
          {
            HeliUp[] = {KEY_XBOX_RightTrigger,HeliYCurve};
	          HeliDown[] = {KEY_XBOX_LeftTrigger,HeliYCurve};
	          HeliCyclicLeft[] = {KEY_XBOX_RightThumbXLeft,HeliXCurve};
	          HeliCyclicRight[] = {KEY_XBOX_RightThumbXRight,HeliXCurve};
 	          HeliRudderLeft[] = {KEY_XBOX_LeftThumbXLeft,HeliXCurve};
	          HeliRudderRight[] = {KEY_XBOX_LeftThumbXRight,HeliXCurve};
	          HeliBack[] = {KEY_XBOX_LeftThumbYUp,HeliYCurve,HeliFastForward};
	          HeliFastForward[] = {KEY_XBOX_LeftThumbYDown,HeliYCurve,HeliBack};
	          HeliForward[] = {};
            HeliManualFire[] = {KEY_XBOX_Y};

            SeagullUp[] = {KEY_XBOX_RightTrigger,HeliYCurve};
            SeagullDown[] = {KEY_XBOX_LeftTrigger,HeliYCurve};
            SeagullBack[] = {KEY_XBOX_LeftThumbYUp,HeliYCurve,SeagullFastForward};
            SeagullFastForward[] = {KEY_XBOX_LeftThumbYDown,HeliYCurve,SeagullBack};
            SeagullForward[] = {};
          };
        };

        class Wheel
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_TURN;
          textLThumbUD = "";
          textLThumbPS = "";

          textRThumb = "";
          textRThumbLR = "";
          textRThumbUD = "";
          textRThumbPS = "";

          class Actions
          {
            HeliUp[] = {};
            HeliDown[] = {};
            HeliCyclicLeft[] = {};
            HeliCyclicRight[] = {};

            HeliRudderLeft[] = {KEY_XBOX_LeftThumbXLeft,HeliXCurve};
            HeliRudderRight[] = {KEY_XBOX_LeftThumbXRight,HeliXCurve};
            HeliBack[] = {KEY_XBOX_LeftTrigger,CarYCurve};
            HeliFastForward[] = {KEY_XBOX_RightTrigger,CarYCurve};
            HeliForward[] = {};

            HeliManualFire[] = {KEY_XBOX_A};

            SeagullUp[] = {};
            SeagullDown[] = {};
            SeagullBack[] = {KEY_XBOX_LeftTrigger,CarYCurve};
            SeagullFastForward[] = {KEY_XBOX_RightTrigger,CarYCurve};
            SeagullForward[] = {};
          };
        };
  		};
	  };
  };

  class LeftHanded: Default
  {
		name = "Left Handed"; //TODO: Stringtable

    class Gamepad
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_B};
        DefaultAction[] = {KEY_XBOX_LeftTrigger};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_RightTrigger};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_RightTrigger};

        VehLockTargets[] = {KEY_XBOX_RightThumb};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        MenuBack[] = {KEY_XBOX_Left};
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {KEY_XBOX_White};
        ShowMap[] = {KEY_XBOX_Black};
        HideMap[] = {KEY_XBOX_Black};
        ZoomCont[] = {KEY_XBOX_RightTrigger};
        PersonView[] = {KEY_XBOX_Back};
        IngamePause[] = {KEY_XBOX_Start};
        Optics[] = {KEY_XBOX_LeftThumb};

        CommandLeft[] = {KEY_XBOX_RightThumbXLeft,CarXCurve};
        CommandRight[] = {KEY_XBOX_RightThumbXRight,CarXCurve};
        CommandForward[] = {KEY_XBOX_RightThumbYUp,CarYCurve};
        CommandBack[] = {KEY_XBOX_RightThumbYDown,CarYCurve};
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Joystick
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_B};
        DefaultAction[] = {KEY_XBOX_Y};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_LeftTrigger};
        LockTarget[] = {};
        RevealTarget[] = {};

        VehLockTargets[] = {};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        MenuBack[] = {KEY_XBOX_Left};
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        ShowMap[] = {KEY_XBOX_White};
        HideMap[] = {KEY_XBOX_Black};
        ZoomCont[] = {};
        PersonView[] = {KEY_XBOX_Back};
        Optics[] = {KEY_XBOX_Black};
        IngamePause[] = {KEY_XBOX_Start};

        CommandLeft[] = {KEY_XBOX_LeftThumbXLeft,CarXCurve};
        CommandRight[] = {KEY_XBOX_LeftThumbXRight,CarXCurve};
        CommandForward[] = {KEY_XBOX_LeftThumbYUp,CarYCurve};
        CommandBack[] = {KEY_XBOX_LeftThumbYDown,CarYCurve};
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Wheel
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_B};
        DefaultAction[] = {KEY_XBOX_Black};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_White};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_LeftTrigger};

        VehLockTargets[] = {};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        MenuBack[] = {KEY_XBOX_Left};
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        ShowMap[] = {KEY_XBOX_Y};
        HideMap[] = {KEY_XBOX_Y};
        ZoomCont[] = {KEY_XBOX_White};
        PersonView[] = {KEY_XBOX_Back};
        Optics[] = {};
        IngamePause[] = {KEY_XBOX_Start};

        CommandLeft[] = {KEY_XBOX_LeftThumbXLeft,CarXCurve};
        CommandRight[] = {KEY_XBOX_LeftThumbXRight,CarXCurve};
        CommandForward[] = {KEY_XBOX_LeftThumbYUp,CarYCurve};
        CommandBack[] = {KEY_XBOX_LeftThumbYDown,CarYCurve};
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

  	class Vehicles: Vehicles
  	{
      class Characters: Characters
      {
      	name = "characTers";    //TODO:Stingtable
      	axisY = false;

      	class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_AIM;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_LR_AIM;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_UD_AIM;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_OPTICS;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_STRAFE;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_MOVE;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_UP;

          class Actions
          {
            MoveBack[] = {KEY_XBOX_RightThumbYDown,MoveYCurve};
            TurnLeft[] = {KEY_XBOX_RightThumbXLeft,MoveXCurve};
            TurnRight[] = {KEY_XBOX_RightThumbXRight,MoveXCurve};
            MoveFastForward[] = {KEY_XBOX_RightThumbYUp,MoveYCurve};

            MoveUp[] = {KEY_XBOX_RightThumb};
            MoveDown[] = {KEY_XBOX_Y};

            AimUp[] = {KEY_XBOX_LeftThumbYUp,AimYCurve,AimDown};
            AimDown[] = {KEY_XBOX_LeftThumbYDown,AimYCurve,AimUp};
            AimLeft[] = {KEY_XBOX_LeftThumbXLeft,AimXCurve};
            AimRight[] = {KEY_XBOX_LeftThumbXRight,AimXCurve};

            AimHeadUp[] = {KEY_XBOX_LeftThumbYUp,AimHeadYCurve,AimHeadDown};
            AimHeadDown[] = {KEY_XBOX_LeftThumbYDown,AimHeadYCurve,AimHeadUp};
            AimHeadLeft[] = {KEY_XBOX_LeftThumbXLeft,AimHeadXCurve};
            AimHeadRight[] = {KEY_XBOX_LeftThumbXRight,AimHeadXCurve};
          };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };

      class Ground: Ground
      {
      	name = "groUnd"; //Todo: Stingtable.
      	axisY = false;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_TURN;
          textLThumbUD = "";
          textLThumbPS = "";

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = "";
          textRThumbUD = $STR_XBOX_CONTROLER_RS_MOVE;
          textRThumbPS = "";

          class Actions
          {
            CarLeft[] = {KEY_XBOX_LeftThumbXLeft,CarXCurve};
            CarRight[] = {KEY_XBOX_LeftThumbXRight,CarXCurve};
            CarForward[] = {};
            CarBack[] = {KEY_XBOX_RightThumbYDown,CarYCurve};
            CarFastForward[] = {KEY_XBOX_RightThumbYUp,CarYCurve};
            CarSlowForward[] = {};

            CarAimUp[] = {KEY_XBOX_LeftThumbYUp,CarAimYCurve,CarAimDown};
            CarAimDown[] = {KEY_XBOX_LeftThumbYDown,CarAimYCurve,CarAimUp};
            CarAimLeft[] = {KEY_XBOX_LeftThumbXLeft,CarAimXCurve};
            CarAimRight[] = {KEY_XBOX_LeftThumbXRight,CarAimXCurve};
            SwapGunner[] = {KEY_XBOX_Y};
          };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };

      class Aircraft: Aircraft
      {
      	name = "aIr"; //Todo: Stingtable.
      	axisY = true;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_TILT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_TILT_MOVE;
          textLThumbPS = ;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_FLY;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_RUDDER;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_LOCK;

          class Actions
          {
            HeliUp[] = {KEY_XBOX_RightThumbYUp,HeliYCurve};
            HeliDown[] = {KEY_XBOX_RightThumbYDown,HeliYCurve};
            HeliCyclicLeft[] = {KEY_XBOX_RightThumbXLeft,HeliXCurve};
            HeliCyclicRight[] = {KEY_XBOX_RightThumbXRight,HeliXCurve};

            HeliRudderLeft[] = {KEY_XBOX_LeftThumbXLeft,HeliXCurve};
            HeliRudderRight[] = {KEY_XBOX_LeftThumbXRight,HeliXCurve};
            HeliBack[] = {KEY_XBOX_LeftThumbYUp,HeliYCurve,HeliFastForward};
            HeliFastForward[] = {KEY_XBOX_LeftThumbYDown,HeliYCurve,HeliBack};
            HeliForward[] = {};

            HeliManualFire[] = {KEY_XBOX_Y};

            SeagullUp[] = {KEY_XBOX_RightThumbYUp,HeliYCurve};
            SeagullDown[] = {KEY_XBOX_RightThumbYDown,HeliYCurve};
            SeagullBack[] = {KEY_XBOX_LeftThumbYUp,HeliYCurve,SeagullFastForward};
            SeagullFastForward[] = {KEY_XBOX_LeftThumbYDown,HeliYCurve,SeagullBack};
            SeagullForward[] = {};
          };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };
    };
  };

  class SpecialSoldier: Default
  {
		name = "Special Soldier"; //Todo: Stringtable.

    class Gamepad: Gamepad {};

    class Joystick: Joystick {};

    class Wheel: Wheel {};

  	class Vehicles: Vehicles
  	{
  		class Characters: Characters
  		{
				class Gamepad
				{
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_AIM;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_LR_AIM;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_UD_AIM;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_UP;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_STRAFE;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_MOVE;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_OPTICS;

          class Actions
          {
            MoveFastForward[] = {KEY_XBOX_RightThumbYUp,MoveYCurve};
            MoveBack[] = {KEY_XBOX_RightThumbYDown,MoveYCurve};
            TurnLeft[] = {KEY_XBOX_RightThumbXLeft,MoveXCurve};
            TurnRight[] = {KEY_XBOX_RightThumbXRight,MoveXCurve};

            MoveUp[] = {KEY_XBOX_LeftThumb};
            MoveDown[] = {KEY_XBOX_Y};

            AimUp[] = {KEY_XBOX_LeftThumbYUp,AimYCurve,AimDown};
            AimDown[] = {KEY_XBOX_LeftThumbYDown,AimYCurve,AimUp};
            AimLeft[] = {KEY_XBOX_LeftThumbXLeft,AimXCurve};
            AimRight[] = {KEY_XBOX_LeftThumbXRight,AimXCurve};

            AimHeadUp[] = {KEY_XBOX_LeftThumbYUp,AimHeadYCurve,AimHeadDown};
            AimHeadDown[] = {KEY_XBOX_LeftThumbYDown,AimHeadYCurve,AimHeadUp};
            AimHeadLeft[] = {KEY_XBOX_LeftThumbXLeft,AimHeadXCurve};
            AimHeadRight[] = {KEY_XBOX_LeftThumbXRight,AimHeadXCurve};
				  };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
       };

    	class Ground: Ground
      {
				class Gamepad: Gamepad {};

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };

    	class Aircraft: Aircraft
    	{
				class Gamepad: Gamepad {};

        class Joystick: Joystick {};

        class Wheel: Wheel {};
    	};
    };
  };
};

//User profile selection screen.
class RscDisplaySelectProfile: RscStandardDisplay
{
	idd = IDD_SELECT_PROFILE;

	class controlsBackground
	{
		class Profiles: RscListBox
		{
			idc = IDC_PROFILES_LIST;
			x = 0.3;
			y = 0.3;
		};
	};

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_PROFILE_SELECT_EDIT;};

		class TxtControls: RscText
		{
			x = 0.35;
			y = 0.75;
			w = 0.46;
			h = 0.05;
			text = $STR_DISP_XBOX_PROFILE_CONTROLS;
		};

		class TxtDifficulty: TxtControls
		{
			y = 0.8;
			text = $STR_DISP_XBOX_PROFILE_DIFFICULTY;
		};

		class ValueControls: RscStructuredText
		{
			idc = IDC_PROFILES_CONTROLLER;
			x = 0.5;
			y = 0.755;
			w = 0.46;
			h = 0.05;
		  class Attributes
		  {
			  font = FontMAIN;
			  color = "#0000ff";
			  align = "left";
			  shadow = false;
		  };
		};

		class ValueDifficulty: ValueControls
		{
			idc = IDC_PROFILES_DIFFICULTY;
			y = 0.805;
		};
	};
};

//Edit user profile screen.
class RscDisplayEditProfile
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

	#define Profile_Y 0.2

	class controls
	{
		class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_EDIT_PROFILE;
		};

		class ProfileName: RscButton
		{
			idc = IDC_PROFILE_NAME;
			x = 0.35;
			y = Profile_Y;
			h = 0.05;
			text = $STR_DISP_XBOX_EDIT_PROFILE_NAME;
		};

		class Face: ProfileName
		{
			idc = IDC_PROFILE_FACE;
			y = Profile_Y + 0.05;
			text = $STR_DISP_XBOX_EDIT_PROFILE_FACE;
		};

		class Voice: ProfileName
		{
			idc = IDC_PROFILE_VOICE;
			y = Profile_Y + 0.1;
			text = $STR_DISP_XBOX_EDIT_PROFILE_VOICE;
		};

		class Controller: ProfileName
		{
			idc = IDC_PROFILE_CONTROLLER;
			y = Profile_Y + 0.15;
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER;
		};

		class Audio: ProfileName
		{
			idc = IDC_PROFILE_AUDIO;
			y = Profile_Y + 0.2;
			text = $STR_DISP_XBOX_EDIT_PROFILE_AUDIO;
		};

		class Video: ProfileName
		{
			idc = IDC_PROFILE_VIDEO;
			y = Profile_Y + 0.25;
			text = $STR_DISP_XBOX_EDIT_PROFILE_VIDEO;
		};

		class Accept: ProfileName
		{
	    idc = IDC_OK;
			y = Profile_Y + 0.35;
			text = $STR_DISP_XBOX_EDIT_PROFILE_ACCEPT;
		};

		class Name: RscText
		{
			idc = IDC_PROFILE_SUM_NAME;
			x = 0.35;
			y = 0.65;
		};

		class TxtController: RscText
		{
			x = 0.35;
			y = 0.7;
			w = 0.2;
			text = $STR_DISP_XBOX_PROFILE_CONTROLS;
		};

		class ValueController: RscStructuredText
		{
			idc = IDC_PROFILE_SUM_CONTROLLER;
			x = 0.5;
			y = 0.705;
			w = 0.4;
			class Attributes
			{
				font = FontMAIN;
				color = "#0000ff";
				align = "left";
				shadow = false;
			};
		};
	};
};

//Profile name screen.
class RscDisplayProfileName
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_NAME;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

	class controls
	{
		class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_EDIT_PROFILE_NAME_TITLE;
		};

		class Preview: RscEdit
		{
			idc = IDC_PROFILE_NAME_PREVIEW;
			x = 0.3;
			y = 0.63;
			w = 0.40;
			h = 0.049;
			text = $STR_DISP_ERROR;
			forceDrawCaret = 1;
		};

		class OK: RscXButton
		{
			idc = IDC_OK;
			x = 0.15;
			y = 0.296;
			w = 0.202;
			h = 0.049;
			text = $STR_VK_DONE;

			class Attributes
			{
				shadow = false;
				font = FontMAIN;
				align = "left";
			};
		};

		class NumOne: RscXButton
		{
			idc = IDC_VK_BASE + 1;
			x = 0.35;
			y = 0.296;
			w = 0.05;
			h = 0.049;
			text = "";

			KeyBase[] = {"1", "1"};
			KeyShift[] = {"1"; "1"};
			KeyAccent[] ={"1"; "1"};
			KeyAccentShift[] ={"1", "1"};
			KeySymbol[] = {"(", "("};

			class Attributes
			{
				shadow = false;
				font = FontMAIN;
				align = "center";
			};
		};

		class NumTwo: NumOne
		{
			idc = IDC_VK_BASE + 2;
			x = 0.40;
			KeyBase[] = {"2", "2"};
			KeyShift[] = {"2"; "2"};
			KeyAccent[] = {"2"; "2"};
			KeyAccentShift[] = {"2", "2"};
			KeySymbol[] = {")", ")"};
		};

		class NumThree: NumOne
		{
			idc = IDC_VK_BASE + 3;
			x = 0.45;
			KeyBase[] = {"3", "3"};
			KeyShift[] = {"3"; "3"};
			KeyAccent[] = {"3"; "3"};
			KeyAccentShift[] = {"3", "3"};
			KeySymbol[] = {"&amp", "&"};
		};

		class NumFour: NumOne
		{
			idc = IDC_VK_BASE + 4;
			x = 0.50;
			KeyBase[] = {"4", "4"};
			KeyShift[] = {"4"; "4"};
			KeyAccent[] = {"4"; "4"};
			KeyAccentShift[] = {"4", "4"};
			KeySymbol[] = {"_", "_"};
		};

		class NumFive: NumOne
		{
			idc = IDC_VK_BASE + 5;
			x = 0.55;
			KeyBase[] = {"5", "5"};
			KeyShift[] = {"5"; "5"};
			KeyAccent[] = {"5"; "5"};
			KeyAccentShift[] = {"5", "5"};
			KeySymbol[] = {"^", "^"};
		};

		class NumSix: NumOne
		{
			idc = IDC_VK_BASE + 6;
			x = 0.60;
			KeyBase[] = {"6", "6"};
			KeyShift[] = {"6"; "6"};
			KeyAccent[] ={"6"; "6"};
			KeyAccentShift[] ={"6", "6"};
			KeySymbol[] = {"%", "%"};
		};

		class NumSeven: NumOne
		{
			idc = IDC_VK_BASE + 7;
			x = 0.65;
			KeyBase[] = {"7", "7"};
			KeyShift[] = {"7"; "7"};
			KeyAccent[] = {"7"; "7"};
			KeyAccentShift[] = {"7", "7"};
			KeySymbol[] = {"/", "/"};
		};

		class NumEight: NumOne
		{
			idc = IDC_VK_BASE + 8;
			x = 0.70;
			KeyBase[] = {"8", "8"};
			KeyShift[] = {"8"; "8"};
			KeyAccent[] = {"8"; "8"};
			KeyAccentShift[] = {"8", "8"};
			KeySymbol[] = {"\", "\"};
		};

		class NumNine: NumOne
		{
			idc = IDC_VK_BASE + 9;
			x = 0.75;
			KeyBase[] = {"9", "9"};
			KeyShift[] = {"9"; "9"};
			KeyAccent[] = {"9"; "9"};
			KeyAccentShift[] = {"9", "9"};
			KeySymbol[] = {"@", "@"};
		};

		class NumZero: NumOne
		{
			idc = IDC_VK_BASE + 10;
			x = 0.80;
			KeyBase[] = {"0", "0"};
			KeyShift[] = {"0"; "0"};
			KeyAccent[] = {"0"; "0"};
			KeyAccentShift[] = {"0", "0"};
			KeySymbol[] = {"#", "#"};
		};

		class Shift: OK
		{
			idc = IDC_VK_SHIFT;
			y = 0.356;
			text = $STR_VK_SHIFT;
		};

		class CharA: RscXButton
		{
			idc = IDC_VK_BASE + 11;
			x = 0.35;
			y = 0.355;
			w = 0.050;
			h = 0.051;

			KeyBase[] = {"a", "a"};
			KeyShift[] = {"A"; "A"};
			KeyAccent[] = {"à"; "à"};
			KeyAccentShift[] = {"À", "À"};
			KeySymbol[] = {"[", "["};

			class Attributes
			{
				shadow = false;
				font = FontMAIN;
				align = "center";
			};
		};

		class CharB: CharA
		{
			idc = IDC_VK_BASE + 12;
			x = 0.40;
			KeyBase[] = {"b", "b"};
			KeyShift[] = {"B"; "B"};
			KeyAccent[] = {"á"; "á"};
			KeyAccentShift[] = {"Á", "Á"};
			KeySymbol[] = {"]", "]"};
		};

		class CharC: CharA
		{
			idc = IDC_VK_BASE + 13;
			x = 0.45;
			KeyBase[] = {"c", "c"};
			KeyShift[] = {"C"; "C"};
			KeyAccent[] = {"â"; "â"};
			KeyAccentShift[] = {"Â", "Â"};
			KeySymbol[] = {"$", "$"};
		};

		class CharD: CharA
		{
			idc = IDC_VK_BASE + 14;
			x = 0.50;
			KeyBase[] = {"d", "d"};
			KeyShift[] = {"D"; "D"};
			KeyAccent[] = {"ä"; "ä"};
			KeyAccentShift[] = {"Ä", "Ä"};
			KeySymbol[] = {"£", "£"};
		};

		class CharE: CharA
		{
			idc = IDC_VK_BASE + 15;
			x = 0.55;
			KeyBase[] = {"e", "e"};
			KeyShift[] = {"E"; "E"};
			KeyAccent[] = {"ç"; "ç"};
			KeyAccentShift[] = {"Ç", "Ç"};
			KeySymbol[] = {"¥", "¥"};
		};

		class CharF: CharA
		{
			idc = IDC_VK_BASE + 16;
			x = 0.60;
			KeyBase[] = {"f", "f"};
			KeyShift[] = {"F"; "F"};
			KeyAccent[] = {"è"; "è"};
			KeyAccentShift[] = {"È", "È"};
			KeySymbol[] = {"€", "€"};
		};

		class CharG: CharA
		{
			idc = IDC_VK_BASE + 17;
			x = 0.65;
			KeyBase[] = {"g", "g"};
			KeyShift[] = {"G"; "G"};
			KeyAccent[] = {"é"; "é"};
			KeyAccentShift[] = {"É", "É"};
			KeySymbol[] = {";", ";"};
		};

		class CharH: CharA
		{
			idc = IDC_VK_BASE + 18;
			x = 0.70;
			KeyBase[] = {"h", "h"};
			KeyShift[] = {"H"; "H"};
			KeyAccent[] = {"ê"; "ê"};
			KeyAccentShift[] = {"Ê", "Ê"};
			KeySymbol[] = {":", ":"};
		};

		class CharI: CharA
		{
			idc = IDC_VK_BASE + 19;
			x = 0.75;
			KeyBase[] = {"i", "i"};
			KeyShift[] = {"I"; "I"};
			KeyAccent[] = {"ë"; "ë"};
			KeyAccentShift[] = {"Ë", "Ë"};
			KeySymbol[] = {"&apos", "'"};
		};

		class CharJ: CharI
		{
			idc = IDC_VK_BASE + 20;
			x = 0.80;
			KeyBase[] = {"j", "j"};
			KeyShift[] = {"J"; "J"};
			KeyAccent[] = {"ì"; "ì"};
			KeyAccentShift[] = {"Ì", "Ì"};
			KeySymbol[] = {"&quot", """"};
		};

		class CapsLock: OK
		{
			idc = IDC_VK_CAPSLOCK;
			y = 0.415;
			text = $STR_VK_CAPSLOCK;
		};

		class CharK: CharI
		{
			idc = IDC_VK_BASE + 21;
			x = 0.35;
			y = 0.415;
			KeyBase[] = {"k", "k"};
			KeyShift[] = {"K"; "K"};
			KeyAccent[] = {"í"; "í"};
			KeyAccentShift[] = {"Í", "Í"};
			KeySymbol[] = {"&lt;", "<"};
		};

		class CharL: CharK
		{
	  	idc = IDC_VK_BASE + 22;
			x = 0.40;
			KeyBase[] = {"l", "l"};
			KeyShift[] = {"L"; "L"};
			KeyAccent[] = {"î"; "î"};
			KeyAccentShift[] = {"Î", "Î"};
			KeySymbol[] = {"&gt;", ">"};
		};

		class CharM: CharK
		{
			idc = IDC_VK_BASE + 23;
			x = 0.45;
			KeyBase[] = {"m", "m"};
			KeyShift[] = {"M"; "M"};
			KeyAccent[] = {"ï"; "ï"};
			KeyAccentShift[] = {"Ï", "Ï"};
			KeySymbol[] = {"?", "?"};
		};

		class CharN: CharK
		{
			idc = IDC_VK_BASE + 24;
			x = 0.50;
			KeyBase[] = {"n", "n"};
			KeyShift[] = {"N"; "N"};
			KeyAccent[] = {"ñ"; "ñ"};
			KeyAccentShift[] = {"Ñ", "Ñ"};
			KeySymbol[] = {"!", "!"};
		};

		class CharO: CharK
		{
			idc = IDC_VK_BASE + 25;
			x = 0.55;
			KeyBase[] = {"o", "o"};
			KeyShift[] = {"O"; "O"};
			KeyAccent[] = {"ò"; "ò"};
			KeyAccentShift[] = {"Ò", "Ò"};
			KeySymbol[] = {"¿", "¿"};
		};

		class CharP: CharK
		{
			idc = IDC_VK_BASE + 26;
			x = 0.60;
			KeyBase[] = {"p", "p"};
			KeyShift[] = {"P"; "P"};
			KeyAccent[] = {"ó"; "ó"};
			KeyAccentShift[] = {"Ó", "Ó"};
			KeySymbol[] = {"¡", "¡"};
		};

		class CharQ: CharK
		{
			idc = IDC_VK_BASE + 27;
			x = 0.65;
			KeyBase[] = {"q", "q"};
			KeyShift[] = {"Q"; "Q"};
			KeyAccent[] = {"ô"; "ô"};
			KeyAccentShift[] = {"Ô", "Ô"};
			KeySymbol[] = {"-", "-"};
		};

		class CharR: CharK
		{
			idc = IDC_VK_BASE + 28;
			x = 0.70;
			KeyBase[] = {"r", "r"};
			KeyShift[] = {"R"; "R"};
			KeyAccent[] = {"õ"; "õ"};
			KeyAccentShift[] = {"Õ", "Õ"};
			KeySymbol[] = {"*", "*"};
		};

		class CharS: CharK
		{
			idc = IDC_VK_BASE + 29;
			x = 0.75;
			KeyBase[] = {"s", "s"};
			KeyShift[] = {"S"; "S"};
			KeyAccent[] = {"ö"; "ö"};
			KeyAccentShift[] = {"Ö", "Ö"};
			KeySymbol[] = {"+", "+"};
		};

		class CharT: CharK
		{
			idc = IDC_VK_BASE + 30;
			x = 0.80;
			KeyBase[] = {"t", "t"};
			KeyShift[] = {"T"; "T"};
			KeyAccent[] = {"ß"; "ß"};
			KeyAccentShift[] = {"ß", "ß"};
			KeySymbol[] = {"=", "="};
		};

		class Symbols: OK
		{
			idc = IDC_VK_SYMBOLS;
			y = 0.475;
			text = $STR_VK_SYMBOLS;
		};

		class CharU: CharR
		{
			idc = IDC_VK_BASE + 31;
			x = 0.35;
			y = 0.475;
			KeyBase[] = {"u", "u"};
			KeyShift[] = {"U"; "U"};
			KeyAccent[] = {"ù"; "ù"};
			KeyAccentShift[] = {"Ù", "Ù"};
			KeySymbol[] = {"{", "{"};
		};

		class CharV: CharU
		{
			idc = IDC_VK_BASE + 32;
			x = 0.40;
			KeyBase[] = {"v", "v"};
			KeyShift[] = {"V"; "V"};
			KeyAccent[] = {"ú"; "ú"};
			KeyAccentShift[] = {"Ú", "Ú"};
			KeySymbol[] = {"}", "}"};
		};

		class CharW: CharU
		{
			idc = IDC_VK_BASE + 33;
			x = 0.45;
			KeyBase[] = {"w", "w"};
			KeyShift[] = {"W"; "W"};
			KeyAccent[] = {"û"; "û"};
			KeyAccentShift[] = {"Û", "Û"};
			KeySymbol[] = {"«", "«"};
		};

		class CharX: CharU
		{
			idc = IDC_VK_BASE + 34;
			x = 0.50;
			KeyBase[] = {"x", "x"};
			KeyShift[] = {"X"; "X"};
			KeyAccent[] = {"ü"; "ü"};
			KeyAccentShift[] = {"Ü", "Ü"};
			KeySymbol[] = {"»", "»"};
		};

		class CharY: CharU
		{
			idc = IDC_VK_BASE + 35;
			x = 0.55;
			KeyBase[] = {"y", "y"};
			KeyShift[] = {"Y"; "Y"};
			KeyAccent[] = {"ý"; "ý"};
			KeyAccentShift[] = {"Ý", "Ý"};
			KeySymbol[] = {",", ","};
		};

		class CharZ: CharU
		{
			idc = IDC_VK_BASE + 36;
			x = 0.60;
			KeyBase[] = {"z", "z"};
			KeyShift[] = {"Z"; "Z"};
			KeyAccent[] = {"ÿ"; "ÿ"};
			KeyAccentShift[] = {"Ÿ", "Ÿ"};
			KeySymbol[] = {".", "."};
		};

		class BackSpace: OK
		{
			idc = IDC_VK_BACKSPACE;
			x = 0.65;
			y = 0.475;
			w= 0.2;
			text = $STR_MENU_BACKSPACE;

		  class Attributes
		  {
	  		shadow = true;
		  	font = FontMAIN;
			  align = "center";
		  };
		};

		class Accents: OK
		{
			idc = IDC_VK_ACCENTS;
			y = 0.535;
			text = $STR_VK_ACCENTS;
		};

		class Space: OK
		{
			idc = IDC_VK_BASE + 37;
			x = 0.35;
			y = 0.535;
			w= 0.30;
			h = 0.049;
			KeyBase[] = {$STR_DIK_SPACE, " "};
			KeyShift[] = {$STR_DIK_SPACE; " "};
			KeyAccent[] = {$STR_DIK_SPACE; " "};
			KeyAccentShift[] = {$STR_DIK_SPACE, " "};
			KeySymbol[] = {$STR_DIK_SPACE, " "};

		  class Attributes
		  {
	  		shadow = true;
		  	font = FontMAIN;
			  align = "center";
		  };
		};

		class LeftArrow: OK
		{
			idc = IDC_VK_LEFT;
			x = 0.65;
			y = 0.535;
			w = 0.1;
			text = "&lt";
		};

		class RightArrow: OK
		{
			idc = IDC_VK_RIGHT;
			x = 0.75;
			y = 0.535;
			w = 0.1;
			text = "&gt";

		  class Attributes
		  {
	  		shadow = true;
		  	font = FontMAIN;
			  align = "right";
		  };
		};
	};
};

//Profile face screen.
class RscDisplayProfileFace
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_FACE;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

	class controls
	{
		class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_EDIT_PROFILE_FACE_TITLE;
		};

		class TextFace: RscStructuredText
		{
			x = 0.1;
			y = 0.255;
			w = 0.4;
			text = $STR_DISP_NEW_USER_FACE;
		  class Attributes
		  {
			  font = FontMAIN;
			  color = "#ffffff";
			  align = "left";
			  shadow = false;
		  };
		};

	  class TextGlasses: TextFace
		{
			x = 0.55;
			text = $STR_DISP_NEW_USER_GLASSES;
		};

		class FaceList: RscListBox
		{
			idc = IDC_PROF_FACE_FACE;
			style = SL_HORZ + ST_CENTER;
			x = 0.1;
			y = 0.3;
			w = 0.35;
		};

		class GlassesList: FaceList
		{
			idc = IDC_PROF_FACE_GLASSES;
			style = SL_HORZ + ST_CENTER;
			x = 0.55;
		};
	};
};

//Profile voice screen.
class RscDisplayProfileVoice
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_VOICE;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

	class controls
	{
		class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_EDIT_PROFILE_VOICE_TITLE;
		};

		class TextSpeakers: RscText
		{
			x = 0.1;
			y = 0.25;
			w = 0.35;
			text = $STR_DISP_NEW_USER_SPEAKER;
		};

		class Speakers: RscListBox
		{
			idc = IDC_PROF_VOICE_SPEAKER;
			style = SL_HORZ + ST_CENTER;
			x = 0.1;
			y = 0.30;
			w = 0.35;
			h = 0.25;
		};

		class TextPitch: RscText
		{
			x = 0.55;
			y = 0.25;
			w = 0.35;
			text = $STR_DISP_NEW_USER_PITCH;
		};

		class ValuePitch: RscText
		{
			idc = IDC_PROF_VOICE_PITCH_VALUE;
			style = ST_CENTER;
			x = 0.68;
			y = 0.35;
			w = 0.1;
		};

		class Pitch: RscXSlider
		{
			idc = IDC_PROF_VOICE_PITCH;
			x = 0.55;
			y = 0.3;
			w = 0.34;

			class Title
			{
				idc = IDC_PROF_VOICE_PITCH_TITLE;
				colorBase[] = {0.8, 0.8, 0.8, 1};
				colorActive[] = {1, 1, 1, 1};
			};

			class Value
			{
				idc =  IDC_PROF_VOICE_PITCH_VALUE;
				format = "%.0f%%";
				type = SPTPercents;
			};
		};

		class MaskText: TextSpeakers
		{
			y = 0.6;
			text = $STR_DISP_XBOX_EDIT_PROFILE_VOICE_MASK;
		};

		class Mask: RscListBox
		{
			idc = IDC_PROF_VOICE_MASK;
			style = SL_HORZ + ST_CENTER;
			x = 0.1;
			y = 0.65;
			w = 0.35;
			h = 0.25;
		};

		class voicetrough: RscText
		{
			x = 0.55;
			y = 0.6;
			w = 0.65;
			text = $STR_DISP_PROF_VOICE_THROUGH;
		};

		class ThroughSpeakers: RscListBox
		{
			idc = IDC_PROF_VOICE_THROUGH_SPEAKERS;
			style = SL_HORZ + ST_CENTER;
			x = 0.55;
			y = 0.65;
			w = 0.35;
			h = 0.25;
		};
	};
};

class RscDisplayProfileController: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_CONTROLLER;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepad {};

		class Vehicle: RscXlistBox
		{
			idc = IDC_PROF_CONTR_VEHICLE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.71;
			w = 0.4;
		};

		class ControllerType: RscXListBox
		{
			idc = IDC_PROF_CONTR_TYPE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.765;
			w = 0.4;
		};

		class Controller: RscPicture
		{
			idc = IDC_PROF_CONTR_IMAGE;
			x = 0.27573529412;
			y = 0.125;
			w =0.47058823529;
			h = 0.62745098039;
			text = "\XMisc\Ctrlxbox.paa";
			colorText[] = {1, 1, 1, 1};
		};

		class HeadlineL: RscStructuredText
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE;
			x = 0.0;
			y = 0.26;
			w = 0.28;
			h = 0.04;
			size = SizeSmall;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class HeadlineD: HeadlineL
		{
			idc = IDC_PROF_CONTR_DPAD;
			x = 0.0;
			y = 0.58;
			text = "";
		};

		class HeadlineR: HeadlineL
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE;
			x = 0.74;
			y = 0.58;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class AButton: RscStructuredText
		{
			idc = IDC_PROF_CONTR_A;
			x = 0.735;
			y = 0.385;
			w = 0.29;
			h = 0.039;
			size = SizeSmall;
			text = "";
			showimage = true;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BButton: AButton
		{
			idc = IDC_PROF_CONTR_B;
			y = 0.345;
			text = "";
		};

		class YButton: AButton
		{
			idc = IDC_PROF_CONTR_Y;
			y = 0.265;
			text = "";
		};

		class XButton: AButton
		{
			idc = IDC_PROF_CONTR_X;
			y = 0.305;
			text = "";
		};

		class LeftTrigger: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_TRIGGER;
			x = 0.185;
			y = 0.2;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class RightTrigger: LeftTrigger
		{
			idc = IDC_PROF_CONTR_RIGHT_TRIGGER;
			x = 0.545;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class WhiteButton: AButton
		{
			idc = IDC_PROF_CONTR_WHITE;
			x = 0.735;
			y = 0.48;
			w = 0.30;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BlackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BLACK;
			y = 0.52;
			text = "";
		};

		class BackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BACK;
			x = 0.0;
			y = 0.48;
			w = 0.28;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class StartButton: BackButton
		{
			idc = IDC_PROF_CONTR_START;
			y = 0.52;
			text = "";
		};

		class LeftStickX: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE_X;
			x = 0.0;
			y = 0.34;
			w = 0.27;
			h = 0.039;
			text = "Left X";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class LeftStickY: LeftStickX
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE_Y;
			y = 0.30;
			text = "Left Y";
		};

		class LeftStickPush: LeftStickX
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB;
			y = 0.38;
			text = "";
		};

		class DStick: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT;
			y = 0.63;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";//color = "#000000";
				align = "Right";
			};
		};

		class DStick2: DStick
		{
			idc = IDC_PROF_CONTR_LEFT;
			y = 0.67;
			text = "";
		};

		class DStick3: DStick
		{
			idc = IDC_PROF_CONTR_UP;
			y = 0.71;
			text = "";
		};

		class RightStickX: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_X;
			x = 0.735;
			y = 0.63;
			text = "Right X";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";//color = "#000000";
				align = "Left";
			};
		};

		class RightStickY: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_Y;
			y = 0.67;
			text = "Right Y";
		};

		class RightStickPush: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB;
			y = 0.71;
			text = "";
		};

		class CurrentScheme: RscText
    {
      idc = IDC_PROF_CONTR_SCHEME;
      style = ST_CENTER;
      x = 0.32;
      y = 0.625;
      w = 0.4;
      text = "";
     colorText[] = {0, 0, 0, 1};
    };

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.71;
			y = 0.935;
			w = 0.5;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_White;
			x = 0.0;
			y = 0.88;
			w = 0.4;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_Black;
			x = 0.0;
			y = 0.935;
			w = 0.4;
		};

		class HintX: HintY
		{
			key = KEY_XBOX_X;
			x = 0.71;
			y = 0.88;
			w = 0.5;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(KeyWhite, KEY_XBOX_White, $STR_YAXIS_REVERTED);
		KEY_HINT(KeyBlack, KEY_XBOX_Black, $STR_FOREFDB_DISABLED);
    KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_PREV_SCHEME);
    KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_HINT_NEXT_SCHEME);
	};
};

class RscDisplayProfileControllerWheel: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_CONTROLLER;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepad {};

		class Vehicle: RscXlistBox
		{
			idc = IDC_PROF_CONTR_VEHICLE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.71;
			w = 0.4;
		};

		class ControllerType: RscXListBox
		{
			idc = IDC_PROF_CONTR_TYPE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.765;
			w = 0.4;
		};

		class Controller: RscPicture
		{
			idc = IDC_PROF_CONTR_IMAGE;
			x = 0.27573529412;
			y = 0.23;
			w =0.47058823529;
			h = 0.50;
			text = "\XMisc\ctrlxbox_wheel.paa";
			colorText[] = {1, 1, 1, 1};
		};

		class HeadlineD: RscStructuredText
		{
			idc = IDC_PROF_CONTR_DPAD;
			x = 0.0;
			y = 0.26;
			w = 0.28;
			h = 0.04;
			size = SizeSmall;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class AButton: RscStructuredText
		{
			idc = IDC_PROF_CONTR_A;
			x = 0.735;
			y = 0.355;
			w = 0.29;
			h = 0.039;
			size = SizeSmall;
			text = "";
			showimage = true;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BButton: AButton
		{
			idc = IDC_PROF_CONTR_B;
			y = 0.310;
			text = "";
		};

		class YButton: AButton
		{
			idc = IDC_PROF_CONTR_Y;
			y = 0.230;
			text = "";
		};

		class XButton: AButton
		{
			idc = IDC_PROF_CONTR_X;
			y = 0.270;
			text = "";
		};

		class LeftTrigger: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_TRIGGER;
			x = 0.74;
			y = 0.62;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class RightTrigger: LeftTrigger
		{
			idc = IDC_PROF_CONTR_RIGHT_TRIGGER;
			y = 0.66;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class WhiteButton: AButton
		{
			idc = IDC_PROF_CONTR_WHITE;
			x = 0.735;
			y = 0.42;
			w = 0.30;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BlackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BLACK;
			y = 0.46;
			text = "";
		};

		class BackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BACK;
			x = 0.0;
			y = 0.545;
			w = 0.28;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class StartButton: BackButton
		{
			idc = IDC_PROF_CONTR_START;
			y = 0.505;
			text = "";
		};

		class DStick: AButton
		{
			idc = IDC_PROF_CONTR_RIGHT;
			x = 0.0;
			y = 0.30;
			w = 0.27;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class DStick2: DStick
		{
			idc = IDC_PROF_CONTR_LEFT;
			y = 0.34;
			text = "";
		};

		class DStick3: DStick
		{
			idc = IDC_PROF_CONTR_UP;
			y = 0.38;
			text = "";
		};

		class DStick4: DStick
		{
			idc = IDC_PROF_CONTR_DOWN;
			y = 0.42;
			text = "";
		};

		class CurrentScheme: RscText
    {
      idc = IDC_PROF_CONTR_SCHEME;
      style = ST_CENTER;
      x = 0.27;
      y = 0.615;
      w = 0.4;
      text = "";
     colorText[] = {0, 0, 0, 1};
    };

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.71;
			y = 0.935;
			w = 0.5;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_White;
			x = 0.0;
			y = 0.88;
			w = 0.4;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_Black;
			x = 0.0;
			y = 0.935;
			w = 0.4;
		};

		class HintX: HintY
		{
			key = KEY_XBOX_X;
			x = 0.71;
			y = 0.88;
			w = 0.5;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(KeyWhite, KEY_XBOX_White, $STR_YAXIS_REVERTED);
		KEY_HINT(KeyBlack, KEY_XBOX_Black, $STR_FOREFDB_DISABLED);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_PREV_SCHEME);
		KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_HINT_NEXT_SCHEME);
	};
};

class RscDisplayProfileControllerJoystick: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_CONTROLLER;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepad
		{
			x = -0.06;
			y = 0.147468;
		};

		class Vehicle: RscXListBox
		{
			idc = IDC_PROF_CONTR_VEHICLE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.71;
			w = 0.4;
		};

		class ControllerType: RscXListBox
		{
			idc = IDC_PROF_CONTR_TYPE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.765;
			w = 0.4;
		};

		class Controller: RscPicture
		{
			idc = IDC_PROF_CONTR_IMAGE;
			x = 0.27;
			y = 0.191899;
			w = 0.47;
			h = 0.58316;
			text = "\XMisc\ctrlxbox_joystick.paa";
			colorText[] = {1, 1, 1, 1};
		};

		class HeadlineL: RscStructuredText
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE;
			x = 0.01;
			y = 0.64;
			w = 0.26;
			h = 0.04;
			size = SizeSmall;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class HeadlineD: HeadlineL
		{
			idc = IDC_PROF_CONTR_DPAD;
			x = 0.01;
			y = 0.19;
			w = 0.275;
			h = 0.04;
			text = "";
		};

		class HeadlineR: HeadlineL
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE;
			x = 0.730;
			y = 0.68;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class AButton: RscStructuredText
		{
			idc = IDC_PROF_CONTR_A;
			x = 0.710;
			y = 0.197;
			w = 0.29;
			h = 0.039;
			size = SizeSmall;
			text = "";
			showimage = true;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BButton: AButton
		{
			idc = IDC_PROF_CONTR_B;
			y = 0.31;
			text = "";
		};

		class YButton: AButton
		{
			idc = IDC_PROF_CONTR_Y;
			y = 0.40;
			text = "";
			x = 0;
			w = 0.27;
			h = 0.039;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class XButton: YButton
		{
			idc = IDC_PROF_CONTR_X;
			y = 0.44;
			text = "";
			x = 0;
		};

		class LeftTrigger: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_TRIGGER;
			x = 0.01;
			y = 0.68;
			text = "";
			w = 0.257261;
			h = 0.039;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class RightTrigger: LeftTrigger
		{
			idc = IDC_PROF_CONTR_RIGHT_TRIGGER;
			y = 0.72;
			x = 0.01;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class WhiteButton: AButton
		{
			idc = IDC_PROF_CONTR_WHITE;
			x = 0.0;
			y = 0.36;
			w = 0.27;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class BlackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BLACK;
			y = 0.48;
			text = "";
			x = 0;
		};

		class BackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BACK;
			x = 0.730;
			y = 0.520266;
			w = 0.28;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class StartButton: BackButton
		{
			idc = IDC_PROF_CONTR_START;
			y = 0.560266;
			text = "";
			x = 0.730;
		};

		class LeftStickX: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE_X;
			x = 0.730;
			y = 0.422431;
			w = 0.27;
			h = 0.039;
			text = "Left X";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class LeftStickPush: LeftStickX
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB;
			y = 0.35;
			text = "";
			x = 0.71;
		};

		class DStick: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT;
			y = 0.23;
			x = 0.02;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class DStick2: DStick
		{
			idc = IDC_PROF_CONTR_LEFT;
			y = 0.27;
			text = "";
			x = 0.02;
		};

		class DStick3: DStick
		{
			idc = IDC_PROF_CONTR_UP;
			y = 0.31;
			text = "";
			x = 0.02;
		};

		class RightStickX: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_X;
			x = 0.730;
			y = 0.758;
			text = "Right X";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#313131"; //color = "#000000";
				align = "Left";
			};
		};

		class RightStickY: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_Y;
			y = 0.72;
			x = 0.730;
			text = "Right Y";
		};

		class RightStickPush: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB;
			y = 0.24;
			text = "";
			x = 0.710;
		};

		class CurrentScheme: RscText
		{
			idc = IDC_PROF_CONTR_SCHEME;
			style = ST_CENTER;
			x = 0.388432;
			y = 0.633544;
			w = 0.4;
			text = "";
			colorText[] = {0, 0, 0, 1};
		};

		class background4: Background4 {};

		class background5: Background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.71;
			y = 0.935;
			w = 0.5;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_White;
			x = 0;
			y = 0.88;
			w = 0.4;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_Black;
			x = 0;
			y = 0.935;
			w = 0.4;
		};

		class HintX: HintY
		{
			key = KEY_XBOX_X;
			x = 0.71;
			y = 0.88;
			w = 0.5;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(KeyWhite, KEY_XBOX_White, $STR_YAXIS_REVERTED);
		KEY_HINT(KeyBlack, KEY_XBOX_Black, $STR_FOREFDB_DISABLED);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_PREV_SCHEME);
		KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_HINT_NEXT_SCHEME);
	};
};

//Profile audio screen.
class RscDisplayProfileAudio
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_AUDIO;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

	class controls
	{
		class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_EDIT_PROFILE_AUDIO_TITLE;
		};

		class TextMusic: RscText
		{
			x = 0.25;
			y = 0.30;
			w = 0.35;
			text = $STR_DISP_XBOX_EDIT_PROFILE_MUSIC_SLIDER;
		};

		class ValueMusic: RscText
		{
			idc = IDC_PROF_AUDIO_MUSIC_VALUE;
			x = 0.56;
			y = 0.30;
			w = 0.05;
		};

		class MusicSlider: RscXSlider
		{
			idc = IDC_PROF_AUDIO_MUSIC;
			x = 0.25;
			y = 0.35;
			w = 0.5;

			class Title
			{
				idc = IDC_PROF_AUDIO_MUSIC_TITLE;
				colorBase[] = {0.8, 0.8, 0.8, 1};
				colorActive[] = {1, 1, 1, 1};
			};

			class Value
			{
				idc = IDC_PROF_AUDIO_MUSIC_VALUE;
			};
		};

		class TextRadio: RscText
		{
			x = 0.25;
			y= 0.42;
			w = 0.35;
			text = $STR_DISP_XBOX_EDIT_PROFILE_RADIO_SLIDER;
		};

		class ValueRadio: RscText
		{
			idc = IDC_PROF_AUDIO_RADIO_VALUE;
			x = 0.56;
			y = 0.42;
			w = 0.05;
		};

		class RadioSlider: RscXSlider
		{
			idc = IDC_PROF_AUDIO_RADIO;
			x = 0.25;
			y = 0.47;
			w = 0.5;

			class Title
			{
				idc = IDC_PROF_AUDIO_RADIO_TITLE;
				colorBase[] = {0.8, 0.8, 0.8, 1};
				colorActive[] = {1, 1, 1, 1};
			};

			class Value
			{
				idc = IDC_PROF_AUDIO_RADIO_VALUE;
			};
		};

		class TextEffect: RscText
		{
			x = 0.25;
			y= 0.54;
			w = 0.36;
			text = $STR_DISP_XBOX_EDIT_PROFILE_EFFECTS_SLIDER;
		};

		class ValueEffect: RscText
		{
			idc = IDC_PROF_AUDIO_EFFECT_VALUE;
			x = 0.56;
			y = 0.54;
			w = 0.05;
		};

		class EffectSlider: RscXSlider
		{
			idc = IDC_PROF_AUDIO_EFFECT;
			x = 0.25;
			y = 0.59;
			w = 0.5;

			class Title
			{
				idc = IDC_PROF_AUDIO_EFFECT_TITLE;
				colorBase[] = {0.8, 0.8, 0.8, 1};
				colorActive[] = {1, 1, 1, 1};
			};

			class Value
			{
				idc = IDC_PROF_AUDIO_EFFECT_VALUE;
			};
		};
	};
};

//Profile video screen.
class RscDisplayProfileVideo
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_VIDEO;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

  class controls
  {
		class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_EDIT_PROFILE_VIDEO_TITLE;
		};

		class TextBright: RscText
		{
			idc = IDC_PROF_VIDEO_BRIGHT_TITLE;
			x = 0.25;
			y = 0.25;
			w = 0.35;
			text = $STR_DISP_XBOX_EDIT_PROFILE_BRIGHT_SLIDER;
		};

		class ValueBright: RscText
		{
			idc = IDC_PROF_VIDEO_BRIGHT_VALUE;
			x = 0.56;
			y = 0.25;
			w = 0.08;
		};

		class BrightSlider: RscXSlider
		{
			idc = IDC_PROF_VIDEO_BRIGHT;
			x = 0.25;
			y = 0.3;
			w = 0.5;

			class Title
			{
				idc = IDC_PROF_VIDEO_BRIGHT_TITLE;
				colorBase[] = {0.8, 0.8, 0.8, 1};
				colorActive[] = {1, 1, 1, 1};
			};

			class Value
			{
				idc = IDC_PROF_VIDEO_BRIGHT_VALUE;
			};
		};

		class TextContrast: RscText
		{
			idc = IDC_PROF_VIDEO_GAMMA_TITLE;
			x = 0.25;
			y = 0.37;
			w = 0.35;
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTRAST_SLIDER;
		};

		class ValueContrast: RscText
		{
			idc = IDC_PROF_VIDEO_GAMMA_VALUE;
			x = 0.66;
			y = 0.37;
			w = 0.15;
		};

		class ContrastSlider: RscXSlider
		{
			idc = IDC_PROF_VIDEO_GAMMA;
			x = 0.25;
			y = 0.42;
			w = 0.5;

			class Title
			{
				idc = IDC_PROF_VIDEO_GAMMA_TITLE;
				colorBase[] = {0.8, 0.8, 0.8, 1};
				colorActive[] = {1, 1, 1, 1};
			};

			class Value
			{
				idc = IDC_PROF_VIDEO_GAMMA_VALUE;
			};
		};

		class Subtitles: RscListbox
		{
			idc = IDC_PROF_VIDEO_SUBTITLES;
			style = SL_HORZ + ST_CENTER;
			x = 0.25;
			y = 0.58;
			w = 0.5;
			h = 0.08;
		};

		class Radio: Subtitles
		{
			idc = IDC_PROF_VIDEO_RADIO;
			y = 0.68;
		};
	};
};

//In-game profile edit screen.
class RscDisplayEditProfileInGame
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE;
	enableSimulation = false;
	enableDisplay = false;
	movingEnable = true;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

	#define Edit_Profile_In_Game_Y 0.2

	class controls
	{
	  class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_EDIT_PROFILE;
		};

		class AudioPause: RscButton
		{
			idc = IDC_PROFILE_AUDIO;
			x = 0.35;
			y = Edit_Profile_In_Game_Y;
			text = $STR_DISP_XBOX_EDIT_PROFILE_AUDIO;
		};

		class VideoPause: AudioPause
		{
			idc = IDC_PROFILE_VIDEO;
			y = Edit_Profile_In_Game_Y + 0.1;
			text = $STR_DISP_XBOX_EDIT_PROFILE_VIDEO;
		};

		class ControllerPause: AudioPause
		{
			idc = IDC_PROFILE_CONTROLLER;
			y = Edit_Profile_In_Game_Y + 0.2;
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER;
		};

		class VoiceMask: AudioPause
		{
			idc = IDC_PROFILE_VOICE_MASK;
			y = Edit_Profile_In_Game_Y + 0.3;
			text = $STR_DISP_XBOX_PROFILE_VOICE_MASK;
		};
	};
};

//In-game profile edit voice screen.
class RscDisplayVoiceMask
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_VOICE;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorBackground[] = {0.3, 0.3, 0.3, 1};
		};
	};

	class controls
	{
		class Title: RscText
		{
		  style = ST_CENTER;
		  x = 0.15;
		  y = 0.12;
		  w = 0.7;
			text = $STR_DISP_XBOX_PROFILE_VOICE_MASK;
		};

		class MaskText: RscText
		{
			x = 0.3;
			y = 0.3;
			w = 1;
			text = $STR_DISP_XBOX_EDIT_PROFILE_VOICE_MASK;
		};

		class Mask: RscListBox
		{
			idc = IDC_PROF_VOICE_MASK;
			x = 0.3;
			y = 0.35;
			w = 0.4;
			h = 0.16;
		};

		class voicetrough: RscText
		{
			x = 0.3;
			y = 0.55;
			w = 1;
			text = $STR_DISP_PROF_VOICE_THROUGH;
		};

	  class ThroughSpeakers: RscListBox
	  {
	    idc = IDC_PROF_VOICE_THROUGH_SPEAKERS;
		  x = 0.3;
		  y = 0.6;
		  w = 0.4;
		  h = 0.08;
	  };
	};
};

class RscDisplayXWizardTemplate : RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_TEMPLATE;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

  west = "misc\usflag_normal.paa";
  east = "misc\rusflag_normal.paa";
  guer = "misc\fiaflag_normal.paa";
  civl = "misc\civflag_normal.paa";

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepadPapers{};
	};

	class controls
	{
		class TemplateText : RscText
		{
			idc = -1;
			x = 0.038;
			y = 0.25;
			w = 0.6;
			h = 0.06;
			text = $STR_DISP_MPW_TEMPLATE;
			sizeEx = SizeNormal;
			colorText[] = {0.1, 0.1, 0.1, 0.6};
			style = ST_CENTER;
		};
		class TemplateValue : RscListBox
		{
			idc = IDC_XWIZ_TEMPLATE;
			style = LB_TEXTURES;
			x = 0.03;
			y = 0.20;
			w = 0.404;
			h = 0.55;
			colorSelect[] = {0.6,0.6,0.6,1};
			colorText[] = {0.2,0.2,0.2,1};
			sizeEx = SizeNormal;
			rowHeight = 0.05;
		};
		class Overview :  RscHTML
		{
			idc = IDC_XWIZ_TEMPLATE_OVERVIEW;
			x = 0.523;
			y = 0.25;
			w = 0.422;
			h = 0.68;
			align = "center";
			filename =;
		};
		class background4 : background4 {};
		class background5 : background5 {};
		class Title : RscXTitle
		{
			text = $STR_SINGLE_NEW_MISSION_TITLE;
		};
		class Line1 : Line1 {};
		class Line2 : Line2 {};
		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};
		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};
		class KeyHints
		{
			KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
			KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		};
	};
};

class RscDisplayXWizardIntel : RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_INTEL;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;
	class controlsBackground
	{
		class BackgroundAll : RscXBackgroundAll {};
		class Notepad : RscXNotepadPapers{};
	};
	class controls
	{

		class Lineleft: RscPicture
		{
			x = 0.032;
			y = 0.295;
			w = 0.007;
			h = 0.42;
			text = "\XMisc\line";
			colorText[] = {1, 1, 1, 1};
		};

		class Lineright: RscPicture
		{
			x = 0.40;
			y = 0.295;
			w = 0.01;
			h = 0.42;
			text = "\XMisc\line";
			colorText[] = {1, 1, 1, 1};
		};

		class SumaTemplateValue : RscStructuredText
		{
			idc = IDC_XWIZ_SUM_TEMPLATE;
			x = 0.00;
			y = 0.225;
			w = 0.43;
			h = 0.08;
			size = SizeNormal;
			text = "";
			//colorBackground[] ={0,1,0,1};
			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#000000";
				align = "center";
			};

		};
	 	class Unit : RscXButtonSett
	 	{
	 		idc = IDC_XWIZ_UNIT;
			x = 0.036;
			y = 0.30;
			w = 0.37;
			h = 0.05;
	 		font = FontX;
			color[]  = {0.2,0.2,0.2,1};
			colorActiveBackground1[] = {0.25, 0.27, 0.25, 1};
			colorActiveBackground2[] = {0.22, 0.24, 0.22, 1};
	 		size = SizeNormal;
	 		text = $STR_DISP_SRVSETUP_UNITS;
	 		class Attributes
	 		{
				shadow = false;
				align = "left";
			};
	 	};
		class Island : Unit
		{
			idc = IDC_XWIZ_ISLAND;
			y = 0.36;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_ISLAND;
		};
	 	class Name: Unit
		{
			idc = IDC_XWIZ_NAME;
			y = 0.42;
			text = $STR_DISP_XBOX_EDIT_PROFILE_NAME;
		};
		class Map : Unit
		{
			idc = IDC_XWIZ_MAP;
			y = 0.48;
			text = $STR_USRACT_MAP;
		};

		class Time : Unit
		{
			idc = IDC_XWIZ_TIME;
			y= 0.58;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME;
		};
		class Weather : Unit
		{
			idc = IDC_XWIZ_WEATHER;
			y = 0.64;
			text = $STR_DISP_INTEL_WEATHER;
		};
		class SumaNameText : RscText
		{
			idc = -1;
			x = 0.54;
			y = 0.255;
			w = 0.2;
			h = 0.04;
			sizeEx = SizeNormal;
			colorText[] = {0, 0, 0, 1};
			text = $STR_DISP_GAME_NAME;
		};
		class SumaNameValue : RscStructuredText
		{
			idc = IDC_XWIZ_SUM_NAME;
			x = 0.64;
			y = 0.25;
			w = 0.3;
			h = 0.06;
			text = "";
			size = SizeNormal;
			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#000000";
				align = "left";
			};
		};

		class SumaIslandText : SumaNameText
		{
			idc = -1;
			y = 0.339;
			text = $STR_DISP_XBOX_MULTI_ISLAND;
		};
		class SumaIslandValue : SumaNameValue
		{
			idc = IDC_XWIZ_SUM_ISLAND;
			y = 0.33;
			text = "";
		};
		class SumaTimeText : SumaIslandText
		{
			y = 0.417;
			text = $STR_DISP_INTEL_TIME;
		};
		class SumaTimeValue : SumaIslandValue
		{
			idc = IDC_XWIZ_SUM_TIME;
			y = 0.41;
			text = "";
		};
		class SumaDateText : SumaIslandText
		{
			y = 0.495;
			text = $STR_DISP_INTEL_DATE;
		};
		class SumaDateValue : SumaIslandValue
		{
			idc = IDC_XWIZ_SUM_DATE;
			y = 0.49;
			text = "";
		};
		class SumaWeatherCurrentText : SumaIslandText
		{
			y = 0.65;
			w = 0.4;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_CURRENT;
		};
		class SumaWeatherCurrentValue : RscText
		{
			idc = IDC_XWIZ_SUM_WEATHER;
			style = ST_PICTURE + ST_CENTER;
			x = 0.835;
			y = 0.64;
			w = 0.09;
			h = 0.09;
			text = "";
		};
		class SumaWeatherForecastText : SumaIslandText
		{
			y = 0.72;
			w = 0.4;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_FORECAST;
		};
		class SumaWeatherForecastValue : SumaWeatherCurrentValue
		{
			idc = IDC_XWIZ_SUM_WEATHER_FORECAST;
			y = 0.71;
			text = "";
		};

		class background4 : background4 {};
		class background5 : background5 {};
		class Title : RscXTitle
		{
			text = $STR_XBOX_WIZARD_EDIT;
		};
		class Line1 : Line1 {};
		class Line2 : Line2 {};
		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};
		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};
		class HintStart : RscXKey
		{
			key = KEY_XBOX_Start;
			x = 0.71;
			y = 0.935;
			w = 0.4;
		};

	};
	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
		KEY_HINT(Start, KEY_XBOX_Start, $STR_DISP_XBOX_HINT_PLAY);
	};
};

class RscDisplayXWizardIntelName: RscDisplayProfileName
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_NAME;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDITOR_WIZARD_NAME_TITLE;
		};

		class FrameDone: RscText
		{
			x = 0.15;
			y = 0.29;
			w = 0.2;
			h = 0.06;
			size = SizeNormal;
			colorBackground[] = {0.4,0.6,0.4,0.3};
			text = "";
		};
	};
};

class RscDisplayXWizardIntelIsland: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_ISLAND;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscPicture
		{
			idc = -1;
			x = 0.000;
			y = 0.12;
			w = 1;
			h = 0.76;
			text = "\XMisc\kniha.paa";
			colorText[] = {1, 1, 1, 1};
		};
	};

	class controls
	{
		class IslandValue: RscListBox
		{
			idc = IDC_XWIZ_ISLAND_LIST;
			style = LB_TEXTURES;
			x = 0.05;
			y = 0.18;
			w = 0.4;
			h = 0.27;
			colorSelect[] = {0.6,0.6,0.6,1};
			colorSelectBackground[] = {0.2, 0.2, 0.2, 0.5};
			colorText[] = {0.2,0.2,0.2,1};
			sizeEx = SizeNormal;
			rowHeight = 0.05;
		};

		class IslandMap: RscPicture
		{
			idc = IDC_XWIZ_ISLAND_MAP;
			x = 0.055;
			y = 0.45;
			w = 0.4;
			h = 0.4;
			text = "";
		};

		class IslandShots: RscPicture
		{
			idc = IDC_XWIZ_ISLAND_SHOTS;
			x = 0.6;
			y = 0.17;
			w = 0.3;
			h = 0.68;
			text = "";
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDITOR_WIZARD_ISLAND_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
	};
};

class RscDisplayXWizardIntelWeather: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_WEATHER;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepadPapersd {};
	};

	class controls
	{
		class Bourka: RscPicture
		{
			text = "bourkasym.paa";
			x = 0.12;
			y = 0.33;
			w = 0.10;
			h = 0.120;
			colorText[] = {0.08, 0.08, 0.12, 1};
		};

		class Jasno: RscPicture
		{
			text = "jasnosym.paa";
			x = 0.78;
			y = 0.33;
			w = 0.10;
			h = 0.120;
			colorText[] = {0.08, 0.08, 0.12, 1};
		};

		class WeatherText: RscText
		{
			idc = -1;
			x = 0.1;
			y = 0.25;
			w = 0.34;
			sizeEx = SizeNormal;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER;
		};

		class Current: RscText
		{
			idc = IDC_XWIZ_WEATHER_TITLE;
			style = ST_CENTER;
			x = 0.33;
			y = 0.27;
			w = 0.34;
			sizeEx = SizeNormal;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_CURRENT;
		};

		class WeatherValue: RscXSliderH
		{
			idc = IDC_XWIZ_WEATHER_VALUE;
			style = SL_HORZ + SL_TEXTURES;
			x = 0.25;
			y = 0.32;
			w = 0.5;

			class Title
			{
				idc = IDC_XWIZ_WEATHER_TITLE;
				colorBase[] = {1, 1, 1, 0.5};
				colorActive[] = {1, 1, 1, 1};
			};
		};

		class Forecast: Current
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_TITLE;
			y = 0.37;
			text = $STR_DISP_INTEL_FORECAST;
		};

		class ForecastWeatherValue: RscXSliderH
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_VALUE;
			style = SL_HORZ + SL_TEXTURES;
			x = 0.25;
			y = 0.42;
			w = 0.5;

			class Title
			{
				idc = IDC_XWIZ_WEATHER_FORECAST_TITLE;
				colorBase[] = {1, 1, 1, 0.5};
				colorActive[] = {1, 1, 1, 1};
			};
		};

		class FogText: WeatherText
		{
			y = 0.5;
			h = 0.09;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_FOG;
		};

		class Current2: Current
		{
			idc = IDC_XWIZ_FOG_TITLE;
			y = 0.52;
		};

		class FogValue: RscXSliderH
		{
			idc = IDC_XWIZ_FOG_VALUE;
			style = SL_HORZ + SL_TEXTURES;
			x = 0.25;
			y = 0.57;
			w = 0.5;

			class Title
			{
				idc = IDC_XWIZ_FOG_TITLE;
				colorBase[] = {1, 1, 1, 0.5};
				colorActive[] = {1, 1, 1, 1};
			};
		};

		class Forecast2: Forecast
		{
			idc = IDC_XWIZ_FOG_FORECAST_TITLE;
			y = 0.62;
		};

		class ForecastFogValue: RscXSliderH
		{
			idc = IDC_XWIZ_FOG_FORECAST_VALUE;
			style = SL_HORZ + SL_TEXTURES;
			x = 0.25;
			y = 0.67;
			w = 0.5;

			class Title
			{
				idc = IDC_XWIZ_FOG_FORECAST_TITLE;
				colorBase[] = {1, 1, 1, 0.5};
				colorActive[] = {1, 1, 1, 1};
			};
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_INTEL_WEATHER;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};

		class KeyHints
		{
			KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
			KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		};
	};
};

class RscDisplayXWizardIntelTime: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_TIME;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};
		class Notepad: RscXNotepadSett {};
	};

	class controls
	{
		class HourText: RscText
		{
			style = ST_LEFT;
			x = 0.25;
			y = 0.26;
			w = 0.2;
			h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_HOUR;
			sizeEx = SizeNormal;
			colorText[] = {0, 0, 0, 0.8};
		};

		class MinuteText: HourText
		{
			y = 0.36;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_MINUTES;
		};

		class DayText: HourText
		{
			y = 0.46;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_DAY;
		};

		class MonthText: HourText
		{
			y = 0.56;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_MONTH;
		};

		class YearText: HourText
		{
			y = 0.66;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_YEAR;
		};

		class Hour: RscXComboBoxDark
		{
			idc = IDC_XWIZ_TIME_HOUR;
			style = SL_VERT + ST_CENTER + LB_TEXTURES;
			x = 0.25;
			y = 0.3;
			w = 0.3;
			h = 0.06;

			class list: listBase
			{
				x = 0.55;
				y = 0.3;
				w = 0.2;
				h = 0.45;
			};
		};

		class Minute: Hour
		{
			idc = IDC_XWIZ_TIME_MINUTE;
			y = 0.4;
		};

		class Day: Hour
		{
			idc = IDC_XWIZ_TIME_DAY;
			y = 0.5;
		};

		class Month: Hour
		{
			idc = IDC_XWIZ_TIME_MONTH;
			y = 0.6;
		};

		class Year: Hour
		{
			idc = IDC_XWIZ_TIME_YEAR;
			y = 0.7;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
	};
};

class RscDisplayXWizardUnit: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_UNIT;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

  west = "misc\usflag_normal.paa";
  east = "misc\rusflag_normal.paa";
  guer = "misc\fiaflag_normal.paa";
  civl = "misc\civflag_normal.paa";

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepad{};
	};

	class controls
	{
		class UnitText: RscText
		{
			idc = -1;
			x = 0.038;
			y = 0.14;
			w = 0.4;
			h = 0.06;
			text = $STR_DISP_ARCUNIT_VEHICLE;
			sizeEx = SizeNormal;
			colorText[] = {0.1, 0.1, 0.1, 0.6};
			style = ST_CENTER;
		};

		class UnitValue: RscListBox
		{
			idc = IDC_XWIZ_UNITS;
			style = LB_TEXTURES +ST_CENTER;
			x = 0.05;
			y = 0.23;
			w = 0.87;
			h = 0.55;
			colorText[] = {0.2, 0.2, 0.2, 1};
			sizeEx = SizeNormal;
			rowHeight = 0.05;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_CHOOSE;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class KeyHints
		{
			KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
			KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
		};
	};
};

class RscDisplayXWizardUnitSelect: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_UNIT_SELECT;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Title: RscXTitle
		{
	    idc = IDC_XWIZ_UNIT_SELECT_TITLE;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
		};

		class Notepad: RscXNotepad{};
	};

	class controls
	{
		class UnitText: RscText
		{
			idc = -1;
			x = 0.038;
			y = 0.14;
			w = 0.4;
			h = 0.06;
			text = $STR_DISP_ARCUNIT_VEHICLE;
			sizeEx = SizeNormal;
			colorText[] = {0.1, 0.1, 0.1, 0.6};
			style = ST_CENTER;
		};

		class UnitValue: RscListBox
		{
			idc = IDC_XWIZ_UNIT_SELECT;
			style = LB_TEXTURES+ST_CENTER;
			x = 0.05;
			y = 0.23;
			w = 0.87;
			h = 0.55;
			sizeEx = SizeNormal;
			rowHeight = 0.05;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};

		class KeyHints
		{
			KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
			KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		};
	};
};

class RscDisplayXWizardUnitSelectCustom: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_UNIT_SELECT_CUSTOM;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepad{};
	};

	class controls
	{
		class TitleClass: RscText
		{
			idc = -1;
			x = 0.05;
			y = 0.25;
			w = 0.45;
			h = 0.05;
			text = $STR_DISP_ARCUNIT_CLASS;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ButtonClass: RscXComboBoxDark
		{
			idc = IDC_XWIZ_UNIT_CLASS;
			style = SL_VERT + ST_CENTER + LB_TEXTURES;
			x = 0.05;
			y = 0.30;
			w = 0.45;
			h = 0.07;

			class list: ListBase
			{
				x = 0.5;
				y = 0.30;
				w = 0.42;
				h = 0.47;
			};
		};

		class TitleType: RscText
		{
			idc = -1;
			x = 0.05;
			y = 0.40;
			w = 0.45;
			h = 0.05;
			text = $STR_DISP_ARCGRP_TYPE;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ButtonType: Buttonclass
		{
			idc = IDC_XWIZ_UNIT_TYPE;
			y = 0.45;
		};

		class TitleCount: RscText
		{
			idc = -1;
			x = 0.05;
			y = 0.55;
			w = 0.4;
			h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ButtonCount: Buttonclass
		{
			idc = IDC_XWIZ_UNIT_COUNT;
			y = 0.6;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
      idc = IDC_XWIZ_UNIT_SELECT_CUSTOM_TITLE;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
	};
};

class RscDisplayXWizardMap: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_MAP;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class Background: RscText
		{
			x = -10;
			y = -10;
			w = 21;
			h = 21;
			text = "";
			colorBackground[] = {0, 0, 0, 1};
		};

		class Map: RscMapControl
		{
			moveOnEdges = true;
			x = -0.088;
			y = -0.088;
			w = 1.176;
			h = 1.176;

			class Command
			{
				icon = "order";
				color[] = {0, 0, 0, 1};
				size = 12;
        importance = 1; // not used
        coefMin = 1; // not used
        coefMax = 1; // not used
			};

			class ActiveMarker
			{
				color[] = {0.3, 0.1, 0.9, 1};
				size = 50;
			};

			scaleMin = 0.03;
			scaleMax = 0.32;
			scaleDefault = 0.096;
		};
	};

	class controls
	{
		class BackgroundPoints: RscText
		{
			idc = -1;
			x = -10.0;
			y = -10.0;
			w = 21.5;
			h = 10.06;
			text = "";
			colorBackground[] = {0, 0, 0, 0.6};
		};

		class Points: RscText
		{
			idc = IDC_XWIZ_MAP_POINTS;
			x = 0.0;
			y = 0.0;
			w = 1;
			h = 0.06;
			colorText[] = {0.7,0.7,0.7,1};
			sizeEx = SizeNormal;
			text = $STR_MISSION_WIZARD_POINTS;
		};

		class Background5: RscBackgroundStripeBottom
		{
			x = -10.0;
			y = 0.822;
			w = 21;
			h = 10.125;
			colorBackground[] = {0, 0, 0, 0.6};
		};

		class Notepad: RscPicture
		{
			idc = IDC_NOTEPAD_PICTURE;
			x = 0.000;
			y = 0.06;
			w = 1;
			h = 0.76;
			text = "";
			colorText[] = {1, 1, 1, 1};
			picturePlan = "\XMisc\breifing_nalezato.paa";
			pictureNotes = "\XMisc\notes.paa";
			pictureGear = "\XMisc\notes_provazek1.paa";
			pictureGroup = "\XMisc\breifing_nalezato.paa";
			picture = "\XMisc\breifing_nalezato.paa";
		};

		class Briefing: RscHTML
		{
			idc = IDC_BRIEFING;
			x = 0.12;
			y = 0.07;
			w = 0.8;
			h = 0.7;
			filename = ;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
			h = 0.12;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
			h = 0.12;
		};

		class HintX: RscXKey
		{
			key = KEY_XBOX_X;
			x = 0.01;
			y = 0.88;
			w = 0.35;
			h = 0.12;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.01;
			y = 0.935;
			w = 0.3;
			h = 0.12;
		};

		class HintStart: RscXKey
		{
			key = KEY_XBOX_Start;
			x = 0.71;
			y = 0.935;
			w = 0.4;
			h = 0.12;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_Black;
			x = 0.01;
			y = 0.825;
			w = 0.6;
			h = 0.12;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_White;
			x = 0.71;
			y = 0.825;
			w = 0.6;
			h = 0.12;
		};

		class LeftStick: RscXKey
		{
			key = KEY_XBOX_LeftThumbXRight;
			x = 0.71;
			y = 0.88;
			w = 0.6;
			h = 0.12;
		};

		class KeyHints
		{
			KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_WIZARD_MAP_HINT_CATCH);
			KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
			KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_WIZARD_MAP_HINT_DELETE);
			KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_WIZARD_MAP_HINT_CREATE);
			KEY_HINT(Start, KEY_XBOX_Start, $STR_DISP_XBOX_WIZARD_MAP_HINT_PREVIEW);
			KEY_HINT(KeyBlack, KEY_XBOX_Black, $STR_DISP_XBOX_WIZARD_MAP_HINT_ADD_WP);
			KEY_HINT(KeyWhite, KEY_XBOX_White, $STR_DISP_ERROR);
			KEY_HINT(LeftStick, KEY_XBOX_LeftThumbXRight, $STR_DISP_XBOX_WIZARD_MAP_HINT_ROTATE);
		};
	};
};

class RscDisplayXWizardMapInsertUnit: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_UNIT_SELECT_CUSTOM;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepad{};
	};

	class controls
	{
		class TitleSide: RscText
		{
			idc = -1;
			x = 0.05;
			y = 0.23;
			w = 0.45;
			h = 0.05;
			text = $STR_DISP_ARCUNIT_SIDE;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ComboSide: RscXComboBoxDark
		{
			idc = IDC_XWIZ_UNIT_SIDE;
			style = SL_VERT + ST_CENTER + LB_TEXTURES;
			x = 0.05;
			y = 0.28;
			w = 0.45;
			h = 0.07;

			class list: listBase
			{
				x = 0.54;
				y = 0.28;
				w = 0.4;
				h = 0.50;
			};
		};

		class TitleClass: RscText
		{
			idc = -1;
			x = 0.05;
			y = 0.35;
			w = 0.45;
			h = 0.05;
			text = $STR_DISP_ARCUNIT_CLASS;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class Comboclass: ComboSide
		{
			idc = IDC_XWIZ_UNIT_CLASS;
			y = 0.40;
		};

		class TitleType: RscText
		{
			idc = -1;
			x = 0.05;
			y = 0.47;
			w = 0.4;
			h = 0.05;
			text = $STR_DISP_ARCGRP_TYPE;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ComboType: ComboSide
		{
			idc = IDC_XWIZ_UNIT_TYPE;
			y = 0.52;
		};

		class TitleCount: RscText
		{
			idc = -1;
			x = 0.05;
			y = 0.59;
			w = 0.4;
			h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ComboCount: ComboSide
		{
			idc = IDC_XWIZ_UNIT_COUNT;
			y = 0.64;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
	};
};

class RscDisplayXWizardMapInsertWaypoint: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XWIZARD_WAYPOINT;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepad{};
	};

	class controls
	{
		class TitleType: RscText
		{
			idc = -1;
			x = 0.1;
			y = 0.22;
			w = 0.4;
			h = 0.05;
			text = $STR_DISP_ARCWP_TYPE;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ValueType: RscXComboBoxDark
		{
			idc = IDC_XWIZ_WP_TYPE;
			style = SL_VERT + ST_CENTER + LB_TEXTURES;
			x = 0.1;
			y = 0.27;
			w = 0.4;
			h = 0.07;

			class list: listBase
			{
				x = 0.54;
				y = 0.27;
				w = 0.40;
				h = 0.50;
			};
		};

		class TitleBehaviour: RscText
		{
			idc = -1;
			x = 0.1;
			y = 0.37;
			w = 0.4;
			h = 0.05;
			text = $STR_DISP_ARCWP_COMBAT;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ValueBehaviour: ValueType
		{
			idc = IDC_XWIZ_WP_BEHAVIOUR;
			y = 0.42;
		};

		class TitleFormation: RscText
		{
			idc = -1;
			x = 0.1;
			y = 0.52;
			w = 0.4;
			h = 0.05;
			text = $STR_DISP_ARCWP_FORM;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ValueFormation: ValueType
		{
			idc = IDC_XWIZ_WP_FORMATION;
			y = 0.57;
		};

		class TitleCombatMode: RscText
		{
			idc = -1;
			x = 0.1;
			y = 0.67;
			w = 0.4;
			h = 0.05;
			text = $STR_DISP_ARCWP_SEMAPHORE;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			style = ST_LEFT;
		};

		class ValueCombatMode: ValueType
		{
			idc = IDC_XWIZ_WP_COMBAT_MODE;
			y = 0.72;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_WAYPOINT_TITLE;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.2;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
	};
};

class RscPendingInvitation
{
	texture = "\xmisc\gameinvitereceived.paa";
	color[] = {1, 1, 1, 1};
	x = 0.94;
	y = 0.0;
	w = 0.06;
	h = 0.08;
	timeout = 10;
	blinkingPeriod = 2;
};

class RscPendingInvitationInGame
{
	texture = "\xmisc\gameinvitereceived.paa";
	color[] = {1, 1, 1, 1};
	x = 0.94;
	y = 0.0;
	w = 0.06;
	h = 0.08;
	timeout = 10;
	blinkingPeriod = 2;
};

class RscXMPNotepad: RscPicture
{
	idc = -1;
	x = -0.05;
	y = 0.1235;
	w = 1.11;
	h = 0.775;
	text = "\XMisc\notebook.paa";
	colorText[] = {1, 1, 1, 1};
};

class RscDisplayMPType: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_MP_TYPE;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Lineleft: RscPicture
		{
			x = 0.2;
			y = 0.22;
			w = 0.01;
			h = 0.59;
			text = "\XMisc\line";
			colorText[] = {1, 1, 1, 1};
		};

		class Lineright: RscPicture
		{
			x = 0.8;
			y = 0.22;
			w = 0.01;
			h = 0.59;
			text = "\XMisc\line";
			colorText[] = {1, 1, 1, 1};
		};

		class QuickMatch: RscXButtonSett
		{
			idc = IDC_MP_TYPE_QUICK_MATCH;
			x = 0.204;
			y = 0.24;
			w = 0.602;
			h = 0.07;
			font = FontX;
			size = SizeMedium;
			text = $STR_DISP_MAIN_XBOX_MULTI_QUICK;
			color[] = {0.2, 0.2, 0.2, 1};

			class Attributes
			{
				font = FontX;
				shadow = false;
				align = "center";
				color ="#000000";
			};
		};

		class OptiMatch: QuickMatch
		{
			idc = IDC_MP_TYPE_OPTIMATCH;
			y = 0.31;
			text = $STR_DISP_MAIN_XBOX_MULTI_OPTIMATCH;
		};

		class Line: RscText
		{
			idc = -1;
			style = ST_LINE;
			x = 0.3;
			y = 0.40;
			w = 0.4;
			h = 0;
			text = ;
			colorText[] = {0.2, 0.2, 0.2, 0.5};
		};

		class Friends: QuickMatch
		{
			idc = IDC_MP_TYPE_FRIENDS;
			y = 0.42;
			h = 0.05;
			size = SizeNormal;
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS;
		};

		class Stats: Friends
		{
			idc = IDC_MP_TYPE_STATS;
			y = 0.48;
			text = $STR_XBOX_STATS;
		};

		class Download: Friends
		{
			idc = IDC_MP_TYPE_DOWNLOAD;
			y = 0.54;
			text = $STR_DISP_MAIN_XBOX_MULTI_DOWNLOAD;
		};

		class CreateDed: Friends
   	{
 			idc = IDC_MP_TYPE_DEDICATED_SERVER;
		  y = 0.60;
		  text = $STR_XBOX_CREATE_DEDICATED_HOST;
		};

		class Line02: RscText
		{
			idc = -1;
			style = ST_LINE;
			x = 0.3;
			y = 0.68;
			w = 0.4;
			h = 0;
			text = ;
			colorText[] = {0.2, 0.2, 0.2, 0.5};
		};

    class SignOut: QuickMatch
    {
      idc = IDC_MP_TYPE_SIGN_OUT;
      y = 0.70;
      text = $STR_DISP_MP_SIGN_OUT;
    };

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.492;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_MAIN);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_XBOX_HINT_DEDICATED_HOST);
	};
};

class RscDisplayProfileLive: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_PROFILE_LIVE;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepadSett{};

		class Accounts: RscMPListBox
		{
			idc = IDC_PROFILE_LIVE_ACCOUNTS;
			style = LB_TEXTURES;
			x = 0.22;
			y = 0.25;
			w = 0.60;
			h = 0.50;
			colorSelect[] = {0.6,0.6,0.6,1};
			colorText[] = {0.2,0.2,0.2,1};
			sizeEx = SizeNormal;
			rowHeight = 0.0514;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDIT_PROFILE_XBOXLIVE_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.05;
			y = 0.88;
			w = 0.492;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.492;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class KeyHints
		{
			KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
			KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_MAIN);
			KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_MP_NEW_ACCOUNT);
		};
	};
};

class RscDisplayMPPasscode: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_MP_PASSCODE;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Notepad: RscXNotepadSett{};

		class Line01: RscText
		{
			style = ST_LINE;
			x = 0.145;
			y = 0.35;
			w = 0.745;
			h = 0;
			text = ;
			colorText[] = {0.2, 0.2, 0.2, 1};
		};

		class Line02: RscText
		{
			style = ST_LINE;
			x = 0.145;
			y = 0.64;
			w = 0.745;
			h = 0;
			text = ;
			colorText[] = {0.2, 0.2, 0.2, 1};
		};

		class Square1: RscText
		{
			style = ST_FRAME;
			x = 0.178;
			y = 0.42;
			w = 0.13;
			h = 0.15;
			colorBackground[] = {0.2, 0.2, 0.2, 1};
			colorText[] = {0.2, 0.2, 0.2, 1};
			text = "";
		};

		class Square2: Square1
		{
			x = 0.358;
		};

		class Square3: Square1
		{
			x = 0.538;
		};

		class Square4: Square1
		{
			x = 0.718;
		};

		class Square1Fill: RscStructuredText
		{
			idc = IDC_MP_PASSCODE_FIRST;
			x = 0.18;
			y = 0.465;
			w = 0.13;
			h = 0.15;
			text = "";
			size = SizeLarge;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#000000";
				align = "center";
			};
		};

		class Square2Fill: Square1Fill
		{
			idc = IDC_MP_PASSCODE_FIRST + 1;
			x = 0.36;
		};

		class Square3Fill: Square1Fill
		{
			idc = IDC_MP_PASSCODE_FIRST + 2;
			x = 0.54;
		};

		class Square4Fill: Square1Fill
		{
			idc = IDC_MP_PASSCODE_FIRST + 3;
			x = 0.72;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_PASSCODE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_Black;
			x = 0.47;
			y = 0.88;
			w = 0.492;
		};
	};

	class KeyHints
	{
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
		KEY_HINT(KeyBlack, KEY_XBOX_Black, $STR_DISP_XBOX_HINT_CLEAR);
	};
};

class RscDisplayOptiMatchFilter: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_OPTIMATCH_FILTER;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class TypeText: RscText
		{
			x = 0.29;
			y = 0.29;
			w = 0.5;
			h = 0.08;
			style = ST_LEFT;
			text = $STR_DISP_XBOX_MULTI_FILTER_TYPE;
			sizeEx = SizeNormal;
			colorText[] = {0.2, 0.2, 0.2,1};
		};

		class type: RscXListBox
		{
			idc = IDC_OPTIMATCH_FILTER_TYPE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.35;
			w = 0.40;
			h = 0.06;
			colorSelect[] = {0.2, 0.2, 0.2, 1};
			colorText[] = {0.2, 0.2, 0.2, 0.5};
		};

		class MinPlayersText: TypeText
		{
			y = 0.42;
			text = $STR_DISP_XBOX_MP_MIN_PLAYERS;
		};

		class MinPlayers: RscXListBox
		{
			idc = IDC_OPTIMATCH_FILTER_MIN_PLAYERS;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.48;
			w = 0.40;
			h = 0.06;
			colorSelect[] = {0.2, 0.2, 0.2, 1};
			colorText[] = {0.2, 0.2, 0.2, 0.5};
		};

		class MaxPlayersText: TypeText
		{
			y = 0.55;
			text = $STR_DISP_XBOX_MP_MAX_PLAYERS;
		};

		class MaxPlayers: RscXListBox
		{
			idc = IDC_OPTIMATCH_FILTER_MAX_PLAYERS;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.3;
			y = 0.61;
			w = 0.40;
			h = 0.06;
			colorSelect[] = {0.2, 0.2, 0.2, 1};
			colorText[] = {0.2, 0.2, 0.2, 0.5};
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_OPTIMATCH;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayQuickMatch: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_QUICKMATCH;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class HostText: RscText
		{
			idc = -1;
			x = 0.20;
			y = 0.29;
			w = 0.3;
			h = 0.08;
			text = $STR_DISP_XBOX_MULTI_HOST;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
		};

		class HostValue: RscStructuredText
		{
			idc = IDC_MP_HOST;
			x = 0.45;
			y = 0.30;
			w = 0.56;
			h = 0.08;
			text = "";
			size = SizeNormal;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "left";
			};
		};

		class TypeText: HostText
		{
			y = 0.36;
			text = $STR_DISP_XBOX_MULTI_TYPE;
		};

		class TypeValue: HostValue
		{
			idc = IDC_MP_TYPE;
			y = 0.37;
			text = "";
		};

		class MissionText: HostText
		{
			y = 0.44;
			text = $STR_DISP_XBOX_MULTI_MISSION;
		};

		class MissionValue: HostValue
		{
			idc = IDC_MP_MISSION;
			y = 0.45;
			text = "";
		};

		class IslandText: HostText
		{
			y = 0.51;
			text = $STR_DISP_XBOX_MULTI_ISLAND;
		};

		class IslandValue: HostValue
		{
			idc = IDC_MP_ISLAND;
			y = 0.52;
			text = "";
		};

		class SlotsPublicText: HostText
		{
			y = 0.59;
			text = $STR_DISP_XBOX_MULTI_PUBLIC_SLOTS;
		};

		class SlotsPublicValue: HostValue
		{
			idc = IDC_MP_SLOTS_PUBLIC;
			y = 0.60;
			text = "";
		};

		class SlotsPrivateText: HostText
		{
			y = 0.66;
			text = $STR_DISP_XBOX_MULTI_PRIVATE_SLOTS;
		};

		class SlotsPrivateValue: HostValue
		{
			idc = IDC_MP_SLOTS_PRIVATE;
			y = 0.67;
			text = "";
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_QUICK;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.005;
			y = 0.88;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_MULTI_OTHER_SERVER);
	};
};

class RscDisplayFriends: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadPapers{};

		class ValueFriend: RscListBox
		{
			idc = IDC_FRIENDS_LIST;
     	style = LB_TEXTURES;
    	widthScrollBar = 0.03;
			x = 0.03;
			y = 0.20;
			w = 0.4;
			h = 0.5;
			sizeEx = SizeNormal;
			colorPicture[]={0.5,0.2,0.15,1};
			colorPictureSelect[]={1,1,1,1};
		};

		class FriendStatusText: RscText
		{
			x = 0.55;
			y = 0.23;
			w = 0.4;
			h = 0.1;
			style = ST_CENTER;

			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			text = $STR_DISP_XBOX_MULTI_FRIEND_STATE;
		};

		class FriendStatusValue: RscStructuredText
		{
			idc = IDC_FRIENDS_STATUS;
			x = 0.55;
			y = 0.36;
			w = 0.4;
			h = 0.2;
			text = "";
			size = SizeNormal;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_ACTION);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
	};
};

class RscDisplayFriendsPlaying: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS_OPTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#2F2F2F";
				align = "center";
			};
		};

		class Invite: RscXButtonSett
		{
			idc = IDC_FRIENDS_GAME_INVITE;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_FRIEND_INVITE;
			period = 2;

			class Attributes
			{
				align = "left";
				shadow = false;
				color = "#2F2F2F";
			};
		};

    class InviteVoice: Invite
    {
      idc = IDC_FRIENDS_GAME_INVITE_VOICE;
      y = 0.45;
      text = $STR_DISP_XBOX_FRIEND_INVITE_VOICE;
    };

		class Join: Invite
		{
			idc = IDC_FRIENDS_GAME_JOIN;
			y = 0.56;
			text = $STR_DISP_XBOX_FRIEND_JOIN;
		};

		class Remove: Invite
		{
			idc = IDC_FRIENDS_REMOVE;
			y = 0.67;
			text = $STR_DISP_XBOX_FRIEND_REMOVE;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS_OPTIONS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayFriendsPlayingInvitationSent: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS_OPTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Cancel: RscXbuttonSett
		{
			idc = IDC_FRIENDS_GAME_CANCEL;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_FRIEND_CANCEL;

			class Attributes
			{
				align = "left";
				shadow = false;
			};
		};

		class Join: Cancel
		{
			idc = IDC_FRIENDS_GAME_JOIN;
			y = 0.45;
			text = $STR_DISP_XBOX_FRIEND_JOIN;
		};

		class Remove: Cancel
		{
			idc = IDC_FRIENDS_REMOVE;
			y = 0.56;
			text = $STR_DISP_XBOX_FRIEND_REMOVE;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS_OPTIONS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayFriendsNotPlaying: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS_OPTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Framefill2: Framefill
		{
			y = 0.56;
		};

		class Invite: RscXbuttonSett
		{
			idc = IDC_FRIENDS_GAME_INVITE;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_FRIEND_INVITE;
			period = 2;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

    class InviteVoice: Invite
    {
      idc = IDC_FRIENDS_GAME_INVITE_VOICE;
      y = 0.45;
      text = $STR_DISP_XBOX_FRIEND_INVITE_VOICE;
    };

		class Remove: Invite
		{
			idc = IDC_FRIENDS_REMOVE;
			y = 0.56;
			text = $STR_DISP_XBOX_FRIEND_REMOVE;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS_OPTIONS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayFriendsNotPlayingInventionSent: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS_OPTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Cancel: RscXbuttonSett
		{
			idc = IDC_FRIENDS_GAME_CANCEL;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_FRIEND_CANCEL;

			class Attributes
			{
				shadow = false;
				align = "left";
			};
		};

		class Remove: Cancel
		{
			idc = IDC_FRIENDS_REMOVE;
			y = 0.45;
			text = $STR_DISP_XBOX_FRIEND_REMOVE;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS_OPTIONS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayFriendsInventionReceived : RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS_OPTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Framefill2: Framefill
		{
			y = 0.56;
		};

		class Accept: RscXbuttonSett
		{
			idc = IDC_FRIENDS_GAME_ACCEPT;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_FRIEND_ACCEPT;
			period = 2;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

		class Decline: Accept
		{
			idc = IDC_FRIENDS_GAME_DECLINE;
			y = 0.45;
			text = $STR_DISP_XBOX_FRIEND_DECLINE;
		};

    class PlayMessage: Accept
    {
      idc = IDC_FRIENDS_PLAY_MESSAGE;
      y = 0.56;
      text = $STR_DISP_XBOX_FRIEND_PLAY_MESSAGE;
    };

		class Remove: Accept
		{
			idc = IDC_FRIENDS_REMOVE;
			y = 0.67;
			text = $STR_DISP_XBOX_FRIEND_REMOVE;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS_OPTIONS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayFriendsRequestReceived: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS_OPTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Framefill2: Framefill
		{
			y = 0.56;
		};

		class Accept: RscXbuttonSett
		{
			idc = IDC_FRIENDS_ACCEPT;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_FRIEND_ACCEPT_REQUEST;
			period = 2;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

		class Decline: Accept
		{
			idc = IDC_FRIENDS_DECLINE;
			y = 0.45;
			text = $STR_DISP_XBOX_FRIEND_DECLINE_REQUEST;
		};

    class PlayMessage: Accept
    {
      idc = IDC_FRIENDS_PLAY_MESSAGE;
      y = 0.56;
      text = $STR_DISP_XBOX_FRIEND_PLAY_MESSAGE;
    };

		class Stop: Accept
		{
			idc = IDC_FRIENDS_STOP;
			y = 0.67;
			text = $STR_DISP_XBOX_FRIEND_STOP_LONG;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};
		class background4 : background4 {};

		class background5 : background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS_OPTIONS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayFriendsRequestSent: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_FRIENDS_OPTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadPapersd{};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Framefill2: Framefill
		{
			y = 0.56;
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Cancel: RscXbuttonSett
		{
			idc = IDC_FRIENDS_CANCEL;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_FRIEND_CANCEL_REQUEST;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_FRIENDS_OPTIONS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplaySendVoiceMail: RscDisplayStripesLayeredBackground
{
  access = ReadOnlyVerified;
  idd = IDD_SEND_VOICE_MAIL;
  movingEnable = false;
  enableSimulation = false;
  enableDisplay = false;

  class Controls
  {
    class BackgroundAll: RscXBackgroundAll {};

    class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

    class FrameName: RscStructuredText
    {
      idc = IDC_SVM_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
    };

    class Progress
    {
      access = ReadOnlyVerified;
      type = CT_PROGRESS;
      idc = IDC_SVM_PROGRESS;
      style = 0;
      x = 0.18;
      y = 0.42;
      w = 0.5;
      h = 0.05;
      colorFrame[] = {0, 0, 0, 1};
      colorBar[] = {0.2, 0.2, 0.2, 1};
    };

    class Time: RscStructuredText
    {
      idc = IDC_SVM_TIME;
      x = 0.7;
      y = 0.42;
      w = 0.2;
      h = 0.08;
      text = "";
      size = SizeNormal;

      class Attributes
      {
        font = FontX;
        shadow = false;
        color = "#323232";
        align = "center";
      };
    };

    class Record: RscXbuttonSett
    {
      idc = IDC_SVM_RECORD;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.055;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
      text = $STR_XBOX_VOICE_RECORD;

      class Attributes
      {
        align = "left";
        shadow = false;
      };
    };

    class Play: Record
    {
      idc = IDC_SVM_PLAY;
      y = 0.49;
      text = $STR_XBOX_VOICE_PLAY;
    };

    class Send: Record
    {
      idc = IDC_SVM_SEND;
      y = 0.55;
      text = $STR_XBOX_VOICE_SEND;
    };

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.35;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

    class background4: background4 {};

    class background5: background5 {};

    class Title: RscXTitle
    {
      idc = IDC_SVM_TITLE;
      text = $STR_DISP_ERROR;
    };

    class Line1: Line1 {};

    class Line2: Line2 {};

    class HintA: RscXKey
    {
      key = KEY_XBOX_A;
      x = 0.47;
      y = 0.88;
      w = 0.3;
    };

    class HintB: RscXKey
    {
      key = KEY_XBOX_B;
      x = 0.47;
      y = 0.935;
      w = 0.3;
    };
  };

  class KeyHints
  {
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
  };
};

class RscDisplayReceiveVoiceMail: RscDisplayStripesLayeredBackground
{
  access = ReadOnlyVerified;
  idd = IDD_RECEIVE_VOICE_MAIL;
  movingEnable = false;
  enableSimulation = false;
  enableDisplay = false;

  class Controls
  {
    class BackgroundAll: RscXBackgroundAll {};

    class Comp: RscXNotepad{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

    class FrameName: RscStructuredText
    {
      idc = IDC_SVM_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
    };

    class Progress
    {
      access = ReadOnlyVerified;
      type = CT_PROGRESS;
      idc = IDC_RVM_PROGRESS;
      style = 0;
      x = 0.18;
      y = 0.42;
      w = 0.5;
      h = 0.05;
      colorFrame[] = {0, 0, 0, 1};
      colorBar[] = {0.2, 0.2, 0.2, 1};
    };

    class Time: RscStructuredText
    {
      idc = IDC_RVM_TIME;
      x = 0.7;
      y = 0.42;
      w = 0.2;
      h = 0.08;
      text = "";
      size = SizeNormal;

      class Attributes
      {
        font = FontX;
        shadow = false;
        color = "#323232";
        align = "center";
      };
    };

    class Play: RscXbuttonSett
    {
      idc = IDC_RVM_PLAY;
			x = 0.14;
			y = 0.49;
			w = 0.765;
			h = 0.055;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
      text = $STR_XBOX_VOICE_PLAY;

      class Attributes
      {
        align = "left";
        	shadow = false;
      };
    };

    class Feedback: Play
    {
      idc = IDC_RVM_FEEDBACK;
      y = 0.55;
      text = $STR_XBOX_VOICE_FEEDBACK;
    };

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.35;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

    class background4: background4 {};

    class background5: background5 {};

    class Title: RscXTitle
    {
      idc = IDC_RVM_TITLE;
      text = $STR_DISP_ERROR;
    };

    class Line1: Line1 {};

    class Line2: Line2 {};

    class HintA: RscXKey
    {
      key = KEY_XBOX_A;
      x = 0.47;
      y = 0.88;
      w = 0.3;
    };

    class HintB: RscXKey
    {
      key = KEY_XBOX_B;
      x = 0.47;
      y = 0.935;
      w = 0.3;
    };
  };

  class KeyHints
  {
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
  };
};

class RscDisplayDownloadContent: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_DOWNLOAD_CONTENT;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;
  none = data\clear_empty.paa;
  done = data\mission_done.paa;
  bad = data\mission_uncomplete.paa;
	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class ListValue: RscListBox
		{
			idc = IDC_DOWNLOAD_CONTENT_LIST;
			style = LB_TEXTURES;
			x = 0.05;
			y = 0.25;
			w = 0.90;
			h = 0.504;
			sizeEx = SizeNormal;
			rowHeight = 0.065;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_MAIN_XBOX_MULTI_DOWNLOAD;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_DETAILS);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayDownloadContentDetails: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_DOWNLOAD_CONTENT_DETAILS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad
		{
		  x = -0.07;
		  w = 1.14;
		  y = 0.12;
		  h = 0.76;
		  text = "\XMisc\content";
		};

		class Picture: RscPicture
		{
			idc = IDC_DOWNLOAD_CONTENT_PICTURE;
			x = 0.05;
			y = 0.22;
			w = 0.4;
			h = 0.51;
			text = "";
			colorText[] = {1, 1, 1, 1};
		};

		class Terms: RscStructuredText
		{
			idc = IDC_DOWNLOAD_CONTENT_TERMS;
			x = 0.5;
			y = 0.2;
			w = 0.45;
			h = 0.48;
			text = "";
			size = SizeSmall;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
			idc = IDC_DOWNLOAD_CONTENT_TITLE;
			sizeEx = SizeLarge;
			text = "";
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.492;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.0;
			y = 0.88;
			w = 0.45;
		};
	};

	class KeyHints
	{
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_PRICE);
	};
};

class RscDisplayDownloadContentPrice: RscDisplayStripesLayeredBackground
{
  access = ReadOnlyVerified;
	idd = -1;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad {};

		class Price: RscStructuredText
		{
			idc = IDC_DOWNLOAD_CONTENT_PRICE;
			x = 0.1;
			y = 0.23;
			w = 0.80;
			h = 0.47;
			text = "";
			size = SizeSmall;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Line: RscText
		{
			idc = -1;
			style = ST_LINE;
			x = 0.3;
			y = 0.73;
			w = 0.4;
			h = 0;
			text = ;
			colorText[] = {0.2, 0.2, 0.2, 0.5};
		};

		class Question: RscText
		{
		  idc = IDC_DOWNLOAD_CONTENT_PRICE_QUESTION;
		  style = ST_CENTER;
		  x = 0.05;
		  y = 0.75;
		  w = 0.95;
		  h = 0.07;
		  sizeEx = SizeNormal;
		  text = $STR_DISP_ERROR;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
			idc = IDC_DOWNLOAD_CONTENT_PRICE_TITLE;
			sizeEx = SizeLarge;
			text = "";
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.492;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_CONTINUE);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayDownloadContentInstall: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_DOWNLOAD_CONTENT_INSTALL;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Download
		{
			access = ReadOnlyVerified;
			type = CT_PROGRESS;
			idc = IDC_INSTALL_CONTENT_PROGRESS;
			style = SL_HORZ+LB_TEXTURES;
			x = 0.2;
			y = 0.48;
			w = 0.6;
			h = 0.05;
			colorFrame[] = {0.2, 0.2, 0.2, 0.75};
			colorBar[] = {0.3, 0.3, 0.3, 1};
		};

		class ReceivingCon: RscText
		{
			style = ST_CENTER;
			x = 0.20;
			y = 0.35;
			w = 0.60;
			h = 0.1;
			colorText[] = {0.2, 0.2, 0.2, 1};
			sizeEx = SizeMedium;
			text = $STR_LOAD_WORLD;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
			idc = IDC_INSTALL_CONTENT_NAME;
			sizeEx = SizeLarge;
			text = "";
		};

		class time
		{
			access = ReadOnlyVerified;
			type = CT_ANIMATED_TEXTURE;
			style = 0;
			idc = IDC_INSTALL_CONTENT_TIME;
			texture = "\xmisc\hodinky.01.paa";
			x = 0.92;
			y = 0.0;
			w = 0.08;
			h = 0.11;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayPlayers: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XPLAYERS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class Name: RscText
		{
			idc = -1;
			x = 0.06;
			y = 0.225;
			w = 0.26;
			h = 0.05;
			sizeEx=SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			text = $STR_DISP_XBOX_EDIT_PROFILE_NAME;
		};

		class Infantry: RscPicture
		{
			x = 0.421;
			y = 0.22;
			w = 0.05;
			h = 0.05;
			text ="\xmisc\stat_infantry.paa";
			colortext[] = {0.2,0.2,0.2,1};
		};

		class Soft: Infantry
		{
			x = 0.505;
			text ="\xmisc\stat_soft.paa";
		};

		class Armored: Infantry
		{
			x = 0.593;
			text = "\xmisc\stat_armored.paa";
		};

		class Air: Infantry
		{
			x = 0.680;
			text = "\xmisc\stat_air";
		};

		class Killed: Infantry
		{
			x = 0.763;
			text ="\xmisc\stat_killed.paa";
		};

		class Total: Infantry
		{
			x = 0.85;
			text ="\xmisc\stat_Total.paa";
		};

		class Bckgrnd: RscText
		{
			x = 0.06;
			y = 0.27;
			w = 0.877;
			h = 0.47;
			text = "";
			sizeEx = SizeNormal;
			colorBackground[] = {0.55, 0.5, 0.4, 0.5};
		};

		class Table: RscListBox
		{
			idc = IDC_XPLAYERS_LIST;
			style = LB_TEXTURES;
			x = 0.06;
			y = 0.27;
			w = 0.877;
			h = 0.47;
			text = "";
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			rowHeight = 0.06;
			colorWest[] = {0.2,0.4,0.2, 1};
			colorEast[] = {0.4,0.2,0.2, 1};
			colorCiv[] = {0.2,0.2,0.2, 1};
			colorRes[] = {0.4,0.4,0.2, 1};
			colorSelectWest[] = {0.6,0.8,0.6, 1};
			colorSelectEast[] = {0.8,0.6,0.6, 1};
			colorSelectCiv[] = {0.7,0.7,0.7, 1};
			colorSelectRes[] = {0.8,0.8,0.6, 1};
		};

		class PlayerStatusText: RscText
		{
			x = 0.15;
			y = 0.745;
			w = 0.2;
			h = 0.08;
			font = FontX;
			sizeEx = SizeNormal;
			colorText[] = {0.2,0.2,0.2,1};
			text = $STR_DISP_XBOX_MULTI_PLAYER_STATE;
		};

		class PlayerStatusValue: RscStructuredText
		{
			idc = IDC_XPLAYERS_STATUS;
			x = 0.30;
			y = 0.755;
			w = 0.6;
			h = 0.08;
			text = "";
			size = SizeNormal;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "right";
			};
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_MPTABLE_PLAYERS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintX: RscXKey
		{
			key = KEY_XBOX_X;
			x = 0.05;
			y = 0.935;
			w = 0.25;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_ACTION);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
		KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_KICK);
	};
};

class RscDisplayPlayersOptionsNoFriend: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XPLAYERS_ACTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class ControlsBackground
	{
		class BackgroundAll: RscXBackgroundAll {};
	};

	class Controls
	{
		class Comp: RscXNotepadSett{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_XPLAYERS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Framefill2: Framefill
		{
			y = 0.56;
		};

		class Ask: RscXbuttonSett
		{
			idc = IDC_XPLAYERS_ASK;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_PLAYER_ASK;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

    class AskVoice: Ask
    {
      idc = IDC_XPLAYERS_ASK_VOICE;
      y = 0.45;
      text = $STR_DISP_XBOX_PLAYER_ASK_VOICE;
    };

		class Stop: Ask
		{
			idc = IDC_XPLAYERS_MUTE;
			y = 0.56;
			text = $STR_DISP_XBOX_PLAYER_STOP;
		};

		class Feedback: Ask
		{
			idc = IDC_XPLAYERS_FEEDBACK;
			y = 0.67;
			text = $STR_DISP_XBOX_PLAYER_FEEDBACK;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_MPTABLE_PLAYERS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayPlayersOptionsWaitingForFriend: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XPLAYERS_ACTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Framefill2: Framefill
		{
			y = 0.56;
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FRIENDS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Cancel: RscXbuttonSett
		{
			idc = IDC_XPLAYERS_CANCEL;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_PLAYER_CANCEL;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class Stop: Cancel
		{
			idc = IDC_XPLAYERS_MUTE;
			y = 0.45;
			text = $STR_DISP_XBOX_PLAYER_STOP;
		};

		class Feedback: Cancel
		{
			idc = IDC_XPLAYERS_FEEDBACK;
			y = 0.56;
			text = $STR_DISP_XBOX_PLAYER_FEEDBACK;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class Title: RscXTitle
		{
			text = $STR_MPTABLE_PLAYERS;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayPlayersOptionsFriend: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XPLAYERS_ACTIONS;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_XPLAYERS_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class Framefill: RscText
		{
			idc = -1;
			style = "";
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			sizeEx = ;
			colorBackground[] = {1, 1, 1, 0.1};
			text = "";
		};

		class Framefill2: Framefill
		{
			y = 0.56;
		};

		class Remove: RscXbuttonSett
		{
			idc = IDC_XPLAYERS_REMOVE;
			x = 0.14;
			y = 0.34;
			w = 0.765;
			h = 0.11;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_PLAYER_REMOVE;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

		class Stop: Remove
		{
			idc = IDC_XPLAYERS_MUTE;
			y = 0.45;
			text = $STR_DISP_XBOX_PLAYER_STOP;
		};

		class Feedback: Remove
		{
			idc = IDC_XPLAYERS_FEEDBACK;
			y = 0.56;
			text = $STR_DISP_XBOX_PLAYER_FEEDBACK;
		};

		class Lineleft: RscPicture
		{
			x = 0.135;
			y = 0.33;
			w = 0.008;
			h = 0.45;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_MPTABLE_PLAYERS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayPlayersFeedBackSelection: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_XPLAYERS_FEEDBACK;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class Boxleft: RscPicture
		{
			x = 0.2;
			y = 0.235;
			w = 0.02;
			h = 0.07;
			text = "\XMisc\combo_l";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Boxright: Boxleft
		{
			x = 0.80;
			text = "\XMisc\combo_p";
		};

		class Box: Boxleft
		{
			x = 0.21;
			y = 0.23;
			w = 0.59;
			h = 0.08;
			text = "\XMisc\combo";
		};

		class FrameName: RscStructuredText
		{
			idc = IDC_FEEDBACK_PLAYER;
			x = 0.2;
			y = 0.245;
			w = 0.6;
			h = 0.08;
			size = SizeNormal;
			text = "";

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "center";
			};
		};

		class FrameDate: RscStructuredText
		{
			idc = IDC_FEEDBACK_DATE;
			x = 0.05;
			y = 0.72;
			w = 0.20;
			h = 0.06;
			text = "";
			size = SizeNormal;
			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align = "Left";
			};
		};

		class Feedback: RscText
		{
			idc = -1;
			style = ST_RIGHT;
			x = 0.05;
			y = 0.34;
			w = 0.24;
			h = 0.06;
			sizeEx = SizeNormal;
			text = $STR_DISP_XBOX_PLAYER_FEEDBACK_TITLE;
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Complaints: Feedback
		{
			y = 0.48;
			text = $STR_DISP_XBOX_PLAYER_COMPLAINTS;
		};

		class GreatSession: RscXbuttonSett
		{
			idc = IDC_FEEDBACK_GREAT_SESSION;
			x = 0.305;
			y = 0.34;
			w = 0.605;
			h = 0.055;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = $STR_DISP_XBOX_PLAYER_GREAT;

			class Attributes
			{
				align = "left";
				shadow="false";
			};
		};

		class GoodAttitude: GreatSession
		{
			idc = IDC_FEEDBACK_GOOD_ATTITUDE;
			y = 0.40;
			text = $STR_DISP_XBOX_PLAYER_GOOD;
		};

		class BadName: GreatSession
		{
			idc = IDC_FEEDBACK_BAD_NAME;
			y = 0.48;
			text = $STR_DISP_XBOX_PLAYER_BAD NAME;
		};

		class Cursing: GreatSession
		{
			idc = IDC_FEEDBACK_CURSING;
			y = 0.54;
			text = $STR_DISP_XBOX_PLAYER_CURSING;
		};

		class Scream: GreatSession
		{
			idc = IDC_FEEDBACK_SCREAM;
			y = 0.60;
			text = $STR_DISP_XBOX_PLAYER_SCREAMING;
		};

		class Cheat: GreatSession
		{
			idc = IDC_FEEDBACK_CHEAT;
			y = 0.66;
			text = $STR_DISP_XBOX_PLAYER_CHEATING;
		};

		class Threat: GreatSession
		{
			idc = IDC_FEEDBACK_THREAT;
			y = 0.72;
			text = $STR_DISP_XBOX_PLAYER_THREATS;
		};

		class Lineleft: RscPicture
		{
			x = 0.3;
			y = 0.34;
			w = 0.008;
			h = 0.12;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class Lineleft2: RscPicture
		{
			x = 0.3;
			y = 0.48;
			w = 0.008;
			h = 0.3;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright2: Lineleft2
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_PLAYER_FEEDBACK_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayMessageFeedback: RscDisplayPlayersFeedBackSelection
{
	access = ReadOnlyVerified;
	idd = IDD_XPLAYERS_FEEDBACK;
	class Controls : Controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class BoxLeft: Boxleft {};

		class BoxRight: Boxright {};

		class Box: Box {};

		class FrameName: FrameName {};

		class FrameDate: FrameDate {};

		class Feedback: Feedback {};

		class Harassing: RscXbuttonSett
		{
			idc = IDC_FEEDBACK_MSG_HARASSING;
			x = 0.305;
			y = 0.34;
			w = 0.605;
			h = 0.055;
			font = FontX;
			color[] = {0.2,0.2,0.2,1};
			size = SizeNormal;
			text = "$STR_FEEDBACK_HARASS";

			class Attributes
			{
				align = "left";
				shadow = "false";
			};
		};

		class Offensive: Harassing
		{
			idc = IDC_FEEDBACK_MSG_OFFENSIVE;
			y = 0.40;
			text = "$STR_FEEDBACK_OFFENSIVE";
		};

    class Spam: Harassing
    {
      idc = IDC_FEEDBACK_MSG_SPAM;
      y = 0.46;
      text = "$STR_FEEDBACK_SPAM";
    };

		class Screaming: Harassing
		{
			idc = IDC_FEEDBACK_SCREAM;
			y = 0.52;
			text = $STR_DISP_XBOX_PLAYER_SCREAMING;
		};

		class Lineleft: RscPicture
		{
			x = 0.3;
			y = 0.34;
			w = 0.008;
			h = 0.23;
			text = "\XMisc\line";
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Lineright: Lineleft
		{
			x = 0.90;
			w = 0.01;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_PLAYER_FEEDBACK_TITLE;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayStatistics: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_LIVE_STATS;
	enableSimulation = false;
	enableDisplay = false;
	movingEnable = true;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class Statistics: RscListBox
		{
     	idc = IDC_LIVE_STATS_BOARDS;
			style = LB_TEXTURES;
			x = 0.05;
			y = 0.25;
			w = 0.90;
			h = 0.504;
			sizeEx = SizeNormal;
			rowHeight = 0.056;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
  	{
    		text = $STR_BRIEF_STATISTICS;
  	};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class RscDisplayStatisticsCurrent: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
  idd = IDD_LIVE_STATS_BOARD;
	enableSimulation = false;
	enableDisplay = false;
	movingEnable = true;
	colorPlayer[] = {0.1, 0.3, 0.1, 1};
	colorFriend[] = {0.1, 0.1, 0.3, 1};

 	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class Statistic: RscListBox
		{
      idc = IDC_LIVE_STATS_LIST;
			x = 0.06;
			y = 0.248;
			w = 0.877;
			h = 0.48;
			sizeEx = SizeSmall;
			rowHeight = 0.048;
			widthScrollBar = 0;
			colorSelect[] = {0, 0, 0, 1};
			colorBackground[] = {0.2, 0.2, 0.2, 0.2};
			colorSelectBackground[] = {0.92, 0.93, 0.91, 0.5};
		};

		class Plky: RscText
		{
			idc = -1;
			x = 0.5;
			y = 0.74;
			w = 0.4;
			h = 0.05;
			sizeEx = SizeNormal;
			text = $STR_DISP_XBOX_MULTI_FILTER_PLAYERS;
			colorText[]= {0.2,0.2,0.2,1};
		};

		class PlkyValue: RscStructuredText
		{
			idc = IDC_LIVE_STATS_COUNT;
			x = 0.8;
			y = 0.74;
			w = 0.1;
			h = 0.05;
			text = "";
			size = SizeNormal;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
				align="right";
			};
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
  	{
			idc = IDC_LIVE_STATS_TITLE;
    	text = $STR_BRIEF_STATISTICS;
  	};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.062;
			y = 0.745;
			w = 0.5;
			h = 0.6;
			size = SizeNormal;

			class Attributes
			{
				font = FontX;
				shadow = false;
				color = "#323232";
			};
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_Black;
			x = 0.005;
			y = 0.88;
			w = 0.3;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_White;
			x = 0.005;
			y = 0.935;
			w = 0.3;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.45;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.45;
			y = 0.935;
			w = 0.3;
		};

		class HintUp: RscXKey
		{
			key = KEY_XBOX_Up;
			x = 0.76;
			y = 0.88;
			w = 0.3;
		};

		class HintDown: RscXKey
		{
			key = KEY_XBOX_Down;
			x = 0.76;
			y = 0.935;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(Y, KEY_XBOX_Y, $STR_XBOX_SHOW_FRIEND);
		KEY_HINT(KeyBlack, KEY_XBOX_Black, $STR_XBOX_STATS_TOP);
		KEY_HINT(KeyWhite, KEY_XBOX_White, $STR_XBOX_STATS_BOTTOM);
		KEY_HINT(A, KEY_XBOX_A, $STR_XBOX_STATS_MY_POSITION);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
		KEY_HINT(Up, KEY_XBOX_Up, $STR_XBOX_STATS_UP);
		KEY_HINT(Down, KEY_XBOX_Down, $STR_XBOX_STATS_DOWN);
	};
};

class RscDisplayInteruptReceiving: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = -1;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepadSett{};

		class Message: RscText
		{
			idc = IDC_RECEIVING_TEXT;
			x = 0.15;
			y = 0.4;
			w = 0.745;
			h = 0.2;
			text = "";
			sizeEx = SizeMedium;
			style = ST_CENTER;
			colorText[] = {0.2,0.2,0.2,1};
		};

		class Time
		{
			access = ReadOnlyVerified;
			type = CT_ANIMATED_TEXTURE;
			style = 0;
			idc = IDC_RECEIVING_TIME;
			texture = "\xmisc\hodinky.01.paa";
			x = 0.47;
			y = 0.30;
			w = 0.065;
			h = 0.085;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			y =  0.2;
			h = 0.08;
			text = "";
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.005;
			y = 0.88;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
	};
};

class DisplayMultiplayerServerAdvanced: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_SERVER_ADVANCED;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp: RscXNotepad{};

		class RoleList: RscListBox
		{
			idc = IDD_SERVER_ADVANCED_ROLES;
			style = LB_TEXTURES;
			acess = ReadOnly;
			x = 0.06;
			y = 0.23;
			w = 0.877;
			h = 0.49;
			sizeEx = SizeNormal;
			rowHeight = 0.054;
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_XBOX_MULTI_HOST_SETTINGS_ADV;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_Black;
			x = 0.06;
			y = 0.75;
			w = 0.4;
			size = SizeNormal;

			class Attributes
			{
				color = "#323232";
				shadow = false;
			};
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_White;
			x = 0.5;
			y = 0.75;
			w = 0.4;
			size = SizeNormal;

			class Attributes
			{
				color = "#323232";
				shadow = false;
			};
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
		KEY_HINT(KeyBlack, KEY_XBOX_Black, $STR_DISP_XBOX_MULTI_ASSIGN_ALL);
	};
};

class DisplayMultiplayerServerAdvancedSelect: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_SERVER_SELECT_PLAYER;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class Background: RscText
		{
			x = 0.5;
			y = 0.2;
			w = 0.47;
			h = 0.44;
			text = ;
			colorBackground[] = {0.55, 0.5, 0.4, 1};
		};

		class Frame: RscText
		{
			style = ST_FRAME;
			x = 0.5;
			y = 0.2;
			w = 0.48;
			h = 0.44;
			text = ;
			colorText[] = {0.2,0.2,0.2,1};
			colorBackground[] = {0.2,0.2,0.2,1};
		};

		class ChooseList: RscListBox
		{
			idc = IDC_SERVER_SELECT_PLAYERS;
			style = LB_TEXTURES;
			acess = ReadOnly;
			x = 0.504;
			y = 0.21;
			w = 0.465;
			h = 0.43;
			sizeEx = SizeNormal;
			rowHeight = 0.045;
			colorBackground[] = {0.55, 0.5, 0.4, 1};
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_SELECT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_BACK);
	};
};

class DisplayMultiplayerServerSettings: RscDisplayStripesLayeredBackground
{
	access = ReadOnlyVerified;
	idd = IDD_SERVER_SETTINGS;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = false;

	class controls
	{
		class BackgroundAll: RscXBackgroundAll {};

		class Comp : RscXMPNotepad{};

		class Param1Text: RscText
		{
			idc = IDC_SERVER_SETTINGS_PARAM1_TEXT;
			style = ST_CENTER;
			x = 0.3;
			y = 0.25;
			w = 0.4;
			h = 0.08;
			sizeEx = SizeNormal;
			colorText[] = {0.8, 0.8, 0.8, 1};
			text = "";
		};

		class Param1: RscXlistBox
		{
			idc = IDC_SERVER_SETTINGS_PARAM1;
			style = SL_HORZ+ST_CENTER;
			x = 0.3;
			y = 0.35;
			w = 0.4;
			colorSelect[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {0.8, 0.8, 0.8, 0.5};
		};

		class Param2Text: Param1Text
		{
			idc = IDC_SERVER_SETTINGS_PARAM2_TEXT;
			y = 0.5;
			text = "";
		};

		class Param2: RscXlistBox
		{
			idc = IDC_SERVER_SETTINGS_PARAM2;
			style = SL_HORZ+ST_CENTER;
			x = 0.3;
			y = 0.6;
			w = 0.4;
			colorSelect[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {0.8, 0.8, 0.8, 0.5};
		};

		class background4: background4 {};

		class background5: background5 {};

		class Title: RscXTitle
		{
			text = $STR_XBOX_MULTI_HOST_SETTINGS;
		};

		class Line1: Line1 {};

		class Line2: Line2 {};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.01;
			y = 0.88;
			w = 0.3;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_OK);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_ADVANCED);
	};
};

//Campaign selection menu.
class RscDisplayCampaignSelect: RscStandardDisplay
{
	idd = IDD_CAMPAIGN_SELECT;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_XBOX_SELECT_CAMPAIGN;};

		//List of campaigns.
		class Campaigns: RscListBox
		{
			idc = IDC_CAMPAIGNS_LIST;
			x = 0.067; y = 0.15;
			h = 0.6;
		};

		//HTML description of this campaign.
		class Description: RscHTML
		{
			idc = IDC_CAMPAIGNS_DESCRIPTION;
			x = 0.53; y = 0.15;
			w = 0.4; h = 0.6;
		};

	  //Cancel back to the main menu.
	  class B_Cancel: RscActiveText
	  {
	    idc = IDC_CANCEL;
	    x = 0.21; y = 0.9;
	    w = 0.15;
	    text = $STR_DISP_CANCEL;
	  };

		//Select this campaign.
	  class B_OK: B_Cancel
	  {
	    idc = IDC_OK;
	    x = 0.55;
	  };
	};
};

//Difficulty selection screen.
class RscDisplaySelectDifficulty: RscStandardDisplay
{
	idd = IDD_SELECT_DIFFICULTY;

  class controls
  {
  	//List of difficulties.
		class Difficulty: RscListBox
		{
			idc = IDC_DIFF_LIST;
			x = 0.03; y = 0.2;
			w = 0.44; h = 0.16;
		};

		//Description of difficulties.
		class Description: RscHTML
		{
			idc = IDC_DIFF_DESC;
			x = 0.52; y = 0.15;
			w = 0.42; h = 0.7;
			align = "center";
		};
	};
};

//Cutscene pause screen.
class RscDisplayMovieInterrupt: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

	#define MovieInterrupt_Y 0.2

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_INT_TITLE;};

		class ButtonSkip: RscButton
		{
			idc = IDC_OK;
			x = 0.35;
			y = MovieInterrupt_Y;
			text = $STR_DISP_XBOX_MOVIE_SKIP;
			default = true;
		};

		class ButtonResume: ButtonSkip
		{
			idc = IDC_CANCEL;
			y = MovieInterrupt_Y + 0.1;
			text = $STR_DISP_XBOX_MOVIE_RESUME;
			default = false;
		};

		class ButtonAgain: ButtonSkip
		{
			idc = IDC_INT_RETRY;
			y = MovieInterrupt_Y + 0.2;
			text = $STR_DISP_XBOX_MOVIE_AGAIN;
			default = false;
		};

		class ButtonOptions: ButtonSkip
		{
			idc = IDC_INT_SETTINGS;
			y = MovieInterrupt_Y + 0.3;
			text = $STR_DISP_INT_OPTIONS;
			default = false;
		};

		class ButtonAbort: ButtonSkip
		{
			idc = IDC_ABORT;
			y = MovieInterrupt_Y + 0.4;
			text = $STR_DISP_INT_ABORT;
			default = false;
		};
	};
};