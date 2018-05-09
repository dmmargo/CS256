#include "stdafx.h"
#include <iostream>
using namespace std;

class Dice {
public:
	int sides;
	Dice() {
		sides = 6;
	}
	int roll() {
		return rand() % sides + 1;
	}
};

int main() {
	Dice d1, d2;
	int player = 0;
	int cpu = 0;
	while (true) {
		int yes;
		cout << "Do you want to roll dice and accumulate points? (Enter 1 for yes): ";
		cin >> yes;
		if (yes != 1) break;
		cpu += d1.roll() + d2.roll();
		player += d1.roll() + d2.roll();
		cout << "Your current total is " << player << "\n";
		if (player > 21) break;
	}
	cout << "Your total: " << player << "\n";
	cout << "Computer total: " << cpu << "\n";
	if (player <= 21 && player == cpu) {
		cout << "Match tie\n";
	}
	else if (player <= 21 && player > cpu) {
		cout << "You win\n";
	}
	else {
		cout << "You lose because your total got over 21\n";
	}
}