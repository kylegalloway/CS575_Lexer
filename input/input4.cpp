// Author: Zachary Mollett
// Assignment Number: 4


#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int tries; 	//Try counter.
	double current_pop, rate;	// Current pop is user input population and rate is user input growth rate.

	for (tries=0;tries < 2;tries++) // Makes sure the user can try 2 times max.
	{
		cout << "Enter the initial egret population: ";
		cin >> current_pop;

		if (current_pop <= 0 || current_pop >= 1000000) // Checks for correct input number.
		{
			cout << "Sorry that's not a valid input. Please use values greater than 0 and less than 1,000,000." << endl; //This message reads out on any number not between 0 and 1000000.
		}
		else break;
	}

	if (tries == 2) // Checks that the user hasn't exceeded 2 tries, if they have it will end program.
	{
		cout << "\n" << "Sorry your inputs were not valid and the program cannot continue. Goodbye.\n" << endl; //This statement ends the program if 2 tries have been exceeded.
		return 0;
	}
	
	for (;tries < 2;tries++) // Makes sure the user can try 2 times max.
	{
		cout << "Enter the rate: ";
		cin >> rate;
	
		if (rate <= 0 || rate > 4) // Checks for correct input number.
		{
		cout << "Sorry that's not a valid input. Please use values greater than 0 and less than 4." << endl; //This message reads out on any number not between 0 and 1000000.
		}
		else break;
	}

	if (tries == 2) // Checks that the user hasn't exceeded 2 tries, if they have it will end program.
	{
		cout << "\n" << "Sorry your inputs were not valid and the program cannot continue. Goodbye.\n" << endl; //This statement ends the program if 2 tries have been exceeded.
		return 0;
	}
	
	int yr_cnt;	//Counts to 25.
	double new_pop; //Calculated value.

	cout << setw(4) << "Year" << setw(15) << "Population" << endl;
	cout << setw(4) << "----" << setw(15) << "----------" << endl;
	cout << setw(4) << "0" << setw(15) << current_pop << endl;

	for (yr_cnt= 1; yr_cnt <= 25 ; yr_cnt++)	//Loops the calculation 25 times.
	{	
		new_pop = (rate * current_pop) * ( 1 - (current_pop/1000000));	//Calculates new pop.
		cout << setw(4) << yr_cnt << setw(15) << new_pop << endl;	// Prints out the calculated value.
		current_pop = new_pop;	//Sets the calculated value to current pop for the next cycle.
	}

	return 0;
}
