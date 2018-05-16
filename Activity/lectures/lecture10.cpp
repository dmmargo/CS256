
//**********************************************************************
//PASS BY VALUE
#include "stdafx.h"
#include <iostream>
using namespace std;

void func(int);

int main()
{
int x = 7;
func(x);
return 0;
}

void func(int a) {
cout << a << endl;
} 

//*************************************************************

//PASS BY POINTER
#include "stdafx.h" 
#include <iostream> 

using namespace std;

void func(int);
void funcptr(const int *); // this is a prototype

int main()

{
	int x = 7;
	func(x);	//pass copy of X 
	funcptr(&x);	//pass address of x 
	return 0;
}

void func(int a) {
	cout << a << endl;
}

void funcptr(const int *a) {
	if (a) {
		cout << a << endl; // a should porint to something other then null
	}
}

//****************************************************************************
//PASS BY REFERENCE 

#include "stdafx.h" 
#include <iostream> 

using namespace std;

void func(int);
void funcptr(const int *);
void funcref(int &);

int main()
{
	int x = 7;
	func(x);	//pass copy of X 
	funcptr(&x);	//pass address of x 
	funcref(x);	//pass address of x 
	return 0;
}


void func(int a) {
	cout << a << endl;
}

void funcptr(const int * a) {
	if (a)
	{
		cout << a << endl;
	}
}

void funcref(int & a) { //this is read onlt i cannot change value
	cout << a << endl;
}

//***********************************************************************

//REURN FUNCTION POINTER 
#include "stdafx.h" 
#include <iostream> 
using namespace std;
int * FuncPtrReturn();

int main()
{
	cout << "adr:" << FuncPtrReturn() << "\tdata:" << *(FuncPtrReturn()) << endl; //* in front of (FuncPtr ....) dereferences 
	return 0;
}

int * FuncPtrReturn() {
	//do not return local variables as they will get deallocated on return 
	static int b = 5;
	return &b;
}

//******************************************************************************

//RETURN REFERENCE 
#include "stdafx.h" 
#include <iostream> 
using namespace std;

int * funcPtrReturn();
int & funcRefReturn();
int main()
{
	cout << "adr:" << funcPtrReturn() << "\tdata:" << *(funcPtrReturn()) << endl;
	cout << "adr:" << &(funcRefReturn()) << "\tdata:" << funcRefReturn() << endl;
	return 0;
}

int * funcPtrReturn() {
	//do not return local variables as they will get deallocated on return 
	static int b = 5;
	return &b;
}

int & funcRefReturn() {
	//do not return local variables as they will get deallocated on return 
	static int b = 8;
	return b;
}


//***************************************************************************

//DECLARE AND ASSIGN FUNCTION POINTER 
#include "stdafx.h" 
#include <cstdio> 
using namespace std;

void func()
{
	puts("this is func()");
}

int main(int argc, char ** argv)

{
	void(*fp)() = func; //declare a function pointer return type void no input assign to func() 

	puts("this is main()");
	fp();
	return 0;
}

//***************************************************************

//USEFUL FUNCTION POINTER 
#include "stdafx.h" 
#include <cstdio> 
using namespace std;

const char * prompt(); 
int jump(const char *);

//function definitions
void fa() { puts("this is fa()"); }
void fb() { puts("this is fb()"); }
void fc() { puts("this is fc()"); }
void fd() { puts("this is fd()"); }
void fe() { puts("this is fe()"); }
void ff() { puts("this is ff()"); }

//array of function pointers
void(*funcs[])() = { fa, fb, fc, fd, fe, nullptr };

int main(int argc, char ** argv) {
	while (jump(prompt()));
	puts("\nDone.");
	return 0;
}

const char * prompt() {

	puts("Choose an option:");
	
	puts("1. Function fa()");
	puts("2. Function fb()");
	puts("3. Function fc()");
	puts("4. Function fd()");
	puts("5. Function fe()");
	puts("Q. Quit.");
	printf(">> ");

	fflush(stdout);                 // flush after prompt 
	const int buffsz = 16;          // constant for buffer size 
	static char response[buffsz];   // static storage for response buffer 
	fgets(response, buffsz, stdin); // defined in stdio library get response from console 
	return response;
}

int jump(const char * rs) {
	char code = rs[0];
	if (code == 'q' || code == 'Q') return 0;
	// count the length of the funcs array 
	int func_length = 0;

	while (funcs[func_length] != NULL) func_length++; 
	int i = (int)code - '0';   // convert ASCII numeral to int 
	i--;        // list is zero-based 
	if (i < 0 || i >= func_length) {
		puts("invalid choice");
		return 1;
	}
	else {
		funcs[i]();
		return 1;
	}
}

//*****************************************************************************


compile time - program not running 
runtime -  program running and want ot do something 

statically declaration--> go to ram->stack->know variable and type (knowing all the information), but sometimes you don't know everything.

Dynamic Memory:
positive: memory efficient
negative: slower than -compiler time declaration- (statically declared)
postitive: memory efficient relation

c: m allocation
c++: new
delete


//*******************************************************************************

//Dynamic Memory allocation 
#include "stdafx.h" 
#include <iostream> 
using namespace std;
//NOTE: in C you use malloc()  to dynamically allocate memory  stands for memory allocate 

int main()
{
	//Need something to point to HEAP 
	int* var = NULL; // Pointer ini 
	var = new int;   // Request memory for the variable 

	delete var;	//In C++ you need to deallocate memory!!! What happens if I forget? 
	//dynamically allocate array and how to delete  

	char* ar = NULL;
	ar = new char[20];

	delete[] ar;	//as in delete the block of memory in this case 20 char 

	return 0;
}

//**********************************************************************************
