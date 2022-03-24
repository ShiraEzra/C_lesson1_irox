// Lesson1_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
#include "AllExercises.h"
using namespace std;


int main()
{
	//Ex23
	unsigned n = 3900;
	int shift = 3;
	cout << "No Shift     " << bitset<12>(n) << endl;
	cout << "Left Shift  " << bitset<12>(circularShift(n, shift, true)) << endl;
	cout << "Right Shift " << bitset<12>(circularShift(n, shift, false)) << endl;

	//Ex 24
	cout << "Xor without using the operator ^ : " << xorWithoutUsingOp(13, 5) << endl;

	//Ex 20
	cout << "Swapping adjacent bits  : " << swap(11) << endl;

	//Ex 41
	cout << "find its square without using multiplication and division operator  : " << squreWithoutUsingMultOrDivOp(10) << endl;

	//Ex 47
	cout << "Find max without branching  : " << max(10, 8) << endl;
	cout << "Find min without branching  : " << min(2, 8) << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
