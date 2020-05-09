#include <stdio.h>
#include <stdlib.h>

int main(){

    int score[7] = {5, 2, 8, 0, 1, 9, 4};
    int temp;

    int* pa;
    int* pb;
    int* pc;


    printf("\n\n0.  Αρχικές τιμές των θέσεων του πίνακα score: ");
    for(temp = 0; temp < 7; temp++){
        printf("%d  ", score[temp]);
    }

    //1
    pa = &score[0];
    pb = &score[6];

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("\n\n1.  Αντιμετάθεση πρώτου και τελευταίου στοιχειόυ του πίνακα score: ");
    for(temp = 0; temp < 7; temp++){
        printf("%d  ", score[temp]);
    }
    
    //-----------------------------------------------------------

    //2
    printf("\n\n2.  Εκτύπωση των φυσικών διευθύνσεων του κάθε κελιού του πίνακα score:\n\n");
    
    for(temp = 0; temp < 7; temp++){
        printf("\tscore[%d] -> %p\n", temp,(void *) &score[temp]);
    }
    
    //-----------------------------------------------------------

    //3
    pa = &score[0];
    pb = &score[1];
    pc = &score[2];
    temp = *pa + *pb + *pc;
    
    pa = &score[3];
    pb = &score[4];
    pc = &score[5];
    temp += *pa + *pb + *pc;

    pa = &score[6];
    temp += *pa;
    
    temp /= 7;
    
    printf("\n3.  Η μέση τιμή των στοιχείων του πίνακα score ισούται με %d.", temp);

    //-------------------------------------------------------------

    //4
    printf("\n\n4.  Εισαγωγή τριών τιμών από το χρήστη..\n");
    printf("\n\t1η τιμή: ");
    scanf("%d", pa);
    printf("\t2η τιμή: ");
    scanf("%d", pb);
    printf("\t3η τιμή: ");
    scanf("%d", pc);

    //printf("%d  %d  %d", *pa, *pb, *pc);

    temp = ((*pa) * (*pb) * (*pc));
    printf("\n\tΤο γινόμενο των αριθμών %d, %d και %d ισούται με %d.\n", *pa, *pb, *pc,temp);
    printf("\n\tΕισαγωγή του γινομένου στο τελευταίο κελί του πίνακα score: ");

    
    score[6] = temp;
     
    score[5] = 9;   //λόγω buffer από την είσοδο χρήστη
    score[4] = 1;  //λόγω buffer από την είσοδο χρήστη

    for(temp = 0; temp < 7; temp++){
        printf("%d  ", score[temp]);
    }
    

    printf("\n\n\n\tΤέλος προγράμματος! (Εισάγετε <Enter> για έξοδο)..");
    getchar();

    return 0;
}