Replicated NOTES 

//IF, ELSE IF, ELSE - Decision Making   

#include <stdio.h> 

int main () { 

 

   /* local variable definition */ 

   int a = 100; 

  

   /* check the boolean condition */ 

   if( a == 10 ) { 

      /* if condition is true then print the following */ 

      printf("Value of a is 10\n" ); 

   } else if( a == 20 ) { 

      /* if else if condition is true */ 

      printf("Value of a is 20\n" ); 

   } else if( a == 30 ) { 

      /* if else if condition is true  */ 

      printf("Value of a is 30\n" ); 

   } else { 

      /* if none of the conditions is true */ 

      printf("None of the values is matching\n" ); 

   } 

    

   printf("Exact value of a is: %d\n", a ); 

  

   return 0; 

} 

 

 

/**********************************************/ 

//Ternary Operator - Can use in place of if/else or switch 

 

#include <stdio.h> 

 

main() 

{ 

   int a , b; 

 

   a = 10; 

   printf( "Value of b is %d\n", (a == 1) ? 20: 30 ); 

 

   printf( "Value of b is %d\n", (a == 10) ? 20: 30 ); 

} 

 

/**********************************************/ 

//Switch -- Can use in place of if/else or turnery 

 

#include <stdio.h> 

  

int main () { 

 

   /* local variable definition */ 

   char grade = 'B'; 

 

   switch(grade) { 

      case 'A' : 

         printf("Excellent!\n" ); 

         break; 

      case 'B' : 

      case 'C' : 

         printf("Well done\n" ); 

         break; 

      case 'D' : 

         printf("You passed\n" ); 

         break; 

      case 'F' : 

         printf("Better try again\n" ); 

         break; 

      default : 

         printf("Invalid grade\n" ); 

   } 

    

   printf("Your grade is  %c\n", grade ); 

  

   return 0; 

} 

 

 

/**********************************************/ 

//function  --> scope of variable local vs global vs static 

//local variables go in Frame of calling function in STACK  

//static variable, go in STATIC, accessible by all functions in file declared 

//global variable, go in STATIC, accessible by all functions in program 

 

#include<stdio.h> 

 

// Global variables 

int A; 

int B; 

 

int fun() 

{ 

  static int count = 0; //Static Variable 

  count++; 

  return count; 

} 

  

int Add() 

{ 

    return A + B; 

} 

 

int main() 

{ 

    int answer; // Local variable 

    A = 5; 

    B = 7; 

    answer = Add(); 

    printf("%d\n",answer); 

    printf("%d ", fun()); 

    printf("%d ", fun()); 

    return 0; 

} 

 

 

 

/**********************************************/ 
//RAM text,static,heap,stack 

 

// RAM SHOWN BELOW 

//[STACK] -- Allocate frame for a function and store all local variables for given function 

//[HEAP] -- USED FOR DYNAMIC MEMORY CONTROLLED BY KERNEL, part of the Operating System 

//[STATIC] -- Hold Static and Global Variables 

//[TEXT] -- Hold Instructions of Program 

 

//Note: Hard Drive will hold the executable or PROGRAM 

//When you run a program it is called a process. The process is shown above in RAM 

 

/**********************************************/ 

//Arrays -- allocate one contiguous block of memory holding declaring multiple of one data type 

//name of array used is an address of memory. 

 

//Declaration with Assignment -- declaring 10 doubles 

double balance[10] = {1000.0, 2.0, 3.4, 7.0, 50.0}; 

 

//when using in calculation or assignment below recall always start at 0 

//balance[0] = 1000.0 , balance[3] = 7.0, balance[7] = 0, balance[10] = error out of bounds 

 

 

//Also acceptable because size will be known. Size will be 5 hence --> double balance[5] 

double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0}; 

 

//code example 

#include <stdio.h> 

  

int main () { 

 

   int n[ 10 ]; /* n is an array of 10 integers */ 

   int i,j; 

  

   /* initialize elements of array n to 0 */          

   for ( i = 0; i < 10; i++ ) { 

      n[ i ] = i + 100; /* set element at location i to i + 100 */ 

   } 

    

   /* output each array element's value */ 

   for (j = 0; j < 10; j++ ) { 

      printf("Element[%d] = %d\n", j, n[j] ); 

   } 

  

   return 0; 

} 

 

/**********************************************/ 

//Pointers -- point to ADDRESS of RAM. Can be data or function 

//2 operations  

//You may wish to change what you are pointing to 

//You may wish to read/write/execute the data/function you are pointing to  

//this is done by dereferencing aka go to address you are pointing to  

 

//When declaring a pointer size allocated is always 4 bytes as we hold an address in memory 

 

 

#include <stdio.h> 

 

int main () { 

 

   int  var = 20;   

   int x = 10; 

   int  *ip;        /* pointer variable declaration */ 

    

   ip = NULL; // Point to address 0 for safety 

 

   ip = &var;  /* Change where you point to. Now pointing to address of var */ 

    

   x = x + *ip; // x = 10 + 20. grabbing data where pointer is pointing is called dereferencing the pointer    

    

   ip = &x; //CHANGE WHERE ip points --> point to address of x 

    

   //showing pointer calculation 

   ip = ip + 3;  // address of ip + (3 * sizeof(int)) = address of ip + 12 

 

   printf("Address of var variable: %x\n", &var  ); 

 

   /* address stored in pointer variable */ 

   printf("Address stored in ip variable: %x\n", ip ); 

 

   /* access the value using the pointer */ 

   printf("Value of *ip variable: %d\n", *ip ); 

 

   return 0; 

} 

 

 

//STRUCT 

 

#include <stdio.h> 

#include <string.h> 

  

struct Books { 

   char  title[50]; 

   char  author[50]; 

   char  subject[100]; 

   int   book_id; 

}; 

  

int main( ) { 

 

   struct Books Book1;        /* Declare Book1 of type Book */ 

   struct Books Book2;        /* Declare Book2 of type Book */ 

  

   /* book 1 specification */ 

   strcpy( Book1.title, "C Programming"); 

   strcpy( Book1.author, "Nuha Ali");  

   strcpy( Book1.subject, "C Programming Tutorial"); 

   Book1.book_id = 6495407; 

 

   /* book 2 specification */ 

   strcpy( Book2.title, "Telecom Billing"); 

   strcpy( Book2.author, "Zara Ali"); 

   strcpy( Book2.subject, "Telecom Billing Tutorial"); 

   Book2.book_id = 6495700; 

  

   /* print Book1 info */ 

   printf( "Book 1 title : %s\n", Book1.title); 

   printf( "Book 1 author : %s\n", Book1.author); 

   printf( "Book 1 subject : %s\n", Book1.subject); 

   printf( "Book 1 book_id : %d\n", Book1.book_id); 

 

   /* print Book2 info */ 

   printf( "Book 2 title : %s\n", Book2.title); 

   printf( "Book 2 author : %s\n", Book2.author); 

   printf( "Book 2 subject : %s\n", Book2.subject); 

   printf( "Book 2 book_id : %d\n", Book2.book_id); 

 

   return 0; 

} 

 

//Pointer to Struct 

#include <stdio.h> 

#include <string.h> 

  

struct Books { 

   char  title[50]; 

   char  author[50]; 

   char  subject[100]; 

   int   book_id; 

}; 

 

/* function declaration */ 

void printBook( struct Books *book ); 

int main( ) { 

 

   struct Books Book1;        /* Declare Book1 of type Book */ 

   struct Books Book2;        /* Declare Book2 of type Book */ 

  

   /* book 1 specification */ 

   strcpy( Book1.title, "C Programming"); 

   strcpy( Book1.author, "Nuha Ali");  

   strcpy( Book1.subject, "C Programming Tutorial"); 

   Book1.book_id = 6495407; 

 

   /* book 2 specification */ 

   strcpy( Book2.title, "Telecom Billing"); 

   strcpy( Book2.author, "Zara Ali"); 

   strcpy( Book2.subject, "Telecom Billing Tutorial"); 

   Book2.book_id = 6495700; 

  

   /* print Book1 info by passing address of Book1 */ 

   printBook( &Book1 ); 

 

   /* print Book2 info by passing address of Book2 */ 

   printBook( &Book2 ); 

 

   return 0; 

} 

void printBook( struct Books *book ) { 

 

   printf( "Book title : %s\n", book->title); 

   printf( "Book author : %s\n", book->author); 

   printf( "Book subject : %s\n", book->subject); 

   printf( "Book book_id : %d\n", book->book_id); 

} 

 

//Struct as Function Argument 

#include <stdio.h> 

#include <string.h> 

  

struct Books { 

   char  title[50]; 

   char  author[50]; 

   char  subject[100]; 

   int   book_id; 

}; 

 

/* function declaration */ 

void printBook( struct Books book ); 

 

int main( ) { 

 

   struct Books Book1;        /* Declare Book1 of type Book */ 

   struct Books Book2;        /* Declare Book2 of type Book */ 

  

   /* book 1 specification */ 

   strcpy( Book1.title, "C Programming"); 

   strcpy( Book1.author, "Nuha Ali");  

   strcpy( Book1.subject, "C Programming Tutorial"); 

   Book1.book_id = 6495407; 

 

   /* book 2 specification */ 

   strcpy( Book2.title, "Telecom Billing"); 

   strcpy( Book2.author, "Zara Ali"); 

   strcpy( Book2.subject, "Telecom Billing Tutorial"); 

   Book2.book_id = 6495700; 

  

   /* print Book1 info */ 

   printBook( Book1 ); 

 

   /* Print Book2 info */ 

   printBook( Book2 ); 

 

   return 0; 

} 

 

void printBook( struct Books book ) { 

 

   printf( "Book title : %s\n", book.title); 

   printf( "Book author : %s\n", book.author); 

   printf( "Book subject : %s\n", book.subject); 

   printf( "Book book_id : %d\n", book.book_id); 

} 
 
//UNION 

//only one data type can exist at any given time in a union 

//The size allocated for a union will be the largest type. 

 

#include <stdio.h> 

#include <string.h> 

  

//size allocated is 20 bytes. Regardless of which data you use. This way computer can change it at runtime 

union Data { 

   int i; 

   float f; 

   char str[20]; 

}; 

  

int main( ) { 

 

   union Data data;         

 

   printf( "Memory size occupied by data : %d\n", sizeof(data)); 

 

   return 0; 

} 
 

//accessing variable in union. NOTE: only one can exist 

#include <stdio.h> 

#include <string.h> 

  

union Data { 

   int i; 

   float f; 

   char str[20]; 

}; 

  

int main( ) { 

 

   union Data data;         

 

   data.i = 10; 

   data.f = 220.5;  //writes over i 

   strcpy( data.str, "C Programming");  //writes over f 

 

   printf( "data.i : %d\n", data.i);    //print out garbage 

   printf( "data.f : %f\n", data.f);    //pring out garbage 

   printf( "data.str : %s\n", data.str); //print out "C Programming" 

 

   return 0; 

} 

 

//another example 

#include <stdio.h> 

#include <string.h> 

  

union Data { 

   int i; 

   float f; 

   char str[20]; 

}; 

  

int main( ) { 


   union Data data;         


   data.i = 10; 

   printf( "data.i : %d\n", data.i); 

    

   data.f = 220.5; 

   printf( "data.f : %f\n", data.f); 

    

   strcpy( data.str, "C Programming"); 

   printf( "data.str : %s\n", data.str); 


   return 0; 

} 