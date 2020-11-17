#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include "CPP_Functions.h"

using namespace std;

int main(int argc, char** argv)
{
	cout << "Functions\n";
	cout << "Arguments count: " << argc << endl;

	for (size_t i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	// ----------------------------------------------

	int array[N][N];

	fillArray(array);
	//	fillArray(array, 0);
	printArray(array);
	processArray(array, 5);
	printArray(array);

	int maxX = 0, maxY = 0;
	int max = findMaxInArray(array, maxX, maxY);  
	cout << "Max: " << max;
	cout << "(" << maxX << ", " << maxY << ")" << endl;

	// getchar();
	return 0;
}

void printArray(int array[N][N])
{
	cout << endl;
	for (size_t row = 0; row < N; row++)
	{
		for (size_t column = 0; column < N; column++)
		{
			cout << setw(6) << array[row][column];
		}
		cout << endl;
	}
}

void processArray(int array[5][5], const int k)
{
	for (size_t row = 0; row < N; row++)
	{
		for (size_t column = 0; column < N; column++)
		{
			if (array[row][column] % 2 == 0)
				array[row][column] *= k;
		}
	}
}

void fillArray(int array[N][N])
{
	for (size_t row = 0; row < N; row++)
	{
		for (size_t column = 0; column < N; column++)
		{
			array[row][column] = rand() % 10;
		}
	}
}

void fillArray(int array[N][N], const int k)
{
	for (size_t row = 0; row < N; row++)
	{
		for (size_t column = 0; column < N; column++)
		{
			array[row][column] = k;
		}
	}
}

int findMaxInArray(int array[N][N], int x, int y)
{
	int max = array[0][0];

	for (size_t row = 0; row < N; row++)
	{
		for (size_t column = 0; column < N; column++)
		{
			if (array[row][column] > max)
			{
				max = array[row][column];
				x = row;
				y = column;
			}
		}
	}

	cout << x << ", " << y << endl;

	return max;
}