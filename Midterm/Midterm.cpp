<<<<<<< HEAD
#include "stdafx.h"
#include <iostream> 
#include <string> 
#include <vector>
using namespace std;

class Human {
private:
	string name;
	int age;
	char sex;
	//Human();
protected:
	Human(string n, int a, char c);
public:
	Human() { //move to private (default constructor)
		name = "";
		age = 0;
		sex = ' ';
	}

	//setters
	void setName(string n) {
		name = n;
	}
	void setAge(int a) {
		age = a;
	}
	void setSex(char c) {
		sex = c;
	}

	//getters
	string getName() {
		return name;
	}	
	int getAge() {
		return age;
	}
	char getSex() {
		return sex;
	}

	virtual void work();


	// friend classes to be able to access the private variables 
	friend void Parent();
	friend void Child();



	void print() {
		cout << "Input the following information: " << endl;
		cout << "Name: " << getName() << endl;
		cout << "Age: " << getAge() << endl;
		cout << "Sex: " << getSex() << endl;
	}

};


class Parent :public Human {
private:
	string pname;
	//vector<Child> children = {"lisa", "bart", "maggie"};
	//Parent mom;
	//Parent dad;
public:
	Parent() { //default
		pname = "";
	}
	//setter
	void name(string name) {
		pname = name;
	}
	//getter
	string getNameofP() {
		return pname;
	}
	/*
	Child(string mom, string dad) //constructor will have 2 input parent arguments for Mom and Dad
	{
		Parent = mom;
		Parent = dad;
	}
	*/
	void print() {
		cout << "Parent's name: " << getNameofP() << endl;
	}
};

class Child :public Human {
private:
	Parent Mom;
	Parent Dad;
	string cname;
	//Child();
public:
	Child() {
		cname = "";
	}
	//setter
	void name(string name) {
		cname = name;
	}
	//getter
	string getNameofC() {
		return cname;
	}

	void print() {
		cout << "Child's name: " << getNameofC() << endl;
	}
	
};
void Human::work()
{
	string work = "";
}

void PrintWork(Human&w) {
	string work = "";
	w.work();

}


int main() {
	string name;
	int age;
	char sex;
	string work;
	Human info;
	
	cout << "Simpson's Family: " << endl;
	cout << "Enter the information you know about the Simpsons Family" << endl;

	for (int i = 0; i < 5; i++) {

		cout << "Simpson's name: ";
		cin >> name;
		info.setName(name);

		cout << "Their age: ";
		cin >> age;
		info.setAge(age);

		cout << "Enter sex(M or F): ";
		cin >> sex;
		info.setSex(sex);

		cout << "Enter work: ";
		cin >> work;
		//Person d(work);


		cout << endl;

		cout << "Person Info: " << endl;
		cout << "Name: " << info.getName() << endl;
		cout << "Age: " << info.getAge() << endl;
		cout << "Sex: " << info.getSex() << endl; 
		cout << "work: " << work << endl << endl;
		//printf("%s\n", d.work().c_str());
	}

	return 0;
}
=======
#include "stdafx.h"
#include <iostream> 
#include <string> 
#include <vector>
using namespace std;

class Human {
private:
	string name;
	int age;
	char sex;
	//Human();
protected:
	Human(string n, int a, char c);
public:
	Human() { //move to private (default constructor)
		name = "";
		age = 0;
		sex = ' ';
	}

	//setters
	void setName(string n) {
		name = n;
	}
	void setAge(int a) {
		age = a;
	}
	void setSex(char c) {
		sex = c;
	}

	//getters
	string getName() {
		return name;
	}	
	int getAge() {
		return age;
	}
	char getSex() {
		return sex;
	}

	virtual void work();


	// friend classes to be able to access the private variables 
	friend void Parent();
	friend void Child();



	void print() {
		cout << "Input the following information: " << endl;
		cout << "Name: " << getName() << endl;
		cout << "Age: " << getAge() << endl;
		cout << "Sex: " << getSex() << endl;
	}

};


class Parent :public Human {
private:
	string pname;
	//vector<Child> children = {"lisa", "bart", "maggie"};
	//Parent mom;
	//Parent dad;
public:
	Parent() { //default
		pname = "";
	}
	//setter
	void name(string name) {
		pname = name;
	}
	//getter
	string getNameofP() {
		return pname;
	}
	/*
	Child(string mom, string dad) //constructor will have 2 input parent arguments for Mom and Dad
	{
		Parent = mom;
		Parent = dad;
	}
	*/
	void print() {
		cout << "Parent's name: " << getNameofP() << endl;
	}
};

class Child :public Human {
private:
	Parent Mom;
	Parent Dad;
	string cname;
	//Child();
public:
	Child() {
		cname = "";
	}
	//setter
	void name(string name) {
		cname = name;
	}
	//getter
	string getNameofC() {
		return cname;
	}

	void print() {
		cout << "Child's name: " << getNameofC() << endl;
	}
	
};
void Human::work()
{
	string work = "";
}

void PrintWork(Human&w) {
	string work = "";
	w.work();

}


int main() {
	string name;
	int age;
	char sex;
	string work;
	Human info;
	
	cout << "Simpson's Family: " << endl;
	cout << "Enter the information you know about the Simpsons Family" << endl;

	for (int i = 0; i < 5; i++) {

		cout << "Simpson's name: ";
		cin >> name;
		info.setName(name);

		cout << "Their age: ";
		cin >> age;
		info.setAge(age);

		cout << "Enter sex(M or F): ";
		cin >> sex;
		info.setSex(sex);

		cout << "Enter work: ";
		cin >> work;
		//Person d(work);


		cout << endl;

		cout << "Person Info: " << endl;
		cout << "Name: " << info.getName() << endl;
		cout << "Age: " << info.getAge() << endl;
		cout << "Sex: " << info.getSex() << endl; 
		cout << "work: " << work << endl << endl;
		//printf("%s\n", d.work().c_str());
	}

	return 0;
}
>>>>>>> f75479222278fdfe8c7bc97481b62730227457d8
