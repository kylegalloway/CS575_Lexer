// Author: Zachary Mollett
// Assignment Number: 1

#include <iostream>
using namespace std;

int main(void)
{
	double num1, num2, sum, minus, times, divide;
	

	//Important for decimal arithmetic.
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	//Requesting two numbers.
	cout << "\n This program will prompt for two numbers and then display their sum, difference, product and quotient.\n";
	cout << "\n Please type your first number: ";

	cin >> num1;
	
	cout << " Please type your second number: ";

	cin >> num2;
	
	//Defining equations.
	sum = num1 + num2;	
	minus = num1 - num2;    
	times = num1 * num2;	
	divide = num1 / num2;	

	//Listing the equations and their answers.
 	cout << "\n" <<" " << num1 << " + " << num2 << " = " << sum << endl;
	cout << " " << num1 << " - " << num2 << " = " << minus << endl;
	cout << " " << num1 << " * " << num2 << " = " << times << endl;
	
	//Making sure we don't divide by zero.
	if ((num1 == 0) || (num2 == 0))
		{
			cout << " " << num1 << " / " << num2 << " answer not found, we cannot divide by zero." << endl;
		}

	else
		{
			cout << " " <<num1 << " / " << num2 << " = " << divide << endl;
		}

	cout << "\n";
	
	return 0;
}
