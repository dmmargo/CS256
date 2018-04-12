/*
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years
*/
#include <stdio.h>

int main()
{
	double rising = 1.5;
	double fiveyrs = rising * 5;
	double sevenyrs = rising * 7;
	double tenyrs = rising * 10;
	printf("Number of millimeters higher in 5 years: %.2f millimeters\n", fiveyrs);
	printf("Number of millimeters higher in 7 years: %.2f millimeters\n", sevenyrs);
	printf("Number of millimeters higher in 10 years: %.2f millimeters\n", tenyrs);

	return 0;
}
