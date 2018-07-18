/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 6c
4/18/2018

Description:
Continue with the previous program. Include a loop in the main function that call another function. 
The other function should utilize a "Static" variable that keep a running total. 
Be sure to display your results.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int RunningTotal() {

	static int i;
	i++;
	return i;
}

string AskUserPersonalInfo() {
	string name;
	cout << "What's your name? ";
	cin >> name;
	return name;
}

int AskUserPersonalInfo(string name) {
	int age;
	cout << name << ", how old are you? ";
	cin >> age;
	return age;
}

int AskUserPersonalInfo(string name, int age) {
	int countries;
	cout << name << ", how many countries do you know at the age of " << age << "? ";
	cin >> countries;
	return countries;
}

int main() {

	/* PROMPTS - ENTRIES */
	cout << "-------------------------------------------------------------------" << endl;
	cout << "-------------------- PROGRAMMING ASSIGNMENT 6C --------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;

	string name;
	int age, countries, counting;
	
	do {

		counting = RunningTotal();
		cout << "Round number: " << counting << endl;

		name = AskUserPersonalInfo();
		age = AskUserPersonalInfo(name);
		countries = AskUserPersonalInfo(name, age);

		cout << "Your name is " << name << " " << age << " years old and you've been to " << countries << " countries!" << endl;


	} while (!(counting == 2));

	system("pause");
	return 0;
}


/* RESULT OUTPUT
-------------------------------------------------------------------
-------------------- PROGRAMMING ASSIGNMENT 6C --------------------
-------------------------------------------------------------------

Round number: 1
What's your name? Luiz
Luiz, how old are you? 35
Luiz, how many countries do you know at the age of 35? 8
Your name is Luiz 35 years old and you've been to 8 countries!
Round number: 2
What's your name? Michele
Michele, how old are you? 33
Michele, how many countries do you know at the age of 33? 17
Your name is Michele 33 years old and you've been to 17 countries!
Press any key to continue . . .

*/