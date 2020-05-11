package hexadecimalcolorrepresantion_project;

import java.util.Scanner;
import java.io.IOException;

public class HexadecimalColorRepresantion_Project {

    public static void main(String[] args) throws Exception, IOException, InterruptedException{
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
        Scanner scan = new Scanner(System.in);
        char usrChoice, c;
        boolean valid = false; 
        KeysAndValues kv = new KeysAndValues();
        ValidateHex vh = new ValidateHex();
        ValidateString vs = new ValidateString();

        kv.maps();       

        while(!valid){
            
            System.out.print("\n<Options> \n\n\t  (1) Enter a hexadecimal number to locate corresponding color's position in the palette.\n\t  (2) Enter the name of a color to find its hexadecimal value.\n\t  (3) Enter '3' to exit the program.\n\n<Select> : ");
            usrChoice = scan.next().charAt(0);
            
            if(usrChoice == '1'){
                valid = true;
                vh.hexUsrInput();
            }
            else if(usrChoice == '2'){
                valid = true;
                vs.StringUsrInput();
            }
            else if(usrChoice == '3'){
                valid = true;
                System.out.println("\n\nEnd of program\n\n");
            }
            String s = Character.toString(usrChoice);
            if(isStringOnlyAlphabet(s)){
                System.out.println("Invalid input");
            }
            c = s.charAt(0);
        }
        scan.close();
    }
    
    public static boolean isStringOnlyAlphabet(String str){ 
        return ((!str.equals("")) 
            && (str != null) 
            && (str.matches("^[a-zA-Z]*$"))); 
    }
    
}
