#include <iostream>
#include <string>


using namespace std;

// Function to Sort the array of string according to lengths. This function implements "Insertion Sort".
void sortList(string brainStats[], int numElements)
{
    for (int i = 1; i < numElements; i++)
    {
        string temp = brainStats[i];

        // Insert brainStats[j] at its correct position
        int j = i - 1;
        while (j >= 0 && temp.length() < brainStats[j].length())
        {
            brainStats[j + 1] = brainStats[j];
            j--;
        }
        brainStats[j + 1] = temp;
    }
}


// Function to print the sorted array of string
void printBrainStats(string brainStats[], int numElements)
{
    cout << "\t\t\tSorted paragraphs in ascending order" << endl;
    cout << "\t\t\t------------------------------------\n" << endl;

    for (int i = 0; i < numElements; i++){
        cout << "\tparagraph[" << i + 1 << "]" << ": " << "\t" << brainStats[i] << " " << endl;
    }
}


//find vowels, consonants
void brainStatsAnalysis(string brainStats){

    int i, vowels, consonants;
    vowels = consonants = 0;


    for(i = 0; brainStats[i] != '\0'; i++){
        if( brainStats[i] == 'a' || brainStats[i] == 'e' || brainStats[i] == 'i' ||
            brainStats[i] == 'o' || brainStats[i] == 'u' || brainStats[i] == 'A' ||
            brainStats[i] == 'E' || brainStats[i] == 'I' || brainStats[i] == 'O' ||
            brainStats[i] == 'U'){

            vowels++;
        }
        else if((brainStats[i] >= 'a' && brainStats[i] <= 'z') || (brainStats[i] >= 'A' && brainStats[i] <= 'Z')){
            consonants++;
        }
    }

    cout << "\tParagraph: " << brainStats << endl;


    if(vowels < consonants){
        cout << "\tVowels: " << vowels << endl;
        cout << "\tConsonants: " << consonants << endl;
    }
    else{
        cout << "\tConsonants: " << consonants << endl;
        cout << "\tVowels: " << vowels << endl;

    }
    cout << "\t-----------------" << endl;



}

int main() {

    int i;

    string brainStats[] = {"About 75% of our brain consists of water.", "The human brain has the ability to store one thousand terabytes of information.", "The human brain has about 100 billion neurons.", "Artificial neural networks mimic the central nervous system. However, these networks need 40 minutes to process what the human brain processes in a second.", "There are approximately 160,000 km of blood vessels in the brain. Their length is sufficient to make the round of the earth four times.", "EASY SUBSTANCE: So called neurons that are responsible for speech, memory and muscle control.", "When resting, the human brain produces enough energy to light a 25-watt bulb.", "Scientists have come to the conclusion that the brain reaches its full maturity in our 25 years.", "The lowest speed with which our brain processes the information is 418 km/h.", "The brain of man never loses his ability to learn and change. This is due to its elasticity and to the fact that it constantly creates new synapses."};

    int numElements = sizeof(brainStats)/sizeof(brainStats[0]);  //assign "numElements" as a placeholder of the list of vector

    cout << "\n\n\n";

    // Function to perform sorting
    sortList(brainStats, numElements);

    // Calling the function to print result
    printBrainStats(brainStats, numElements);

    cout << "\n\n";
    cout << "\t----------------------" << endl;

    // analyze each and every string at position
    for(i = 0; i < numElements; i++){
        brainStatsAnalysis(brainStats[i]);
    }




    cout << "\n\n\n";


    return 0;
}
