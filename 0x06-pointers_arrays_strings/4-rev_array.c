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
	int *start = a, end, stop, tmp;

	if (n % 2 == 0)
		stop = *(a + (n / 2) - 1);
	if (n % 2 != 0)
		stop = a[n / 2];

	end = n - 1;

	while (*start != stop)
	{
		/*start swapping*/
		tmp = *start;
		*start = *(a + end);
		*(a + end) = tmp;

		/*movee to next*/
		start++;
		end--;
	}

	if (n % 2 == 0)
	{
		tmp = *start;
		*start = *(a + end);
		*(a + end) = tmp;
	}
}
