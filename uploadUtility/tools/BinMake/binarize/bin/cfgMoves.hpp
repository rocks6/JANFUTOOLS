// solider moves diagram - MotionCapture sources

// define default action sets

enum ManPos
{
	ManPosDead,
	ManPosWeapon, // special weapon - AT
	ManPosBinocLying,
	ManPosLyingNoWeapon,
	ManPosLying,
	ManPosHandGunLying,
	ManPosCrouch,
	ManPosHandGunCrouch,
	ManPosCombat,
	ManPosHandGunStand,
	ManPosStand, // moves with weapon on the back
  ManPosSwimming,
	ManPosNoWeapon, // civilian moves
	ManPosBinoc, // binocular position
	ManPosBinocStand, // binocular position (weapon on back)
};

#define RunDuty -0.5
#define WalkDuty -0.7
#define RestDuty -1
#define CrawlDuty -0.0
#define SprintDuty 0.6

#define SPEED_STATIC 1e10

class CfgVehicleActions {};
