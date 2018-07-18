/*
LUIZ FILHO
INTRODUCTION TO C++
ICE05 - Part 2

Description:
Modify the program you wrote for Bronx Pizza in Hillcrest, so that it
reports the number of pizzas you need to buy for a party if each person attending is
expected to eat an average of four slices. The program should ask the user for the
number of people who will be at the party and for the diameter of the pizzas to be
ordered. It should then calculate and display the number of pizzas to purchase.


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	const double PI = 3.14159265; // Use a named constant for pi (PI).
	int numPeople, pizzaDiameter;
	double pizzaArea, numSlices, numPizzas;

	/* PROMPTS - ENTRIES 
	cout << "----------------------------------------------------------------------" << endl;
	cout << "-------------------- BRONX PIZZA PARTY CALCULATOR --------------------" << endl;
	cout << "----------------------------------------------------------------------" << endl << endl;

	// The program should ask the user for the number of people
	cout << "Please enter the number of people at the party: " << endl;
	cin >> numPeople;

	// A) Ask the user for the diameter of the pizza in inches.
	cout << "Please enter the diameter of the pizza in inches: " << endl;
	cin >> pizzaDiameter;
	/* END PROMPTS

	// B) Calculate the number of slices that may be taken from a pizza of that size.
	pizzaArea = (PI / 4) * (pizzaDiameter * pizzaDiameter);
	numSlices = (pizzaArea / 14.125);
	numPizzas = round((numPeople * 4) / numSlices);
	
	if (numPizzas < 1) {
		numPizzas = 1;
	}

	/* OUTPUT
	cout << "You need to order " << numPizzas << " pizza(s) for your party " << endl;
	/* END-OUTPUTS

	system("pause");

	return 0;
}


/* RESULT OUTPUT

----------------------------------------------------------------------
-------------------- BRONX PIZZA PARTY CALCULATOR --------------------
----------------------------------------------------------------------

Please enter the number of people at the party:
4
Please enter the diameter of the pizza in inches:
18
You need to order 1 pizza(s) for your party
Press any key to continue . . .

*/
