// Napon Krassner
// CSC 2430, Homework 3
// 01-28-2015
// Due: 02-04-2015
// Name: Simple Animation Header
// Description: Header file with function prototypes and descriptions to be used in
//				the implementation file.

#ifndef SIMPLE_ANIMATION
#define SIMPLE_ANIMATION

#include <iostream>

using namespace std;
const int MAX = 3;  // Max rows and columns
typedef char squareCharArray[MAX][MAX];  // typedef for the 2 dim squared array

// Function prototypes

// Parameters: 2 dim array (typedef) to be initialized, int for rows to be initialized
// Return: Initialized array with each element to single space char by reference
// Description: Initialize all elements in the matrix to single space char.
void initMatrixArr(squareCharArray, int);

// Parameters: 2 dim array (typedef) to be printed, int for rows to be printed
// Return: nothing
// Description: Print all elements in the matrix array.
// Notes: Outputs one row per line with elements separated by a single space
void printMatrixArr(squareCharArray, int);

// Parameters: 2 dim array (typedef) to be filled with the input keyboard elements, int for rows to be filled
// Return: Filled array by reference
// Description: Prompts the user for keyboard input and fill array elements in the matrix
// Notes for user inputs: "b" = blank space, "q q q" = stops asking for input for that matrix
void fillMatrixArr(squareCharArray, int);

// Parameters: original 2 dim array as const, transposed 2 dim array, int for max rows
// Return: transposed 2 dim array by reference
// Description: Transpose the input matrix array and stores into a new array.
void transposeMatrixArr(const squareCharArray, squareCharArray, int);


#endif