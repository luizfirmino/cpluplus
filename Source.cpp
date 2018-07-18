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
		cout << "Enter ‘Yes’ OR ‘No’: \n";
		cin >> n;
		i = (n == 'Yes' || n == 'No');
	}
	cout << "Thank you!\n";


	system("pause");
	return 0;
}


/*
RESULT
Enter ‘Yes’ OR 'No':
YES
Enter ‘Yes’ OR 'No':
asd
Enter ‘Yes’ OR 'No':
erw
Enter ‘Yes’ OR 'No':
Yes
Thank you!
Press any key to continue . . .
*/

