#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4], temp, j, i = 0;

    printf("\n\t *****************************\n");
    printf("\t ** Weather report analysis **\n");
    printf("\t *****************************\n");

    printf("\n\t ..enter 4 temperature values to display the \"Weather Report\"...\n\n");

    // Repeat loop for four passages of control
    while(i < 4){
        do{             // Continuous loop of repetition with exit condition 'while' at the end of the code block
            printf("\n\t Enter number %d in range of [-10 and 50]: ", i + 1);  // 'i + 1' to display on the screen the next numbered current user input
            scanf("%d", &a[i]);        // The program reads the number assigned by the user, which is an element of table 'a' and is registered respectively in the positions of the table
        }while(!(a[i] >= -10 && a[i] <= 50));    // End of 'do while' repeating loop  with output condition << as long as each element of table 'a' is not in the price range of -10 and 50

        i++;  // In the beginning the meter has a value equal to 0, in case the user gives a number within the estimated price range, then the control will increase the meter by one unit and will increase by one unit in case the user enters four numbers inside the range.
    }

    // Logic for entering the input data in the array and classification logic (bubble sort)
    for(i = 0; i < 4; i++){           // the first element of the array
       for(j = i + 1; j < 4; j++){    // the next item in the array
            if(a[i] > a[j]){          // if the first element of the array is larger than the next element
                temp = a[i];          // then set the value of the first element to 'temp'
                a[i] = a[j];          // put in the first element the value of the next
                a[j] = temp;          // and in the next put the price that 'temp' has
            }
       }
    }

    printf("\n\n\t ---------------------------------------------------------------------------------\n");
    printf(" Results:\n");

    for(i = 0; i < 4; i++){  //repetition loop to print four passes of the control
        if(a[i] < 0){     // condition in which the value of the array element is less than 0
            printf("\n\t For the temperature %d you've entered the weather report is: \"Freezing weather\"", a[i]);
        }
        else if(a[i] >= 0 && a[i] < 10){  // condition that the value of the array element is in the range of values 0 and 9
            printf("\n\t For the temperature %d you've entered the weather report is: \"Very Cold weather\"", a[i]);
        }
        else if(a[i] >= 10 && a[i] < 20){  // condition that the value of the array element is in the range of values 10 and 19
            printf("\n\t For the temperature %d you've entered the weather report is: \"Cold weather\"", a[i]);
        }
        else if(a[i] >= 20 && a[i] < 30){  // condition that the value of the array element is in the range of values 20 and 29
            printf("\n\t For the temperature %d you've entered the weather report is: \"Normal in Temp\"", a[i]);
        }
        else if(a[i] >= 30 && a[i] < 40){  // condition that the value of the array element is in the range of values 30 and 39
            printf("\n\t For the temperature %d you've entered the weather report is: \"It's Hot\"", a[i]);
        }
        else if(a[i] >= 40){  // a condition in which the value of the array element is greater than or equal to 40
            printf("\n\t For the temperature %d you've entered the weather report is: \"It's Very Hot\"", a[i]);
        }
    }

    printf("\n\n");

    getch();  
    return 0;
}
