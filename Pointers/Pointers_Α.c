#include <stdio.h>

int main(void) {
    
    int score[7] = {5, 2, 8, 0, 1, 9, 4};

    int* pa;

    pa = score;
    *score = *(score + 4);   //Put in the score[0] the content of score[4] 
    *(pa + 3) = *score;     //Put in the score[3] the content of score[0]
    *score = *(pa++ + 2);  //Put in the score[0] the content of the score[2] and after the result of the operation the 'pa' is in the score position 1
    *(++pa + 4) = *score; //The pa will first go up to the score position [2] and after the addition to the score position [6]. So, put the content of the score[0] in the score [6]
    pa++;                //The pa is in the score position [3]
    *(score + 1) = * pa--; //Put the content of the score[3] in the score [1]. After the operation the 'pa' will be in the score [2]
    *(--pa) = *(score + 5) - 1;  //Set the score [1] to the content of the score [5] from which you subtract 1 (9 will be 8)
    *(pa-- + 4) = *(score + 3) + 7;  //Set the score [5] to the content of the score [3] and add the number 7. After the operation the 'pa' will be in the score [0]
    *(pa++ + 4) = *(score + 6);  //Put the content of the score[6] on the score [4]. After the operation the 'pa' will be in the score [1]
    *(pa + 2) = *score * 1;   //Put in the score[3] the content of score[1] and multiply it by the number 1


    printf("\n---------------------------------\n");
    for(int i = 0; i < 7; i++){
        printf("%d  ", score[i]);
    }
    printf("\n---------------------------------\n");

    printf("Address of score: %p\n", score);
    printf("Address of pa: %p\n", pa);

    //------------------------------------------------------------------------------------------------------------

    'pa' 

    return 0;
}