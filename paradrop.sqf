//this works sometimes. supposed to be in a waypoint
{
  unAssignVehicle _x;
  _x allowDamage false;
  moveOut _x;
  sleep 0.35;
  _chute = createVehicle ["NonSteerable_Parachute_F", (getPos _x), [], 0, "NONE"];
  _chute setPos (getPos _x);
  _x moveinDriver _chute;
  _x allowDamage true;
  sleep 0.5;
} forEach thislist;
