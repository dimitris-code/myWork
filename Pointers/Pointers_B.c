#include <stdio.h>
#include <stdlib.h>

int main(){

    int score[7] = {5, 2, 8, 0, 1, 9, 4};
    int temp;

    int* pa;
    int* pb;
    int* pc;

    printf("\n\n0.  Initial position values of score array: ");
    for(temp = 0; temp < 7; temp++){
        printf("%d  ", score[temp]);
    }

    //1
    pa = &score[0];
    pb = &score[6];

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("\n\n1.  Replacing the first and last element of the score array: ");
    for(temp = 0; temp < 7; temp++){
        printf("%d  ", score[temp]);
    }
    
    //-----------------------------------------------------------

    //2
    printf("\n\n2.  Print the physical addresses of each cell in the score array:\n\n");
    
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
    
    printf("\n3.  The average value of the data in the score array is equal to %d.", temp);

    //-------------------------------------------------------------

    //4
    printf("\n\n4.  User enters three values..\n");
    printf("\n\t1η τιμή: ");
    scanf("%d", pa);
    printf("\t2η τιμή: ");
    scanf("%d", pb);
    printf("\t3η τιμή: ");
    scanf("%d", pc);

    //printf("%d  %d  %d", *pa, *pb, *pc);

    temp = ((*pa) * (*pb) * (*pc));
    printf("\n\tThe product of the numbers %d, %d and %d is equal to %d.\n", *pa, *pb, *pc,temp);
    printf("\n\tInsertion of the product result into the last cell of the score array: ");

    
    score[6] = temp;
     
    score[5] = 9;   //due to buffer from user login
    score[4] = 1;  //due to buffer from user login

    for(temp = 0; temp < 7; temp++){
        printf("%d  ", score[temp]);
    }
    

    printf("\n\n\n\tEnd of program! (Press <Enter> to exit)..");
    getchar();

    return 0;
}
