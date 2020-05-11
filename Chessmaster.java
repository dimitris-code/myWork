package chessmaster;

import java.util.Random;

public class Chessmaster {

    public static void main(String[] args) {
        char[] test2 = {'c','h','e','s','s','m','a','s','t','e','r'};
        char[][] test3 = new char[test2.length][test2.length];
        Random rand = new Random();
        int i, j, k, x = 0;
        char[] ch = {'A','B','C','D','E','F','G','H','I','J','K'};
        String s = "\t -------------------------------------------";
        
        System.out.println("\n\n");
        System.out.println(s);

        for(i = 0; i < test3.length; i++){
            x = rand.nextInt(test2.length); //4
            while(x == i){ 
                x = rand.nextInt(test2.length);
            }
            System.out.print((11 - i) + "\t");
            for(j = 0; j < test3.length; j++){
                if(i == j){
                    test3[i][j] = 'X';
                }
                else{
                    if(x == j){
                        test3[i][j] = Character.toUpperCase(test2[i]);
                    }
                    else{
                        test3[i][j] = ' ';                    
                    }
                }
                System.out.print("| " + test3[i][j] + " ");
            }
            
            switch(x){
                case 1 : x = ch[0]; break;
                case 2 : x = ch[1]; break;
                case 3 : x = ch[2]; break;
                case 4 : x = ch[3]; break;
                case 5 : x = ch[4]; break;
                case 6 : x = ch[5]; break;
                case 7 : x = ch[6]; break;
                case 8 : x = ch[7]; break;
                case 9 : x = ch[8]; break;
                case 10 : x = ch[9]; break;
            }
            
            System.out.print("| \t" + Character.toUpperCase(test2[i]) + ": (" + ch[i] + "," + (i + 1) + ")");
       
            System.out.println("\n" + s + " ");
        }

        System.out.print("\t");
        for(i = 0; i < ch.length; i++){
            System.out.print("  " + ch[i] + " ");
        }
        
        System.out.println("\n\n");
    }
    
}
