#include <stdio.h>
#include <stdlib.h>

void readArray(float arr[],int size);
float averageTemp(float arr[],int size);
float getSmallest(float arr[],int size);
float getLargest(float arr[],int size);
int main()
{
    float arr[]={20.2,18.8,21.5,21.9,20.3};
    readArray(arr,5);

    printf("\n\nAverage temperature: %.1f\n", averageTemp(arr,5));
    printf("Smallest temperature: %.1f\n", getSmallest(arr,5));
    printf("Largest temperature: %.1f\n", getLargest(arr,5));

    return 0;
}
void readArray(float arr[],int size)
{
    int i;
    printf("\tValues of temperature for 5 days: original cue\n");
    for(i=0; i<5; i++)
    {
        printf("\t%.1f\t", arr[i]);
    }

}
float averageTemp(float arr[],int size)
{
    int i=0;
    float average;
    for(i=1; i<size; i++)
    {
        average=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5;
    }
    return average;
}
float getSmallest(float arr[],int size)
{
    int i=0;
    float smallest;
    smallest=arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i]<smallest)
            smallest=arr[i];
    }
    return smallest;
}
float getLargest(float arr[],int size)
{
    int i=0;
    float largest;
    largest=arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
    }
    return largest;
}
