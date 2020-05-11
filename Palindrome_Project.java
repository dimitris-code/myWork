//This program check if the given strings are palindrome (avoiding the special characters)

package palindrome_project;

import java.util.ArrayList;

public class Palindrome_Project {

    public static void main(String[] args) {
                String str1 = "RED RUM, siR, IS murder55#";
        String str2 = "savvas{";
        String str3 = "KAYAK";
        String str4 = "RACECAR";
        String str5 = "WAS IT A CAT I S)A/W?";
        String str6 = "Don't nod!";

        System.out.println("\"" + str1 + "\" " + "is palindrome: " + checkPalindrome(str1));
        System.out.println("\"" + str2 + "\" " + "is palindrome: " + checkPalindrome(str2));
        System.out.println("\"" + str3 + "\" " + "is palindrome: " + checkPalindrome(str3));
        System.out.println("\"" + str4 + "\" " + "is palindrome: " + checkPalindrome(str4));
        System.out.println("\"" + str5 + "\" " + "is palindrome: " + checkPalindrome(str5));
        System.out.println("\"" + str6 + "\" " + "is palindrome: " + checkPalindrome(str6));

    }

    // FUNCTION THAT RETURNS TRUE IF 'str' IS PALINDROME
    static boolean checkPalindrome(String str) {
        ArrayList<String> list = new ArrayList<String>(); // DECLARE NEW ARRAYLIST
        char[] chars; // DECLARE CHARACTER ARRAY TO STORE THE STRING
        int i, j; // WILL BE USED AS POINTERS
        boolean b = true; // THE FUNCTION WILL RETURN THE VALUE OF 'b'

        list.add(str); // ADD THE STRING TO THE LIST

        // STRIPS OFF ALL NON-ASCII CHARACTERS: "[^\\x00-\\x7F]"
        // ERASES ALL ASCII CONTROL CHARACTERS: "[\\p{Cntrl}&&[^\r\n\t]]"
        // REMOVES NON-PRINTABLE CHARACTERS FROM UNICODE: "\\p{C}"
        // UNICODE NORMALIZER: "\\P{InBasic_Latin}"
        // REPLACE ALL CHARACTERS NOT IN RANGE: "[^0-9]"

        // UPPERCASE STRING AND CREATE SUBSTRING OF 'str', FROM THE FIRST TO THE LAST
        // ELEMENT, REPLACE ALL NON-ALPHABETICAL SYMBOLS, AND CONVERT THE GIVEN STRING
        // INTO A SEQUENCE OF CHARACTERS TO MANIPULATE THE CONTENT.
        chars = str.toUpperCase().substring(1, str.length() - 1).replaceAll(" ", "").replaceAll("[^\\x00-\\x7F]", "")
                .replaceAll("[\\p{Cntrl}&&[^\r\n\t]]", "").replaceAll("\\p{C}", "").replaceAll("\\P{InBasic_Latin}", "")
                .replaceAll("[^0-9]", "").toCharArray();

        // ---------DEBUG-------------------
        // for (char it : chars) {
        // System.out.print(it);
        // }
        // ---------------------------------

        i = 0; // POINTING TO THE BEGINNING OF THE STRING
        j = chars.length - 1; // POINTING TO THE END OF THE STRING

        while (i < j) { // WHILE THERE ARE CHARACTERS TO COMPARE
            if (chars[i] != chars[j]) { // IF THERE IS A MISMATCH
                b = false; // GIVEN STRING IS NOT PALINDROME
            }
            i++; // INCREMENT ONE POINTER
            j--; // DECREMENT THE OTHER POINTER
        }
        return b; // GIVEN STRING IS PALINDROME
    }
}
   
