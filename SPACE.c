/*
In this program I use structures to store in the memory location spaceships objects
and the control prompts the user to enter new age values. After, it prints out on the screen
the updated members of the structures in ascending order and, finally it prompts the user to
change a spaceship's name.

THIS CODE IS WRITTEN ON 'Repl it' ONLINE COMPILER
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

//main function is at line 373

//structure declaration named 'Spaceship' that includes as members: an array of undetermined size and, three integer variables 
struct Spaceship {
    char *name;
    int age;
    int warp_speed;
    int crew;
};

//creating spaceships-objects in the memory space (RAM / stack)
struct Spaceship *Spaceship_create(char *name, int age, int warp_speed, int crew)
{
    struct Spaceship *who = malloc(sizeof(struct Spaceship));  //7bytes in 16-bit compiler, 13bytes in 32-bit compiler
    //assert() predefined function allows diagnostic information to be written to the standard error file 
    assert(who != NULL);  //if False is returned, then assert () prints an error message via stderr and interrupts the program via abort ()

    who->name = strdup(name);  //duplicate the string "name". The memory is available via malloc () and so can be released via free () and returns a pointer to the first cell of the copy of the name array
    who->age = age;  //We have access to the members of the structure using -> because the name of the structure is a pointer to a structure
    who->warp_speed = warp_speed;
    who->crew = crew;

    return who;
}

//destruction of similar spaceships from the memory space (RAM / stack)
void Spaceship_destroy(struct Spaceship *who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}
char* colorIt(char* str, int i){
    static char buf[256];
    
    switch(i){
        case 1: snprintf(buf, sizeof buf, "\033[22;32m%s\033[0m", str); break; // green
        case 2: snprintf(buf, sizeof buf, "\033[01;31m%s\033[0m", str); break; // red
        case 3: snprintf(buf, sizeof buf, "\033[01;33m%s\033[0m", str);
        break; // orange
        case 4: snprintf(buf, sizeof buf, "\033[01;34m%s\033[0m", str);
        break; // blue
        case 5: snprintf(buf, sizeof buf, "\033[01;36m%s\033[0m", str);
        break; // magenta
    }
    return buf;   // BUF = "SpacDog II"
}

int colorNums(int num){
    if(num >= 0){
        printf("\033[22;32m");
        printf("%d\n", num);
        printf("\033[0m");
    }
    return num;
}

//print out on the screen the characteristics of similar spaceships
void Spaceship_print(struct Spaceship *who){
    //printf("\tName: "); colorIt2(who->name, 1); printf("\n");
    printf("\t%s", colorIt("Name: ", 5));
    printf("%s\n", colorIt(who->name, 1));
    printf("\t%s", colorIt("Age: ", 2));
    colorNums(who->age);
    printf("\t%s", colorIt("Warp Speed: ", 3));
    colorNums(who->warp_speed);
    printf("\t%s", colorIt("Crew: ", 4));
    colorNums(who->crew);
}

// print their characteristics and, the memory location
void spcPrintMemLoc(struct Spaceship *who1, struct Spaceship *who2){
    printf("\n\n\t------------------------------------------");
    printf("\n\t%s is at memory location: %p\n", who1->name, who1);
    printf("\t------------------------------------------\n");
    printf("\n");
    Spaceship_print(who1);

    printf("\n\n\t------------------------------------------");
    printf("\n\t%s is at memory location: %p\n", who2->name, who2);
    printf("\t------------------------------------------\n");
    printf("\n");
    Spaceship_print(who2);
}

// change the values of their characteristics and print them again.
void oldSpcNewValues(struct Spaceship *who1, struct Spaceship *who2){
    who1->age += 20;
    who1->warp_speed -= 2;
    who1->crew += 20;

    who2->age += 20;
    who2->crew += 40;
    
    printf("\n\n\t---------------------------------------------------\n");
    printf("\tPrinting of updated values %s and %s:\n", who1->name, who2->name);
    printf("\t---------------------------------------------------\n\n");
    Spaceship_print(who1);
    printf("\n");
    Spaceship_print(who2);
}

//printing of the characteristics of the two new spaceships
void newSpaceships_print(struct Spaceship *who1, struct Spaceship *who2){
    printf("\n\n\t-------------------------------------------------------------------------\n");
    printf("\tValues of two new spaceships %s και %s:\n", who1->name, who2->name);
    printf("\t-------------------------------------------------------------------------\n\n");
    Spaceship_print(who1);
    printf("\n");
    Spaceship_print(who2);
}

//the user enters the new spaceship values
void usrSpaceshipsNewAgeValue(struct Spaceship *spc){
    int usrSpcValues, i;

    printf("\n\tEnter %s new age value (1 - 90): ", spc->name);
    scanf("%d", &usrSpcValues);
    //fflush(stdin);

    while(usrSpcValues < 1 || usrSpcValues > 90){
        printf("\tInvalid input! Enter %s new age value (1 - 90): ", spc->name);
        scanf("%d", &usrSpcValues);
        getchar();
        //fflush(stdin);
    }
    spc->age = usrSpcValues;  //put in the specific spc-> age the variable usrSpcValues content
    
}

//sort and print spaceships by spcAges
void spcAgeAscentingPrint(struct Spaceship *who1, struct Spaceship *who2, struct Spaceship *who3, struct Spaceship *who4){
    int spcAges[4], i, j, temp, n = 4;

    printf("\n\n\t--------------------------------------------------------\n");
    printf("\tPrinting spaceships values per growing age range:\n");
    printf("\t--------------------------------------------------------\n\n");
    spcAges[0] = who1->age;
    spcAges[1] = who2->age;
    spcAges[2] = who3->age;
    spcAges[3] = who4->age;

    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (spcAges[i] > spcAges[j]){
                temp =  spcAges[i];
                spcAges[i] = spcAges[j];
                spcAges[j] = temp;
            }
        }
    }

    i = 0;
    while(i < 4){
        if(who1->age == spcAges[i]){
            Spaceship_print(who1);
            printf("\n");
        }
        else if(who2->age == spcAges[i]){
            Spaceship_print(who2);
            printf("\n");
        }
        else if(who3->age == spcAges[i]){
            Spaceship_print(who3);
            printf("\n");
        }
        else{
            Spaceship_print(who4);
            printf("\n");
        }
        i++;
    }
}

void spcCrewAscentingPrint(struct Spaceship *who1, struct Spaceship *who2, struct Spaceship *who3, struct Spaceship *who4){
    int spcCrew1[4], spcCrew2[4], spcCrew = 0, i, j, temp, n = 4;

    printf("\n\t-----------------------------------------------------------");
    printf("\n\tPrinting spaceship values per growing crew:\n");
    printf("\t-----------------------------------------------------------\n\n");

    spcCrew1[0] = who1->crew;
    spcCrew1[1] = who2->crew;
    spcCrew1[2] = who3->crew;
    spcCrew1[3] = who4->crew;

    //sort spaceships by crew (find largest element)
    //bubble sort
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (spcCrew1[i] < spcCrew1[j]){
                temp = spcCrew1[i];
                spcCrew1[i] = spcCrew1[j];
                spcCrew1[j] = temp;
            }
        }
    }

        // spaceship with max crew of the rest
        if(who1->crew == spcCrew1[0]){
            spcCrew = who1->crew / 2;
            who1->crew -= who1->crew / 2;
        }
        else if(who2->crew == spcCrew1[0]){
            spcCrew = who2->crew / 2;
            who2->crew -= who2->crew / 2; 
        }
        else if(who3->crew == spcCrew1[0]){
            spcCrew = who3->crew / 2;
            who3->crew -= who3->crew / 2;  
        }
        else{
            spcCrew = who4->crew / 2;
            who4->crew -= who4->crew / 2; 
        }

        //sort spaceships by crew (find smallest element)
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (spcCrew1[i] > spcCrew1[j]){
                temp = spcCrew1[i];
                spcCrew1[i] = spcCrew1[j];
                spcCrew1[j] = temp;
            }
        }
    }
     
    // spaceship with min crew of the rest
    if(who1->crew == spcCrew1[0]){
        spcCrew += spcCrew1[0];
        who1->crew = spcCrew;
    }
    else if(who2->crew == spcCrew1[0]){
        spcCrew += spcCrew1[0];
        who2->crew = spcCrew;
    }
    else if(who3->crew == spcCrew1[0]){
        spcCrew += spcCrew1[0];
        who3->crew = spcCrew;
    }
    else{
        spcCrew += spcCrew1[0];
        who4->crew = spcCrew;
    }

    //sort and print spaceships by spcCrew2
    spcCrew2[0] = who1->crew;
    spcCrew2[1] = who2->crew;
    spcCrew2[2] = who3->crew;
    spcCrew2[3] = who4->crew;

    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (spcCrew2[i] > spcCrew2[j]){
                temp =  spcCrew2[i];
                spcCrew2[i] = spcCrew2[j];
                spcCrew2[j] = temp;
            }
        }
    }
    
    i = 0;
    while(i < 4){
        if(who1->crew == spcCrew2[i]){
            Spaceship_print(who1);
            printf("\n");
        }
        else if(who2->crew == spcCrew2[i]){
            Spaceship_print(who2);
            printf("\n");
        }
        else if(who3->crew == spcCrew2[i]){
            Spaceship_print(who3);
            printf("\n");
        }
        else{
            Spaceship_print(who4);
            printf("\n");
        }
        i++;
    }
}

//random number selection function from 1 to 9 and assigning a value to the corresponding spacecraft
int randSpcWarpSpeed(struct Spaceship *who){
    int random = 1;
    random = rand() % 9;
    who->warp_speed = random;
    return  random;
}

//sort and print spaceships per warp speed
void spcWarpSpeedAscentingPrint(struct Spaceship *star_trek, struct Spaceship *pegasos, struct Spaceship *spaceDog3, struct Spaceship *starFighter){
    int spcWarp[4], i, j, temp, n = 4;

    printf("\n\t-----------------------------------------------------------\n");
    printf("\tPrinting spaceships values per warp speed:\n");
    printf("\t-----------------------------------------------------------\n\n");
    spcWarp[0] = star_trek->warp_speed;
    spcWarp[1] = pegasos->warp_speed;
    spcWarp[2] = spaceDog3->warp_speed;
    spcWarp[3] = starFighter->warp_speed;

    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (spcWarp[i] > spcWarp[j]){
                temp =  spcWarp[i];
                spcWarp[i] = spcWarp[j];
                spcWarp[j] = temp;
            }
        }
    }
    
    i = 0;
    while(i < 4){
        if(star_trek->warp_speed == spcWarp[i]){
            Spaceship_print(star_trek);
            printf("\n");
        }
        else if(pegasos->warp_speed == spcWarp[i]){
            Spaceship_print(pegasos);
            printf("\n");
        }
        else if(spaceDog3->warp_speed == spcWarp[i]){
            Spaceship_print(spaceDog3);
            printf("\n");
        }
        else{
            Spaceship_print(starFighter);
            printf("\n");
        }
        i++;
    }
}

void spaceDog3NamedByUsr(struct Spaceship *who){
    char spcName[30], ch;
    int i;

    printf("\n\t---------------------------------------------------------\n");
    printf("\tUser enters a new name for the SpaceDog III\n");
     printf("\t---------------------------------------------------------\n");
    printf("\n\tEnter new Space Dog III name: ");
    scanf("%s", spcName);
    

    do{
        for(i = 0; i < strlen(spcName); i++){
            ch = spcName[i];
            if(!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z')){
                printf("\tInvalid input! Enter %s new name: ", who->name);
                scanf("%s[^ 30]", spcName);  //will read 30 characters as usrInput (no more will be displayed)
                getchar();                
            }
        }
    }while(!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z'));

    printf("\n");
   
    who->name = spcName;
    Spaceship_print(who);
}

int main(){
    
    char spcName[30], ch;
    int i;

    srand(time(0)); // srand() — set seed for rand() function. It's about warp speed

    // construction of two new spaceships
    struct Spaceship *star_trek = Spaceship_create(
            "Star Trek", 32, 64, 140);

    struct Spaceship *pegasos = Spaceship_create(
            "Pegasos I", 20, 72, 180);

    spcPrintMemLoc(star_trek, pegasos);

    oldSpcNewValues(star_trek, pegasos);

    //-----------------------------------------------------

    // construction of two new spaceships
    struct Spaceship *spaceDog3 = Spaceship_create(
            "Spacedog III", 28, 22, 200);

    struct Spaceship *starFighter = Spaceship_create(
            "Star Fighter", 10, 90, 35);

    //get new spaceships values
    newSpaceships_print(spaceDog3, starFighter);
    
    printf("\n\n\t----------------------------------------------------------");
    printf("\n\tImport of new values of all 4 spaceships by the user\n");
    printf("\t----------------------------------------------------------\n");
    // get new age values
    usrSpaceshipsNewAgeValue(star_trek);
    usrSpaceshipsNewAgeValue(pegasos);
    usrSpaceshipsNewAgeValue(spaceDog3);
    usrSpaceshipsNewAgeValue(starFighter);

    //spaceships age ascenting print order
    spcAgeAscentingPrint(star_trek, pegasos, spaceDog3, starFighter);

    //spaceships crew ascenting print order
    spcCrewAscentingPrint(star_trek, pegasos, spaceDog3, starFighter);

    //randomize spaceships warp speed in range of (1 - 9)
    randSpcWarpSpeed(star_trek);
    randSpcWarpSpeed(pegasos);
    randSpcWarpSpeed(spaceDog3);
    randSpcWarpSpeed(starFighter);

    //spaceships warp speed ascenting print order
    spcWarpSpeedAscentingPrint(star_trek, pegasos, spaceDog3, starFighter);

    //user enters new name for Space Dog III
    spaceDog3NamedByUsr(spaceDog3);

    // destroy them both from memory
    Spaceship_destroy(star_trek);
    Spaceship_destroy(pegasos);    
    
    //younger age of the two active spaceships
    if(spaceDog3->age < starFighter->age){
        printf("\n\tSpace Dog III age: %d, newest spaceship.\n", spaceDog3->age);
    }
    else{
        printf("\n\tStar Fighter age: %d, newest spaceship.\n", starFighter->age);
    }

    //destruction of the two active spaceships
    //Spaceship_destroy(spaceDog3);
    //Spaceship_destroy(starFighter);

    return 0;
}
