/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 5a
4/8/2018

Description:
Create a program that, depending on what the user inputs, has five (5) different cases in a switch statement.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int option;
	
	/* PROMPTS - ENTRIES */
	cout << "-------------------------------------------------------------------" << endl;
	cout << "-------------------- PROGRAMMING ASSIGNMENT 5A --------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;
	cout << "1. Would you like a cup of coffee?" << endl;
	cout << "2. Would you like a chocolate?" << endl;
	cout << "3. Wanna watch a movie?" << endl;
	cout << "4. Wanna hang out with friends?" << endl;
	cout << "5. Would you like a day off?" << endl;
	cout << "Enter your choice(1 - 5): ";
	cin >> option;

	switch (option) {
		case 1: 
			cout << "go to the caffeteria and buy it!" << endl;
		break;
		case 2: 
			cout << "have just one after lunch" << endl;
		break;
		case 3: 
			cout << "don't forget to buy popcorn and Mm's" << endl;
		break;
		case 4:
			cout << "get out of here and go meet them" << endl;
			break;
		case 5:
			cout << "Me too, keep playing ..." << endl;
			break;
	}
	
	system("pause");
	return 0;
}


/* RESULT OUTPUT
-------------------------------------------------------------------
-------------------- PROGRAMMING ASSIGNMENT 5A --------------------
-------------------------------------------------------------------

1. Would you like a cup of coffee?
2. Would you like a chocolate?
3. Wanna watch a movie?
4. Wanna hang out with friends?
5. Would you like a day off?
6. I'm tired, don't wanna play anymore!
Enter your choice(1 - 5): 1
go to the caffeteria and buy it!
Press any key to continue . . .

*/