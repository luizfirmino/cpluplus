/*
LUIZ FILHO
INTRODUCTION TO C++


#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int x = 5;
	float y = 0.999999,
	z = 0.9999999;

	cout << "Five divided by three is:\n";
	cout << x / 3 << endl; 							//expected: _____1________________
	cout << x / 3.0 << endl; 						//expected: _____1.0________________
	cout << x / '3' << endl;						//expected: _____error________________ 
	cout << '5' / 3 << endl; 						//expected: _____error________________ 
	cout << "y = " << y << "\nz = " << z << endl;  	//expected: _____error________________ 

	system("pause");
	return 0;
}


/*
RESULT

*/

