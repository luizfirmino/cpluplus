/*	
	LUIZ FILHO 
	INTRODUCTION TO C++
	(ICE) In-class 02
	02/07/2018


#include <iostream>
#include <string>

using namespace std;

int main() {

	// a.Display "Hello, World!" using one cout using a string constant.
	const string ex1 = "Hello, World\n";
	cout << ex1;

	// b.Display "She sells sea shells by the sea shore" with one cout, on one display line, written on one line of source code.
	cout << "She sells sea shells by the sea shore\n";
	
	// c.Display "She sells sea shells by the sea shore" with one cout, on 8 display lines, written on one line of source code.
	cout << "She\nsells\nsea\nshells\nby\nthe\nsea\nshore\n";

	// d.Display "She sells sea shells by the sea shore" and "Peter Piper picked a peck of pickled peppers" with one cout, on 2 display lines, written on 2 lines of source code.
	cout << "She sells sea shells by the sea shore\n";
	cout << "Peter Piper picked a peck of pickled peppers\n";
	
	// e.Display "C:\public\downloads" (including the quote marks) on one display line.
	cout << "\"" << "C:\\public\\downloads" << "\"\n";
	
	// f.Display "My 2006 car gets 27.8 mpg averaged over 3 tanks of gas" using a different(but appropriate) variable type for each of the 3 numbers.
	int y = 2006;
	double m = 27.8;
	float g = 3;
	cout << "My " << y << " car gets " << m << " mpg averaged over " << g << " tanks of gas\n";

	// g.Repeat step f above, using the variable types that result in the smallest possible memory footprint.You might want to download the handout on Data Types.
	short int y_s = 2006;
	float m_s = 27.8;
	short int g_s = 3;
	cout << "My " << y_s << " car gets " << m_s << " mpg averaged over " << g_s << " tanks of gas\n";

	system("pause");
	return 0;
}

/*
Hello, World
She sells sea shells by the sea shore
She
sells
sea
shells
by
the
sea
shore
She sells sea shells by the sea shore
Peter Piper picked a peck of pickled peppers
"C:\public\downloads"
My 2006 car gets 27.8 mpg averaged over 3 tanks of gas
My 2006 car gets 27.8 mpg averaged over 3 tanks of gas
*/