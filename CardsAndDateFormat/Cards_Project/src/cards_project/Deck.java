package cards_project;

import java.util.Vector;
import java.util.Collections;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Deck extends Card{
        // characteristics
    private Vector<Card> vec;
    private boolean flag;
    private int result;

    // constructors
    Deck(){
        vec = new Vector();
        initialize();
        flag = false;
        result = 0;
    }
    
    Deck(int number, boolean figure, boolean color, char symbol, Vector<Card> vec, boolean flag, int result){
        this.vec = vec;
        this.flag = flag;
        this.result = result;
    }

    // setters & getters
    public void set(){
        
    }

    // other methods
    public void initialize(){
        boolean fg = false;

        // 13 karo
        for(int i = 0; i < 13; i++){
            if (i == 10 || i == 11 || i == 12)
                fg = true;
            else 
                fg = false;

            vec.add(new Card(i + 1, fg, true, 'C'));
        }

        // 13 kardies
        for(int i = 0; i < 13; i++){
            if (i == 10 || i == 11 || i == 12)
                fg = true;
            else 
                fg = false;

            vec.add(new Card(i + 1, fg, true, 'H'));
        }

        // 13 mpastounia
        for(int i = 0; i < 13; i++){
            if (i == 10 || i == 11 || i == 12)
                fg = true;
            else 
                fg = false;

            vec.add(new Card(i + 1, fg, false, 'P'));
        }

        // 13 spathia
        for(int i = 0; i < 13; i++){
            if (i == 10 || i == 11 || i == 12)
                fg = true;
            else 
                fg = false;

            vec.add(new Card(i + 1, fg, false, 'T'));
        }
    }

    public void print(){
        for(int i = 0; i < vec.size(); i++){
            vec.get(i).print(true);
            
        }
   
    }

    // 1
    public void printRandom(){
        Collections.shuffle(vec);
        for(int i = 0; i < vec.size(); i++){
            vec.get(i).print(true);
            
        }
    }

    // 2
    public void printFigures(){
        Collections.shuffle(vec);
        for(int i = 0; i < vec.size(); i++){
            if(vec.get(i).getFigure())
                vec.get(i).print(true);
            
        }
    }

    // 3
    public void printBySymbols(char ch){
        Collections.shuffle(vec);
        for(int i = 0; i < vec.size(); i++){
            if(vec.get(i).getSymbol() == ch){
                if(!(vec.get(i).getNumber() == 11 || vec.get(i).getNumber() == 12 || vec.get(i).getNumber() == 13)){ 
                    vec.get(i).print(true);
                }
            }
        }
    }

    // 4
    public void printByColor(boolean color){
        Collections.shuffle(vec);
        for(int i = 0; i < vec.size(); i++){
            if(vec.get(i).getColor() == color){
                vec.get(i).print(true);
            }
        }
    }
    
    // 5
    public void dealRandomCards(int x){
        Collections.shuffle(vec);
        for(int i = 0; i < x; i++){
            vec.get(i).print(true);
        }
        if(x == 0){
            flag = true;
        }
        System.out.println("Cards dealt: " + x);
        result = 52 - x;
    }
    
    // 6
    public void cardsRemained(){
        if(flag == false){  //if cards have been dealt
            System.out.println("Cards remained: " + result);
        }
        else{
            System.out.println("Cards on deck: " + result);
        }
    }
    
    // 7
    public void deal21Cards(){
        Collections.shuffle(vec);
        for(int i = 0; i < vec.size() - 45; i++){
            vec.get(i).print(false);
        }
        System.out.println("\n");
        Collections.shuffle(vec);
        for(int i = 0; i < vec.size() - 45; i++){
            vec.get(i).print(false);
        }
        System.out.println("\n");
        Collections.shuffle(vec);
        for(int i = 0; i < vec.size() - 45; i++){
            vec.get(i).print(false);
        }

    }
    
    // 8
    public void noSimilarSideCard(){
        Random rand = new Random();
        int x;
        char lastSymbol = '-';
        for(int i = 0; i < vec.size(); i++){
            do{
                x = rand.nextInt(vec.size());
                if(vec.get(x).getSymbol() != lastSymbol){
                    vec.get(x).print(true);
                    lastSymbol = vec.get(x).getSymbol();   
                }
            }while(vec.get(x).getSymbol() != lastSymbol);
        }
    }
}
