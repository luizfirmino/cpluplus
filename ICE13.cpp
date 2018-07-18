/*
LUIZ FILHO
INTRODUCTION TO C++
ICE13
5/3/2018

Description:
Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program should have the following functions:
•  displayArray . This function should accept a two-dimensional array as its argument and display the neatly formatted array on the screen.
•  [Optional] getTotal . This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
•  getAverage . This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
•  getValue . This function should accept a two-dimensional array as its first argument, an integer (row) as its second argument, and an integer (col) as its third argument.  It should return the requested value in the array.
•  [Optional] getRowTotal . This function should accept a two-dimensional array as its first argu-ment and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the total of the values in the specified row.
•  getColumnTotal . This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a column in the array. The function should return the total of the values in the specified column.
•  getPosition . This function should accept a two-dimensional array as its first argument, a second argument of the array type, and a row and column argument to use as return values.  The function should search the entire array (row by row) and return the row and column numbers of the first element in the array found to match the second argument.  Return boolean true if the value was found, false if not found.
•  getHighestInRow . This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the highest value in the specified row of the array.
•  [Optional] getLowestInRow . This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the lowest value in the specified row of the array.
Demonstrate each of the functions in this program.

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void displayArray(int arr[][COLS]) {

	for (int ir = 0; ir < ROWS; ir++) {
		for (int ic = 0; ic < COLS; ic++) {
			cout << arr[ir][ic] << " ";
		}
		cout << endl;
	}

}

int getTotal(int arr[][COLS]) {
	
	int total = 0;

	for (int ir = 0; ir < ROWS; ir++) {
		for (int ic = 0; ic < COLS; ic++) {
			total = total + arr[ir][ic];
		}
	}
	
	return total;
}
double getAverage(int arr[][COLS]) {
	double avg = (getTotal(arr) / (COLS * ROWS));
	return avg;
}

int getValue(int arr[][COLS], int row, int col) {
	return arr[row][col];
}

int getRowTotal(int arr[][COLS], int row) {
	
	int total = 0;

	for (int i = 0; i < COLS; i++) {
		total = total + arr[row][i];
	}

	return total;
}

int getColumnTotal(int arr[][COLS], int col) {

	int total = 0;

	for (int i = 0; i < ROWS; i++) {
		total = total + arr[i][col];
	}

	return total;

}

bool getPosition(int arr[][COLS], int search, int &row, int &col) {

	for (int ir = 0; ir < ROWS; ir++) {
		for (int ic = 0; ic < COLS; ic++) {
			if (search == arr[ir][ic]){
				row = ir;
				col = ic;
				return true;
			}
		}
	}
	return false;
}

int getHighestInRow(int arr[][COLS], int row) {

	int hNumber = 0;

	for (int i = 0; i < COLS; i++) {
		if (hNumber < arr[row][i]) {
			hNumber = arr[row][i];
		}
	}

	return hNumber;
}

int getLowestInRow(int arr[][COLS], int row) {

	int lNumber = 0;

	for (int i = 0; i < COLS; i++) {
		if (lNumber > arr[row][i]) {
			lNumber = arr[row][i];
		}
	}

	return lNumber;
}

int main() {

	// Declarations
	int arr[ROWS][COLS] = {
		{ 0, 1, 2, 3 } ,
		{ 4, 5, 6, 7 } ,
		{ 8, 9, 10, 11 }
	};
	
	displayArray(arr);

	cout << "getTotal: " << getTotal(arr) << endl;
	cout << "getAverage: " << fixed << setprecision(2) << getAverage(arr) << endl;
	cout << "getValue: " << getValue(arr, 2, 1) << endl;
	cout << "getRowTotal: " << getRowTotal(arr, 2) << endl;
	cout << "getColumnTotal: " << getColumnTotal(arr, 3) << endl;

	int col = 0, row = 0;
	if (getPosition(arr, 5, row, col)) {
		cout << "Row: " << row <<  " Col: " << col << endl;
	}

	cout << "getHighestInRow: " << getHighestInRow(arr, 2) << endl;
	cout << "getLowestInRow: " << getLowestInRow(arr, 2) << endl;

	system("pause");
	return 0;
}


/* RESULT OUTPUT
0 1 2 3
4 5 6 7
8 9 10 11
getTotal: 66
getAverage: 5.00
getValue: 9
getRowTotal: 38
getColumnTotal: 21
Row: 1 Col: 1
getHighestInRow: 11
getLowestInRow: 0
Press any key to continue . . .

*/