// Assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
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
			double wTable[100];
			for (int i = 0; i <= 100; i++)
			{
				do {
					
					cout << "Please enter withdrawal amount " << endl;
					cin >> wAmt;
					wTable[i] = wAmt;
					wTotal = +wTable[i];
					//wSTotal = wTable[i];
					cout << "Would you like to enter another withdrawl (Y/N) " << endl;
					cin >> ans;
				} while (ans == 'Y' || ans == 'y');
				cout << "Total withdrawals are: " << wTotal << endl;
				for (int i = 0; i < wTable[i]; i++) {
					cout << "You enters these withdrawal transactions: " << wTable[i] << endl;
				}
				
			}
		}
		else if (trans == 'D' || trans == 'd') {
			double dTable[100];
			for (int i = 0; i <= 100; i++)
			{
				do {
					cout << "Please enter deposit amount " << endl;
					cin >> dAmt;
					dTable[i] = dAmt;
					dTotal = dSTotal + dTable[i];
					dSTotal = dTable[i];
					cout << "Would you like to enter another deposit (Y/N) " << endl;
					cin >> ans;
					endingBalance = beginBal + dTotal;
				} while (ans == 'Y' || ans == 'y');
				cout << "Total deposits are: " << dTotal << endl;
			}
		}
		else if (trans == 'C' || trans == 'c') {
			double cTable[100];
			for (int i = 0; i <= 100; i++)
			{
				do {
					cout << "Please enter check amount " << endl;
					cin >> cAmt;
					cTable[i] = cAmt;
					wTotal = cSTotal + cTable[i];
					wSTotal = cTable[i];
					cout << "Would you like to enter another check (Y/N) " << endl;
					cin >> ans;
					endingBalance = beginBal - cTotal;
				} while (ans == 'Y' || ans == 'y');
				cout << "Total checks are: " << wTotal << endl;
			}
		}
		else
			cout << "Please enter valid transaction type" << endl;
		cout << "Please enter a transaction type (W, C, D) " << endl;
		return 0;
		}
	}