/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 7b

Description:
Take the application from 7a and load the array via a "cin". 
Make sure you only input 5 elements to avoid an array overflow. Display the elements one at a time.
*/

#include <iostream>
using namespace std;

int main() {

	int numbers[5];
	
	for (int i = 0; i < 5; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}

	cout << numbers[0] << ", " << endl;
	cout << numbers[1] << ", " << endl;
	cout << numbers[2] << ", " << endl;
	cout << numbers[3] << ", " << endl;
	cout << numbers[4] << ", " << endl;


	system("pause");
	return 0;
}

/* -- OUTPUT -----------------------------------

Enter a number: 20
Enter a number: 54
Enter a number: 87
Enter a number: 54
Enter a number: 1
20,
54,
87,
54,
1,
Press any key to continue . . .
*/