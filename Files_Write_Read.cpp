/*
3x + 5y * 7z = ? me poio arxeio timwn thelei o xristis
na anoiksei (a.dat, b.dat or c.dat)?

*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int usrChoice, x, y, z, i, j, counter = 1;
  char temp;
  cout << "Καλησπέρα!" << endl;
  cout << "Enter 9 values for x, y, z accordingly to represent the expression 3x + 5y * 7z (press <Enter> each time)" << endl;

  ofstream outfile;

  outfile.open("a.dat");

  for(i = 0; i < 3; i++){
    if(i == 1){
      outfile.close();
      outfile.open("b.dat");
    }
    else if(i == 2){
      outfile.close();
      outfile.open("c.dat");
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

  cout << "\n1) a.dat\n2) b.dat\n3) c.dat" << endl;
  cout << "\nEnter choice: ";

  do{
    cin >> usrChoice;

    if(usrChoice == 1){
      infile.open("a.dat");
    }
    else if(usrChoice == 2){
      infile.open("b.dat");
    }
    else if(usrChoice == 3){
      infile.open("c.dat");
    }
    if(!infile){
    cout << "File not found, bye-bye!" << endl;
    exit(0);
  }
  }while((usrChoice != 1) && (usrChoice != 2) && (usrChoice != 3));

  infile >> x;
  infile >> y;
  infile >> z;

  cout << "The result of the expression 3x + 5y * 7z with values " << x << ", " << y << ", " << z << " is: " << (3 * x) + (5 * y) * (7 * z) << endl;



  return 0;
}