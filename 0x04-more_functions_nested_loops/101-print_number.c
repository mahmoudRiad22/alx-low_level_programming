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
		int digits[10], i, length;

		if (n == 0)
			_putchar('0');
		else
		{

		if (n < 0)
		{ /*remove negative sign after printing it*/
			_putchar('-');
			n = n / -1;
		}

		length = len(n);

		for (i = 0; i < length; i++)
		{ /*save the number digit in reverse*/
			digits[i] = n % 10;
			n = (n / 10) - (digits[i] / 10);
		}

		for (i = length - 1; i >= 0; i--)/*print number correctly*/
			_putchar(digits[i] + '0');
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
