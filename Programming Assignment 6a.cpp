/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 6a
4/18/2018

Description:
Create a program with the main function and one additional function.
The additional function asks for input from the user and returns the output back to the main function for display.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

string AskUserPersonalInfo() {
	string name;
	cout << "What's your name? ";
	cin >> name;
	return name;
}

int main() {

	/* PROMPTS - ENTRIES */
	cout << "-------------------------------------------------------------------" << endl;
	cout << "-------------------- PROGRAMMING ASSIGNMENT 6A --------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;
	
	cout << AskUserPersonalInfo() << endl;
	
	system("pause");
	return 0;
}


/* RESULT OUTPUT

-------------------------------------------------------------------
-------------------- PROGRAMMING ASSIGNMENT 6A --------------------
-------------------------------------------------------------------

What's your name? LUIZ
LUIZ
Press any key to continue . . .


*/