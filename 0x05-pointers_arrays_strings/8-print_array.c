#include <stdio.h>
#include "main.h"
/**
 * print_array - pritns a given number of elements of a given array
 *
 * @n: number of elements to be printed
 * @a: given array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (!counter)
			counter = 0;
		else
			printf(", ");

		printf("%d", *a++);
		counter++;
	}
	printf("\n");
}
