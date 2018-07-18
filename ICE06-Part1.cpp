/*
LUIZ FILHO
INTRODUCTION TO C++
ICE06 - Part 1

Description:
Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Right Triangle
4. Quit
Enter your choice (1-4):
If the user enters 1, the program should ask for the radius of the circle and then display its area.
Use 3.14159 for Pi. If the user enters 2, the program should ask for the length and width of the
rectangle, and then display the rectangle's area. If the user enters 3, the program should ask for
the length of the triangle's base and its height, and then display its area. If the user enters 4,
the program should end. Although this program would be better using a switch statement, we may
not have covered that statement in class at this point; and it can be done using if-else statements.


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159265; // Use a named constant for pi (PI).

void CalculateAreaCircle() {
	double radius, area;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	area = (PI * (radius * radius));
	cout << "The area of the circle is " << area << endl << endl;
}

void CalculateAreaRectangle() {
	double area, length, width;
	cout << "Enter the length and the width of the rectangle: ";
	cin >> length >> width;
	area = (length * width);
	cout << "The area of the rectangle is " << area << endl << endl;
}

void CalculateAreaTriangle() {
	double area, base, height;
	cout << "Enter the length of the triangle's base and its height: ";
	cin >> base >> height;
	area = ((height * base) / 2);
	cout << "The area of the triangle is " << area << endl << endl;
}

int main() {
	
	int option;
	bool skip = false;

	/* PROMPTS - ENTRIES 
	cout << "-------------------------------------------------------------" << endl;
	cout << "-------------------- GEOMETRY CALCULATOR --------------------" << endl;
	cout << "-------------------------------------------------------------" << endl << endl;
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Right Triangle" << endl;
	cout << "4. Quit" << endl;
	
	while (!skip) {

		cout << "Enter your choice(1 - 4): ";
		cin >> option;

		switch (option) {
			case 1: CalculateAreaCircle();
				break;
			case 2: CalculateAreaRectangle();
				break;
			case 3: CalculateAreaTriangle();
				break;
			case 4: skip = true;
				break;
		}
	}
	return 0;
}


/* RESULT OUTPUT
-------------------------------------------------------------
-------------------- GEOMETRY CALCULATOR --------------------
-------------------------------------------------------------

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Right Triangle
4. Quit
Enter your choice(1 - 4): 3
Enter the length of the triangle's base and its height: 10
20
The area of the triangle is 100

Enter your choice(1 - 4): 1
Enter the radius of the circle: 5
The area of the circle is 78.5398

Enter your choice(1 - 4):

*/