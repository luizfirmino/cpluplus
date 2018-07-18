/*
LUIZ FILHO
INTRODUCTION TO C++
ICE04 - Part 1

Description:
The monthly payment on a loan may be calculated by the following formula:

payment = ((rate * (1+rate)^N) / ((1+Rate)^N - 1)) * L
Rate is the monthly interest rate, which is the annual interest rate divided by 12.
(12 percent annual interest would be 1 percent monthly interest.) N is the number of
payments and L is the amount of the loan. Write a program that asks for loan amount,
annual rate, and number of payments and displays the following report:
Loan Amount:              $ 10000.00
Monthly Interest Rate:          1.00
Number of Payments:               36
Monthly Payment:          $   332.14
Amount Paid Back:         $ 11957.15
Interest Paid:            $  1957.15
(left justify the labels, and right justify the amounts)


Please enter loan amount: 10000
Please enter annual interest rate as percent: 12
Please enter number payments: 36

Loan Amount:        $ 10000.00
Monthly Interest Rate:    1.00
Number of Payments:         36
Monthly Payment:    $   332.14
Amount Paid Back:   $ 11957.15
Interest Paid:      $  1957.15


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	double loanAmount;
	double annualRate;
	int numPayments;
	
	/* PROMPTS - ENTRIES 
	cout << "LOAN REPORT" << endl;
	cout << "------------------------------------------------------------" << endl << endl;

	cout << "Please enter loan amount: " << endl;
	cin >> loanAmount;

	cout << "Please enter annual interest rate as percent : " << endl;
	cin >> annualRate;

	cout << "Please enter number payments: " << endl;
	cin >> numPayments;
	/* END PROMPTS */

	/* DECLARATIONS 
	float rate = ((annualRate / 12) / 100);
	double payment = 0, monthlyPayment = 0, amountPaidBack = 0, interestPaid = 0;

	/* CALC 
	payment        = (rate * pow((1 + rate), numPayments) / (pow((1 + rate), numPayments) - 1)  * loanAmount);
	amountPaidBack = (payment * numPayments);
	monthlyPayment = (amountPaidBack / numPayments);
	interestPaid   = (amountPaidBack - loanAmount);

	/* OUTPUT 
	cout.width(40); cout << left << "Loan Amount:";
	cout.width(15); cout << left << "$" << fixed << setprecision(2) << loanAmount << right << endl;

	cout.width(40); cout << left << "Monthly Interest Rate";
	cout.width(15); cout << left << " " << (rate * 100) << right << endl;

	cout.width(40); cout << left << "Number of Payments";
	cout.width(15); cout << left << " " << numPayments << right  << endl;

	cout.width(40); cout << left << "Monthly Payment";
	cout.width(15); cout << left << "$" << setprecision(2) << monthlyPayment << right << endl;

	cout.width(40); cout << left << "Amount Paid Back";
	cout.width(15); cout << left << "$" << setprecision(2) << amountPaidBack << right << endl;

	cout.width(40); cout << left << "Interest Paid";
	cout.width(15); cout << left << "$" << setprecision(2) << interestPaid << right << endl;
	/* END-OUTPUTS 

	system("pause");
	
	return 0;
}


/*
RESULT

LOAN REPORT
------------------------------------------------------------

Please enter loan amount:
10000
Please enter annual interest rate as percent :
12
Please enter number payments:
36
Loan Amount:                            $              10000.00
Monthly Interest Rate                                  1.00
Number of Payments                                     36
Monthly Payment                         $              332.14
Amount Paid Back                        $              11957.16
Interest Paid                           $              1957.16
Press any key to continue . . .
*/