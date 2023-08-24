#include "main.h"
/**
 * reverse_array -  take an array of integers and reverse its content
 *
 * @a: the array given
 * @n: the array size
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
