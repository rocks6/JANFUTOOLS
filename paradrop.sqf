//this goes in waypoint act. replace drop1 with the group you want to drop from the plane
{
   unAssignVehicle x;   
   _x allowDamage false;   
   moveOut _x;   
   sleep 0.35;   
   _chute = createVehicle ["NonSteerable_Parachute_F", (getPos _x), [], 0, "NONE"];   
   _chute setPos (getPos _x);   
   _x moveinDriver _chute;   
   _x allowDamage true;   
   sleep 0.25;  
} foreach units group drop1;
