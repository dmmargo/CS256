#pragma once
#ifndef BIGNUMBER_H
#define BIGNUMBER_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class BigNumber {
public:
	BigNumber(string number);
	BigNumber(long long number);

	BigNumber add(BigNumber other);
	BigNumber subtract(BigNumber other);
	BigNumber multiply(BigNumber other);
	BigNumber divide(BigNumber other);

	string getString();

	BigNumber setString(const string &newStr);

	BigNumber negate();

	BigNumber trimLeadingZeros();

	//check is BigNumber = current instance?
	bool equals(const BigNumber &other);
	bool equals(const long long &other);
	bool equals(const string &other);

	
	unsigned int digits(); //get number of digits
	bool isNegative() const; //check for negative instance
	bool isPositive(); //check for positiveinstance

	bool isEven(); //check if even number
	bool isOdd(); //check if odd number

	BigNumber abs() const; //get absolute value of instance

	//stream operators 
	friend ostream &operator<<(ostream &os, const BigNumber &num); 

	//addition operator 
	friend BigNumber operator+(BigNumber b1, const BigNumber &b2);
	friend BigNumber operator+(BigNumber b1, const long long &b2);
	friend BigNumber operator+(BigNumber b1, const string &b2);
	//@}

	//subtraction operators 
	friend BigNumber operator-(BigNumber b1, const BigNumber &b2);
	friend BigNumber operator-(BigNumber b1, const long long &b2);
	friend BigNumber operator-(BigNumber b1, const string &b2);

	//multiplication operators
	friend BigNumber operator*(BigNumber b1, const BigNumber &b2);
	friend BigNumber operator*(BigNumber b1, const long long &b2);
	friend BigNumber operator*(BigNumber b1, const string &b2);

	//division operators
	friend BigNumber operator/(BigNumber b1, const BigNumber &b2);
	friend BigNumber operator/(BigNumber b1, const long long &b2);
	friend BigNumber operator/(BigNumber b1, const string &b2);


	// Equality operator
	friend bool operator==(BigNumber b1, const BigNumber &b2);
	friend bool operator==(BigNumber b1, const long long &b2);
	friend bool operator==(BigNumber b1, const string &b2);

	//Greater-than operator
	friend bool operator>(BigNumber b1, const BigNumber &b2);

	//Less-than operator
	friend bool operator<(BigNumber b1, const BigNumber &b2);

	//Greater-than or equal-to operator
	friend bool operator>=(BigNumber b1, const BigNumber &b2);

	//Less-than or equal-to operator
	friend bool operator<=(BigNumber b1, const BigNumber &b2);

	//Assignment operator
	BigNumber& operator=(const BigNumber &other);
	BigNumber& operator=(const long long &other);
	BigNumber& operator=(const string &other);

	//Addition assignment operator
	BigNumber& operator+=(const BigNumber &other);
	BigNumber& operator+=(const long long &other);
	BigNumber& operator+=(const string &other);

	//Subtraction assignment operator
	BigNumber& operator-=(const BigNumber &other);
	BigNumber& operator-=(const long long &other);
	BigNumber& operator-=(const string &other);

	//Multiplication assignment operator
	BigNumber& operator*=(const BigNumber &other);
	BigNumber& operator*=(const long long &other);
	BigNumber& operator*=(const string &other);

	//Division assignment operator
	BigNumber& operator/=(const BigNumber &other);
	BigNumber& operator/=(const long long &other);
	BigNumber& operator/=(const string &other);

	//increments operator
	BigNumber& operator++();
	BigNumber operator++(int);

	//degrements operator
	BigNumber& operator--();
	BigNumber operator--(int);
	
	unsigned int operator[](int index); //set operator's index

private:
	string _numberString; //big number to string

	//different methods 
	BigNumber addll(const long long &other);
	BigNumber subtractll(const long long &other);
	BigNumber multiplyll(const long long &other);
	BigNumber dividell(const long long &other);

	//converts to string
	BigNumber addstr(const string &other);
	BigNumber subtractstr(const string  &other);
	BigNumber multiplystr(const string &other);
	BigNumber dividestr(const string &other);
};
#endif

