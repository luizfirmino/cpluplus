/*
LUIZ FILHO
INTRODUCTION TO C++
ICE15
5/17/2018

Description:
Part I
Write a program that dynamically allocates an array large enough to hold a user-defined 
number of test scores. Once all the scores are entered, the array should be
passed to a function that sorts them in ascending order. Another function should be
called that calculates the average score. The program should display the sorted list of
scores and averages with appropriate headings. Use pointer notation rather than array
notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

void SortArray(int arr[]) {
	sort(arr, arr + sizeof(arr));
}

void CalcAverage(int arr[], int SIZE) {

	double sum = 0;
	
	cout << "Scores: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
		sum = sum + arr[i];
	}
	cout << "Average: " << (sum/SIZE) << endl;

}


int main() {

	// Declarations
	int nScores = 0;

	/* PROMPTS - ENTRIES */
	cout << "-------------------------------------------------------------------" << endl;
	cout << "-------------------- QUIZZES RESULT CALCULATOR --------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;

	cout << "How many scores do you want to enter?: ";
	cin >> nScores;
	int* arrScores = new int[nScores];

	for (int i = 0; i < nScores; i++) {
		cout << "Enter the " << (i+1) << "º score?: ";
		cin >> arrScores[i];

		while (!(arrScores[i] > 0)) {
			cout << "Score cannot be negative, please enter a valid score: ";
			cin >> arrScores[i];
		}
	}

	sort(arrScores, arrScores + nScores);
	CalcAverage(arrScores, nScores);	

	system("pause");
	return 0;
}
/*

RESULT OUTPUT



*/
