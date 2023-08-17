#include "main.h"
#include <math.h>
/**
 * print_number - a function that print any integer
 *
 * @n:number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n <= 2147483647 || n >= -2147483647)
	{
		int m, x, length;

		if (n == 0)
		{
			_putchar('0');
			/*_putchar('\n');*/
		}
		else
		{
		if (n < 0)
		{ /*remove negative sign after printing it*/
			_putchar('-');
			n = n / -1;
		}

		length = len(n);
		m = (int) pow((double)10, (double)(length - 1));
		while (m > 1)
		{
			x = n / m;
			n = n % m;
			m = m / 10;
			_putchar(x + '0');
		}
		_putchar(n + '0');
		}
	}
}

/**
 * len - return the number of digits in a given number
 *
 * @n: given number
 *
 * Return: number of digits
 */

int len(int n)
{
	int counter = 0;

	while (n > 0)
	{
		counter++;
		n = n / 10;
	}

	return (counter);
}
