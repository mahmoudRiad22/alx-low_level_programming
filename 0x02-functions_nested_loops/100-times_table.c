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
if (n > 0 && n < 15)
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
					_putchar(' ');
			}

			if (i * ii < 10)
				_putchar((i * ii) + '0');
			else
			{
				_putchar(((i * ii) / 10) + '0');
				_putchar(((i * ii) % 10) + '0');
			}
			ii++;
		}
		_putchar('\n');
	}
}

}
