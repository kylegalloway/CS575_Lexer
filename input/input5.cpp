// Author: Zachary Mollett
// Assignment Number: 5

#include <iostream>
#include <iomanip>
using namespace std;

long factorial (int x)
{
int fact = 1;

if (x<=0)	// checks to see if the entered value from main is less than or equal to zero and sets it to -1 for output.
{
return (-1);
}

for (; x>0; x--)	// calculates the factorial of the given input x and returns that value via fact.
{
fact = x * fact;
}

return fact;
}

int main (void)
{
int min, max, step, fact, next;

do 
{
cout << "Enter the minimum x-value: ";
cin >> min;

cout << "Enter the maximum x-value: ";
cin >> max;

if (max < min)	// checks to make sure that max is a larger number than min. the error reads out on each unsuccessful entry.
{
	cout << "The parameter entered for max is less than your minimum, please enter a positive number that is greater than your minimum." << endl;
}
} while(max < min);	// loops until max is larger than min.

do
{
cout << "Enter the step size: ";
cin >> step;

if (step <= 0)	// checks that the step entered is not less than or equal to zero and reads an error any time it is so.
{
cout << "The parameter entered for step must be greater than zero." << endl;
}
} while (step <= 0);

cout << setw(10) << "x" << setw(20) << "     x-factorial" << endl;	// structure for the display text
cout << setw(10) << "----------" << setw(20) << "     ---------------" << endl;

fact = factorial(min);	//runs the initial factorial of the smallest entry: min.
cout << setw(10) << min << setw(20) << fact << endl;	// prints this value in the chart

next=min+step; // sets the param next to be the sum of min and step.
do
{
	fact = factorial(next); // runs the same factorial but this time with the new values in loop with next param.
	cout << setw(10) << next << setw(20) << fact << endl;
	next = next+step;
} while (next <= max);

return 0;
}

