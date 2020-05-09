//THIS IS A GAME WHERE THE USER JUST HITS <Enter> AND THE COMPUTER RETURNS A RANDOM QUOTATION
//PURPOSE OF THIS PROGRAM IS TO USE FILE POINTERS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LOWERLIMIT 1
#define UPPERLIMIT 10

int main()
{
    
    int n, cnt = 1;
    char buff[255];
    

    srand(time(NULL));

    n = (rand() % (UPPERLIMIT - LOWERLIMIT + 1)) + LOWERLIMIT;

    printf("\n\n");

    if(n == 1){
            printf("\n\t*BOOM* at 1st round\n\n\tTemper analysis: So Cool 👍\n\n\n\tHistory from: 🇬🇷\n\n\t\"Odysseus of Ithaca crossed the arrow on the string\n\t and shook it skillfully to pass all twelve axes\n\t to the other side of the room\"\n");
            return 0;
        }
    
    do{
        printf("\tRound: %d  -> \tMissed target.. %d\n", cnt, n);
        cnt++;
        n = (rand() % (UPPERLIMIT - LOWERLIMIT + 1)) + LOWERLIMIT;
    }while(n >= 2);
    
    printf("\n\n\tRound: %d  -> \tHit target.. 1 👍\n", cnt);  //hidden number = 1

    FILE *fp;

    fp = fopen("quotes.txt", "w+");

    if(fp == NULL){
        printf("Error opening file\n");
        exit(1);
    }
    
    fputs("\"Never do a wrong thing to make a friend - or to keep one\", Robert E. Lee\n", fp);
    
    fputs("\"Fear can keep a man out of danger but courage only can support him in it\", Thomas Fuller\n", fp);
    
    fputs("\"Trust is always earned, never given\", R. Williams\n", fp);

    fputs("\"In the end you don't so much find yourself as you find someone who knows who you are\", Robert Brault\n", fp);

    fputs("\"All that really belongs to us is time; even he who has nothing else has that\", Baltazar Gracian\n", fp);

    fputs("\"If you tell the truth you don't have to remember anything\", Mark Twain\n", fp);

    fputs("\"Great minds have purposes, others have wishes\", Washington Irving\n", fp);

    fputs("\"Doing what you like is freedom. Liking what you do is happiness\", Frank Tyger\n", fp);

    fputs("\"If put to the pinch, an ounce of loyalty is worth a pound of cleverness\", Elbert Hubbard\n", fp);

    fputs("\"Every form of addiction is bad, no matter whether the narcotic be alcohol or morphine or idealism\", Carl Jung\n", fp);

    fputs("\"A hand ready to hit, may cause you great trouble\", Maori (on anger)\n", fp);

    fputs("\"I love to be alone. I never found the companion that was so companionable as solitude\", Henry David Thoreau\n", fp);

    fputs("\"Anyone can possess, anyone can profess, but it is an altogether different thing to confess\", Shannon L. Alder\n", fp);

    fputs("\"Deal with the faults of others as gently as your own\", Chinese Proverb\n", fp);

    fputs("\"Nobody cares how much you know, until they know how much you care\", attributed to Theodore Roosevelt\n", fp);    
    

    fclose(fp);

    printf("\n");

    switch(cnt){
        case 2:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);  // Program exits if the file pointer returns NULL
            }
            fseek(fp, 0, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 3:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 74, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 4:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 164, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 5:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 215, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 6:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 317, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 7:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 414, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 8:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 486, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 9:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 553, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 10:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 632, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 11:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 722, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 12:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 833, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 13:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 902, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 14:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 1011, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 15:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 1122, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
        case 16:
            fp = fopen("quotes.txt", "r");
            if ((fp = fopen("quotes.txt","r")) == NULL){
                printf("Error! opening file");
                exit(1);
            }
            fseek(fp, 1194, SEEK_SET);
            fgets(buff, 255, (FILE*)fp);
            printf("%s", buff );
            fclose(fp);
            break;
    }
    
    
    return 0;
}
