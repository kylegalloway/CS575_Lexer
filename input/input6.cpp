// Author: Zachary Mollett
// Assignment Number: 6


#include <iostream>
#include <iomanip>
using namespace std;

int print_month(int num_days, int start_day);

int main(void)
{
	int leap, tries, start, i, x, blanks, count;

	for (tries=0;tries < 2;tries++) // Repeats twice, breaks regardless of valid entry.
	{
		cout << "\n\nIs the year a leap year (0=No, 1=Yes)? ";
		cin >> leap;
	
		if (leap < 0 || leap > 1) // Defines error status and prints out valid ranges.
		{
		cout << "Sorry that's not a valid input. Enter 0 or 1." << endl;
		}
		else break; // Valid entry break.
	}

	if (tries == 2) // If 2 attempts made will exit program.
	{
		cout << "Sorry your inputs were not valid and the program cannot continue. Goodbye." << endl; //This statement ends the program if 2 tries have been exceeded.
		return 0;
	}

	for (tries=0;tries < 2;tries++) // Repeats twice, breaks regardless of valid entry.
	{
		cout << "Enter day of week on which year starts (1=Sun, 7=Sat): ";
		cin >> start;
		cout << "\n";
		
		if (start < 1 || start > 7) // Defines error status and prints out valid ranges.
		{
		cout << "Sorry that's not a valid input. Enter a value between 1 and 7." << endl;
		}
		else break; // Valid entry break.
	}

	if (tries == 2) // If 2 attempts made will exit program.
	{
		cout << "Sorry your inputs were not valid and the program cannot continue. Goodbye." << endl; //This statement ends the program if 2 tries have been exceeded.
		return 0;
	}

	char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; // Month names.
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Number of days in each month.

	if (leap == 1) // If leap year then sets February to have 29 days.
	{
		days[1] = 29;
		
		for (i = 0; i< 12; i++)
		{
			cout << months[i] << endl; // Print out month name.
			cout << "Sun Mon Tue Wed Thu Fri Sat\n"; // Print out days of week.
			
			blanks = start - 1;
			
			if (blanks > 0) // Display days
			{
				for (x = 0; x < blanks; x++) cout << "    ";
			}
			if (blanks < 0) { cout << "                        ";}
			for (count= 1; count <= days[i]; count++)
			{
				cout << setw(3) << count; // format i right-aligned space 3 wide

				if ((count + blanks) % 7 == 0)
				{
					cout << "\n";
				} 
				else
				{
					cout << " ";
				}
			}
			cout << "\n" << endl;
			start = print_month(days[i], start);
		}
	}

	if (leap == 0)
	{
		for (i = 0; i < 12; i++)
		{
			cout << months[i] << endl; // Print out month name.
			cout << "Sun Mon Tue Wed Thu Fri Sat\n"; // Print out days of week.
						
			blanks = start - 1;
		
			if (blanks > 0) // Display days
			{
			for (x = 0; x < blanks; x++) cout << "    ";
			}
			if (blanks < 0) { cout << "                        ";}
			for (count= 1; count <= days[i]; count++)
			{
				cout << setw(3) << count; // format i right-aligned space 3 wide

				if ((count + blanks) % 7 == 0)
				{
					cout << "\n";
				} 
				else
				{
					cout << " ";
				} 
			}
			cout << "\n" << endl;
			start = print_month(days[i], start);
		}
	}

return 0;
}

int print_month (int num_days, int start_day)
{
	int next_start;
	
	next_start = ((start_day + num_days) % 7); // sets next_start to value for the following month based on days in previous month.
	
	
	return next_start;
}
