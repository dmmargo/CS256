#include "stdafx.h"
#include <iostream>
//#include <fstream>
//#include <conio.h>

using namespace std;

class BankAccount {
public:
	double balance = 0.0;
	int deposits = 0;
	int withdrawals = 0;
	double annualinterestrate;
	double service_charge = 0;
	BankAccount();

	void deposit(double m);
	void withdraw(double m);
	void calcInt();
	virtual void monthlyProc();
};

BankAccount::BankAccount() {
	cout << "Enter the balance: ";
	cin >> balance;
	cout << "Enter interest rate: ";
	cin >> annualinterestrate;
}

//deposit class 
void BankAccount::deposit(double m) {
	balance += m;
	deposits++;
}
//withdraw class
void BankAccount::withdraw(double m) {
	balance -= m;
	withdrawals++;
}

//cakculate int class
void BankAccount::calcInt() {
	double monthly_interest_rate = annualinterestrate / 12;
	double monthly_interest = balance * monthly_interest_rate;
	balance = balance + monthly_interest;
}

//monthly proc class
void BankAccount::monthlyProc() {
	calcInt();
	balance -= service_charge;
	withdrawals = 0;
	deposits = 0;
	service_charge = 0;
}
//_________________________________________________

class Savings :public BankAccount {
	bool status; //False=Inactive=0 True=Active=1
public:
	void withdraw(double m);
	void deposit(double m);
	void monthlyProc();
};

class checking :public BankAccount {
public:
	void withdraw(double m);
	void monthlyProc();
};

void Savings::withdraw(double m) {
	if (status == 0)
		cout << "Sorry, you will not be able to withdraw, balance too low." << endl;
	if (status) {
		cout << "saving withdrawl" << endl;
		BankAccount::withdraw(m);
	}
	if (balance < 25)
		status = 0;
}
void Savings::deposit(double m) {
	if (m + balance > 25) {
		status = 1;
		cout << "saving deposit" << endl;
		BankAccount::deposit(m);
	}
}
void Savings::monthlyProc() {
	if (withdrawals > 4) {
		service_charge = withdrawals - 4;
	}
	if (balance < 25)
		status = 0;
	cout << "Service Charges:   " << service_charge << endl;
	BankAccount::monthlyProc();
}

void checking::withdraw(double m) {
	if (balance - m < 0) {
		balance -= 15;
		service_charge += 15;
	}
	BankAccount::withdraw(m);
}

void checking::monthlyProc() {
	service_charge += 5 + .1*withdrawals;
	cout << "Service Charges:   " << service_charge << endl;
	//outfile << "Service Charges:   " << service_charge << endl;
	BankAccount::monthlyProc();
}

void Menu(Savings& S, checking& C) {
	int choice = 0;
	
	while (choice != 6) {
		cout << "Choose one of the following" << endl << endl;
		cout << "1. Deposit To Savings" << endl;
		cout << "2. Deposit To Checking" << endl;
		cout << "3. Withdrawl From Savings" << endl;
		cout << "4. Withdrawl from Checking" << endl;
		cout << "5. Display Account Infomration" << endl;
		cout << "6. Exit" << endl << endl;
		cout << "Your choice, please (1-6) ";
		cin >> choice;
		double deposit;
		double withdraw;
		if (choice == 1) {
			cout << "Enter amount to deposit: " << endl;
			cin >> deposit;
			S.deposit(deposit);
			cout << "Your balance is " << S.balance << endl;
		}
			
		if (choice == 2) {
			cout << "Enter amount to deposit: " << endl;
			cin >> deposit;
			C.deposit(deposit);
			cout << "Your balance is " << C.balance << endl;
		}
		if (choice == 3) {
			cout << "Enter amount to withdraw: " << endl;
			cin >> withdraw;
			S.withdraw(withdraw);
			cout << "Your balance is " << S.balance << endl;
		}
		if (choice == 4) {
			cout << "Enter amount to withdraw: " << endl;
			cin >> withdraw;
			C.withdraw(withdraw);
			cout << "Your balance is " << C.balance << endl;
		}
		if (choice == 5) {
			cout << "SAVINGS ACCOUNT MONTHLY STATISTICS:" << endl;
			cout << "Withdrawals:   " << S.withdrawals << endl;
			cout << "Deposits:   " << S.deposits << endl;
			S.monthlyProc();
			cout << "Ending Balance:   " << S.balance << endl;

			cout << "CHECKING ACCOUNT MONTHLY STATISTICS:" << endl;
			cout << "Withdrawals:   " << C.withdrawals << endl;
			cout << "Deposits:   " << C.deposits << endl;
			C.monthlyProc();
			cout << "Ending Balance:   " << C.balance << endl;
		}
	}

};


int main()
{
	cout << "Enter Saving Information: " << endl;
	Savings S;
	cout << endl;
	cout << "Enter Checking Information: " << endl;
	checking C;
	cout << endl;

	Menu(S, C);
	return 0;
}