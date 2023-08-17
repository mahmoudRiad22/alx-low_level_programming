#include "main.h"
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
		int filter = 1, out, Len;

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
		Len = len(n);

		while (Len - 1 > 0)
		{
			Len--;
			filter = filter * 10;
		}

		/*filter = filter / 10;reduce filter digits by 1*/

		while (filter > 1)
		{
			out = n / filter;
			n = n % filter;
			filter = filter / 10;/*adjust filter size */
			_putchar(out + '0');
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
	int Len = 0;

	while (n > 0)
	{
		Len++;
		n = n / 10;
	}

	return (Len);
}
