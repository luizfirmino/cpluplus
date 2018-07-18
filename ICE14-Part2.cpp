/*
LUIZ FILHO
INTRODUCTION TO C++
ICE15
5/17/2018

Description:
Part II
Modify the program of Part 2 to allow the user to enter name-score pairs.
For each student taking a test, the user types the student’s name followed by the
student’s integer test score. Modify the sorting function so it takes an array holding the
student names and an array holding the student test scores. When the sorted list of
scores is displayed, each student’s name should be displayed along with his or her score.
In stepping through the arrays, use pointers rather than array subscripts.
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
	cout << "Average: " << (sum / SIZE) << endl;

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
		cout << "Enter the " << (i + 1) << "º score?: ";
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
