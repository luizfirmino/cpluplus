/*
LUIZ FILHO
INTRODUCTION TO C++
ICE11
4/18/2018

Description:

Write a program to compute miles per gallon of a car, over a long trip. The car begins the trip
with a full tank, and each fuel stop along the way fills the tank again.  You will not do any math,
arithmetic, or computations in the main() function.  All output will be displayed from the main()
function.

Start the program by asking the user for the starting odometer reading.  
All odometer readings will be in whole miles only.  
The fuel tank is full.

Next, your program should ask for a series of subsequent odometer readings, along with the amount
of fuel added to the tank to fill it. Fuel is measured in gallons to 3 decimal places. The car
has an 18.25 gallon capacity.  

Validate your input to ensure that no more than 18.25 gallons is
added, and that the odometer reading is larger than the previous reading.  
The trip is over when the user enters 0 gallons of fuel. 

The car will be filled at least once on the trip.

Use a void function named ComputeTankMPG to compute the miles per gallon of each tank of fuel
on the trip. Do not use cout in this function.

Use a void function named ComputeTripMPG to compute the miles per gallon of the entire trip.
This is computed by dividing the total trip miles by the total trip gallons. Do not use cout
in this function.

All computations are to be done in the functions.  Your main function should do no arithmetic
operations whatsoever (comparisons such as "greater than" are not arithmetic operations,
so you may use those for validation in main).

Do not use global variables (now or ever).  If you don't know what global variables are, ask.*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

const double MAX_TANK_CAPACITY = 18.25;

int ComputeMiles(int miles) {
	static int totalMiles;
	totalMiles = totalMiles + miles;
	return totalMiles;
}

double ComputeFuel(double gallons) {
	static int totalGallons;
	totalGallons = totalGallons + gallons;
	return totalGallons;
}

void ComputeTankMPG(int miles, double gallons, double &mpg ) {
	mpg = (miles / gallons);
}

int main() {

	/* PROMPTS - ENTRIES */
	cout << "--------------------------------------------------------------------" << endl;
	cout << "----------------------- LONG TRIP CALCULATOR -----------------------" << endl;
	cout << "--------------------------------------------------------------------" << endl << endl;

	// First reading
	int previousOdometer;
	cout << "How many miles on the odometer? ";
	cin >> previousOdometer;
	
	int i = 0;
	int milesReading;
	double fuelReading;
	bool skip = false;

	do {

		cout << "Enter the information for the stop number " << (i+1) << endl;

		// Mileage
		bool odoOK = true;
		do {	

			cout << "How many miles the odometer shows? ";
			cin >> milesReading;

			// Validation
			if (milesReading > previousOdometer) {
				ComputeMiles(milesReading - previousOdometer);
				previousOdometer = milesReading;
				odoOK = true;
			} else {
				cout << "Odometer should be larger then the previous reading" << endl;
				odoOK = false;
			}

		} while (!odoOK);

		// Fuel
		bool fuelOK = true;
		do {

			cout << "How many gallons you filled up? ";
			cin >> fuelReading;

			// Skip
			if (fuelReading == 0) {
				skip = true;

			} else {
				// Validation
				if (fuelReading < MAX_TANK_CAPACITY) {
					ComputeFuel(fuelReading);
					fuelOK = true;
				}
				else {
					cout << "The fuel entered exceed the tank capacity." << endl;
					fuelOK = false;
				}
			}

		} while (!fuelOK);

		i++;

	} while (!(skip));

	double MPG = 0;
	ComputeTankMPG(ComputeMiles(0), ComputeFuel(0), MPG);
	cout << "Your trip has an average of " << MPG << " miles per gallon!" << endl;

	system("pause");
	return 0;
}


/* RESULT OUTPUT

--------------------------------------------------------------------
----------------------- LONG TRIP CALCULATOR -----------------------
--------------------------------------------------------------------

How many miles on the odometer? 24000
Enter the information for the stop number 1
How many miles the odometer shows? 24500
How many gallons you filled up? 10
Enter the information for the stop number 2
How many miles the odometer shows? 24000
Odometer should be larger then the previous reading
How many miles the odometer shows? 25450
How many gallons you filled up? 19
The fuel entered exceed the tank capacity.
How many gallons you filled up? 18
Enter the information for the stop number 3
How many miles the odometer shows? 30100
How many gallons you filled up? 0
Your trip has an average of 217.857 miles per gallon!
Press any key to continue . . .

*/