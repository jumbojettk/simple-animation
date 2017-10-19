// Napon Krassner
// CSC 2430, Homework 3
// 01-28-2015
// Due: 02-04-2015
// Name: Simple Animation Client
// Description: Client file with functions implemented from
//  the implementation file. This program takes keyboard input
//  from user for each row of array and creates an animation
//  transforming between 2 arrays or a transpose of an array.

#include <iostream>
#include <windows.h>

#include "simpleAnimation.h"

using namespace std;

// Additional function prototypes
void printAnimationLoops(squareCharArray, squareCharArray, int, int);

int main()
{
	// Declare variables
	squareCharArray arrOriTIE;
	squareCharArray arrTransTIE;
	squareCharArray arrOriXwing;
	squareCharArray arrTransXwing;

	cout << "Welcome to the simple animator! By Napon Krassner (Jett)" << endl;

	// TIE Fighter
	initMatrixArr(arrOriTIE, 3);  // Initialize TIE fighter matrix
	initMatrixArr(arrTransTIE, 3);  // Initialize transposed TIE fighter matrix
	fillMatrixArr(arrOriTIE, 3);  // Prompt user to fill matrix
	transposeMatrixArr(arrOriTIE, arrTransTIE, 3);  // Transpose TIE fighter

	// X-wing
	initMatrixArr(arrOriXwing, 3);  // Initialize X-wing matrix
	initMatrixArr(arrTransXwing, 3);  // Initialize transformed X-wing matrix
	fillMatrixArr(arrOriXwing, 3);  // Prompt user to fill matrix for attack pos
	fillMatrixArr(arrTransXwing, 3);  // Prompt user to fill matrix for cruising pos

	// Printing
	cout << endl <<  "---------------------------------------" << endl;
	cout << "Beginning super awesome animation!" << endl;
	printAnimationLoops(arrOriTIE, arrTransTIE, 3, 4);  // Print animation for TIE Fighter
	printAnimationLoops(arrOriXwing, arrTransXwing, 3, 3);  // Print animation for TIE Fighter

	return 0;
}

// Parameter: 2 matrix arrays, int for number of rows, int for number of loops for animation
// Return: nothing
// Description:  prints the 2 matrices in desired amount of loops
//               even loops prints first matrix, odd loops prints second matrix
void printAnimationLoops(squareCharArray arrPosition1, squareCharArray arrPosition2, int rows, int numLoops)
{
	Sleep(1000);  // Delay to make animation more realistic
	cout << endl;
	printMatrixArr(arrPosition1, rows);
	for (int i = 0; i < numLoops; i++)
	{
		if (i%2 == 0)
		{
			Sleep(1000);  // Delay to make animation more realistic
			//system("cls");
			cout << endl;
			printMatrixArr(arrPosition2, rows);
		}
		else
		{
			Sleep(1000);  // Delay to make animation more realistic
			//system("cls");
			cout << endl;
			printMatrixArr(arrPosition1, rows);
		}
	}
}