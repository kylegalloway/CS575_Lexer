// Author: Zachary Mollett
// Assignment Number: 9


#include <iostream>
#include <string>
using namespace std;

void sort(string words[], int num);

int main(void)
{
const int NUM_WORDS = 12; // max # words
string words[NUM_WORDS]; // sets an array of strings at max for # words

for (int i=0; i < NUM_WORDS; i++) // loops until the string array index hits 11
{
	cout << "Enter a word: ";
	cin >> words[i]; // sets the index array string to the user entered value
	
	if (words[i] == "0") // if user enters zero
	{
		words[i] = '\0'; // set the array at index to null(empty), then break loop
		break;
	}

}

sort(words, NUM_WORDS); // sends the arrays to sort

cout << "Your sorted list is: ";
for (int i=0; i < NUM_WORDS; i++) //loops same amount of times as before
{
if (words[i]!= "\0"){cout << words[i] << " ";} // checks for null arrays and only prints those that are not null.
}
cout << endl;

return 0;
}

void sort(string words[], int num)
{
string temp;

for (int i = 0; i < num - 1; i++) // loops to less than 11
{
	for (int j = i + 1; j < num; j++) // loops to less than 12
	{
		if (words[i].compare(words[j]) > 0) // compares strings at both indices of array. If greater than zero means it needs to swap the values.
		{
			temp = words[i]; // sets temp to first string index.
			words[i] = words[j]; // sets the original index string to the next index string.
			words[j] = temp; // sets the next index to the original as saved before.
		}


	}
}

}
