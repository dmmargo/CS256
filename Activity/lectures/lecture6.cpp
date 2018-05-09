
//Class.h
#include <cstdio> 

using namespace std; 

  

// a very simple class definition 

class Class1 { 

    int i = 0; 

public: 

    void setvalue( const int value ) { i = value; } 

    int getvalue() const { return i; } 

}; 

  

int main( int argc, char ** argv ) { 

    int i = 47; 

    Class1 object1;     //instance of class. 

     

    object1.setvalue(i); 

    printf("value is %d\n", object1.getvalue()); 

    return 0; 

} 

//Class.cpp
//#include "Class.h"
void Class1::setvalue( const int value ) 

{ i = value; } 

Int Class1::getvalue() 

{ return i; } 

//main.cpp
//#include "Class.h"
int main( int argc, char ** argv ) { 

    int i = 47; 

    Class1 object1;     //instance of class. 

     

    object1.setvalue(i); 

    printf("value is %d\n", object1.getvalue()); 

    return 0; 

} 


