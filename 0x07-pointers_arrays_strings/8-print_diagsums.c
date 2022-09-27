#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix
 * @a: The matirx of intergers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int diagsum = 0;
	int diagsum1 = 0;
	int row; i;

	for (row = 0; row < size; row++)
	{
		i = (row *size) _row;
		diagsum += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagsum1 += a[i];
	}
	
	printf("%d, %d\", diagsum, diagsum1);
}
