#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ranNums(int number);
int ranNums2(int number2);
int ranNums3(int number3);
int ranNums4(int number4);
int ranNums5(int number5);
int joker(int number6);
int main()
{
    int choice;

    do
    {
    printf("                 ***Lottery***\n");
    printf("\nPress enter to generate random numbers (1-45) and Joker guess.. ");

    getchar();
    printf("\n");

    int number;
    int number2;
    int number3;
    int number4;
    int number5;
    int number6;
    int i=0;

    for(i=0; i<=4; i++)
    {
        ranNums(number);
        fflush(stdin);
        getchar();

        ranNums2(number2);
        fflush(stdin);
        getchar();

        ranNums3(number3);
        fflush(stdin);
        getchar();

        ranNums4(number4);
        fflush(stdin);
        getchar();

        ranNums5(number5);
        fflush(stdin);
        getchar();

        printf("Joker guess.. ");
        joker(number6);
        fflush(stdin);
        getchar();
        printf("\n");
    }

    printf("\n\n1 to continue, 0 to exit.. ");
    fflush(stdin);
    scanf("%d", &choice);
    getchar();
    system("cls");
    }while(choice!=0);

    return 0;
}
int ranNums(int number)
{
    srand(time(NULL));
    number=1+rand()%45;
    printf("%d", number);
    return number;
}
int ranNums2(int number2)
{
    srand(time(NULL));
    number2=1+rand()%45;
    printf("%d", number2);
    return number2;
}
int ranNums3(int number3)
{
    srand(time(NULL));
    number3=1+rand()%45;
    printf("%d", number3);
    return number3;
}
int ranNums4(int number4)
{
    srand(time(NULL));
    number4=1+rand()%45;
    printf("%d", number4);
    return number4;
}
int ranNums5(int number5)
{
    srand(time(NULL));
    number5=1+rand()%45;
    printf("%d", number5);
    return number5;
}
int joker(int number6)
{
    srand(time(NULL));
    number6=1+rand()%20;
    printf("%d", number6);
    return number6;
}
