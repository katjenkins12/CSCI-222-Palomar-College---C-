#include <iostream>

using namespace std;

/*
*
Write a program that helps a person decide whether to buy a hybrid car. 
Your program’s inputs should be:

• The cost of a new car
• The estimated miles driven per year
• The estimated gas price
• The estimated resale value after 5 years

Compute the total cost of owning the car for 5 years.
(For simplicity, we will not take the cost of financing into account.)
Obtain realistic prices for a new and used hybrid and a comparable car from the Web.
Run your program twice, using today’s gas price and 15,000 miles per year.
Include pseudocode and the program runs with your assignment.


A coding project by: Katelyn Jenkins :)

*
*/

int main()
{
	// Name of program intoduction
	cout << "**********************\n";
	cout << "Should I Buy a Hybrid?\n";
	cout << "**********************\n";
	cout << "- By Katelyn Jenkins -\n";
	cout << "**********************\n";

	// initialized values
	double cost, estMiles, gasPrice, mpg, 
				resale, efficiency, milesDriven, usedCarCost, total;

	cout << "\nHello! I see you're looking to buy a new car!";
	cout << "\nCongratuations, allow me to help you with that.";

	// Cost of new car

	cout << "\n\nEnter the cost of the car: $";
	cin >> cost;

	// Estimated miles driven per year

	cout << "Enter the miles you intend to travel per year: ";
	cin >> estMiles;

	// Estimated gas price

	cout << "Enter the current gas price where you live: $";
	cin >> gasPrice;

	cout << "Enter the MPG: ";
	cin >> mpg;

	// Estimated resale value after 5 years

	// According to BudgetDirect, 
	// Typical depreciation rates: 58% in three years, 
	//							   49% in four years,
	//							   and 40% in five years.
	resale = cost * 0.4;

	// Compute total cost of owning the car for 5 years

	// Price per mile
	efficiency = gasPrice / mpg;

	// Total cost of gas for a year of traveling by car
	milesDriven = estMiles * efficiency;

	// Cost depreciated car
	usedCarCost = cost - resale;

	// The total cost of owning a car
	total = usedCarCost + milesDriven;

	cout << "\nThe total cost of owning the car for five years is: $" << total;
	cout << "\n\nSafe travels!!";
	cout << "Stay awesome and check your mirrors for opportunities coming along the way. :) \n";

	return 0;
}