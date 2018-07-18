/*
LUIZ FILHO
INTRODUCTION TO C++
ICE07 - Part 1

Description:
Write a program that asks the user to enter the names and scores of 2 exams (example: Final Exam 88).
Note: if you prefer, you could declare as const, the names and scores of the exams. However, your
program should still treat the data as unknown. All scores should be integer values from 0 to 100.
Input validation is not required.

Your program should then display the following:
A.	Score (ascending)
B.	Score (descending)
C.	Exam Name (ascending)
D.	Exam name (descending)

Depending on which menu option was chosen, the program should re-display the exam names with scores
in the correct sort sequence, one exam per line.  Use a switch statement to parse the menu options,
and if-else statements to display the data in the correct order.

Optional: Using conditional statements, display "passing" or "not passing" for each score
(65 or above is "passing").

Example output:
A.      Score (ascending)
B.      Score (descending)
C.      Exam Name (ascending)
D.      Exam name (descending)

Enter a letter: b
Final Exam 88 passing
Midterm Exam 87 passing



#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

string Passing(int score) {
	if (score >= 65) {
		return "passing";
	}
	else {
		return "not passing";
	}
}

int main() {

	string exam1, exam2;
	char option;
	int score1 = 0, score2 = 0;
	
	/* PROMPTS - ENTRIES 
	cout << "-------------------------------------------------------------" << endl;
	cout << "------------------------ EXAM SCORES ------------------------" << endl;
	cout << "-------------------------------------------------------------" << endl << endl;

	cout << "Enter the names and scores of 2 exams: ";
	cin >> exam1 >> score1 >> exam2 >> score2;

	cout << "A.	Score (ascending)" << endl;
	cout << "B.	Score (descending)" << endl;
	cout << "C.	Exam Name (ascending)" << endl;
	cout << "D.	Exam name (descending)" << endl;
	cout << "Enter your choice(A - D): ";
	cin >> option;

	switch (toupper(option)) {
		case 'A': 
			// Ascending
			if (score1 > score2) {
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
			}
			else {
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
			}
	break;
		case 'B': 
			// Descending
			if (score1 > score2) {
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
			}
			else {
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
			}
	break;
		case 'C':
			// Ascending
			if ((int) exam1[0] > (int) exam2[0]) {
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
			}
			else {
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
			}
			break;
		case 'D':
			// Descending
			if ((int) exam1[0] > (int) exam2[0]) {
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
			}
			else {
				cout << exam2 << ": " << score2 << " " << Passing(score2) << endl;
				cout << exam1 << ": " << score1 << " " << Passing(score1) << endl;
			}
	break;
	}

	system("pause");

return 0;
}


/* RESULT OUTPUT
-------------------------------------------------------------
------------------------ EXAM SCORES ------------------------
-------------------------------------------------------------

Enter the names and scores of 2 exams: English
88
Java
78
A.      Score (ascending)
B.      Score (descending)
C.      Exam Name (ascending)
D.      Exam name (descending)
Enter your choice(A - D): a
Java: 78 passing
English: 88 passing
Press any key to continue . . .

*/