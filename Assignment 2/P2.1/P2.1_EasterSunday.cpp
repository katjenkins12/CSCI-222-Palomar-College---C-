#include <iostream>
#include <iomanip>

using namespace std;

/*
*
Easter Sunday is the first Sunday after the first full moon of spring. 
To compute the date, you can use this algorithm, invented by the mathematician Carl Friedrich
Gauss in 1800:

1. Let y be the year (such as 1800 or 2001).
2. Divide y by 19 and call the remainder a. Ignore the quotient.
3. Divide y by 100 to get a quotient b and a remainder c.
4. Divide b by 4 to get a quotient d and a remainder e.
5. Divide 8 * b + 13 by 25 to get a quotient g. Ignore the remainder.
6. Divide 19 * a + b - d - g + 15 by 30 to get a remainder h. Ignore the quotient.
7. Divide c by 4 to get a quotient j and a remainder k.
8. Divide a + 11 * h by 319 to get a quotient m. Ignore the remainder.
9. Divide 2 * e + 2 * j - k - h + m + 32 by 7 to get a remainder r. Ignore the quotient.
10. Divide h - m + r + 90 by 25 to get a quotient n. Ignore the remainder.
11. Divide h - m + r + n + 19 by 32 to get a remainder p. Ignore the quotient.

Then Easter falls on day p of month n. For example, if y is 2001:

a = 6     g = 6    m = 0     n = 4
b = 20,   c = 1    h = 18    r = 6    p = 15
d = 5,    e = 0    j = 0,    k = 1

Therefore, in 2001, Easter Sunday fell on April 15. Write a program that prompts the
user for a year and prints out the month and day of Easter Sunday.


A coding project by: Katelyn Jenkins :)

*
*/

int main()
{
	// Name of program intoduction
	cout << "******************************\n";
	cout << "Computing Easter Sunday's Date\n";
	cout << "******************************\n";
	cout << "----- By Katelyn Jenkins -----\n";
	cout << "******************************\n";

	// 1: Let y be the year (such as 1800 or 2001).

	cout << "Please enter the current year: "; // Display prompt for user input
	int y; // int declaration of current year
	cin >> y;
	cout << "y: " << y << endl;

	// 2: Divide y by 19 and call the remainder a. Ignore the quotient.

	int a = y / 19; 
	cout << "a: " << a << endl;

	// 3: Divide y by 100 to get a quotient b and a remainder c.

	int b = y / 100; 
	int c = y % 100;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;

	// 4: Divide b by 4 to get a quotient d and a remainder e.

	int d = b / 4;
	int e = b % 4;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;

	// 5: Divide 8 * b + 13 by 25 to get a quotient g. Ignore the remainder.

	int g = (8 * b + 13) / 25;
	cout << "g: " << g << endl;

	// 6: Divide 19 * a + b - d - g + 15 by 30 to get a remainder h. Ignore the quotient.

	int h = (19 * a + b - d - g + 15) / 30;
	cout << "h: " << h << endl;

	// 7: Divide c by 4 to get a quotient j and a remainder k.

	int j = c / 4;
	int k = c % 4;
	cout << "j: " << j << endl;
	cout << "k: " << k << endl;

	// 8: Divide a + 11 * h by 319 to get a quotient m. Ignore the remainder.

	int m = (a + 11 * h) / 319;
	cout << "m: " << m << endl;

	// 9: Divide 2 * e + 2 * j - k - h + m + 32 by 7 to get a remainder r. Ignore the quotient.

	int r = (2 * e + 2 * j - k - h + m + 32) / 7;
	cout << "r: " << r << endl;

	// 10: Divide h - m + r + 90 by 25 to get a quotient n. Ignore the remainder.

	int n = (h - m + r + 90) / 25;
	cout << "n: " << n << endl;

	// 11: Divide h - m + r + n + 19 by 32 to get a remainder p. Ignore the quotient.
	
	int p = (h - m + r + n + 19) / 32;
	cout << "p: " << p << endl;

	// Print out the month (n) and day (p) of Easter Sunday
	cout << "\nEaster Sunday of year " << y << " will fall on\n";
	cout << "Month: " << n << endl;
	cout << "Day: " << p << endl;

	return 0;
}