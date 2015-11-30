// Author: Zachary Mollett
// Assignment Number: 7

#include <iostream>
#include <cstring>
using namespace std;

void find_binary(int num, char str[]); // function prototype to convert from decimal to binary.
int find_int(char str[]); // function prototype to convert from binary to decimal.

int main(void)
{
int num, choice, dec;
do {
char str[20] = "                   "; // sets the character array to 19 empty spaces.


cout << "Available Choices:" << endl; // choice menu.
cout << "1. Convert a decimal number to binary" << endl;
cout << "2. Convert a binary number to decimal" <<  endl;
cout << "3. Quit" << endl;

cout << "Please enter your choice: ";
cin >> choice;

switch(choice)
{
	case 1: cout << "Enter a number: "; // selects the option to convert decimal to binary.
			cin >> num; // sets the entered value as the decimal for conversion.
			find_binary(num, str); // function calls to convert the decimal value entered to a binary.
			cout << "The decimal number " << num << " has the binary format of ";
			for (int i=0; str[i] != '\0'; i++) // loops until null.
			{
				if(str[i] != ' '){cout << str[i];} // removes white space for print out of binary string, checks each index.
			}	
			cout << "." << endl; // prints out the original number then the string value as converted in the function.
			break; // breaks from the loop when complete.
	case 2: cout << "Enter a binary number: "; // selects the option to convert binary to decimal.
			cin >> str; // sets the entered value as the binary for conversion.
			dec = (find_int(str)); // sets the variable to equal the function call after conversion.
			cout << "The binary number " << str << " has the decimal value of " << dec << "." << endl; // prints out the original string as entered and then the function converted value.
			break; // breaks from the loop when complete.
	case 3: break; // selects the option to exit and breaks from loop.
}
} while (choice != 3);

return 0;

}

void find_binary(int num, char str[])
{
int size = strlen(str) - 1; // sets the value size to the length of the string minus one.
while (num > 0) // while the entered value is greater than zero loops.
{
str[size--] = num % 2 + '0'; // sets the last string value of the size minus one to the value entered modulus 2 and adds to it the character zero.
num	= num/2; // sets the next iterative of the loop for the value num as that previous value divided by two.
}

}

int find_int (char str[])
{
int size = strlen(str) - 1; // same as before.
int n= 0; // everything starts at zero.
for (int i=0; i <= size; i++) // loops until i is less than or equal to the string length minus one.
{ 
n = n*2 + (str[i] - '0'); // sets the looped value to initially zero times two then adds the character array at the zero index and subtracts the zero character from it. Each loop increments the string until 
}
 return n;
}
