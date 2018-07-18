/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 7a

Description:
Create an application that takes an array of at least 5 elements and display them one at a time in your output.

*/

#include <iostream>
using namespace std;

int main() {

	int numbers[5] = { 99,87,13,5,33 };
	cout << numbers[0] << ", " << endl;
	cout << numbers[1] << ", " << endl;
	cout << numbers[2] << ", " << endl;
	cout << numbers[3] << ", " << endl;
	cout << numbers[4] << ", " << endl;


	system("pause");
	return 0;
}

/* -- OUTPUT -----------------------------------

99,
87,
13,
5,
33,
Press any key to continue . . .

*/