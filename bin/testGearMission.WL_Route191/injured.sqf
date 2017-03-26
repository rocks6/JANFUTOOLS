


sleep 3;

//look for number 70 means 70% chance to ai get injured and Unconscious instead dead.you can change it to increase or decrease Unconscious chance.
// ( min value 1 - max value 100 )
_units = [];

while { (true) } do {

{

		
		 if ((_x isKindOf "Man") && (!isplayer _x)) then
            {
				_ls = lifeState _x;
				

               if ((_ls != "INCAPACITATED") && !(_x in _units)) then {
				   
				_x removeAllMPEventHandlers "MPHit";
               _units = _units + [_x];
		call compile format[" 
			%1 addMPEventHandler ['MPHit',{
				if (vehicle %1 == %1) then {
					_rand = random 100;
					
					if (_rand < 5) then {
						[%1] spawn fnc_injured;
					};
				};
			}]
		",[_x] call BIS_fnc_objectVar];
	};
	
	};
	
} forEach allUnits;

sleep 10;

};
