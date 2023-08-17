#include "main.h"
/**
 * print_triangle - prints a triangle given its size using "#"
 *
 * @size: size of the triabgle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, ii;

	for (i = 1; i <= size; i++)
	{
		for (ii = 1; ii <= size; ii++)
		{
			while (ii <= (size - i))
			{
				_putchar(' ');
				ii++;
			}

			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
