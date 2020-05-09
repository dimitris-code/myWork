// DIMITRIS NIKOLOPOULOS - technikos logismikou - 2NPLP01

// entoli gia na simberilavei o compiler ti vasiki vivliothiki I/O se header file
#include <stdio.h>
// entoli gia na simberilavei o compiler ti vasiki vivliothiki synartisewn se header file
#include <stdlib.h>

// kiria synartisi
int main()
{
    // dilosi metavlitwn kai arxikopoiisi tis metavlitis 'i' me 0, i opoia tha xrisimopoiithi ws metritis gia tis 4 eisodous timwn thermokrasiwn apo to xristi
    int a[4], temp, j, i = 0;

    // morphopoiisi titlou programmatos
    printf("\n\t *****************************\n");
    printf("\t ** Weather report analysis **\n");
    printf("\t *****************************\n");

    printf("\n\t ..enter 4 temperature values to display the \"Weather Report\"...\n\n");

    // vronchos epanalipsis gia 4 perasmata tou elenxou
    while(i < 4){
        do{             // sinexis vronchos epanalipsis me synthiki eksodou 'while' sto telos tou block
            printf("\n\t Enter number %d in range of [-10 and 50]: ", i + 1);  // 'i + 1' gia na emfanisei stin othoni tin epomeni arithmimeni trexousa eisodo xristi
            scanf("%d", &a[i]);        // to programma diavazei ton arithmo pou ekxorise o xristis, o opoios einai stoixeio tou pinaka 'a' kai kataxwreitai antistoixa stis theseis tou pinaka
        }while(!(a[i] >= -10 && a[i] <= 50));    // telos vronchou epanalipsis 'do while' me synthiki eksodou <<gia oso to kathe stoixeio tou pinaka 'a' DEN einai sto evros timwn -10 kai 50>>

        i++;  // stin arxi o metritis exei timi = 0, se periptosi pou o xristis dosei arithmo mesa sto ektimwmeno evros timwn, tote o elenxos tha anevasei ton metriti kata 1 monada kai tha afksanetai kata 1 monada stin periptosi pou o xristis eisagei (4) arithmous entos tou evrous.
    }

    // logiki gia eisagwgi twn stoixeiwn eisodou se pinaka kai logiki taksinomisis
    for(i = 0; i < 4; i++){           // to arxiko stoixeio tou pinaka
       for(j = i + 1; j < 4; j++){    // to epomeno stoixeio tou pinaka
            if(a[i] > a[j]){          // ean to arxiko stoixeio tou pinaka einai megalitero apo to epomeno stoixeio
                temp = a[i];          // tote vale sto 'temp' tin timi tou arxikou stoixeiou
                a[i] = a[j];          // vale sto arxiko stoixeio tin timi tou epomenou
                a[j] = temp;          // kai sto epomeno, vale tin timi pou exei to 'temp'
            }
       }
    }

    // diaxwristiki grammi
    printf("\n\n\t ---------------------------------------------------------------------------------\n");
    printf(" Results:\n");

    for(i = 0; i < 4; i++){  //vronchos epanalipsis gia ektipwsi 4 perasmatwn tou elenxou
        if(a[i] < 0){     // sinthiki periptosis pou i timi tou stoixeiou tou pinaka einai mikroteri tou 0
            printf("\n\t For the temperature %d you've entered the weather report is: \"Freezing weather\"", a[i]); //synodeftiko lektiko kai parametriki eisodos trexousas timis eisodou
        }
        else if(a[i] >= 0 && a[i] < 10){  // sinthiki periptosis pou i timi tou stoixeiou tou pinaka einai sto evros timwn 0 kai 9
            printf("\n\t For the temperature %d you've entered the weather report is: \"Very Cold weather\"", a[i]);
        }
        else if(a[i] >= 10 && a[i] < 20){  // sinthiki periptosis pou i timi tou stoixeiou tou pinaka einai sto evros timwn 10 kai 19
            printf("\n\t For the temperature %d you've entered the weather report is: \"Cold weather\"", a[i]);
        }
        else if(a[i] >= 20 && a[i] < 30){  // sinthiki periptosis pou i timi tou stoixeiou tou pinaka einai sto evros timwn 20 kai 29
            printf("\n\t For the temperature %d you've entered the weather report is: \"Normal in Temp\"", a[i]);
        }
        else if(a[i] >= 30 && a[i] < 40){  // sinthiki periptosis pou i timi tou stoixeiou tou pinaka einai sto evros timwn 30 kai 39
            printf("\n\t For the temperature %d you've entered the weather report is: \"It's Hot\"", a[i]);
        }
        else if(a[i] >= 40){  // sinthiki periptosis pou i timi tou stoixeiou tou pinaka einai megaliteri i isi tou 40
            printf("\n\t For the temperature %d you've entered the weather report is: \"It's Very Hot\"", a[i]);
        }
    }

    printf("\n\n");  // xoros kenou 2 grammwn meta tin ektipwsi twn apotelesmatwn

    getch();  // entoli gia anagkastiki eisodo opoioudipote pliktrou (apo to xristi) me skopo tin pafsi tou programmatos. Einai aparaititi stin periptosi ektelesis tou .exe arxeiou gia na mporei o xristis na vlepei ta apotelesmata (diaforetika klini to parathiro ektelesis tou programmatos).
    return 0;  // entoli epistrofis tis kirias sinartisis, pou stin sigkekrimeni periptosi DEN epistrefei tipota
}
