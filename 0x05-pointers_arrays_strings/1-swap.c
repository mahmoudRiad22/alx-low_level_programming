#include "main.h"
/**
 * swap_int -  a function that swaps the value of 2 integers
 *
 * @a: a pointer to int 1
 * @b: a pointer to int 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
