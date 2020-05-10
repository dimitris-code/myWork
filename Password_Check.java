//This program prompts the user to enter a password and checks if the given string is valid

package password_check;

import java.util.Scanner;

public class Password_Check {

    public static final int PASSWORD_LENGTH = 8;
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("\n\t1. Ένα password πρέπει να έχει τουλάχιστον 8 χαρακτήρες.\n"
                + "\n\t2. Ένα password περιέχει μόνο γράμματα (λατινικούς χαρακτήρες) και ψηφία.\n"
                + "\n\t3. Ένα password πρέπει να περιέχει τουλάχιστον 2 ψηφία.\n"
                + "\n\t   Εισάγετε ένα password (Σύμφωνα με τις παραπάνω προδιαγραφές): ");
        String s = input.nextLine();

        if (is_Valid_Password(s)) {
            System.out.println("\n\t   Το password " + "\"" + s + "\"" + " εγκρίνεται.");
        }
        else {
            System.out.println("\n\t   Το password " + "\"" + s + "\"" + " δεν εγκρίνεται!");
        }
    }

    // function #1
    public static boolean is_Valid_Password(String password) {
        boolean b = false;
        char ch;
        int i, counter1 = 0, counter2 = 0, counter3 = 0;        
        
        for (i = 0; i < password.length(); i++) {
            ch = password.charAt(i);
            if(is_Letter(ch)){
                counter1++;
            }
            else if(is_Numeric(ch)){
                counter2++;
            }
            else if(((int)ch >= 32 && (int)ch <= 47) || ((int)ch >= 58 && (int)ch <= 64) || ((int)ch >= 91 && (int)ch <= 96) || ((int)ch >= 123 && (int)ch <= 126)){
                counter3++;
            }
        }
        
        if(password.length() >= PASSWORD_LENGTH){    
            if((counter2 > 1) && (counter3 == 0)){
                b = true;
            }
        }
        
        return b;
}

    // function #2
    public static boolean is_Letter(char ch) {
        ch = Character.toUpperCase(ch);
        return (ch >= 'A' && ch <= 'Z');
    }

    // function #3
    public static boolean is_Numeric(char ch) {
        return (ch >= '0' && ch <= '9');
    }
    
}
   
    

