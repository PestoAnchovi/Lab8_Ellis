/*
 * @file Lab8_Ellis.cpp
 * @author Elijah Ellis
 * @date 2025-03-29
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */

#include<iostream>
using namespace std;



int heapInt() {
	//Initializes HeapVal
	unsigned short *HeapVal = new unsigned short;
	*HeapVal = 20;

	//Initializes HeapVal and its address
	cout << "Heap Variable (HeapVal)" << endl;
	cout <<  "  Value: " << *HeapVal << endl;
	cout << "  Address: " << HeapVal << endl << endl;

	//Clean-up in order to prevent memnory leaks
	delete HeapVal;

	//returns Value
	return 0;
}

int stackInt() {
	//Initializes stackVal as a Variable
	int stackVal = 10;

	//Initializes the Pointer to stackVal
	int* ptrToStack = &stackVal;

	//Initializes the Reference to stackVal
	int& refToStack = stackVal;

	//Prints stackVal and its address
	cout << "Stack Variable (stackVal)" << endl;
	cout << "  Value: " << stackVal << endl;
	cout << "  Address: " << &stackVal << endl << endl;

	//Prints stackVal's pointer and its address
	cout << "Pointer to Stack (ptrToStack):" << endl;
	cout << "  Value Pointed To: " << *ptrToStack << endl;
	cout << "  Address Stored:   " << ptrToStack << endl << endl;

	//Prints stackVal's Reference and its address
	cout << "Reference to Stack (refToStack):" << endl;
	cout << "  Value Reffered To: " << refToStack << endl;
	cout << "  Address Stored:   " << &refToStack << endl << endl;

	return 0;
}

//executes code above
int main() {
	stackInt();
	heapInt();
}