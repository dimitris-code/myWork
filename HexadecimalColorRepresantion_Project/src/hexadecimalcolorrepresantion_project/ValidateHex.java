package hexadecimalcolorrepresantion_project;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.*; 

public class ValidateHex {
        public long getDecimal(String hex){  
        String digits = "0123456789ABCDEF";  
        hex = hex.toUpperCase();  
        long val = 0; 
        int i, d;
        char c;

        for(i = 0; i < hex.length(); i++){  
            c = hex.charAt(i);  
            d = digits.indexOf(c);  
            val = 16 * val + d;  
        }
        return val;  
    }

    public void hexUsrInput(){
        Scanner scan = new Scanner(System.in);
        String hex = "";
        String answer = "";
        boolean testHexAndLength;
        long l;    
        
        do{
            System.out.print("\n\nEnter a color in hexadecimal format (Numbers: 0-9 / Letters: A-F / range of 6): ");
            hex = scan.nextLine();
            do{
                testHexAndLength = hex.matches("^[0-9a-fA-F]{1,6}$");
                if(testHexAndLength == false){
                        System.out.print("Not a hexadecimal value! Enter numbers (0-9) and/or letters (A-F) [range of 6]: ");
                        hex = scan.nextLine();
                    }
            }while(!testHexAndLength);       
                
            //---------------------------------------------------------------

            // //technique to find the mid point to calculate the 'inbetween clause'
            // long low = 0; 
            // long high = 128;       

            // long mid = (low + high) >>> 1;
            // System.out.print("Mid Value OF Two Numbers Is "+ mid);

            //---------------------------------------------------------------

            l = getDecimal(hex);

            if(l == 0){
                System.out.println("The color is Black");
            }
            else if(l > 0 && l < 64){
                System.out.println("The color is close to Black");
            }
            else if(l == 64){
                System.out.println("The color is inbetween Black and Navy");
            }
            else if(l > 64 && l < 128){
                System.out.println("The color is close to Navy");
            }
            else if(l == 128){
                System.out.println("The color is Navy");
            }
            else if(l > 128 && l < 191){
                System.out.println("The color is close to Navy");
            }
            else if(l == 191){
                System.out.println("The color is inbetween Navy and Blue");
            }
            else if(l > 191 && l < 255){
                System.out.println("The color is close to Blue");
            }
            else if(l == 255){
                System.out.println("The color is Blue");
            }
            else if(l > 255 && l < 16511){
                System.out.println("The color is close to Blue");
            }
            else if(l == 16511){
                System.out.println("The color is inbetween Blue and Green");
            }
            else if(l > 16511 && l < 32768){
                System.out.println("The color is close to Green");
            }
            else if(l == 32768){
                System.out.println("The color is Green");
            }
            else if(l > 32768 && l < 32832){
                System.out.println("The color is close to Green");
            }
            else if(l == 32832){
                System.out.println("The color is inbetween Green and Teal");
            }
            else if(l > 32832 && l < 32896){
                System.out.println("The color is close to Teal");
            }
            else if(l == 32896){
                System.out.println("The color is Teal");
            }
            else if(l > 32896 && l < 49088){
                System.out.println("The color is close to Teal");
            }
            else if(l == 49088){
                System.out.println("The color is inbetween Teal and Lime");
            }
            else if(l > 49088 && l < 65280){
                System.out.println("The color is close to Lime");
            }
            else if(l == 65280){
                System.out.println("The color is Lime");
            }
            else if(l > 65280 && l < 65407){
                System.out.println("The color is close to Lime");
            }
            else if(l == 65407){
                System.out.println("The color is inbetween Lime and Aqua");
            }
            else if(l > 65407 && l < 65535){
                System.out.println("The color is close to Aqua");
            }
            else if(l == 65535){
                System.out.println("The color is Aqua");
            }
            else if(l > 65535 && l < 4227071){
                System.out.println("The color is close to Aqua");
            }
            else if(l == 4227071){
                System.out.println("The color is inbetween Aqua and Maroon");
            }
            else if(l > 4227071 && l < 8388608){
                System.out.println("The color is close to Maroon");
            }
            else if(l == 8388608){
                System.out.println("The color is Maroon");
            }
            else if(l > 8388608 && l < 8388672){
                System.out.println("The color is close to Maroon");
            }
            else if(l == 8388672){
                System.out.println("The color is inbetween Maroon and Purple");
            }
            else if(l > 8388672 && l < 8388736){
                System.out.println("The color is close to Purple");
            }
            else if(l == 8388736){
                System.out.println("The color is Purple");
            }
            else if(l > 8388736 && l < 8405056){
                System.out.println("The color is close to Purple");
            }
            else if(l == 8405056){
                System.out.println("The color is inbetween Purple and Olive");
            }
            else if(l > 8405056 && l < 8421376){
                System.out.println("The color is close to Olive");
            }
            else if(l == 8421376){
                System.out.println("The color is Olive");
            }
            else if(l > 8421376 && l < 8421440){
                System.out.println("The color is close to Olive");
            }
            else if(l == 8421440){
                System.out.println("The color is inbetween Olive and Gray");
            }
            else if(l > 8421440 && l < 8421504){
                System.out.println("The color is close to Gray");
            }
            else if(l == 8421504){
                System.out.println("The color is Gray");
            }
            else if(l > 8421504 && l < 10526880){
                System.out.println("The color is close to Gray");
            }
            else if(l == 10526880){
                System.out.println("The color is inbetween Gray and Silver");
            }
            else if(l > 10526880 && l < 12632256){
                System.out.println("The color is close to Silver");
            }
            else if(l == 12632256){
                System.out.println("The color is Silver");
            }
            else if(l > 12632256 && l < 14671968){
                System.out.println("The color is close to Silver");
            }
            else if(l == 14671968){
                System.out.println("The color is inbetween Silver and Red");
            }
            else if(l > 14671968 && l < 16711680){
                System.out.println("The color is close to Red");
            }
            else if(l == 16711680){
                System.out.println("The color is Red");
            }
            else if(l > 16711680 && l < 16711807){
                System.out.println("The color is close to Red");
            }
            else if(l == 16711807){
                System.out.println("The color is inbetween Red and Fuchsia");
            }
            else if(l > 16711807 && l < 16711935){
                System.out.println("The color is close to Fuchsia");
            }
            else if(l == 16711935){
                System.out.println("The color is Fuchsia");
            }
            else if(l > 16711935 && l < 16744447){
                System.out.println("The color is close to Fuchsia");
            }
            else if(l == 16744447){
                System.out.println("The color is inbetween Fuchsia and Yellow");
            }
            else if(l > 16744447 && l < 16776960){
                System.out.println("The color is close to Yellow");
            }
            else if(l == 16776960){
                System.out.println("The color is Yelllow");
            }
            else if(l > 16776960 && l < 16777087){
                System.out.println("The color is close to Yellow");
            }
            else if(l == 16777087){
                System.out.println("The color is inbetween Yellow and White");
            }
            else if(l > 16777087 && l < 16777215){
                System.out.println("The color is close to White");
            }
            else if(l == 16777215){
                System.out.println("The color is White");
            }

            System.out.print("\n\n\tDo you want to repeat process?\n\tIf yes then enter 'Y' or,\n\tpress any key to abort: ");
            answer = scan.next();
       
        }while(answer.equals("y") || answer.equals("Y"));

        scan.close();
      
        System.out.println("\n\n<End of the program>\n\n");

    }
}
