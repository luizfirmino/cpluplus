/*
LUIZ FILHO
INTRODUCTION TO C++
ICE08 - Part 1

Description:
Part I
Write a program to display all the Fibonacci numbers in sequence.
The Fibonacci sequence begins with 0, then 1, and each new number is the sum of the previous
two numbers. So, the sequence starts out:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34 .....

Start by asking the user for the upper limit to the sequence. This limit should be a number between
2 and 2,971,215,073. Use a while loop to do input validation on this value.
Next, use a do while loop to compute and display the sequence.  Use an unsigned int for your sum.
You may wish to cout << "0, 1" (with appropriate spacing) before entering the loop.

Fibonacci Sequence Display<br /><br />

Enter the largest Fibonacci number in the sequence: 2971215073<br />
0,          1,          1,          2,          3,          5,          8,         13,         21,         34
55,         89,        144,        233,        377,        610,        987,       1597,       2584,       4181
6765,      10946,      17711,      28657,      46368,      75025,     121393,     196418,     317811,     514229
832040,    1346269,    2178309,    3524578,    5702887,    9227465,   14930352,   24157817,   39088169,   63245986
102334155,  165580141,  267914296,  433494437,  701408733, 1134903170, 1836311903, 2971215073<br /><br />


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {


	/* PROMPTS - ENTRIES
	cout << "-------------------------------------------------------------------" << endl;
	cout << "------------------------ FIBONACCI NUMBERS ------------------------" << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;

	unsigned int limit;
	bool limitOK = false;

	do {

		//Start by asking the user for the upper limit to the sequence. 
		cout << "Enter the upper limit to the sequence: ";
		cin >> limit;

		// This limit should be a number between
		// 2 and 2, 971, 215, 073. Use a while loop to do input validation on this value.
		limitOK = (limit >= 2 && limit <= 2971215073);
		if (!limitOK)
			cout << "Limit should by between 2 and 2.971.215.073.\n";

	} while (!limitOK);

	unsigned int prevNumber = 0;
	unsigned int curNumber = 1;
	unsigned int nextNumber = 0;
	int skipLine = 0;
	
	// first output
	cout.width(12); cout << prevNumber << ", ";
	cout.width(12); cout << curNumber << ", ";
	nextNumber = prevNumber + curNumber;

	while (nextNumber <= limit){
		cout.width(12); cout << nextNumber << ", ";
		if (skipLine % 5 == 0) cout << "\n";
		prevNumber = curNumber;
		curNumber = nextNumber;
		nextNumber = prevNumber + curNumber;
		skipLine++;
	}
	cout << "\n";

	system("pause");
	return 0;
}
*/

/* RESULT OUTPUT

-------------------------------------------------------------------
------------------------ FIBONACCI NUMBERS ------------------------
-------------------------------------------------------------------

Enter the upper limit to the sequence: 2971215073
0,            1,            1,
2,            3,            5,            8,           13,
21,           34,           55,           89,          144,
233,          377,          610,          987,         1597,
2584,         4181,         6765,        10946,        17711,
28657,        46368,        75025,       121393,       196418,
317811,       514229,       832040,      1346269,      2178309,
3524578,      5702887,      9227465,     14930352,     24157817,
39088169,     63245986,    102334155,    165580141,    267914296,
433494437,    701408733,   1134903170,   1836311903,   2971215073,
512559680,
Press any key to continue . . .

*/