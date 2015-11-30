// Author: Zachary Mollett
// Assignment Number: 8


#include <iostream>
#include <fstream>
using namespace std;

void show_warmer(double temperature[][24], int days, double cutoff);
void show_warmest(double temperature[][24], int days);
void find_daily_mmm(double day_temps[], double &max, double &min, double &mean);

int main(void)
{

int i, j;
double celcius[7][24], f_temp, c_temp, cutoff, max, min, mean;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

ifstream temps;
temps.open("temperature.dat");
if (temps.fail())
{
	cout << "File open failure." << endl; // Reads out an error message if file doesn't open.
	return -1;
}

for (i=0; i < 7; i++) // loops 6 times
{
	for (j = 0; j < 24; j++) // loops 23 times
	{
		temps >> f_temp; // reads in from file sets to variable f_temp.
		c_temp = (((f_temp - 32) * 5) / 9); // converts f_temp to celcius and stores it in c_temp.
		celcius[i][j] = c_temp; // enters the value of c_temp into each index of the loops i (0-6) and j (0-23).
		
		if (celcius[i][j] == '\0') {break;} // checks for null at end of each array and breaks to run the next loop of index i.
	}
}
temps.close(); // closes the data file.


cout << "\n\nEnter the value for which to find warmer temperatures (C): ";
cin >> cutoff;
show_warmer(celcius, 7, cutoff);
show_warmest(celcius, 7);

cout << "The maximum, minimum and mean temperatures for each day:\n\n";

for (int i=0;i < 7; i++) // loops 6 times
{
	find_daily_mmm(celcius[i], max, min, mean); //sends 24 values to the function, we don't use max, min, mean until after the function runs.
	int x= i+1; //reference used for day.
	cout << "Day " << x << ":  max " << max << " C,  min " << min << " C,  mean " << mean << " C." << endl;
}
cout << "\n\n"; // making space for cleanliness.

return 0;
}

void show_warmer(double temperature[][24], int days, double cutoff)
{
	int once=0, check=0;
	
	for (int i=0; i<days; i++) // loops less than days.
	{
		for (int j=0; j<24; j++) // loops 23 times
		{
			if (temperature[i][j] > cutoff) // checks whether the value within the array is larger than the user entered one.
			{
				if (once < 1){cout << "\nTimes at which temperatures warmer than "<< cutoff << " were found:\n" << endl;} // prints once, but only if loop condition is true
				int x = (i + 1), y = (j + 1); // used for reference on day and hour.
				cout << "At day " << x << ", hour " << y << ", the temperature was " << temperature[i][j] << " C." << endl;
				once++;
			}
			else {check++;}
			
			if (temperature[i][j] == '\0') {break;} // makes sure to break the loop when at the end of the array.
		}
	}
	
	if (check > 167) {cout << "\nSorry there were no temperatures warmer than " << cutoff << "." << endl;} // prints error if no temperatures were greater.
}

void show_warmest(double temperature[][24], int days)
{
int x=0, y=0;
double high=0, test=0;
	for (int i=0; i<days; i++) // loops less than days.
	{
		for (int j=0; j<24; j++) // loops 23 times
		{
			
			test = temperature[i][j];
			if (test > high)
			{
				high = test;
				x = (i + 1); // sets the reference for day
				y = (j + 1); // sets the reference for hour
			}
			if (temperature[i][j] == '\0') {break;} // makes sure to break the loop when at the end of the array.
		}
	}
	
cout << "\nThe warmest temperature was:\n";
cout << "\nAt day " << x << ", hour " << y << ", the temperature was " << high << " C.\n" << endl;
}

void find_daily_mmm(double day_temps[], double &max, double &min, double &mean)
{
	double sum;
	max=day_temps[0], min=day_temps[0]; // sets max and min to the first value of array.
	
	for (int i=1; i<23; i++) // loops 22 times.
	{
		if (day_temps[i] > max) {max = day_temps[i];} // sets max by comparing to each entry of array, if larger records that value.
	}
	
	for (int i=1; i<23; i++) // loops 22 times.
	{
		if (day_temps[i] < min) {min = day_temps[i];} // sets min by comparing to each entry of array, if smaller records that value.
	}
	
	for (int i=0; i<24; i++) // loops 23 times.
	{
		sum += day_temps[i]; // adds together each member of array.
	}
	mean = (sum / 24); // sets the mean to the sum divided by the size of the array which is 24.
	
}
