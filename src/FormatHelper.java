import java.util.Scanner;

public class FormatHelper {
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		System.out.println("This tool is used to combine a shorthand name for a class with the classname injection string. \nProbably not useful to anyone but Steve.");
		System.out.println("Select a formatting profile:");
		
		
		String selection = "1";
		while (!selection.equals("1") && !selection.equals("2"))
		{
			System.out.println("1. Uniform");
			System.out.println("2. Vest");
			selection = scan.nextLine();
		}
		
		switch (selection) {
		case "1":
			formatUniform();
			break;
		case "2":
			
			break;
		}

	}
	
	/*
	 * input shorthand for a uniform and the classname, recieve hashmap code for gearscript creator
	 */
	public static void formatUniform()
	{
		System.out.println("Enter the current uniform key-value pair count");
		int currCount = Integer.parseInt(scan.nextLine().trim());
		StringBuilder sb = new StringBuilder();
		while (true)
		{
			System.out.println("Input shorthand for the uniform, or 0 to exit");
			String shorthand = scan.nextLine();
			if (shorthand.equals("0")) System.exit(0);
			
			System.out.println("Input classname for the uniform);");
			String classname = scan.nextLine();
			
			//example format below
			//uniforms.put("4. RHS MARPAT", "\"rhs_uniform_FROG01_wd\"");
			String craftedString = "uniforms.put(\"" + currCount + ". " + shorthand + "\", \"\\\"" + classname + "\\\"\");";
			sb.append(craftedString + "\n");
			currCount++;
			System.out.println(sb.toString());
		}
	}

}
