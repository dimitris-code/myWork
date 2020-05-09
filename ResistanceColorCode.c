#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE1 4
#define SIZE2 5

int values(char x){  //values that represent the colors of a resistance
    int result;

    if(x == 'M')
        result = 0;
    else if(x == 'K')
        result= 1;
    else if(x == 'N')
        result = 2;
    else if(x == 'O')
        result = 3;
    else if(x == 'I')
        result = 4;
    else if(x == 'R')
        result = 5;
    else if(x == 'L')
        result = 6;
    else if(x == 'V')
        result = 7;
    else if(x == 'G')
        result = 8;
    else if(x == 'A')
        result = 9;

    return result;
}
float tolerance(char x){  //tolerance of resistance
    float result;

    if(x == 'M')
        printf("N/A");
    else if(x == 'K')
        result = 1.0;
    else if(x == 'N')
        result = 2.0;
    else if(x == 'O')
        result == 3.0;
    else if(x == 'I')
        result = 4.0;
    else if(x == 'R')
        result = 0.5;
    else if(x == 'L')
        result = 0.25;
    else if(x == 'V')
        result = 0.10;
    else if(x == 'G')
        result = 0.05;
    else if(x == 'A')
        printf("N/A");

    return result;
}
unsigned concatenateValues(unsigned x, unsigned y) {
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;
}
int goldSilverValues(char x){
    int result;

    if(x == 'X')
        result = 5;
    else if(x == 'S')
        result = 10;
    else if(x == '\n')
        result = 20;

    return result;
}
int main()
{
    int n, funCall, funYell, fun_Yell, call[SIZE1], yell[SIZE2];
    char a[SIZE1], b[SIZE2];

    printf("************************************\n");
    printf("******** Resistor color code *******\n");
    printf("************************************\n\n");
    printf("Calculate either 4 or, 5 band resistor color code\n\n");
    printf("Enter corresponding number: ");
    scanf("%d", &n);

    if(n == 4){
        printf("\nM for Black  - K for Brown - N for Red  - O for Orange\n");
        printf("I for Yellow - R for Green - L for Blue - V for Purple\n");
        printf("G for Gray   - A for White - X for Gold - S for Silver\n");

        printf("\nEnter %d letters (press <Enter> after each input):\n\n", SIZE1);

        fflush(stdin); //if not fflush then the control will miss the input
        printf("Enter 1st value: ");
        a[0] = getchar();
        call[0] = values(toupper(a[0]));

        fflush(stdin);
        printf("Enter 2nd value: ");
        a[1] = getchar();
        call[1] = values(toupper(a[1]));

        fflush(stdin);
        printf("Enter multiplier: ");
        a[2] = getchar();
        call[2] = toupper(a[2]);

        fflush(stdin);
        printf("Enter tolerance (just press <Enter> if no color): ");
        a[3] = getchar();
        call[3] = toupper(a[3]);

        funCall = concatenateValues(call[0], call[1]);

        if(call[2] == 'M'){
            printf("%d Ohm", funCall);
        }
        else if(call[2] == 'K'){
            printf("%d Ohm", funCall * 10);
        }
        else if(call[2] == 'N'){
            printf("%d Ohm", funCall * 100);
        }
        else if(call[2] == 'O'){
            printf("%.2f kOhm", (float)(funCall * 1000) / 1000);
        }
        else if(call[2] == 'I'){
            printf("%.2f kOhm", (float)(funCall * 10000) / 1000);
        }
        else if(call[2] == 'R'){
            printf("%.2f milliohm", (float)(funCall * 100000) / 1000000);
        }
        else if(call[2] == 'L'){
            printf("%.2f milliohm", (float)(funCall * 1000000) / 1000000);
        }
        else if(call[2] == 'V'){
            printf("%.2f milliohm", (float)(funCall * 10000000) / 1000000);
        }
        else if(call[2] == 'G'){
            printf("%d Ohm", (double)(funCall * 100000000) / 1000000);
        }
        else if(call[2] == 'A'){
            printf("%d Ohm", (double) (funCall * 1000000000) / 1000000);
        }
        else if(call[2] == 'X'){
            printf("%.2f Ohm", (float)funCall / 10);
        }
        else if(call[2] == 'S'){
            printf("%.2f Ohm", (float)funCall / 100);
        }
        if(call[3] == 'M'){
            printf("Ν/Α");
        }
        else if(call[3] == 'K'){
            printf(" +/- %.0f%%", tolerance(call[3]));
        }
        else if(call[3] == 'N'){
            printf(" +/- %.0f%%", tolerance(call[3]));
        }
        else if(call[3] == 'O'){
            printf(" +/- %.0f%%", tolerance(call[3]));
        }
        else if(call[3] == 'I'){
            printf(" +/- %.0f%%", tolerance(call[3]));
        }
        else if(call[3] == 'R'){
            printf(" +/- %.1f%%", tolerance(call[3]));
        }
        else if(call[3] == 'L'){
            printf(" +/- %d%%", values(call[3]));
        }
        else if(call[3] == 'V'){
            printf(" +/- %d%%", values(call[3]));
        }
        else if(call[3] == 'G'){
            printf(" +/- %d%%", values(call[3]));
        }
        else if(call[3] == 'A'){
            printf("N/A");
        }
        else if(call[3] == 'X'){
            printf(" +/- %d%%", goldSilverValues(call[3]));
        }
        else if(call[3] == 'S'){
            printf(" +/- %d%%", goldSilverValues(call[3]));
        }
        else if(call[3] == '\n'){
            printf(" +/- %d%%", goldSilverValues(call[3]));
        }
    }
    else if(n == 5){
        printf("\nM for Black  - K for Brown - N for Red  - O for Orange\n");
        printf("I for Yellow - R for Green - L for Blue - V for Purple\n");
        printf("G for Gray   - A for White - X for Gold - S for Silver\n");

        printf("\nEnter %d letters (press <Enter> after each input):\n\n", SIZE2);

        fflush(stdin);
        printf("Enter 1st value: ");
        b[0] = getchar();
        yell[0] = values(toupper(b[0]));

        fflush(stdin);
        printf("Enter 2nd value: ");
        b[1] = getchar();
        yell[1] = values(toupper(b[1]));

        fflush(stdin);
        printf("Enter 3rd value: ");
        b[2] = getchar();
        yell[2] = values(toupper(b[2]));

        fflush(stdin);
        printf("Enter multiplier: ");
        b[3] = getchar();
        yell[3] = toupper(b[3]);

        fflush(stdin);
        printf("Enter tolerance (just press <Enter> if no color): ");
        b[4] = getchar();
        yell[4] = toupper(b[4]);

        funYell = concatenateValues(yell[0], yell[1]);
        fun_Yell = concatenateValues(funYell, yell[2]);
        //printf("%d", fun_Yell);
        if(yell[3] == 'M'){
            printf("%d Ohm", fun_Yell);
        }
        else if(yell[3] == 'K'){
            printf("%d Ohm", fun_Yell * 10);
        }
        else if(yell[3] == 'N'){
            printf("%d Ohm", fun_Yell * 100);
        }
        else if(yell[3] == 'O'){
            printf("%.2f kOhm", (float)(fun_Yell * 1000) / 1000);
        }
        else if(yell[3] == 'I'){
            printf("%.2f kOhm", (float)(fun_Yell * 10000) / 1000);
        }
        else if(yell[3] == 'R'){
            printf("%.2f milliohm", (float)(fun_Yell * 100000) / 1000000);
        }
        else if(yell[3] == 'L'){
            printf("%.2f milliohm", (float)(fun_Yell * 1000000) / 1000000);
        }
        else if(yell[3] == 'V'){
            printf("%.2f milliohm", (float)(fun_Yell * 10000000) / 1000000);
        }
        else if(yell[3] == 'G'){
            printf("%d Ohm", fun_Yell * 100000000);
        }
        else if(yell[3] == 'A'){
            printf("%d Ohm", fun_Yell * 1000000000);
        }
        else if(yell[3] == 'X'){
            printf("%.2f Ohm", (float)fun_Yell / 10);
        }
        else if(yell[3] == 'S'){
            printf("%.2f Ohm", (float)fun_Yell / 100);
        }
        if(yell[4] == 'M'){
            printf("N/A");
        }
        else if(yell[4] == 'K'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'N'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'O'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'Y'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'R'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'L'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'V'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'G'){
            printf(" +/- %d%%", values(yell[4]));
        }
        else if(yell[4] == 'A'){
            printf("N/A");
        }
        else if(yell[3] == 'X'){
            printf(" +/- %d%%", goldSilverValues(yell[4]));
        }
        else if(yell[4] == 'S'){
            printf(" +/- %d%%", goldSilverValues(yell[4]));
        }
        else if(yell[4] == '\n'){
            printf(" +/- %d%%", goldSilverValues(yell[4]));
        }
    }

    getch();
    return 0;
}
