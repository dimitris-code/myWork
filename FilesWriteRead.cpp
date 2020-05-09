/*
3x + 5y * 7z = ?
with which price file the user wants to open (a.dat, b.dat or c.dat)?
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int usrChoice, x, y, z, i, j, counter = 1;
    char temp;
    string usrFileName1, usrFileName2, usrFileName3;
    
    cout << "\nEnter three file names (press <Enter> each time)\n" << endl;

    cout << counter++ << ". Filename #1: ";
    cin >> usrFileName1;
    cout << counter++ << ". Filename #2: ";
    cin >> usrFileName2;
    cout << counter << ". Filename #3: ";
    cin >> usrFileName3;

    counter = 1;
    cout << "\nEnter 9 values for x, y, z accordingly to represent the expression 3x + 5y * 7z (press <Enter> each time)\n" << endl;

    ofstream outfile;

    outfile.open(usrFileName1 + ".dat");

    for(i = 0; i < 3; i++){
        if(i == 1){
        outfile.close();
        outfile.open(usrFileName2 + ".dat");
        }
        else if(i == 2){
        outfile.close();
        outfile.open(usrFileName3 + ".dat");
        }
        for(j = 0; j < 3; j++){

        temp = (j == 0)? 'x' : (j == 1)? 'y' : 'z';

        cout << counter << ". Enter "<< temp <<" value: ";
        cin >> usrChoice;
        outfile << usrChoice << endl;
        counter++;
        }
    }

    outfile.close();

    ifstream infile;

    cout << endl << "For the expression 3x + 5y * 7z choose values for x, y, z of:\n";

    counter = 1;

    cout << counter++ << ". " << usrFileName1 << ".dat" << endl;
    cout << counter++ << ". " << usrFileName2 << ".dat" << endl;
    cout << counter++ << ". " << usrFileName3 << ".dat" << endl;
    cout << "\nEnter choice: ";

  do{
        cin >> usrChoice;

        if(usrChoice == 1){
        infile.open(usrFileName1 + ".dat");
        }
        else if(usrChoice == 2){
        infile.open(usrFileName2 + ".dat");
        }
        else if(usrChoice == 3){
        infile.open(usrFileName3 + ".dat");
        }
    }while((usrChoice != 1) && (usrChoice != 2) && (usrChoice != 3));

  if(!infile){
        cout << "File not found, bye-bye!" << endl;
        exit(0);
    }

    infile >> x;
    infile >> y;
    infile >> z;

    cout << "The result of the expression 3x + 5y * 7z with values " << x << ", " << y << ", " << z << " is: " << (3 * x) + (5 * y) * (7 * z) << endl;



    return 0;
}
