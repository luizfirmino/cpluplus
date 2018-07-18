/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 6b
4/18/2018

Description:
Take your previous program and include overload functions. Display the results of those functions.
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

int AskUserPersonalInfo(string name) {
	int age;
	cout << name << ", how old are you?";
	cin >> age;
	return age;
}

int AskUserPersonalInfo(string name, int age) {
	int countries;
	cout << name << ", how many countries do you know at the age of " << age << "?";
	cin >> countries;
	return countries;
}

int main() {

	/* PROMPTS - ENTRIES */
	cout << "-------------------------------------------------------------------" << endl;
	cout << "-------------------- PROGRAMMING ASSIGNMENT 6B --------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;

	string name;
	int age, countries;
	name = AskUserPersonalInfo();
	age = AskUserPersonalInfo(name);
	countries = AskUserPersonalInfo(name, age);

	cout << "Your name is " << name << " " << age << " years old and you've been to " << countries << " countries!" << endl;

	system("pause");
	return 0;
}


/* RESULT OUTPUT
-------------------------------------------------------------------
-------------------- PROGRAMMING ASSIGNMENT 6B --------------------
-------------------------------------------------------------------

What's your name? Luiz
Luiz, how old are you?35
Luiz, how many countries do you know at the age of 35?8
Your name is Luiz 35 years old and you've been to 8 countries!
Press any key to continue . . .

*/