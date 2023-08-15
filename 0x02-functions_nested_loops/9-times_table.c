#include "main.h"
/**
 * times_table - a function that prints the time tables from 0 to 9
 *
 * Parameters: void
 *
 * Return: void
 */

void times_table(void)
{
	int i, ii, flag;

	for (i = 0; i < 10; i++)
	{
		ii = 0;
		flag = 1;

		while (ii < 10)
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
