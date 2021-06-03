#include <iostream>
#include <string>

using namespace std;

/*
* 
Write a program that prints the message, �Hello, my name is Hal!� 
Then, on a new line, the program should print the message �What would you like me to do?� 
Then it�s the user�s turn to type in an input. 
You haven�t yet learned how to do it�just use the following lines of code:

string user_input;
getline(cin, user_input);

Finally, the program should ignore the user input and print the message �I am sorry, I cannot do that.�
This program uses the string data type. 
To access this feature, you must place the line

#include <string>

before the main function.
Here is a typical program run:

Hello, my name is Hal!
What would you like me to do?
Clean up my room
I am sorry, I cannot do that.

When running the program, remember to press the Enter key after typing the last
word of the input line.


Code by: Katelyn Jenkins :)

*
*/

int main()
{
	// Text output to the console
	cout << "Hello my name is Hal!\n";
	cout << "What would you like me to do?\n";

	// getline stores user input from the console
	// user's turn to type in an input
	string user_input;
	getline(cin, user_input);

	// user input ignored, no matter what, program outputs:
	cout << "I am sorry, I cannot do that.";

	// program end
	return 0;
}