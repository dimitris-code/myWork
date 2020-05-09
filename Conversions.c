#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long toBin(int dno){
    long result = 0, remainder, f = 1;
    while(dno != 0){
         remainder = dno % 2;
         result = result + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    return result;
}

int toDec(long bno){
    int result = 0, remainder, i = 0;
    while(bno != 0){
        remainder = bno % 10;
        bno /= 10;
        result += remainder * pow(2, i);
        ++i;
    }
    return result;
}

char* toHex(int dno){
    int i, cnt = 0;
    static char result[32];

    while(dno > 0){
        switch(dno % 16){

            case 10:
                result[cnt]='A'; break;
            case 11:
                result[cnt]='B'; break;
            case 12:
                result[cnt]='C'; break;
            case 13:
                result[cnt]='D'; break;
            case 14:
                result[cnt]='E'; break;
            case 15:
                result[cnt]='F'; break;
            default:
                result[cnt]=(dno % 16) + '0x30';     //converted into char value
        }
        dno = dno / 16;
        cnt++;
    }
    return result;
}


int main(){
    long bno;
    int dno, i, cnt = 0;
    int usrChoice;
    char* hex;


    printf("\n\n\n  Select conversion:\n\n\t\t    \'1\' for decimal to binary\n\t\t    \'2\' for binary  to decimal\n\t\t    \'3\' for decimal to hexadecimal\n\n  Enter: ");
    scanf("%d", &usrChoice);

    if(usrChoice == 1){
        printf("\n\n  Function : decimal to binary conversion\n");
        printf("  ---------------------------------------\n");
        printf("  Input any decimal number: ");
        scanf("%d",&dno);

        bno = toBin(dno);
        printf("\n  Binary number is: %ld\n\n", bno);
    }
    else if(usrChoice == 2){
        printf("\n\n  Function: binary to decimal conversion\n");
        printf("  --------------------------------------\n");
        printf("  Input any binary number: ");
        scanf("%ld", &bno);

        dno = toDec(bno);

        printf("\n  Decimal number is: %1d\n\n", dno);

    }
    else if(usrChoice == 3){
        printf("\n\n  Function: decimal to hexadecimal conversion\n");
        printf("  --------------------------------------\n");
        printf("  Input any decimal number: ");
        scanf("%d", &dno);

        hex = toHex(dno);

        printf("\nHexadecimal value = ");
        for(i = 31; i >= 0; i--){
          printf("%c", hex[i]);
        }
    }

    return 0;
}
