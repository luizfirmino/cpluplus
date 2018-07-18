/*
LUIZ FILHO
INTRODUCTION TO C++
ICE05 - Part 1

Description:
Bronx Pizza needs a program to calculate the number of slices a pizza of any size
can be divided into. The program should perform the following steps:
*/

/*
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	/*Bronx Pizza needs a program to calculate the number of slices a pizza of any size
		can be divided into.The program should perform the following steps :
	To calculate the number of slices that may be taken from the pizza, you must know
		the following facts :
	


	const double PI = 3.14159265; // Use a named constant for pi (PI).
	int pizzaDiameter, pizzaRadius;
	double pizzaArea, numSlices;
	
	/* PROMPTS - ENTRIES 
	cout << "----------------------------------------------------------------------" << endl;
	cout << "-------------------- BRONX PIZZA SLICE CALCULATOR --------------------" << endl;
	cout << "----------------------------------------------------------------------" << endl << endl;

	// A) Ask the user for the diameter of the pizza in inches.
	cout << "Please enter the diameter of the pizza in inches: " << endl;
	cin >> pizzaDiameter;
	/* END PROMPTS 

	// B) Calculate the number of slices that may be taken from a pizza of that size.
	pizzaArea = (PI / 4) * (pizzaDiameter * pizzaDiameter);
	//cout << "Pizza area: " << pizzaArea << endl; DEBUG OUTPUT
	
	// 1. Each slice should have an area of 14.125 square inches.
	//	  2. To calculate the number of slices, simply divide the area of the pizza by 14.125.
	numSlices = (pizzaArea / 14.125);

	/* OUTPUT 

	// C) Display a message telling the number of slices.
	cout << "A pizza measuring " << pizzaDiameter << " inches has " << fixed << setprecision(1) << numSlices << " slices" << endl;
	
	/* END-OUTPUTS 

	system("pause");

return 0;
}


/* RESULT OUTPUT 

----------------------------------------------------------------------
-------------------- BRONX PIZZA SLICE CALCULATOR --------------------
----------------------------------------------------------------------

Please enter the diameter of the pizza in inches:
12
A pizza measuring 12 inches has 8.0 slices
Press any key to continue . . .

*/
