//Core cfgVoice uses no external references to data. This is redefined in each project.
class CfgVoice
{
	access = ReadAndWrite;
	
	//Different speakers
	voices[] = {NoVoice};
	femaleVoices[] = {};
	voicePlayer = NoVoice;
  
  //Samples used to add to radio messaging.
	micOuts[] = {};
	
	//Voice played as preview in the voice options menu.
	preview = "";

	class Words
	{
		//Generic sounds.
		micOut[] = {};
		micOut1[] = {};
		micOut2[] = {};
		micOut3[] = {};
		loop[] = {};
		
		beepBeep[] = {};
		pause[] = {};
		xmit[] = {};

		//Numbers - to add variants _one and one_.
		all[] = {};
		allGroup[] = {};		
		
		//Unit digits.
		zero[] = {};
		one[] = {};
		two[] = {};
		three[] = {};
		four[] = {};
		five[] = {};
		six[] = {};
		seven[] = {};
		eight[] = {};
		nine[] = {};
		ten[] = {};
		eleven[] = {};
		twelve[] = {};
    thirteen[] = {};
    fourteen[] = {};
    fifteen[] = {};
    sixteen[] = {};
    seventeen[] = {};
    eighteen[] = {};
    nineteen[] = {};
    twenty[] = {};
    thirty[] = {};
    forty[] = {};
    fifty[] = {};
    sixty[] = {};
    seventy[] = {};
    eighty[] = {};
    ninety[] = {};
    hundred[] = {};

		//Coordinate digits.
		zero2[] = {};
		one2[] = {};
		two2[] = {};
		three2[] = {};
		four2[] = {};
		five2[] = {};
		six2[] = {};
		seven2[] = {};
		eight2[] = {};
		nine2[] = {};
		ten2[] = {};
		eleven2[] = {};
		twelve2[] = {};

		//Phonetic alphabet.
		alpha[] = {};
		bravo[] = {};
		charlie[] = {};
		delta[] = {};
		echo[] = {};
		foxtrot[] = {};
		golf[] = {};
		hotel[] = {};
		india[] = {};
		juliet[] = {};
		kilo[] = {};
		lima[] = {};
		mike[] = {};
		november[] = {};
		oscar[] = {};
		papa[] = {};
		quebec[] = {};
		romeo[] = {};
		sierra[] = {};
		tango[] = {};
		uniform[] = {};
		victor[] = {};
		whiskey[] = {};
		xray[] = {};
		yankee[] = {};
		zulu[] = {};

		//Teams.
		whiteTeam[] = {};
		redTeam[] = {};
		greenTeam[] = {};
		blueTeam[] = {};
		yellowTeam[] = {};

		//Directon clock.
		at10[] = {};
		at11[] = {};
		at12[] = {};
		at1[] = {};
		at2[] = {};
		at3[] = {};
		at4[] = {};
		at5[] = {};
		at6[] = {};
		at7[] = {};
		at8[] = {};
		at9[] = {};

		//Distances.
		dist50[] = {};
		dist100[] = {};
		dist200[] = {};
		dist500[] = {};
		dist1000[] = {};
		dist2000[] = {};
		far[] = {};

		//Quarters.
		north[] = {};
		northEast[] = {};
		east[] = {};
		southEast[] = {};
		south[] = {};
		southWest[] = {};
		west[] = {};
		northWest[] = {};

		//Commands/messages.
		
		//Identifiers.
		that[] = {};
		at[] = {};
		
		//Units/objects.
		ambulance[] = {};
		apc[] = {};
		boat[] = {};
		car[] = {};
		crew[] = {};
		chopper[] = {};
		man[] = {};
		machineGunner[] = {};
		medic[] = {};
		missileSoldier[] = {};
		officer[] = {};
		pilot2[] = {};
		plane[] = {};
		ship[] = {};
		soldier[] = {};
		sniper[] = {};
		tank[] = {};
		truck[] = {};
		tractor[] = {};
		vehicle[] = {};
		specNas[] = {};
		blackOp[] = {};

		captive[] = {};
		lawsoldier[] = {};
		rpgsoldier[] = {};
		aasoldier[] = {};
		grenadier[] = {};
		civilian2[] = {};

		abrams[] = {};
		blackhawk[] = {};
		cobra[] = {};
		jeep[] = {};
		m113[] = {};
		m60[] = {};
		thunderbolt[] = {};

		repairtruck[] = {};
		ammotruck[] = {};
		fueltruck[] = {};
		ural[] = {};
		yellowcar[] = {};
		bluecar[] = {};
		redcar[] = {};
		greencar[] = {};
		sportscar[] = {};
		
		humvee[] = {};
		brdm[] = {};
		
		bus[] = {};
		bicycle[] = {};
		bike[] = {};

		bradley[] = {};
		bmp2[] = {};
		
		landingship[] = {};
		
		aircraft[] = {};
		
		apache[] = {};
		chinook[] = {};
		kiowa[] = {};
		kamov[] = {};
		
		su25[] = {};
		camel[] = {};
		m163[] = {};

		BMP[] = {};
		mi17[] = {};
		hind[] = {};
		scudLauncher[] = {};
		T55[] = {};
		T72[] = {};
		T80[] = {};
		shilka[] = {};
		UAZ[] = {};

		object[] = {};

		bunker[] = {};
		building[] = {};
		bush[] = {};
		chapel[] = {};
		church[] = {};
		cross[] = {};
		depot[] = {};	//Still present?
		forest[] = {};
		fuelstation[] = {};
		helipad[] = {};
		hospital[] = {};
		house[] = {};
		repairDepot[] = {};	//Still present?
		rock[] = {};
		tree[] = {};
		wall[] = {};
		
		//New objects.
		guardtower[] = {};
		tent[] = {};
		fieldhospital[] = {};
		
		grave[] = {};
		ammocrate[] = {};
		wreck[] = {};
		fence[] = {};
		target2[] = {};
		armoredtarget[] = {};
		barrel[] = {};
		flag[] = {};
		campfire[] = {};
		chair[] = {};
		table[] = {};
		fountain[] = {};
		body[] = {};
		pallet[] = {};
		obstacle[] = {};
		
		parachute[] = {};

		enemy[] = {};
		friendly[] = {};
		civilian[] = {};
		resistance[] = {}; //Still present?
		unknown[] = {};
		
		//Weapons.

		//Tank weapons.
		mgun[] = {}; //Also used for M2 HMG and infantry weapons.
		heat[] = {};
		sabot[] = {};
		cannon[] = {}; //**ToDo: add to cfgVehicles**.
		
		//Helicopter weapons.
		missiles[] = {};
		rockets[] = {};

		//Infantry weapons.
		rifle[] = {};
		sidearm[] = {};
		atlauncher[] = {};
		aalauncher[] = {};
		grenadelauncher[] = {};
		magazine[] = {};
		handgrenade[] = {};
		grenade[] = {};
		smokeshell[] = {};
		flare[] = {};
		mine[] = {};
		satchelcharge[] = {};
		binoculars[] = {};
		nvgoggles[] = {};
		laserdesignator[] = {};

		//Commands.

		IsDown[] = {};
		Damned[] = {};
		OhNo[] = {};
		
		Injured[] = {};

		StatusRed[] = {};
		outOfFuel[] = {};
		outOfAmmo[] = {};
		fuellow[] = {};
		ammoLow[] = {};
		position[] = {};

		thisIs[] = {};
		takingCommand[] = {};
		ISayAgain[] = {};
		
		out[] = {}; //Still present?
		over[] = {}; //Still present?
		
		ready[] = {};
		waiting[] = {};
		negative[] = {};

		readyToFire[] = {};
		cannotFire[] = {};

		canNotGetThere[] = {};

		needMedic[] = {};
		needAmmo[] = {};
		needFuel[] = {};
		needRepairs[] = {};
		requestSupport[] = {}; //Still present?

		//New form commands.
		formColumn[] = {};
		formStageredColumn[] = {};
		formWedge[] = {};
		formEchelonLeft[] = {};
		formEchelonRight[] = {};
		formVee[] = {};
		formLine[] = {};
		formFile[] = {};
		formDiamond[] = {};
		

		Careless[] = {};
		AtEase[] = {};
		StayAlert[] = {};
		Danger[] = {};
		stealth[] = {};

		FireAtWill[] = {};
		WeaponsFree[] = {};
		GoGoGo[] = {};
		HoldFire[] = {};
		CeaseFire[] = {};
		DontFire[] = {};

		target[] = {};
		engage[] = {};
		engageAtWill[] = {};
		disengage[] = {};

		goProne[] = {};
		hitTheDirt[] = {};
		getDown[] = {};
		
		standUp[] = {};
		stayCrouch[] = {};
		keepLow[] = {};
		
		Advance[] = {};
		StayBack[] = {};
		FlankLeft[] = {};
		FlankRight[] = {};

		Are[] = {};
		Is[] = {};
		WaitForMe[] = {}; //Still present?

		Watch[] = {};
		scanHorizon[] = {};

		NoTarget[] = {};
		KeepFormation[] = {};

		Take[] = {};
		From[] = {};
		drop[] = {};
		
		ReportStatus[] = {};
		MoveTo[] = {};
		GoTo[] = {};
		HealAt[] = {};

		repairAt[] = {};
		refuelAt[] = {};
		rearmAt[] = {};
		
		supporting[] = {};
		supportat[] = {};
		supportDone[] = {};

		returnToFormation[] = {};
		fallBackIntoFormation[] = {};

		follow[] = {};
		attack[] = {};

		mount[] = {}; //Was mount.
		getin[] = {};
		board[] = {};
		
		switchDriver[] = {};
		switchGunner[] = {};
		switchCommander[] = {};

		disembark[] = {};

		stop[] = {}; //Halt was stop.
		halt[] = {};
		hide[] = {}; //Was hide.
		takeCover[] = {};

		engaging[] = {}; 
		iAmOnHim[] = {};

		roger[] = {};
		movingOn[] = {};
		onTheWay[] = {};

		forward[] = {};
		backward[] = {}; //Now reverse.
		reverse[] = {};
		fast[] = {};
		slow[] = {};
		left[] = {};
		right[] = {};
		
		manualOn[] = {};
		manualOff[] = {};
		
		FireAt[] = {};
		fire[] = {};

		gunner[] = {};
		commander[] = {};
		driver[] = {};
		pilot[] = {};

		iVeGotHim[] = {};
		isHistory[] = {};
		contact[] = {};
		contact2[] = {};
		underFire[] = {};
		clear[] = {};

		whereAreYou[] = {};
		repeat[] = {};
		
		takeflag[] = {};
		returnflag[] = {};
		eject[] = {};
		placecharge[] = {};
		detonate[] = {};
		activatetimer[] = {};
		addtimer[] = {};
		deactivatebomb[] = {};
		deactivatemine[] = {};
		pickupmine[] = {};
		lightfire[] = {};
		putoutfire[] = {};
		opendoor[] = {};
		closedoor[] = {};
	};

	class NoVoice
	{
		variants[] = {1};	//Define variants - only one for player's voice.
		
		//There is an option (forced for demos) to use only a limited number of speakers.
		//All speakers, single speaker.
		directories[] = {"", ""};
		name = "No voice";
	};
};