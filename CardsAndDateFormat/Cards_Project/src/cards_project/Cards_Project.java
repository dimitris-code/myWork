package cards_project;

public class Cards_Project {

    public static void main(String[] args) {
        Deck d1 = new Deck();
        Deck d2 = new Deck();
        Deck d3 = new Deck();
        Deck d4 = new Deck();

        d1.print();
        d1.printRandom();
        d1.printFigures();
        d1.printBySymbols('P');
        d1.printByColor(true);
        d1.dealRandomCards(4);
        d1.cardsRemained();
        d1.deal21Cards();
        d1.noSimilarSideCard();
    
        d2.print();
        d2.printRandom();
        d2.printFigures();
        d2.printBySymbols('P');
        d2.printByColor(true);
        d2.dealRandomCards(4);
        d2.cardsRemained();
        d2.deal21Cards();
        d2.noSimilarSideCard();

        d3.print();
        d3.printRandom();
        d3.printFigures();
        d3.printBySymbols('P');
        d3.printByColor(true);
        d3.dealRandomCards(4);
        d3.cardsRemained();
        d3.deal21Cards();
        d3.noSimilarSideCard();

        d4.print();
        d4.printRandom();
        d4.printFigures();
        d4.printBySymbols('P');
        d4.printByColor(true);
        d4.dealRandomCards(4);
        d4.cardsRemained();
        d4.deal21Cards();
        d4.noSimilarSideCard();
    }
    
}
