// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std; 

int main()
{
	int inputvalue = 0;
	int inputoperation = 0;
	int inputvalue2 = 0;
	cout << "Enter a value" << endl;
	cin >> inputvalue;
	cout << "Enter an operation" << endl;
	cout << "Enter 1 for Addition" << endl;
	cout << "Enter 2 for Subtraction" << endl;
	cout << "Enter 3 for Multiplication" << endl;
	cout << "Enter 4 for Division" << endl;
	cin >> inputoperation;
	cout << "Enter a second value" << endl;
	cin >> inputvalue2;
	if (inputoperation == 1) {
		cout << inputvalue + inputvalue2 << endl;
	}
	else if (inputoperation == 2) {
		cout << inputvalue - inputvalue2 << endl;
	}
	else if (inputoperation == 3) {
		cout << inputvalue * inputvalue2 << endl;
	}
	else if (inputoperation == 4) {
		cout << inputvalue / inputvalue2 << endl;
	}
	else {

	}
	return 0;
	
}

