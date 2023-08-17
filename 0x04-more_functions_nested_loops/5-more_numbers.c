#include "main.h"
/**
 * more_numbers - prints number from 0 to 14 ten times
 *
 * parameters: void
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, x;

	for (x = 1; x <= 10; x++)
	{
		i = 0;

		while (i <= 14)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			i++;
		}
		_putchar('\n');
	}
}
