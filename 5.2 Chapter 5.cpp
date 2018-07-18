/*
LUIZ FILHO
INTRODUCTION TO C++

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	bool i = false;
	char n;

	while (!i) {
		cout << "Enter ‘Y’, ‘y’, ‘N’, or ‘n’: \n";
		cin >> n;
		i = (n == 'Y' || n == 'y' || n == 'N' || n == 'n');
	}
	cout << "Thank you!\n";


	system("pause");
	return 0;
}



RESULT
Enter a number between 10 and 25:
2
Enter a number between 10 and 25:
9
Enter a number between 10 and 25:
26
Enter a number between 10 and 25:
23
Thank you!
Press any key to continue . . .
*/

