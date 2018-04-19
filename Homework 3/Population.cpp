<<<<<<< HEAD
/*
 Modify Programming Challenge 16 to also consider the effect on population 
 caused by people moving into or out of a geographic area. Given as input 
 a starting population size, the annual birth rate, the annual death rate, 
 the number of individuals who typically move into the area each year, and 
 the number of individuals who typically leave the area each year, the program 
 should project what the population will be  numYears from now. You can either 
 prompt the user to input a value for  numYears, or you can set it within the program. 
 
 Input Validation: Do not accept numbers less than 2 for the starting size. 
 Do not accept negative numbers for birth rate, death rate, arrivals, or departures. 
 */
 
 #include <iostream>
using namespace std;

int main() {
	int population, numyears, newPop;
	double birthrate, deathrate;

	cout << "Welcome to Population program\n";
	cout << "Starting population size?: "; 
	cin >> population;
	cout << "Anual Birth Rate?: "; 
	cin >> birthrate;
	cout << "Annual death rate?: ";
	cin >> deathrate;
	
	cout << "Amount of years to be calculated?: ";
	cin >> numyears;

	if ((population > 2) && ((birthrate && deathrate) >= 0) && (numyears >= 1)) {
		newPop = population + birthrate * population - deathrate * population;
		//N = P + BP − DP 
		cout << "New Population: " << newPop << "\n";
	}
	else {
		cout << "Please enter valid numbers\n";
		cout << "Starting population should be more than 2.\n";
		cout << "No negative numbers for either rate.\n";
		cout << "Minimum number of 1 year for years.\n";
	}
	return 0;
=======
/*
 Modify Programming Challenge 16 to also consider the effect on population 
 caused by people moving into or out of a geographic area. Given as input 
 a starting population size, the annual birth rate, the annual death rate, 
 the number of individuals who typically move into the area each year, and 
 the number of individuals who typically leave the area each year, the program 
 should project what the population will be  numYears from now. You can either 
 prompt the user to input a value for  numYears, or you can set it within the program. 
 
 Input Validation: Do not accept numbers less than 2 for the starting size. 
 Do not accept negative numbers for birth rate, death rate, arrivals, or departures. 
 */
 
 #include <iostream>
using namespace std;

int main() {
	int population, numyears, newPop;
	double birthrate, deathrate;

	cout << "Welcome to Population program\n";
	cout << "Starting population size?: "; 
	cin >> population;
	cout << "Anual Birth Rate?: "; 
	cin >> birthrate;
	cout << "Annual death rate?: ";
	cin >> deathrate;
	
	cout << "Amount of years to be calculated?: ";
	cin >> numyears;

	if ((population > 2) && ((birthrate && deathrate) >= 0) && (numyears >= 1)) {
		newPop = population + birthrate * population - deathrate * population;
		//N = P + BP − DP 
		cout << "New Population: " << newPop << "\n";
	}
	else {
		cout << "Please enter valid numbers\n";
		cout << "Starting population should be more than 2.\n";
		cout << "No negative numbers for either rate.\n";
		cout << "Minimum number of 1 year for years.\n";
	}
	return 0;
>>>>>>> 3946b6488f4ada51f77b082df864c9831430f9d2
}