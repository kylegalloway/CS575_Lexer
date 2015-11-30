// Author: Zachary Mollett
// Assignment Number: 3


#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
int days, tries; // Days are the input used for the number of days in the week and the tries int is used for counting the number of tries given to the user. 2 tries will end the program completely.

for (tries=0;tries < 2;tries++) //I started with tries set to zero in this statement to make it easier to track.
{
	cout << "Please enter the number of days in the month: ";
	cin >> days; // User inputs # of days.
	if (days < 28 || days > 31) // Checks for correct input number.
	{
	cout << "Sorry that's not a valid input. Please use values between 28 and 31.\n" << endl; //This message reads out on any number not between 28 and 31.
	}
	else break;
}

if (tries == 2) // Checks that the user hasn't exceeded 2 tries.
{
	cout << "Sorry your inputs were not valid and the program cannot continue. Goodbye." << endl; //This statement ends the program if 2 tries have been exceeded.
	return 0;
}

int start; // Setting for the start of the month

for (;tries < 2;tries++) //I left the initialization of tries blank so that it could use the previous tally given in the days section.
{
	cout << "Please enter the start day of the month (1=Sun, 7=Sat): ";
	cin >> start; // User inputs day that the month starts.
	if (start < 1 || start > 7) // Checks that the entry was valid.
	{
	cout << "Sorry that's not a valid input. Please enter values between 1 and 7.\n" << endl; //This message reads out on any number not between 1 and 7.
	} 
	else break;
}

if (tries == 2) // Checks that the user hasn't exceeded 2 tries.
{
	cout << "Sorry your inputs were not valid and the program cannot continue. Goodbye." << endl; //This statement ends the program if 2 tries have been exceeded.
	return 0;
}


//This block prints out the days of the week
cout << "\n" << "Sun" <<		
setw(4) << "Mon" <<
setw(4) << "Tue" <<
setw(4) << "Wed" <<
setw(4) << "Thu" <<
setw(4) << "Fri" <<
setw(4) << "Sat" << endl;

//These if statements are the bulk of the printouts to the user's terminal. Mostly just the numbers formatted, also explains the size of this source file.
if (start == 1)
{
	if (days == 31)
	{
	cout << "\n" << setw(3) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7";
	cout << "\n" << setw(3) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14";
	cout << "\n" << setw(3) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21";
	cout << "\n" << setw(3) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28";
	cout << "\n" << setw(3) << "29" << setw(4) <<"30" << setw(4) << "31" << endl;
	}
	
	if (days == 30)
	{
	cout << "\n" << setw(3) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7";
	cout << "\n" << setw(3) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14";
	cout << "\n" << setw(3) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21";
	cout << "\n" << setw(3) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28";
	cout << "\n" << setw(3) << "29" << setw(4) <<"30" << endl;
	}
	
	if (days == 29)
	{
	cout << "\n" << setw(3) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7";
	cout << "\n" << setw(3) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14";
	cout << "\n" << setw(3) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21";
	cout << "\n" << setw(3) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28";
	cout << "\n" << setw(3) << "29" << endl;
	}
	
	if (days == 28)
	{
	cout << "\n" << setw(3) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7";
	cout << "\n" << setw(3) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14";
	cout << "\n" << setw(3) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21";
	cout << "\n" << setw(3) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << endl;
	}
}
if (start == 2)
{
	if (days == 31)
	{
	cout << "\n" << setw(7) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6";
	cout << "\n" << setw(3) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13";
	cout << "\n" << setw(3) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20";
	cout << "\n" << setw(3) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27";
	cout << "\n" << setw(3) << "28" << setw(4) << "29" << setw(4) <<"30" << setw(4) << "31" << endl;
	}
	
	if (days == 30)
	{
	cout << "\n" << setw(7) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6";
	cout << "\n" << setw(3) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13";
	cout << "\n" << setw(3) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20";
	cout << "\n" << setw(3) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27";
	cout << "\n" << setw(3) << "28" << setw(4) << "29" << setw(4) <<"30" << endl;
	}
	
	if (days == 29)
	{
	cout << "\n" << setw(7) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6";
	cout << "\n" << setw(3) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13";
	cout << "\n" << setw(3) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20";
	cout << "\n" << setw(3) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27";
	cout << "\n" << setw(3) << "28" << setw(4) << "29" << endl;

	}
	
	if (days == 28)
	{
	cout << "\n" << setw(7) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6";
	cout << "\n" << setw(3) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13";
	cout << "\n" << setw(3) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20";
	cout << "\n" << setw(3) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27";
	cout << "\n" << setw(3) << "28" << endl;

	}
}
if (start == 3)
{
	if (days == 31)
	{
	cout << "\n" << setw(11) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5";
	cout << "\n" << setw(3) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12";
	cout << "\n" << setw(3) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19";
	cout << "\n" << setw(3) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26";
	cout << "\n" << setw(3) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) <<"30" << setw(4) << "31" << endl;
	}
	
	if (days == 30)
	{
	cout << "\n" << setw(11) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5";
	cout << "\n" << setw(3) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12";
	cout << "\n" << setw(3) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19";
	cout << "\n" << setw(3) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26";
	cout << "\n" << setw(3) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) <<"30" << endl;
	}
	
	if (days == 29)
	{
	cout << "\n" << setw(11) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5";
	cout << "\n" << setw(3) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12";
	cout << "\n" << setw(3) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19";
	cout << "\n" << setw(3) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26";
	cout << "\n" << setw(3) << "27" << setw(4) << "28" << setw(4) << "29" << endl;
	}
	
	if (days == 28)
	{
	cout << "\n" << setw(11) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5";
	cout << "\n" << setw(3) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12";
	cout << "\n" << setw(3) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19";
	cout << "\n" << setw(3) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26";
	cout << "\n" << setw(3) << "27" << setw(4) << "28" << endl;
	}

}
if (start == 4)
{
	if (days == 31)
	{
	cout << "\n" << setw(15) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4";
	cout << "\n" << setw(3) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11";
	cout << "\n" << setw(3) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18";
	cout << "\n" << setw(3) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25";
	cout << "\n" << setw(3) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) <<"30" << setw(4) << "31" << endl;
	}
	
	if (days == 30)
	{
	cout << "\n" << setw(15) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4";
	cout << "\n" << setw(3) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11";
	cout << "\n" << setw(3) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18";
	cout << "\n" << setw(3) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25";
	cout << "\n" << setw(3) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) <<"30" << endl;
		}
	
	if (days == 29)
	{
	cout << "\n" << setw(15) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4";
	cout << "\n" << setw(3) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11";
	cout << "\n" << setw(3) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18";
	cout << "\n" << setw(3) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25";
	cout << "\n" << setw(3) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << endl;
	}
	
	if (days == 28)
	{
	cout << "\n" << setw(15) << "1" << setw(4) <<"2" << setw(4) << "3" << setw(4) << "4";
	cout << "\n" << setw(3) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10" << setw(4) << "11";
	cout << "\n" << setw(3) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17" << setw(4) << "18";
	cout << "\n" << setw(3) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24" << setw(4) << "25";
	cout << "\n" << setw(3) << "26" << setw(4) << "27" << setw(4) << "28" << endl;
	}

}
if (start == 5)
{
	if (days == 31)
	{
	cout << "\n" << setw(19) << "1" << setw(4) <<"2" << setw(4) << "3";
	cout << "\n" << setw(3) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10";
	cout << "\n" << setw(3) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17";
	cout << "\n" << setw(3) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24";
	cout << "\n" << setw(3) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) <<"30" << setw(4) << "31" << endl;
	}
	
	if (days == 30)
	{
	cout << "\n" << setw(19) << "1" << setw(4) <<"2" << setw(4) << "3";
	cout << "\n" << setw(3) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10";
	cout << "\n" << setw(3) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17";
	cout << "\n" << setw(3) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24";
	cout << "\n" << setw(3) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) <<"30" << endl;
		}
	
	if (days == 29)
	{
	cout << "\n" << setw(19) << "1" << setw(4) <<"2" << setw(4) << "3";
	cout << "\n" << setw(3) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10";
	cout << "\n" << setw(3) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17";
	cout << "\n" << setw(3) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24";
	cout << "\n" << setw(3) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << endl;
}
	
	if (days == 28)
	{
	cout << "\n" << setw(19) << "1" << setw(4) <<"2" << setw(4) << "3";
	cout << "\n" << setw(3) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) <<"9" << setw(4) << "10";
	cout << "\n" << setw(3) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) <<"16" << setw(4) << "17";
	cout << "\n" << setw(3) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) <<"23" << setw(4) << "24";
	cout << "\n" << setw(3) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << endl;
	}

}
if (start == 6)
{
	if (days == 31)
	{
	cout << "\n" << setw(23) << "1" << setw(4) << "2";
	cout << "\n" << setw(3) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) << "9";
	cout << "\n" << setw(3) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) << "16";
	cout << "\n" << setw(3) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) << "23";
	cout << "\n" << setw(3) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) << "30";
	cout << "\n" << setw(3) << "31" << endl;
	}
	
	if (days == 30)
	{
	cout << "\n" << setw(23) << "1" << setw(4) <<"2";
	cout << "\n" << setw(3) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) << "9";
	cout << "\n" << setw(3) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) << "16";
	cout << "\n" << setw(3) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) << "23";
	cout << "\n" << setw(3) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << setw(4) << "30" << endl;		
	}
	
	if (days == 29)
	{
	cout << "\n" << setw(23) << "1" << setw(4) << "2";
	cout << "\n" << setw(3) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) << "9";
	cout << "\n" << setw(3) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) << "16";
	cout << "\n" << setw(3) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) << "23";
	cout << "\n" << setw(3) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29"<< endl;
	}
	
	if (days == 28)
	{
	cout << "\n" << setw(23) << "1" << setw(4) << "2";
	cout << "\n" << setw(3) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8" << setw(4) << "9";
	cout << "\n" << setw(3) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15" << setw(4) << "16";
	cout << "\n" << setw(3) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22" << setw(4) << "23";
	cout << "\n" << setw(3) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << endl;	
	}

}
if (start == 7)
{
	if (days == 31)
	{
	cout << "\n" << setw(27) << "1";
	cout << "\n" << setw(3) << "2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8";
	cout << "\n" << setw(3) << "9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15";
	cout << "\n" << setw(3) << "16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22";
	cout << "\n" << setw(3) << "23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29";
	cout << "\n" << setw(3) << "30" << setw(4) << "31" << endl;
	}
	
	if (days == 30)
	{
		cout << "\n" << setw(27) << "1";
	cout << "\n" << setw(3) << "2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8";
	cout << "\n" << setw(3) << "9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15";
	cout << "\n" << setw(3) << "16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22";
	cout << "\n" << setw(3) << "23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29";
	cout << "\n" << setw(3) << "30" << endl;
	}
	
	if (days == 29)
	{
	cout << "\n" << setw(27) << "1";
	cout << "\n" << setw(3) << "2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8";
	cout << "\n" << setw(3) << "9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15";
	cout << "\n" << setw(3) << "16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22";
	cout << "\n" << setw(3) << "23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << setw(4) << "29" << endl;
	}
	
	if (days == 28)
	{
	cout << "\n" << setw(27) << "1";
	cout << "\n" << setw(3) << "2" << setw(4) << "3" << setw(4) << "4" << setw(4) << "5" << setw(4) << "6" << setw(4) << "7" << setw(4) << "8";
	cout << "\n" << setw(3) << "9" << setw(4) << "10" << setw(4) << "11" << setw(4) << "12" << setw(4) << "13" << setw(4) << "14" << setw(4) << "15";
	cout << "\n" << setw(3) << "16" << setw(4) << "17" << setw(4) << "18" << setw(4) << "19" << setw(4) << "20" << setw(4) << "21" << setw(4) << "22";
	cout << "\n" << setw(3) << "23" << setw(4) << "24" << setw(4) << "25" << setw(4) << "26" << setw(4) << "27" << setw(4) << "28" << endl;
	}

}

return 0;
}
