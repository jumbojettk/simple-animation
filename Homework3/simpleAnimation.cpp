// Napon Krassner
// CSC 2430, Homework 3
// 01-28-2015
// Due: 02-04-2015
// Name: Simple Animation Implementation
// Description: Implementation file with functions to be implemented by the client.

#include <iostream>
#include "simpleAnimation.h"

using namespace std;

void initMatrixArr(squareCharArray charMatArr, int maxRows)
{
	for (int i = 0; i < maxRows; i++)  // Loop through each row
	{
		for (int j = 0; j < MAX; j++)  // Loop through each col
		{
			charMatArr[i][j] = 'b';  // Set each element to single space char
		}
	}
}

void printMatrixArr(squareCharArray charMatArr, int maxRows)
{
	for (int i = 0; i < maxRows; i++)  // Loop through each row
	{
		for (int j = 0; j < MAX; j++)  // Loop through each col
		{
			cout << charMatArr[i][j] << " ";  // Print each element
		}
		cout << endl;  // New line after printing each row
	}
}

void fillMatrixArr(squareCharArray charMatArr, int maxRows)
{
	int rowCount = 0;
	for (int i = 0; i < maxRows; i++)  // Loop through each row
	{
		cout << endl << "Enter chars for row " << i + 1 << " (separated by spaces)\n";
		cout << "Use b for a blank space, q q q to quit:\n";
		cin >> charMatArr[i][0] >> charMatArr[i][1] >> charMatArr[i][2];  // Store each input into array elements of that row
		if (charMatArr[i][0] == 'q' && charMatArr[i][1] == 'q' && charMatArr[i][2] == 'q')  // If user wants to quit
		{
			// change all the elements of that row back to empty char
			charMatArr[i][0] = ' ';
			charMatArr[i][1] = ' ';
			charMatArr[i][2] = ' ';
			break; // Exit for loop
		}
		// Replace all b with blank space char
		if (charMatArr[i][0] == 'b')
		{
			charMatArr[i][0] = ' ';
		}
		if (charMatArr[i][1] == 'b')
		{
			charMatArr[i][1] = ' ';
		}
		if (charMatArr[i][2] == 'b')
		{
			charMatArr[i][2] = ' ';
		}
		rowCount++;
	}
	cout << endl << rowCount * 3 << " matrix elements were read in." << endl;
	printMatrixArr(charMatArr, rowCount);
}

void transposeMatrixArr(const squareCharArray charMatArrOri, squareCharArray charMatArrTrans, int maxRows)
{
	for (int i = 0; i < maxRows; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			charMatArrTrans[i][j] = charMatArrOri[maxRows - (j + 1)][i];  // Transposing
		}
	}
}