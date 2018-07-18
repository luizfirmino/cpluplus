/*
Author: Jim Hotz
Exercise: ICE03
Description:
Chart the size, and min/max value of each data type
on "this" compiler


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	bool bmin = std::numeric_limits<bool>::min();
	bool bmax = std::numeric_limits<bool>::max();
	
	char cmin = std::numeric_limits<char>::min();
	char cmax = std::numeric_limits<char>::max();
	
	short smin = std::numeric_limits<short>::min();
	short smax = std::numeric_limits<short>::max();
	
	int imin = std::numeric_limits<int>::min();
	int imax = std::numeric_limits<int>::max();
	
	long lmin = std::numeric_limits<long>::min();
	long lmax = std::numeric_limits<long>::max();
	
	long long llmin = std::numeric_limits<long long>::min();
	long long llmax = std::numeric_limits<long long>::max();
	
	int ucmin = std::numeric_limits<unsigned char>::min();
	int ucmax = std::numeric_limits<unsigned char>::max();
	
	char16_t c16min = std::numeric_limits<char16_t>::min();
	char16_t c16max = std::numeric_limits<char16_t>::max();
	
	char32_t c32min = std::numeric_limits<char32_t>::min();
	char32_t c32max = std::numeric_limits<char32_t>::max();
	
	unsigned short usmin = std::numeric_limits<unsigned short>::min();
	unsigned short usmax = std::numeric_limits<unsigned short>::max();
	
	unsigned int uimin = std::numeric_limits<unsigned int>::min();
	unsigned int uimax = std::numeric_limits<unsigned int>::max();
	
	unsigned long ulmin = std::numeric_limits<unsigned long>::min();
	unsigned long ulmax = std::numeric_limits<unsigned long>::max();
	
	unsigned long long ullmin = std::numeric_limits<unsigned long long>::min();
	unsigned long long ullmax = std::numeric_limits<unsigned long long>::max();

	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();
	double dmin = std::numeric_limits<double>::min();
	double dmax = std::numeric_limits<double>::max();
	long double ldmin = std::numeric_limits<long double>::min();
	long double ldmax = std::numeric_limits<long double>::max();
	cout << "Data Type          Bytes                   Min                     Max\n"
		<<	"=========          =====                   ===                     === \n"
		<<	"bool              " << setw(4) << sizeof(bool) << setw(24) << bmin << setw(24) << bmax << endl << endl
		<<	"char              " << setw(4) << sizeof(char) << setw(24) << static_cast<int>(cmin) << setw(24) << static_cast<int>(cmax) << endl
		<<	"short             " << setw(4) << sizeof(short) << setw(24) << smin << setw(24) << smax << endl
		<<	"int               " << setw(4) << sizeof(int) << setw(24) << imin << setw(24) << imax << endl
		<<	"long              " << setw(4) << sizeof(long) << setw(24) << lmin << setw(24) << lmax << endl
		<<	"long long         " << setw(4) << sizeof(long long) << setw(24) << llmin << setw(24) << llmax << endl << endl

		<<	"unsigned char     " << setw(4) << sizeof(unsigned char) << setw(24) << ucmin << setw(24) << ucmax << endl
		<<	"char16_t          " << setw(4) << sizeof(char16_t) << setw(24) << c16min << setw(24) << c16max << endl
		<<	"char32_t          " << setw(4) << sizeof(char32_t) << setw(24) << c32min << setw(24) << c32max << endl
		<<	"unsigned short    " << setw(4) << sizeof(unsigned short) << setw(24) << usmin << setw(24) << usmax << endl
		<<	"unsigned int      " << setw(4) << sizeof(unsigned int) << setw(24) << uimin << setw(24) << uimax << endl
		<<	"unsigned long     " << setw(4) << sizeof(unsigned long) << setw(24) << ulmin << setw(24) << ulmax << endl
		<<	"unsigned long long" << setw(4) << sizeof(unsigned long long) << setw(24) << ullmin << setw(24) << ullmax << endl << endl
		
		<<	"float             " << setw(4) << sizeof(float)	<< setw(24) << fmin << setw(24) << fmax << endl
		<<	"double            " << setw(4) << sizeof(double) << setw(24) << dmin << setw(24) << dmax << endl
		<<	"long double       " << setw(4) << sizeof(long double) << setw(24) << ldmin << setw(24) << ldmax << endl;
	
		system("pause");
		return 0;
}

Annotations
*/