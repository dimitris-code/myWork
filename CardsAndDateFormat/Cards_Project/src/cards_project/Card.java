package cards_project;

import java.util.Vector;

public class Card {
     // characteristics
    private int number;
    private boolean figure;
    private boolean color;
    private char symbol;

    // constructors
    Card(){}
    Card(int number, boolean figure, boolean color, char symbol){
        this.number = number;
        this.figure = figure;
        this.color = color;
        this.symbol = symbol;
    }

    // setters & getters
    public void setNumber(int number){
        this.number =  number;
    }
    public int getNumber(){
        return number;
    }

    public void setFigure(boolean figure){
        this.figure = figure;
    }
    public boolean getFigure(){
        return figure;
    }

    public void setColor(boolean color){
        this.color = color;
    }
    public boolean getColor(){
        return color;
    }

    public void setSymbol(char symbol){
        this.symbol = symbol;
    }
    public char getSymbol(){
        return symbol;
    }

    public void print(boolean isNewLine){
        String cardDisplay = "";
        String symbolDisplay = "";
        String figureOccur = "";
        String colorDisplay = "";

        if(number == 1){
          cardDisplay = "A";
        }
        else if(number == 10){
          cardDisplay = "10";
        }
        else if(number == 11){
          cardDisplay = "J";
        }
        else if(number == 12){
          cardDisplay = "Q";
        }
        else if(number == 13){
          cardDisplay = "K";
        }
        else{
          cardDisplay = String.valueOf(number);
        }

        if(symbol == 'P'){
          symbolDisplay = "Clubs";
        }
        else if(symbol == 'H'){
          symbolDisplay = "Hearts";
        }
        else if(symbol == 'T'){
          symbolDisplay = "Swords";
        }
        else if(symbol == 'C'){
          symbolDisplay = "Cart";
        }

        if(color == true){
            colorDisplay = "Red";
        }
        else if(color == false){
            colorDisplay = "Black";
        }

        if(isNewLine == false){
            if(figure == true){
                figureOccur = "Yes";
            }
            else{
                figureOccur = "No";
            }
            
            System.out.print("Number: " + cardDisplay + "\t" + "Figure: " + figureOccur + "\t" + "Col: " + colorDisplay + "\t" +"Symbol: " + symbolDisplay);
        }
        else if(isNewLine == true){
            if(figure == true){
                figureOccur = "Yes";
            }
            else{
                figureOccur = "No";
            }
            System.out.println("Number: " + cardDisplay + "\t" + "Figure: " + figureOccur + "\t" + "Col: " + colorDisplay + "\t" +"Symbol: " + symbolDisplay);
        }
        
    }
}
