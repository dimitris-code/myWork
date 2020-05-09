#ifndef stringBorder_H
#define stringBorder_H
//--------------------
#include <string.h>
#include <stdbool.h>
//--------------------

void cosmeticLine(int times, char ch){
    for(int i = 0; i < times; i++)
        printf("%c", ch);
}

void cosmetic(char str[], char style){
    int i, stringSize = strlen(str);
    char spaceChar = ' ', sideLines = '|', corners = ' ';
    bool extraLine = false;
    if((style != '_')){
        sideLines = style;
        corners = style;
        extraLine = true;
    }

    //first line
    printf("%c", corners);
    cosmeticLine(stringSize + 2, style);
    printf("%c\n%c", corners, sideLines);

    //second line
    cosmeticLine(stringSize + 2, spaceChar);
    printf("%c\n%c ", sideLines, sideLines);

    //third line
    for(i = 0; i < stringSize; i++){
        printf("%c", str[i]);
    }
    printf("%c%c\n%c", spaceChar, sideLines, sideLines);

    //fourth line
    if(extraLine){
        cosmeticLine(stringSize + 2, spaceChar);
        printf("%c\n", style);
    }
    cosmeticLine(stringSize + 2, style);

    if(extraLine){
        printf("%c%c\n", style, sideLines);
    }
    else{
        printf("%c\n", sideLines);
    }
}
//----------------------
#endif // stringBorder_H
