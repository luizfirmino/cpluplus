/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 7c

Description:
Take the application from 7b and replace the array with a vector. Be sure to display the elements one at a time.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> numbers(5, 2);

	cout << numbers[0] << ", " << endl;
	cout << numbers[1] << ", " << endl;
	cout << numbers[2] << ", " << endl;
	cout << numbers[3] << ", " << endl;
	cout << numbers[4] << ", " << endl;


	system("pause");
	return 0;
}

/* -- OUTPUT -----------------------------------
2,
2,
2,
2,
2,
Press any key to continue . . .

*/