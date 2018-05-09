#pragma once
//#indef Circle_H
//#define Circle_H
//ALL THE CODE WE ARE WRITING BELOW
//#endif

#include <string> //this allows me to use string objects
using namespace std;

class Circle {
private:
	double radius = 0.0;

public:
	//constructor
	Circle(double r);
	Circle();


	// setters or accessors
	void setRadius(double r);

	//getters or mutator
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumfrance();


};