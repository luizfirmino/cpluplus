/*
LUIZ FILHO
INTRODUCTION TO C++
Programming Assignment 5b
4/8/2018

Description:
Modify the Program so that one (1) of the five (5) cases in your switch statement loops until proven false.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int option;
	bool skip = false;

	/* PROMPTS - ENTRIES */
	cout << "-------------------------------------------------------------------" << endl;
	cout << "-------------------- PROGRAMMING ASSIGNMENT 5B --------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;
	cout << "1. Would you like a cup of coffee?" << endl;
	cout << "2. Would you like a chocolate?" << endl;
	cout << "3. Wanna watch a movie?" << endl;
	cout << "4. Wanna hang out with friends?" << endl;
	cout << "5. Would you like a day off?" << endl;
	cin >> option;

	switch (option) {
	case 1:
		while (!skip) {

			int nCups;
			cout << "QUIZ: how many cups of coffee a person can have per day?" << endl;
			cin >> nCups;

			if (nCups == 3) {
				cout << "QUIZ: Correct answer!" << endl;
				skip = true;
			}
			else {
				cout << "QUIZ: Incorrect answer! Try again." << endl;
			}

		}

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
-------------------- PROGRAMMING ASSIGNMENT 5B --------------------
-------------------------------------------------------------------

1. Would you like a cup of coffee?
2. Would you like a chocolate?
3. Wanna watch a movie?
4. Wanna hang out with friends?
5. Would you like a day off?
1
QUIZ: how many cups of coffee a person can have per day?
4
QUIZ: Incorrect answer! Try again.
QUIZ: how many cups of coffee a person can have per day?
2
QUIZ: Incorrect answer! Try again.
QUIZ: how many cups of coffee a person can have per day?
3
QUIZ: Correct answer!
Press any key to continue . . .

*/