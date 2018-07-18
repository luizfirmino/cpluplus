/*
LUIZ FILHO
INTRODUCTION TO C++
ICE09
04/05/2018

Description:
Write a program that will:
A. Ask for each student's first name. Run through a loop collecting quiz score data for each student.
The quizzes must have a grade of 0 through 10 (whole points only).
The user should enter all the quizzes for one student, before moving on to the next student.

B. When the teacher runs out of papers (the last student has had all his quizzes entered),
the loop ends. You can decide for yourself how to do this, just be sure to inform the user.
The program should then display the average grade (to one decimal place) for each student,
and the high and low score for each of the quizzes, and the class average grade for all quizzes.


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int getTotalScore(int arr[]) {
	int total = 0;
	for (int i = 0; i < (sizeof(arr) - 1); i++) {
		total = arr[i] + total;
	}
	return total;
}

int getHighScore(int arr[]) {
	int score = 0;
	for (int i = 0; i < (sizeof(arr) - 1); i++) {
		if (score < arr[i]) {
			score = arr[i];
		}
	}
	return score;
}

int getLowScore(int arr[]) {
	int score = 0;
	for (int i = 0; i < (sizeof(arr)-1); i++) {
		if (score > arr[i]) {
			score = arr[i];
		}
	}
	return score;
}

const int Papers = 3; 

int main() {
	
	string studentsName[Papers];
	int studentScores[Papers];
	int scores[100];

	bool skipStudent	= false;
	bool skipScore		= false;
	int iStudents		= 0;
	int iStudentScores	= 0;
	int iScores			= 0;

	/* PROMPTS - ENTRIES 
	cout << "-------------------------------------------------------------------" << endl;
	cout << "-------------------- QUIZZES RESULT CALCULATOR --------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;
	
	
	do {

		// Reset flags
		skipScore = false;
		iStudentScores = 0;

		if (iStudents == 0)
			cout << "Enter the first student name: ";
		else
			cout << "Enter the next student name (-1 to end): ";

		cin >> studentsName[iStudents];

		// Skip ?
		if (studentsName[iStudents] == "-1") {
			skipStudent = true;
		}
		else {
			
			// Collect Scores
			do {

				if (iStudentScores == 0){
					cout << "Enter " << studentsName[iStudents] << "'s first score: ";
				} else {
					cout << "Enter next score (-1 to end): ";
				}
				cin >> studentScores[iStudentScores];
			
				// Skip ?
				if (studentScores[iStudentScores] == -1)
					skipScore = true;
				else {
					scores[iScores+1] = studentScores[iStudentScores];
					iStudentScores++;
					iScores++;
				}

			} while ((!skipScore));

			cout << studentsName[iStudents] << " earned " << getTotalScore(studentScores) << " points out of " << (iStudentScores * 10) << " for a score of " << (((iStudentScores * 10) / getTotalScore(studentScores))*100) << " percent" << endl;
			cout << studentsName[iStudents] << "'s high quiz was " << getHighScore(studentScores) << ", and low quiz was " << getLowScore(studentScores) << endl;
			iStudents = iStudents + 1;

		}

	} while ((!skipStudent));
	
	return 0;
}


/* RESULT OUTPUT
-------------------------------------------------------------------
-------------------- QUIZZES RESULT CALCULATOR --------------------
-------------------------------------------------------------------

Enter the first student name: Luiz
Enter Luiz's first score: 10
Enter next score (-1 to end): 10
Enter next score (-1 to end): 10
Enter next score (-1 to end): -1
Luiz earned 30 points out of 30 for a score of 100 percent
Luiz's high quiz was 10, and low quiz was 0
Enter the next student name (-1 to end): Rick
Enter Rick's first score: 10
Enter next score (-1 to end): 10
Enter next score (-1 to end): 10
Enter next score (-1 to end): -1
Rick earned 30 points out of 30 for a score of 100 percent
Rick's high quiz was 10, and low quiz was 0
Enter the next student name (-1 to end): -1


*/