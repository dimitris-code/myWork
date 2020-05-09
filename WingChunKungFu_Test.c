#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int choice;
    do
    {
    int flag1, flag2 = 0;

    system("color 0a");

    clock_t start,end;
    double time_taken;



    char tanSao[] = "dispersing hand";
    char answer_1[30];

    char biuSao[] = "darting hand";
    char answer_2[30];

    char bonSao[] = "wing arm";
    char answer_3[30];

    char fookSao[] = "prostrating hand";
    char answer_4[30];

    char manSao[] = "seeking hand";
    char answer_5[30];

    char wuSao[] = "protecting hand";
    char answer_6[30];

    char kauSao[] = "detaining hand";
    char answer_7[30];

    char jaamSao[] = "sinking hand";
    char answer_8[30];

    char gaanSao[] = "cultivating arm";
    char answer_9[30];

    char jutSao[] = "choking hand";
    char answer_10[30];

    char huenSao[] = "circling hand";
    char answer_11[30];

    char lopSao[] = "pulling hand";
    char answer_12[30];

    char pakSao[] = "slapping hand";
    char answer_13[30];

    char tokSao[] = "lifting hand";
    char answer_14[30];

    char lanSao[] = "barring arm";
    char answer_15[30];

    char tieSao[] = "uplifting hand";
    char answer_16[30];

    char jipSao[] = "receiving hand";
    char answer_17[30];

    char gumSao[] = "pressing hand";
    char answer_18[30];

    char futSao[] = "Budha hand";
    char answer_19[30];


    printf("Wing Chun Kung Fu questionaire\n\n");
    printf("19 hand technique names\n\n***********************************************************\n*  pressing hand     wing arm           prostrating hand  *\n*  lifting hand      uplifting hand\tprotecting hand   *\n*  barring arm\t     slapping hand\treceiving hand    *\n*  seeking hand\t     darting hand\tdispersing hand   *\n*  pulling hand\t     sinking hand\tcultivating arm   *\n*  choking hand\t     circling hand\tdetaining hand    *\n*                    Budha hand                           *\n***********************************************************\n\n");

    printf("Clock is ticking..\n\n");
    printf("Enter the definitions of:\n\n");

    start=clock();
    printf("Tan Sao: ");
    gets(answer_1);

    printf("Biu Sao: ");
    gets(answer_2);

    printf("Bon Sao: ");
    gets(answer_3);

    printf("Fook Sao: ");
    gets(answer_4);

    printf("Man Sao: ");
    gets(answer_5);

    printf("Wu Sao: ");
    gets(answer_6);

    printf("Kau Sao: ");
    gets(answer_7);

    printf("Jaam Sao: ");
    gets(answer_8);

    printf("Gaan Sao: ");
    gets(answer_9);

    printf("Jut Sao: ");
    gets(answer_10);

    printf("Huen Sao: ");
    gets(answer_11);

    printf("Lop Sao: ");
    gets(answer_12);

    printf("Pak Sao: ");
    gets(answer_13);

    printf("Tok Sao: ");
    gets(answer_14);

    printf("Lan Sao: ");
    gets(answer_15);

    printf("Tie Sao: ");
    gets(answer_16);

    printf("Jip Sao: ");
    gets(answer_17);

    printf("Gum Sao: ");
    gets(answer_18);

    printf("Fut Sao: ");
    gets(answer_19);

    if(strcmp(tanSao,answer_1) == 0)
    {
        flag1 = 1;
    }
    if(strcmp(tanSao,answer_1) != 0)
    {
        flag2 =1;
    }

    if(strcmp(biuSao,answer_2) == 0)
    {
        flag1++;
    }
    if(strcmp(biuSao,answer_2) != 0)
    {
        flag2++;
    }
    if(strcmp(bonSao,answer_3) == 0)
    {
        flag1++;
    }
    if(strcmp(bonSao,answer_3) != 0)
    {
        flag2++;
    }
    if(strcmp(fookSao,answer_4) == 0)
    {
        flag1++;
    }
    if(strcmp(fookSao,answer_4) != 0)
    {
        flag2++;
    }
    if(strcmp(manSao,answer_5) == 0)
    {
        flag1++;
    }
    if(strcmp(manSao,answer_5) != 0)
    {
        flag2++;
    }
    if(strcmp(wuSao,answer_6) == 0)
    {
        flag1++;
    }
    if(strcmp(wuSao,answer_6) != 0)
    {
        flag2++;
    }
    if(strcmp(kauSao,answer_7) == 0)
    {
        flag1++;
    }
    if(strcmp(kauSao,answer_7) != 0)
    {
        flag2++;
    }
    if(strcmp(jaamSao,answer_8) == 0)
    {
        flag1++;
    }
    if(strcmp(jaamSao,answer_8) != 0)
    {
        flag2++;
    }
    if(strcmp(gaanSao,answer_9) == 0)
    {
        flag1++;
    }
    if(strcmp(gaanSao,answer_9) != 0)
    {
        flag2++;
    }
    if(strcmp(jutSao,answer_10) == 0)
    {
        flag1++;
    }
    if(strcmp(jutSao,answer_10) != 0)
    {
        flag2++;
    }
    if(strcmp(huenSao,answer_11) == 0)
    {
        flag1++;
    }
    if(strcmp(huenSao,answer_11) != 0)
    {
        flag2++;
    }
    if(strcmp(lopSao,answer_12) == 0)
    {
        flag1++;
    }
    if(strcmp(lopSao,answer_12) != 0)
    {
        flag2++;
    }
    if(strcmp(pakSao,answer_13) == 0)
    {
        flag1++;
    }
    if(strcmp(pakSao,answer_13) != 0)
    {
        flag2++;
    }
    if(strcmp(tokSao,answer_14) == 0)
    {
        flag1++;
    }
    if(strcmp(tokSao,answer_14) != 0)
    {
        flag2++;
    }
    if(strcmp(lanSao,answer_15) == 0)
    {
        flag1++;
    }
    if(strcmp(lanSao,answer_15) != 0)
    {
        flag2++;
    }
    if(strcmp(tieSao,answer_16) == 0)
    {
        flag1++;
    }
    if(strcmp(tieSao,answer_16) != 0)
    {
        flag2++;
    }
    if(strcmp(jipSao,answer_17) == 0)
    {
        flag1++;
    }
    if(strcmp(jipSao,answer_17) != 0)
    {
        flag2++;
    }
    if(strcmp(gumSao,answer_18) == 0)
    {
        flag1++;
    }
    if(strcmp(gumSao,answer_18) != 0)
    {
        flag2++;
    }
    if(strcmp(futSao,answer_19) == 0)
    {
        flag1++;
    }
    if(strcmp(futSao,answer_19) != 0)
    {
        flag2++;
    }






   //printf("\nCorrect answers = %d\n", flag1);







    if(strcmp(tanSao,answer_1) != 0)
    {
        printf("Wrong answered Tan Sao: %s\nCorrect answer: \"dispersing hand\"", answer_1);
    }



    if(strcmp(biuSao,answer_2) != 0)
    {
        printf("\n\nWrong answered Biu Sao: %s\nCorrect answer: \"darting hand\"", answer_2);
    }
    if(strcmp(bonSao,answer_3) != 0)
    {
        printf("\n\nWrong answered Bon Sao: %s\nCorrect answer: \"wing arm\"", answer_3);
    }
    if(strcmp(fookSao,answer_4) != 0)
    {
        printf("\n\nWrong answered Fook Sao: %s\nCorrect answer: \"prostrating hand\"", answer_4);
    }
    if(strcmp(manSao,answer_5) != 0)
    {
        printf("\n\nWrong answered Man Sao: %s\nCorrect answer: \"seeking hand\"", answer_5);
    }
    if(strcmp(wuSao,answer_6) != 0)
    {
        printf("\n\nWrong answered Wu Sao: %s\nCorrect answer: \"protecting hand\"", answer_6);
    }
    if(strcmp(kauSao,answer_7) != 0)
    {
        printf("\n\nWrong answered Kau Sao: %s\nCorrect answer: \"detaining hand\"", answer_7);
    }
    if(strcmp(jaamSao,answer_8) != 0)
    {
        printf("\n\nWrong answered Jaam Sao: %s\nCorrect answer: \"sinking hand\"", answer_8);
    }
    if(strcmp(gaanSao,answer_9) != 0)
    {
        printf("\n\nWrong answered Gaan Sao: %s\nCorrect answer: \"cultivating arm\"", answer_9);
    }
    if(strcmp(jutSao,answer_10) != 0)
    {
        printf("\n\nWrong answered Jut Sao: %s\nCorrect answer: \"choking hand\"", answer_10);
    }
    if(strcmp(huenSao,answer_11) != 0)
    {
        printf("\n\nWrong answered Huen Sao: %s\nCorrect answer: \"circling hand\"", answer_11);
    }
    if(strcmp(lopSao,answer_12) != 0)
    {
        printf("\n\nWrong answered Lop Sao: %s\nCorrect answer: \"pulling hand\"", answer_12);
    }
    if(strcmp(pakSao,answer_13) != 0)
    {
        printf("\n\nWrong answered Pak Sao: %s\nCorrect answer: \"slapping hand\"", answer_13);
    }
    if(strcmp(tokSao,answer_14) != 0)
    {
        printf("\n\nWrong answered Tok Sao: %s\nCorrect answer: \"lifting hand\"", answer_14);
    }
    if(strcmp(lanSao,answer_15) != 0)
    {
        printf("\n\nWrong answered Lan Sao: %s\nCorrect answer: \"barring arm\"", answer_15);
    }
    if(strcmp(tieSao,answer_16) != 0)
    {
        printf("\n\nWrong answered Tie Sao: %s\nCorrect answer: \"uplifting hand\"", answer_16);
    }
    if(strcmp(jipSao,answer_17) != 0)
    {
        printf("\n\nWrong answered Jip Sao: %s\nCorrect answer: \"receiving hand\"", answer_17);
    }
    if(strcmp(gumSao,answer_18) != 0)
    {
        printf("\n\nWrong answered Gum Sao: %s\nCorrect answer: \"pressing hand\"", answer_18);
    }
    if(strcmp(futSao,answer_19) != 0)
    {
        printf("\n\nWrong answered Fut Sao: %s\nCorrect answer: \"Budha hand\"", answer_19);
    }

    printf("\n\n ____________________");
    printf("\n\n  Wrong answers = %d\n", flag2);


    end=clock();
    time_taken=(double)(end - start)/(CLOCKS_PER_SEC)/60;
    printf(" ____________________\n\n");
    printf(" Time taken: %.2f min  \n", time_taken);
    printf(" ____________________");

    printf("\n\n\n\n");
    printf("(1 to repeat, 0 to exit).. ");
    fflush(stdin);
    scanf("%d", &choice);
    getchar();
    system("cls");
    }while(choice != 0);

    printf("\n\n");

    return 0;
}
