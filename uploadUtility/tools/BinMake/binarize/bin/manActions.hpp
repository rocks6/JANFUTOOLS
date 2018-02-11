// basic actions list

/**
Used by player and AI as a basic action when no request for moving occurs, on ladder when not moving.
Also used for suspended pilot when no external (forced) move is needed.
Enforced as reaction to CancelAction user action.
*/
ACTION(Stop)
/**
Used by AI instead of Stop when behaviour is "Aware".
*/
ACTION(StopRelaxed)

/**
Used by player or AI when wants to turn left by at least 0.5 rad (for player only from external camera).
*/
ACTION(TurnL)
/**
Used by player or AI when wants to turn right by at least 0.5 rad (for player only from external camera).
*/
ACTION(TurnR)

/**
Used by AI instead of TurnL when behaviour is "Aware".
*/
ACTION(TurnLRelaxed)
/**
Used by AI instead of TurnR when behaviour is "Aware".
*/
ACTION(TurnRRelaxed)

//@{
/**
Not used by the program already. Reload actions are now referenced by their names from CfgWeapons.
*/
ACTION(ReloadMagazine)
ACTION(ReloadMGun)
ACTION(ReloadAT)
ACTION(ReloadMortar)
//@}

/**
Used by player and AI for throwing grenades (firing weapon with ammo ShotShell, ShotSmoke or ShotIlluminating
with initial speed up to 30 m/s).
*/
ACTION(ThrowGrenade)

/*!
\internal 1.05 Date 7/17/2001 by Ondra.
- Changed: different logic used to control walking.
It was controlled by mode before, slow actions were added instead.
*/
// ADD BEGIN
//@{
/**
Used by player and AI for the slowest movement. For player based on used input.
For AI when wanted speed is less than 0.6 * "limitFast" (default 1 m/s)
*/
ACTION(WalkF)  // front
ACTION(WalkLF) // front left
ACTION(WalkRF) // front right
ACTION(WalkL)  // left
ACTION(WalkR)  // right
ACTION(WalkLB) // back left
ACTION(WalkRB) // back right
ACTION(WalkB)  // back
//@}
// ADD END

//@{
/**
Used by player and AI for normal movement. For player based on used input.
For AI when wanted speed is from 0.6 * "limitFast" to "limitFast" (default from 1 to 5 m/s)
*/
ACTION(SlowF)
ACTION(SlowLF)
ACTION(SlowRF)
ACTION(SlowL)
ACTION(SlowR)
ACTION(SlowLB)
ACTION(SlowRB)
ACTION(SlowB)
//@}

//@{
/**
Used by player and AI for fast movement. For player based on used input.
For AI when wanted speed is greater than "limitFast" (default 5 m/s)
*/
ACTION(FastF)
ACTION(FastLF)
ACTION(FastRF)
ACTION(FastL)
ACTION(FastR)
ACTION(FastLB)
ACTION(FastRB)
ACTION(FastB)
//@}

/**
Used by player as reaction to MoveDown key input and by AI to switch position (UpDegree) when hand gun is active.
Also used on ladder to move up.
*/
ACTION(Down)
/**
Used by player as reaction to MoveUp key input and by AI to switch position (UpDegree) when hand gun is active.
Used also by both player and AI to end some actions (Medic, Treated).
Also used on ladder to move down.
*/
ACTION(Up)

/**
Used by AI to directly switch to position (UpDegree) ManPosLying.
By player used when gained his primary weapon and is lying or if is unable to stand.
Also used by player or AI when stops to use handgun and has primary weapon and is lying.
*/
ACTION(Lying)
/**
Used by AI to directly switch to position (UpDegree) ManPosStand.
Used by player or AI as reaction to WeaponOnBack user action.
*/
ACTION(Stand)
/**
Used by AI to directly switch to position (UpDegree) ManPosCombat.
By player used when gained his primary weapon and is not lying.
Used by player or AI as reaction to WeaponInHand user action.
Also used by player or AI when stops to use handgun and has primary weapon and is standing.
*/
ACTION(Combat)
/**
Used by AI to directly switch to position (UpDegree) ManPosCrouch.
Also used by player or AI when stops to use handgun and has primary weapon and is crouching.
*/
ACTION(Crouch)

/**
Used by Player to directly switch to position (UpDegree) ManPosStand.
Used by player as reaction to Stand user action.
*/
ACTION(PlayerStand)
/**
Used by Player to directly switch to position (UpDegree) ManPosCrouch.
Used by player as reaction to Stand user action.
*/
ACTION(PlayerCrouch)
/**
Used by Player to directly switch to position (UpDegree) ManPosLying.
Used by player as reaction to Prone user action.
*/
ACTION(PlayerProne)

/**
Used by player and AI. Action is performed if requested action can not be done because of collisions.
*/
ACTION(CanNotMove)

/**
Used by AI to directly switch to position (UpDegree) ManPosCivil.
By player used when lost his primary weapon and is not lying.
Also used by player or AI when stops to use handgun and has no primary weapon and is not lying.
*/
ACTION(Civil)
/**
Used by AI to directly switch to position (UpDegree) ManPosCivilLying.
By player used when lost his primary weapon and is lying.
Also used by player or AI when stops to use handgun and has no primary weapon and is lying.
*/
ACTION(CivilLying)

/**
Used by player when he attempts to fire and weapons are disabled.
*/
ACTION(FireNotPossible)

/**
Used by player and AI whenever person is dead.
*/
ACTION(Die)

/**
Used by player or AI when launcher (anything what fires missiles or laser) was selected (becomes current weapon).
*/
ACTION(WeaponOn)
/**
Used by player or AI when launcher (anything what fires missiles or laser) was deselected (stopped to be current weapon).
*/
ACTION(WeaponOff)

/**
Used by player and AI when movement must be reset - for initialization, after get out and after resurrection.
*/
ACTION(Default)

/**
Not used now. (maybe used before for get out)
*/
ACTION(JumpOff)

// special actions - for scripting and effects

/**
Used by player or AI as reaction to StrokeFist user action (or "fire weapon with ShotStroke ammo").
*/
ACTION(StrokeFist)
/**
Used by player or AI as reaction to StrokeGun user action (or "fire weapon with ShotStroke ammo").
*/
ACTION(StrokeGun)
/**
Used by player or AI as reaction to SitDown user action.
*/
ACTION(SitDown)
/**
Used by player or AI as reaction to Salute user action.
*/
ACTION(Salute)

/**
Used by player or AI when binocular was selected (becomes "current weapon").
*/
ACTION(BinocOn)
/**
Used by player when binocular was deselected (stopped to be "current weapon").
*/
ACTION(BinocOff)

/**
Used by player and AI. Starts processing of most user actions - 
Rearm, TakeWeapon, TakeMagazine, DropWeapon, DropMagazine,
SetTimer, Deactivate, DeactivateMine, TakeMine, UseWeapon, UseMagazine, HideBody,
TakeFlag (from body, pole flag has other animation) and ReturnFlag
*/
ACTION(PutDown)
/**
Used by player and AI. Reaction to "Cancel take flag" user action.
*/
ACTION(PutDownEnd)

/**
Used by player and AI. Animation used by medic when healing somebody. Animation is ended by ACTION(Up).
*/
ACTION(Medic)
/**
Used by player and AI. Animation used by a person which is healed during healing. Animation is ended by ACTION(Up).
*/
ACTION(Treated)

/**
Used by player and AI when person catch ladder on its top.
*/
ACTION(LadderOnDown)
/**
Used by player and AI when person catch ladder on its botttom.
*/
ACTION(LadderOnUp)
/**
Used by player and AI when person drop ladder during using it (reaction to LadderOff user action).
*/
ACTION(LadderOff)
/**
Used by player and AI when person finish to use ladder on its top.
*/
ACTION(LadderOffTop)
/**
Used by player and AI when person finish to use ladder on its bottom.
*/
ACTION(LadderOffBottom)

//@{
/**
Not used by the program already. Get In / Get Out actions are now referenced by their names from CfgVehicles.
*/
ACTION(GetInCar)
ACTION(GetOutCar)
ACTION(GetInTank)
ACTION(GetOutTank)
//@}

/**
Used by player and AI. Start processing of TakeFlag action from pole.

\patch_internal 1.21 Date 8/22/2001 by Ondra.
- New: TakeFlag action for better TakeFlag synchronization.
*/
ACTION(TakeFlag)

/**
Used by player as a reaction to Handgun user action or instead of actions leads to stand (combat) position if handgun is selected.
By AI used whenever handgun is selected and other position (UpDegree) is active.
*/
ACTION(HandGunOn)

//@{
/**
Evasive moves. When evasive action is hit, the fast move in specified direction should be used.
*/
ACTION(EvasiveForward)
ACTION(EvasiveLeft)
ACTION(EvasiveRight)
ACTION(EvasiveBack)
//@}

/**
Swimming - start / stop
*/
ACTION(StartSwim)
ACTION(StopSwim)

