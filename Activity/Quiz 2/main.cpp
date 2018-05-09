#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	double radius;
	Circle User;

	//Finish Marks info

	cout << "what is your radius going to be? " << endl;
	cin >> radius;

	User.setRadius(radius);

	cout << "R\t" << "A\t" << "D\t" << "C" << endl;
	cout << User.getRadius() << "\t" << User.getArea() << "\t" << User.getDiameter << "\t" << User.getCircumfrance << endl;
	
	return 0;
}