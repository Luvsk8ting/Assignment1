// Assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	double beginBal = 0;
	double endBal = 0;
	char trans = ('W', 'D', 'C');
	const double bBal = 0;
	double eBal = 0;
	double wAmt = 0;
	double wSTotal = 0;
	double wTotal = 0;
	double dAmt = 0;
	double dSTotal = 0;
	double dTotal = 0;
	double cAmt = 0;
	double cSTotal = 0;
	double cTotal = 0;
	char ans = ('N');

	cout << " Please enter Beginning Balance " << endl;
	cin >> beginBal;
	cout << " Please enter a transaction type (W, C, D) " << endl;
	cin >> trans;
	if (trans != ' ') {
		if (trans == 'W') {
			do {
				cout << "Please enter withdrawal amount " << endl;
				cin >> wAmt;
				wSTotal = wAmt;
				wTotal = wSTotal + wAmt;
				cout << "Would you like to enter another withdrawl (Y/N) " << endl;
				cin >> ans;
				wTotal = wAmt;
				wTotal = wSTotal + wAmt;
				cout << wTotal;
			} while (ans == 'Y');
				cout << "Total withdrawals are: " << wTotal << endl;
				cout << " End Balance is " << endBal << endl;

	/* else if (trans == 'D') {
		cout << "Please enter deposit amount" << endl;
		cin >> dAmt;
		dTotal = dAmt;
		cout << "Would you like to enter another deposit (Y/N) ";
		cin >> ans;
		while (ans == 'Y') {
			cout << "Please enter deposit amount " << endl;
			cin >> dAmt;
			dTotal = +dAmt;
			ans = 'N';
		}
		cout << "Total deposits are: " << endl;
		cout << dTotal;
	}
	else if (trans == 'C') {
		cout << "Please enter check amount" << endl;
		cin >> cAmt;
		cTotal = cAmt;
		cout << "Would you like to enter another check (Y/N) ";
		cin >> ans;
		while (ans == 'Y') {
			cout << "Please enter check amount " << endl;
			cin >> cAmt;
			cTotal = -cAmt;
			ans = 'N';
		}
		cout << "Total checks are: " << endl;
		cout << cTotal;
	}
	else
		cout << "Please enter valid transaction type" << endl;


}
cout << " Please enter a transaction type (W, C, D) " << endl;

*/
			return 0;

		}
	}
	}