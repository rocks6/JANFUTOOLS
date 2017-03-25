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
		
		System.out.println("Welcome to red's gearscript creator, build 001.");
		
		String selection = "-9999";
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
		    
		    System.out.println("Creating randomized uniform arrays");
		    //get user input for uniform arrays and inject it into gear.sqf
		    injectString(getTotalUniformInput());
		    
		    writer.close();
		} catch (IOException e) {
		   System.out.println("Error while writing file. Send the following info to Steve");
		   System.out.println(e.getMessage());
		   e.printStackTrace();
		}
		
		//TODO: print soldier classnames to use
		
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
		uniforms.put("1. MNP_WoodCamo_A", "\"MNP_CombatUniform_Wood_A\"");
		uniforms.put("2. MNP_WoodCamo_A", "\"MNP_CombatUniform_Wood_B\"");
		
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
	

}
