#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - find all diagonal elemnts in a square matrix and sums them
 *
 * @a: the given matix
 * @size: the size of the matrix
 *
 * Return: the resul of the sum
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int diagsum, diagsum1;

	diagsum = 0;
	diagsum1 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum += a[(size * i) + i];
		diagsum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", diagsum, diagsum1);
}
