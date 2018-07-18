/*
LUIZ FILHO
INTRODUCTION TO C++
ICE10
4/11/2018

Description:
Write a program that calculates the average number of days a company's employees
are absent. The program should have the following functions:

A function called by main that asks the user for the number of employees in the
company. This value should be returned as an int. (The function accepts no
arguments.)

A function called by main that accepts one argument: the number of employees in
the company. The function should ask the user to enter the number of days each
employee missed during the past year. The total of these days should be returned
as an int.

A function called by main that takes two arguments: the number of employees in
the company and the total number of days absent for all employees during the
year. The function should return, as a double, the average number of days
absent. (This function does not perform screen output and does not ask the user
for input.)

Input Validation: Do not accept a number less than 1 for the number of employees.
Do not accept a negative number for the days any employee missed.

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int GetTotalEmployees() {

	int totalEmployees = 0;
	
	do {
		cout << "What is the number of employees in the company? (integer number): ";
		cin >> totalEmployees;
	} while (totalEmployees < 1);

	return totalEmployees;
}

int GetTotalNumberDaysAbsents(int numberEmployees) {

	int totalNumberDaysAbsents = 0;

	int* arrDays = new int[numberEmployees];
	int* arrEmployees = new int[numberEmployees];

	for (int i = 0; i < numberEmployees; i++) {
		do {
			cout << "Number of days the employee" << (i+1) << " missed during the past year: (integer number): ";
			cin >> arrDays[i];
		} while (arrDays[i] < 1);

		totalNumberDaysAbsents = totalNumberDaysAbsents + arrDays[i];
	}

	return totalNumberDaysAbsents;

}

double CalcAverageDaysAbsent(int numberEmployees, int totalNumberDaysAbsents) {
	return (totalNumberDaysAbsents / numberEmployees);
}


int main() {

	/* PROMPTS - ENTRIES */
	cout << "-----------------------------------------------------------------" << endl;
	cout << "----------------- COMPANY'S ABSENTS CALCULATOR  -----------------" << endl;
	cout << "-----------------------------------------------------------------" << endl << endl;
	
	int totalEmployees		= GetTotalEmployees();
	int totalDaysAbsents	= GetTotalNumberDaysAbsents(totalEmployees);
	double averageAbsents	= CalcAverageDaysAbsent(totalEmployees, totalDaysAbsents);

	cout << "The average number of days absent last year was: " << fixed << setprecision(2) << averageAbsents << endl;

	system("pause");
	return 0;
}


/* RESULT OUTPUT

-----------------------------------------------------------------
----------------- COMPANY'S ABSENTS CALCULATOR  -----------------
-----------------------------------------------------------------

What is the number of employees in the company? (integer number): -1
What is the number of employees in the company? (integer number): 5
Number of days the employee1 missed during the past year: (integer number): -1
Number of days the employee1 missed during the past year: (integer number): 5
Number of days the employee2 missed during the past year: (integer number): 3
Number of days the employee3 missed during the past year: (integer number): 4
Number of days the employee4 missed during the past year: (integer number): -8
Number of days the employee4 missed during the past year: (integer number): 8
Number of days the employee5 missed during the past year: (integer number): 3
The average number of days absent last year was: 4.00
Press any key to continue . . .

*/