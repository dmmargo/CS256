#include "stdafx.h"
#include Circle.h"
#include <iostream>

#include <string> //String class to use string objects
using namespace std; //standard namespace being used

const double PI = 3.14159;

Circle::Circle(double r) {
	radius = r;
}
Circle::Circle() {
	radius = 0.0;
}

//Setters

void Circle::setRadius(double r)
{
	radius = r;
}

//Getters
double Circle::getRadius() {
	return radius;
}
double Circle::getArea() {
	return (PI*radius*radius); // area = pi * radius*radius
}
double Circle::getDiameter() {
	return (radius * 2); //diameter = radius *2
}
double Circle::getCircumfrance() {
	return (2 * PI * radius); //circumfrance = 2 * pi * radius
}
