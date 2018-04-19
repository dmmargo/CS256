<<<<<<< HEAD
#include <iostream>

using namespace std;

int main() {

	int choice;
	double radius, circle_area, rect_area, tri_area, width, length, base, height;
	double pi = 3.14159;

	cout << "Geometry Calculator\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "Enter your choice (1-4): \n";

	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Calculating the area of a circle\n";
		cout << "Enter radius: ";
		cin >> radius;
		if (radius >= 0) {
			circle_area = pi * (radius *radius);
			cout << "Circle Area: " << circle_area;
		}
		else {
			cout << "Enter a postive number";
		}
		break;
	case 2:
		cout << "\nCalculating the area of a rectangle\n";
		cout << "Enter width: ";
		cin >> width;
		cout << "Enter length: ";
		cin >> length;
		if (width >= 0 && length >= 0) {
			rect_area = length * width;
			cout << "Rectangle area: " << rect_area;
		}
		else {
			cout << "Enter postive numbers";
		}
		break;
	case 3:
		cout << "\nCalculating the area of a triangle\n";
		cout << "Enter base: ";
		cin >> base;
		cout << "Enter height: ";
		cin >> height;
		if (base >= 0 && height >= 0) {
			tri_area = base * height * .5;
			cout << "Triangle area: " << tri_area;
		}
		else {
			cout << "Enter postive numbers";
		}
		break;
	case 4:
		cout << "Goodbye.";
		break;
	default:
		cout << "Error: Invalid Number. Choose something from 1 - 4";
		break;

		return 0;
	}
=======
#include <iostream>

using namespace std;

int main() {

	int choice;
	double radius, circle_area, rect_area, tri_area, width, length, base, height;
	double pi = 3.14159;

	cout << "Geometry Calculator\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "Enter your choice (1-4): \n";

	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Calculating the area of a circle\n";
		cout << "Enter radius: ";
		cin >> radius;
		if (radius >= 0) {
			circle_area = pi * (radius *radius);
			cout << "Circle Area: " << circle_area;
		}
		else {
			cout << "Enter a postive number";
		}
		break;
	case 2:
		cout << "\nCalculating the area of a rectangle\n";
		cout << "Enter width: ";
		cin >> width;
		cout << "Enter length: ";
		cin >> length;
		if (width >= 0 && length >= 0) {
			rect_area = length * width;
			cout << "Rectangle area: " << rect_area;
		}
		else {
			cout << "Enter postive numbers";
		}
		break;
	case 3:
		cout << "\nCalculating the area of a triangle\n";
		cout << "Enter base: ";
		cin >> base;
		cout << "Enter height: ";
		cin >> height;
		if (base >= 0 && height >= 0) {
			tri_area = base * height * .5;
			cout << "Triangle area: " << tri_area;
		}
		else {
			cout << "Enter postive numbers";
		}
		break;
	case 4:
		cout << "Goodbye.";
		break;
	default:
		cout << "Error: Invalid Number. Choose something from 1 - 4";
		break;

		return 0;
	}
>>>>>>> 3946b6488f4ada51f77b082df864c9831430f9d2
}