/*
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
*/

#include <stdio.h>

int main()
{
	double patronMeal = 88.67;
	double tax = (patronMeal * 0.0675);
	double tip = (tax + patronMeal) * 0.2;
	double total = tip + tax + patronMeal;
	printf("Meal Cost: $%.2f\n", patronMeal);
	printf("Tax Amount: $%.2f\n", tax);
	printf("Tip Amount: $%.2f\n", tip);
	printf("Total Bill: $%.2f", total);
	
	return 0;
}
