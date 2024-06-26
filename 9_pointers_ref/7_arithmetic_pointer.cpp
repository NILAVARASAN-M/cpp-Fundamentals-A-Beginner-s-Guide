/*
Pointer Expressions and Pointer Arithmetic
A limited set of arithmetic operations can be performed on pointers which are:

incremented ( ++ )
decremented ( — )
an integer may be added to a pointer ( + or += )
an integer may be subtracted from a pointer ( – or -= )
difference between two pointers (p1-p2)
*/

// (Note: Pointer arithmetic is meaningless unless performed on an array.) 

// C++ program to illustrate Pointer Arithmetic 
#include <bits/stdc++.h> 
using namespace std; 
void geeks() 
{ 
	// Declare an array 
	int v[3] = { 10, 100, 200 }; 

	// declare pointer variable 
	int* ptr; 

	// Assign the address of v[0] to ptr 
	ptr = v; 

	for (int i = 0; i < 3; i++) { 
		cout << "Value at ptr = " << ptr << "\n"; 
		cout << "Value at *ptr = " << *ptr << "\n"; 

		// Increment pointer ptr by 1 
		ptr++; 
	} 
} 

// Driver program 
int main() { geeks(); }

// the incremeting means we are moving memory_address+(size_of_data_type)==
// ptr+1==memory_addr+4, if ptr is a integer data type.
