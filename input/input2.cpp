// Author: Zachary Mollett
// Assignment Number: 2

#include <iostream>
using namespace std;

int main(void)
{

	double small, giant;
	
	//Requesting numbers.
	cout << "\n This program will prompt for numbers and give you the largest.\n";
	cout << " Entering zero will terminate the program.\n";
	cout << " Enter a number: ";
	cin >> small;
	
	
	
	while (small != 0 && small > 0)	//This will repeat requests until zero or a negative is entered.
	{
		
		if (small > giant)			//This will set the first number to the largest and then upon looping check if the new number is bigger.
		{
			giant = small;
		}
		
		cout << " Enter a number: ";
		cin >> small;	
	}
	
	if (small < 0)		//Checks for negatives, if one is entered it will end the requests, same as zero.
		{
			cout << " Negative numbers are invalid." << endl;
		}
	
	cout << "\n The largest number you entered was: " << giant << "." << endl;

return 0;
}

