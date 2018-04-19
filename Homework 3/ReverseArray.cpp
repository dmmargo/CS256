
/*
Write a function that accepts an  int  array and the array’s size as arguments. 
The function should create a copy of the array, except that the element values 
should be reversed in the copy. The function should return a pointer to the new 
array. Demonstrate the function in a complete program. 
*/

#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int array[], int array_size)
{
 
    
    int *pointer1 = array,
        *pointer2 = array + array_size - 1;
    while (pointer1 < pointer2) {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}

void print(int* array, int array_size)
{
    int *length = array + array_size,
        *position = array;
    cout << "Array = ";
    for (position = array; position < length; position++)
        cout << *position << " ";
}


int main()
{
    const int SIZE = 6;
	int array[SIZE];
	int *reversedArray;
	int size;
	cout << "enter " << SIZE << " interfer for the array:";
	for(int i =0; i < SIZE; i++)
		cin >> array[i];
 
    cout << "Original ";
    print(array, 6);
    
    cout << "Reverse ";
    reverse(array, 6);
    print(array, 6);
    
    return 0;
}