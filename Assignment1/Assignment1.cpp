// Assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>
using namespace std;

int main()
{

	double beginBal = 0;
	double endBal = 0;
	double endingBalance = 0;
	char trans = ('W', 'D', 'C');
	//const double bBal = 0;
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
	char ans = ('N','Y');

	cout << " Please enter Beginning Balance " << endl;
	cin >> beginBal;
	cout << " Please enter a transaction type (W, C, D) " << endl;
	cin >> trans;
	if (trans != ' ') {
		if (trans == 'W' || trans == 'w') {
			do {
				cout << "Please enter withdrawal amount " << endl;
				cin >> wAmt;
				wTotal = wSTotal + wAmt;
				wSTotal = wAmt;
				cout << "Would you like to enter another withdrawl (Y/N) " << endl;
				cin >> ans;
				endingBalance = beginBal - wTotal;
				cout << endingBalance << endl;
			} while (ans == 'Y' || ans == 'y')
				cout << "Total withdrawals are: " << wTotal << endl;
		}
		else if (trans == 'D' || trans == 'd') {
			do {
				cout << "Please enter deposit amount" << endl;
				cin >> dAmt;
				dTotal = wSTotal + wAmt;
				dSTotal = dAmt;
				cout << "Would you like to enter another deposit (Y/N) ";
				cin >> ans;
				endingBalance = beginBal + dTotal;
				cout << endingBalance << endl;
			} while (ans == 'Y' || ans == 'y');
					cout << "Total deposits are: " << dTotal << endl;
				//cout << " Ending Balance is " << endingBalance << endl;
			}
		else if (trans == 'C' || trans == 'c') {
			do {
				cout << "Please enter check amount" << endl;
				cin >> cAmt;
				cTotal = cSTotal + cAmt;
				cSTotal = cAmt;
				cout << "Would you like to enter another check (Y/N) ";
				cin >> ans;
				endingBalance = beginBal - cTotal;
				cout << endingBalance << endl;
			} while (ans == 'Y' || ans == 'y');
				cout << "Total checks are: " << cTotal << endl;
				//cout << " Ending Balance is " << endingBalance << endl;
			}
			
		}
		else
			cout << "Please enter valid transaction type" << endl;
}
			cout << " Please enter a transaction type (W, C, D) " << endl;
			return 0;
		
	}
	