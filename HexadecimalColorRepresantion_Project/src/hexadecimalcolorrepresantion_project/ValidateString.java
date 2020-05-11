package hexadecimalcolorrepresantion_project;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.*; 

public class ValidateString {
    public void StringUsrInput(){
        Scanner scan = new Scanner(System.in);
        String hex, usrHex = "";
        long l;
        int i;
        boolean testHexAndLength;
        boolean testString ;
        HashMap<String, String> hMap = new HashMap<>();
        Map<String, String> map = new HashMap<>();

        hMap.put("Black", "000000");
        hMap.put("Navy", "000080");
        hMap.put("Green", "008000");
        hMap.put("Teal", "008080");
        hMap.put("Silver", "c0c0c0");
        hMap.put("Blue", "0000ff");
        hMap.put("Lime", "00ff00");
        hMap.put("Aqua", "00ffff");
        hMap.put("Maroon", "800000");
        hMap.put("Purple", "800080");
        hMap.put("Olive", "808000");
        hMap.put("Gray", "808080");
        hMap.put("Red", "ff0000");
        hMap.put("Fuchsia", "ff00ff");
        hMap.put("Yellow", "ffff00");
        hMap.put("White", "ffffff");

        while(true){
            System.out.print("\n\nEnter the name of a color: ");
            hex = scan.nextLine();
            do{
                testString = hex.matches("^[a-zA-Z]+$");
                if(testString == false){
                    System.out.print("Only alphabetical characters are accepted! Please enter the name of a color: ");
                    hex = scan.nextLine();
                }
            }while(!testString);

            i = -1;
            for(Map.Entry<String, String> entry : hMap.entrySet()){
                if(hex.equals(entry.getKey())){
                    i = 0;
                    System.out.println("The hexadecimal value for " + entry.getKey() + " color is #" + entry.getValue());
                }
            }

            if(i == -1){
                System.out.print("The color does not appear in the palette but, it's been stored.\nPlease enter the hexadecimal value of this color: ");
                usrHex = scan.nextLine();
                do{
                    testHexAndLength = usrHex.matches("^[0-9a-fA-F]{1,6}$");
                    if(testHexAndLength == false){
                        System.out.print("Not a hexadecimal value! Enter numbers (0-9) and/or letters (A-F) [range of 6]: ");
                        usrHex = scan.nextLine();
                    }
                }while(!testHexAndLength);
            }

            if(i == -1){
                hMap.put(hex, usrHex);
                System.out.println("\nUpdated color palette");
                for(Map.Entry<String, String> entry : hMap.entrySet()){
                    System.out.println(entry.getKey() + ": #" + entry.getValue());
                }
            }

            System.out.print("\n\n\tDo you want to repeat process?\n\tIf yes then enter 'Y' or,\n\tpress any key to abort: ");
            String c = scan.nextLine();

            if(c.equalsIgnoreCase("n")){ 
                break;
            }
        }
        scan.close();

        System.out.println("\n\n<End of the program>\n\n");        
    }
        
}
