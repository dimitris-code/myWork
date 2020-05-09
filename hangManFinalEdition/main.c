#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX 30

void printArray(char x[], int size){
    int i;
    printf("\t\t");
    for(i = 0; i < size * 2 + 3; i++){
        printf("*");
    }
    printf("\n\t\t*");
    for(i = 0; i < size; i++){
        printf(" %c", x[i]);
    }

    printf(" *\n\t\t*");
    for(i = 0; i < size * 2 + 1; i++){
        printf(" ", x[i]);
    }
    printf("*");
    printf("\n\t\t");
    for(i = 0; i < size * 2 + 3; i++){
        printf("*");
    }
}

//------------------------------------------------

void initArray(char *x, int size){
    int i;
    for(i = 0; i < size; i++){
        x[i] = '_';
    }
}

//------------------------------------------------

int checkExistance(char x, char secretWord[], char * foundLetters){
    int i, result = 0; //initialize as not found (False)
    for(i = 0; i < strlen(secretWord); i++){
        if(secretWord[i] == x){
            foundLetters[i] = x;
            result = 1; //found at least one letter (True)
        }
    }
    return result;
}

//------------------------------------------------

int checkEqual(char secret[], char dashes[]){
    int i, result = 1;  //initialize flag result as True (arrays are equal)
    for(i = 0; i < strlen(secret); i++){
        if(secret[i] != dashes[i]){
            result = 0;
        }

    }
    return result;
}

//------------------------------------------------

//graphics
void drawHangMan(int usrErrors){
    if(usrErrors == 9){
        printf("\n\t|\n\t|\n\t|\n\t|\n\t|\n\t|\n\t|\n      __|__\n     //////");
    }
    else if(usrErrors == 8)
        printf("\t ______\n\t|/\n\t|\n\t|\n\t|\n\t|\n\t|\n\t|\n      __|__\n     //////");
    else if(usrErrors == 7){
        printf("\t ______\n\t|/     |\n\t|\n\t|\n\t|\n\t|\n\t|\n\t|\n      __|__\n     //////");
    }
    else if(usrErrors == 6){
        printf("\t ______\n\t|/     |\n\t|      O\n\t|\n\t|\n\t|\n\t|\n\t|\n      __|__\n     //////");
    }
    else if(usrErrors == 5){
        printf("\t ______\n\t|/     |\n\t|      O\n\t|      |\n\t|      |\n\t|\n\t|\n\t|\n      __|__\n     //////");
    }
    else if(usrErrors == 4){
        printf("\t ______\n\t|/     |\n\t|      O\n\t|     /|\n\t|      |\n\t|\n\t|\n\t|\n      __|__\n     //////");
    }
     else if(usrErrors == 3){
        printf("\t ______\n\t|/     |\n\t|      O\n\t|     /|\\\n\t|      |\n\t|\n\t|\n\t|\n      __|__\n     //////");
    }
     else if(usrErrors == 2){
        printf("\t ______\n\t|/     |\n\t|      O\n\t|     /|\\\n\t|      |\n\t|     /\n\t|\n\t|\n      __|__\n     //////");
    }
     else if(usrErrors == 1){
        printf("\t ______\n\t|/     |\n\t|      O\n\t|     /|\\\n\t|      |\n\t|     / \\\n\t|\n\t|\n      __|__\n     //////");
    }
    else if(usrErrors <= 0){
        printf("\t ______\n\t|/     |\n\t|      O\n\t|     /|\\\n\t|      |\n\t|     / \\\n\t|\n\t| *mandragora*\n      __|__     \n     //////");
    }
}

//------------------------------------------------
void printMenu(){
     printf("\n\n\t\t**************************************************\n");
                printf("\t\t*** Welcome to hangMan game - Find Random Word ***\n");
                printf("\t\t**************************************************\n\n");
                printf("\t\t     Guess the right word or.. get HUNGED! :)\n\n\n");
                printf("\t\t\t      1: Easy    (wordLength  = 8)\n");
                printf("\t\t\t      2: Normal  (wordLength <= 5)\n");
                printf("\t\t\t      3: Hard    (wordLength <= 3)\n");
              //printf("\t\t\t      4: Add  your words (any wordLength)\n\n\n");   ..TIER 4
                printf("\n\t\t\t\bEnter No: ");
}

//---------------------------------------------------

void getRandomWordFromFile(char buff[], char fileName[], int lengthOfFile, int minChars, int maxChars){
    int rnd, i;

    FILE *fp;

    fp = fopen(fileName, "r");

    do{
        rewind(fp);
        rnd = rand() % lengthOfFile;
        for(i = 0; i < rnd; i++){
            fscanf(fp, "%s", buff);
        }
        printf("File: %s / Line:%d / Word: %s\n", fileName, i, buff ); //DISPLAYS THE WORD LINE AND THE KEYWORD
    }while(strlen(buff) < minChars || strlen(buff) > maxChars);

    fclose(fp);

}

//------------------------------------------------

int main()
{
        int i, ch, usrIn, chkRound = 0, counter = 0, debug = 0; //debug technic to monitor some values (when coding). It's boolean, if it's False then the results will not appear on the screen
        char input;
        char secret[MAX];   // RANDOM word
        char dashes[MAX];  // -----
        char buff[MAX];   //

        clock_t start,end;
        double time_taken;
        start = clock();

        system("color 0a");  //black background, green fonts

        srand(time(0));  //initialize with 0 (zero) once in the beginning of the program

        do{  // loop for playing again

            do{
                system("cls");
                printMenu();
                scanf("%d", &usrIn);
            }while(usrIn != 1 && usrIn != 2 && usrIn != 3);

            getchar();
            system("cls");

            if(usrIn == 1){
                getRandomWordFromFile(buff, "8_LetterWords.txt", 1000, 8, 8);     // randomize from '8_LetterWords.txt' 1000 words, which min stringLength is 8 chars and max 8 chars and, place them inside the 'buff' array
            }
            else if(usrIn == 2){
                getRandomWordFromFile(buff, "hangManWords.txt", 1000, 5, 11);   // randomize from 'hangManWords.txt' 1000 words, which min stringLength is 5 chars and max 11 chars and, place them inside the 'buff' array
            }
            else if(usrIn == 3){
                getRandomWordFromFile(buff, "hangManWords.txt", 1000, 2, 4);  // randomize from 'hangManWords.txt' 1000 words, which min stringLength is 2 chars and max 4 chars and, place them inside the 'buff' array
            }
            strcpy(secret,strupr(buff));  //because the '8_LetterWords.txt' words are uppercase letters

            initArray(dashes, strlen(secret));  //put dashes in the secret word

            chkRound = 10;  // game countdown to count user tries
            counter = 0;   // count mistakes

            do{
                printf("\n\n");
                printArray(dashes, strlen(secret));  //display dashes
                printf("\n\n\t\tEnter a character: ");
                input = getchar();
                //if(debug){
                    //printf("input = %c", input);
                //}
                input = toupper(input); //because some words contained in folders are in uppercase letters
                fflush(stdin);  // flush memory buffer (accept new input value)

                if(checkExistance(input, secret, dashes)){ //test every array element with the corresponding character of the secret word
                    system("cls");
                    printf("\n\n");
                    drawHangMan(chkRound); // draw hangMan in every state of chkRound
                    printf("\n\t\tLetter exists\n");
                    printf("\n\t\tTries left %d\n\n", chkRound);
                }
                else{
                    system("cls");
                    printf("\n\n");
                    chkRound--;
                    drawHangMan(chkRound);
                    printf("\n\t\tLetter does not exist\n");
                    printf("\n\t\tTries left %d\n\n", chkRound);
                }
                counter++;  //update the counter every time the user enters a character
               /* if(debug){
                    printf("counter = %d", counter);
                } */
            }while(!checkEqual(secret, dashes) && chkRound > 0);

            printArray(dashes, strlen(secret));

            if(chkRound > 0){
                printf("\n\n\t\tCongrats you've found the secret word after %d tries\n\n\n", counter);
            }
            else{
                printf("\b\t\tMistakes: %d\t Word: %s", counter, secret);
                printf("\n\n\t\tSorry to see you loose, try next time!\n\n");
            }


            /* buffer matter

            end = clock();
            time_taken = (double)(end - start) / (CLOCKS_PER_SEC);

            printf("\t\t_____________________\n\n");
            printf("\t\tTime taken: %.2f sec  \n", time_taken);
            printf("\t\t_____________________\n\n");*/

            printf("\t\t1 to Main menu, 0 to Exit: ");
            scanf("%d", &ch);
            getchar();
            system("cls");
            fflush(stdin);

        }while(ch != 0);

        printf("\n\n\n\t\t***********************************************\n");
        printf("\t\t** Thank you for playing, see you next time! **\n");
        printf("\t\t***********************************************\n\n\n");

        printf("\tPress any key to exit..");

    getch();
    return 0;
}
