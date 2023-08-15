#include "main.h"
/**
 * print_times_table - a function that prints the time tables from 0 to 9
 *
 * @n: the times table required
 *
 * Return: void
 */

void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
	int i, ii, flag;

	for (i = 0; i < n + 1; i++)
	{
		ii = 0;
		flag = 1;

		while (ii < n + 1)
		{
			if (flag == 1)
				flag = 0;
			else
			{
				_putchar(',');
				_putchar(' ');
				if ((i * ii) < 10)
				{
					_putchar(' ');
				}
				if ((i * ii) < 100)
					_putchar(' ');
			}
			PrintNumber(i * ii);

			ii++;
		}
		_putchar('\n');
	}
}
}

/**
 * PrintNumber- convert the number given into its digits then print them
 *
 * @n: the given number
 *
 * Return: void
 */
void PrintNumber(int n)
{
	int counter = 0;
	int DigitArray[1024];

	if (n < 0)
	{_putchar('-');
		n = n / -1;
	}
	if (n == 0)
		_putchar('0');
	while (n % 10 != 0)
	{
		DigitArray[counter++] = n % 10;
		n = n / 10;
	}
	while (n > 0)
	{
		if (n % 10 >= 0)
			DigitArray[counter++] = n % 10;
		n = n / 10;
	}
	if (counter)
	while (counter > 0)
	{
		_putchar(DigitArray[counter - 1] + '0');
		counter--;
	}
}
