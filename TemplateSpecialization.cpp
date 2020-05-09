/*
Templates definition:

Templates provide a way to make a class or function operate with different data types,
without having to rewrite the code for each type.

*/


#include <iostream>

using namespace std;

template <class T>  //Template of generic type
	float sum (T x, T y) {
		return x + y;
	}

template <>  //specialized template for characters
 float sum (char x, char y) {
		cout << "Can't operate characters" << endl;
    	return -1.0;
	}

template <>  //specialized Template for strings
 float sum (string x, string y) {
		cout << "Can't operate strings" << endl;
    	return -1.0;
	}


int main(){

	cout << sum(10, 20) << endl;
	cout << sum(1.2, 2.3) << endl;
	cout << sum(2.23455654, 2.434433334) << endl;
    string s1 = "test";
    sum('a', 'b');
    sum(s1, s1);

	return 0;
}