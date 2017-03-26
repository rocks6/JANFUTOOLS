import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Scanner;

/*
 * By: Steve/red62
 * 
 */

public class GearscriptCreator {
	String testPreset = "testPreset.sqf";
	static Scanner scan = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		System.out.println("Welcome to red's gearscript creator.");
		
		//for now, bypass selection screen and just create gearscript immediately
		String selection = "1";
		while (!selection.equals("0") && !selection.equals("1") && !selection.equals("2"))
		{
			System.out.println("Please select one of the options below.");
			System.out.println("0. Exit");
			System.out.println("1. Create a gearscript from scratch");
			System.out.println("2. Choose from a preset gearscript/army");
			selection = scan.nextLine();
		}
		
		switch (selection) {
		case "0":
			System.exit(0);
		case "1":
			createScratchGearscript();
			break;
		case "2":
			loadPresetGearscript();
			break;
		}
	


	}
	
	//TODO: finish this function
	private static void createScratchGearscript() {
		
		
		try{
			System.out.println("Creating a gearscript from scratch...");
			
		    PrintWriter writer = new PrintWriter("gear.sqf", "UTF-8");
		    System.out.println("Removing starting gear and adding basic gear");
		    injectString(removeGear);
		    injectString(defineBasic);
		    
		    System.out.println("Creating randomized uniform, vest, headgear arrays");
		    //get user input for random arrays and inject it into gear.sqf
		    
		    //COMMENTED FOR DEBUGGING
		    injectString(getTotalUniformInput());
		    injectString(getTotalHeadgearInput());
		    injectString(getTotalVestInput());
		    
		    
		    injectString(randomDefinitions);
		    
		    injectString("switch (typeOf _unit) do\n{");
		    injectString(buildGearForUnit("B_Soldier_SL_F"));
		    injectString(buildGearForUnit("B_Soldier_TL_F"));
		    //TODO: finish up units and show unit classnames to user
		    
		    //option to add custom headgear for SL?
		    writer.close();
		} catch (IOException e) {
		   System.out.println("Error while writing file. Send the following info to Steve");
		   System.out.println(e.getMessage());
		   e.printStackTrace();
		}
		
		//TODO: print soldier classnames to use
		
	}
	
	//build the gear string for a selected unit
	private static String buildGearForUnit(String unit)
	{
		System.out.println("Choose a weapon to give to: " + unit);
		String constructedGearString = "case \"" + unit + "\":\n{\nUNIFORM;\n";
		String[] unitWeapon = getWeaponForUnit();
		constructedGearString += "_unit addweapon " + unitWeapon[0] +";\n_unit addmagazines [" + unitWeapon[1] +",8];\n";
		if (unitWeapon.length > 2)
		{
			constructedGearString += "_unit addmagazines [" + unitWeapon[2] + ",8];\n";
		}
		
		constructedGearString += "_unit addmagazines [\"SmokeShell\",2];\n";
		
		//any extra items necessary for class
		switch (unit) {
			case "B_Soldier_SL_F":
				constructedGearString += "_unit addWeapon \"Binocular\";\n_unit additem \"ACRE_PRC148\";\n";
				System.out.println("Give squad lead GPS? (y/n)");
				String sel = scan.nextLine();
				if (sel.equalsIgnoreCase("y")) {
					constructedGearString += "_unit linkItem \"ItemGPS\";\n";
				}
				break;
			case "B_Soldier_TL_F":
				constructedGearString += "_unit addWeapon \"Binocular\";\n_unit additem \"ACRE_PRC148\";\n";
				System.out.println("Give team lead GPS? (y/n)");
				String sel2 = scan.nextLine();
				if (sel2.equalsIgnoreCase("y")) {
					constructedGearString += "_unit linkItem \"ItemGPS\";\n";
				}
				break;
				
		}
		
		constructedGearString += "BASIC;\n};";
		
		return constructedGearString;

	}
	
	//returns an array containing the weapon, ammunition for the weapon and any additional ammunition
	private static String[] getWeaponForUnit()
	{

		LinkedHashMap<String,String[]> weapons = new LinkedHashMap<String,String[]>();
		weapons.put("1. RHS M16A2 GL", new String[]{"\"RH_M16A2gl\"","\"30Rnd_556x45_Stanag\"","\"1Rnd_HE_Grenade_shell\""});
		weapons.put("2. RHS M16A2", new String[]{"\"RH_M16A2\"","\"30Rnd_556x45_Stanag\""});
		weapons.put("3. RHS M240" , new String[]{"\"rhs_weap_m240G\"","\"rhsusf_100Rnd_762x51\""});
		
		String selection = "-999";
		boolean condition = true;
		while (condition)
		{
			
			//display available weapons
			for (String weapon : weapons.keySet())
			{
				System.out.println(weapon);
			}
			
			selection = scan.nextLine();
			try {
				condition = Integer.parseInt(selection) > weapons.size() || Integer.parseInt(selection) != (int)Integer.parseInt(selection);
				} catch (NumberFormatException e) {
					System.out.println("Type error (need integer)");
				}
		}
		return (String[]) weapons.values().toArray()[Integer.parseInt(selection)-1];
	}
	
	//prompt the user for a uniform choice(s) and return it 
	private static String getTotalUniformInput()
	{
		int numUniforms = -999;
		System.out.println("How many uniforms would you like to be in the randomized uniform array? (enter an integer from 1 to 10)");
		String selection = "-999";
		boolean condition = true;
		while (condition)
		{
			//GET NUM UNIFORMS IN ARRAY 
			System.out.println("Please enter an integer from 1 to 10.");
			selection = scan.nextLine();
			try {
				condition = Integer.parseInt(selection) < 1 || Integer.parseInt(selection) > 10 || Integer.parseInt(selection) != (int)Integer.parseInt(selection);
				} catch (NumberFormatException e) {
					System.out.println("Type error (need integer)");
				}
		}
		numUniforms = Integer.parseInt(selection);
		
		//construct a uniform string out of all randomized uniforms for injection
		String constructedUniformString = "\n_UniformArray = [";
		for (int i=1;i<=numUniforms;i++)
		{
			System.out.println("Please select uniform " + i + ": - for example, if you want '1. MNP_WoodCamo_A' then input 1");
			if (i > 1) { constructedUniformString += ","; }
			constructedUniformString += getUniformSelection();
		}
		
		
		//return placeholder
		return constructedUniformString + "];";
		
	}
	
	/*helper method to display the available uniforms and return one for the user
	 * procedure for adding a uniform:
	 * -add it to the linkedhashmap below
	*/
	private static String getUniformSelection()
	{
		LinkedHashMap<String,String> uniforms = new LinkedHashMap<String,String>();
		uniforms.put("1. MNP WoodCamo LongSleeve", "\"MNP_CombatUniform_Wood_A\"");
		uniforms.put("2. MNP WoodCamo RolledUpSleeve", "\"MNP_CombatUniform_Wood_B\"");
		uniforms.put("3. MNP Desert Uniform" , "\"MNP_CombatUniform_US3Co\"");
		
		String selection = "-999";
		boolean condition = true;
		while (condition)
		{
			
			//display available uniforms
			for (String uniform : uniforms.keySet())
			{
				System.out.println(uniform);
			}
			
			selection = scan.nextLine();
			try {
				condition = Integer.parseInt(selection) > uniforms.size() || Integer.parseInt(selection) != (int)Integer.parseInt(selection);
				} catch (NumberFormatException e) {
					System.out.println("Type error (need integer)");
				}
		}
		return (String) uniforms.values().toArray()[Integer.parseInt(selection)-1];
	}


	//prompt the user for a headgear choice(s) and return it 
	private static String getTotalHeadgearInput()
	{
		int numHeadgear = -999;
		System.out.println("How many different items of headgear would you like to be in the randomized array? (enter an integer from 1 to 10)");
		String selection = "-999";
		boolean condition = true;
		while (condition)
		{
			//GET NUM HEADGEAR IN ARRAY 
			System.out.println("Please enter an integer from 1 to 10.");
			selection = scan.nextLine();
			try {
				condition = Integer.parseInt(selection) < 1 || Integer.parseInt(selection) > 10 || Integer.parseInt(selection) != (int)Integer.parseInt(selection);
				} catch (NumberFormatException e) {
					System.out.println("Type error (need integer)");
				}
		}
		numHeadgear = Integer.parseInt(selection);
		
		//construct a headgear string out of all randomized headgears for injection
		String constructedHeadgearString = "\n_HeadgearArray = [";
		for (int i=1;i<=numHeadgear;i++)
		{
			System.out.println("Please select headgear " + i + ":");
			if (i > 1) { constructedHeadgearString += ","; }
			constructedHeadgearString += getHeadgearSelection();
		}
		
		
		//return placeholder
		return constructedHeadgearString + "];";
		
	}
	
	/*helper method to display the available headgears and return one for the user
	 * procedure for adding a headgear:
	 * -add it to the linkedhashmap below
	*/
	private static String getHeadgearSelection()
	{
		LinkedHashMap<String,String> headgears = new LinkedHashMap<String,String>();
		headgears.put("1. MNP WoodCamo Cap", "\"MNP_MC_USW\"");
		headgears.put("2. MNP VDV DesertCamo cap", "\"MNP_MilCap_RU_D\"");
		headgears.put("3. RHS WoodCamo Helmet","\"rhs_6b27m_digi\"");
		
		String selection = "-999";
		boolean condition = true;
		while (condition)
		{
			
			//display available headgear
			for (String headgear : headgears.keySet())
			{
				System.out.println(headgear);
			}
			
			selection = scan.nextLine();
			try {
				condition = Integer.parseInt(selection) > headgears.size() || Integer.parseInt(selection) != (int)Integer.parseInt(selection);
				} catch (NumberFormatException e) {
					System.out.println("Type error (need integer)");
				}
		}
		return (String) headgears.values().toArray()[Integer.parseInt(selection)-1];
	}

	//prompt the user for a vest choice(s) and return it 
	private static String getTotalVestInput()
	{
		int numVest = -999;
		System.out.println("How many different vests would you like to be in the randomized array? (enter an integer from 1 to 10)");
		String selection = "-999";
		boolean condition = true;
		while (condition)
		{
			//GET NUM VESTS IN ARRAY 
			System.out.println("Please enter an integer from 1 to 10.");
			selection = scan.nextLine();
			try {
				condition = Integer.parseInt(selection) < 1 || Integer.parseInt(selection) > 10 || Integer.parseInt(selection) != (int)Integer.parseInt(selection);
				} catch (NumberFormatException e) {
					System.out.println("Type error (need integer)");
				}
		}
		numVest = Integer.parseInt(selection);
		
		//construct a vest string out of all randomized vests for injection
		String constructedVestString = "\n_VestArray = [";
		for (int i=1;i<=numVest;i++)
		{
			System.out.println("Please select vest " + i + ":");
			if (i > 1) { constructedVestString += ","; }
			constructedVestString += getVestSelection();
		}
		
		

		return constructedVestString + "];";
		
	}
	
	/*helper method to display the available vests and return one for the user
	 * procedure for adding a vest:
	 * -add it to the linkedhashmap below
	*/
	private static String getVestSelection()
	{
		LinkedHashMap<String,String> vests = new LinkedHashMap<String,String>();
		vests.put("1. MNP WoodCamo Vest", "\"MNP_Vest_Light_M81\"");
		vests.put("2. Khaki Chest Rig", "\"V_Chestrig_khk\"");
		vests.put("3. DesertCamo Vest","\"MNP_Vest_Light_DPM_D\"");
		
		String selection = "-999";
		boolean condition = true;
		while (condition)
		{
			
			//display available vests
			for (String vest : vests.keySet())
			{
				System.out.println(vest);
			}
			
			selection = scan.nextLine();
			try {
				condition = Integer.parseInt(selection) > vests.size() || Integer.parseInt(selection) != (int)Integer.parseInt(selection);
				} catch (NumberFormatException e) {
					System.out.println("Type error (need integer)");
				}
		}
		return (String) vests.values().toArray()[Integer.parseInt(selection)-1];
	}
	
	//TODO: finish this function
	private static void loadPresetGearscript() {
		String selection = "-9999";
		while (!selection.equals("0") && !selection.equals("1") && !selection.equals("2"))
		{
			System.out.println("Loading a preset gearscript - Please select one of the options below.");
			System.out.println("0. Exit");
			System.out.println("1. Preset 1");
			System.out.println("2. Preset 2");
			selection = scan.nextLine();
		}
		
		switch (selection) {
		case "0":
			System.exit(0);
		case "1":
			break;
		case "2":
			break;
		}
		
		//TODO: print soldier classnames to use
	}
	
	//write a newline delimited string to gear.sqf
	private static void injectString(String stringToInject) throws IOException
	{
		BufferedWriter injector = new BufferedWriter(new FileWriter("gear.sqf", true));
		String[] lines = stringToInject.split("\\n");
		for (String line : lines) {
			injector.write(line);
			injector.newLine();
		}
		
		injector.close();
	}
	
	//copy a file using streams, credit to http://www.journaldev.com/861/java-copy-file
	private static void copyFile(String source, String dest) throws IOException {
	    InputStream is = GearscriptCreator.class.getResourceAsStream(source);
	    OutputStream os = null;
	    try {
	        os = new FileOutputStream(new File(dest));
	        byte[] buffer = new byte[1024];
	        int length;
	        while ((length = is.read(buffer)) > 0) {
	            os.write(buffer, 0, length);
	        }
	    } finally {
	        is.close();
	        os.close();
	    }
	}
	
	//constants/blocks of text down here i dont want to paste 
	static String removeGear = "_unit = player;\nremoveallweapons _unit;\nremoveAllAssignedItems _unit;\nremovebackpack _unit;\nremoveVest _unit;\nremoveUniform _unit;\nremoveHeadGear _unit;\nremoveGoggles _unit;\nsleep 0;";
	static String defineBasic = "#define BASIC \\\n_unit linkItem \"ItemMap\"; \\\n_unit linkItem \"ItemWatch\"; \\\n_unit linkItem \"ItemCompass\"; \\\n_unit addItem \"ACRE_PRC343\"; \\\n_unit additem \"ACE_Earbuds\";\\\n_unit additem \"ACE_Morphine\";\\\n_unit additem \"ACE_elasticBandage\";\\\n_unit additem \"ACE_elasticBandage\";\\\n_unit additem \"ACE_elasticBandage\";\\\n_unit additem \"ACE_elasticBandage\";\\\n_unit additem \"ACE_elasticBandage\";\\\n_unit additem \"ACE_elasticBandage\";\\\n_unit additem \"ACE_packingBandage\";\\\n_unit additem \"ACE_packingBandage\";\\\n_unit additem \"ACE_packingBandage\";\\\n_unit additem \"ACE_packingBandage\";\\\n_unit additem \"ACE_packingBandage\";\\\n_unit additem \"ACE_packingBandage\";";			
	static String randomDefinitions = "_randomUniform = _UniformArray select floor random count _UniformArray;\n_randomHeadgear = _HeadgearArray select floor random count _HeadgearArray;\n_randomVest = _VestArray select floor random count _VestArray;\n\n#define UNIFORM \\\n_unit forceadduniform _randomUniform; \\\n_unit addvest _randomVest; \\\n_unit addheadgear _randomHeadgear;";


}
