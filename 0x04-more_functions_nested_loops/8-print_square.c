#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, ii;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (ii = 0; ii < size && size > 0; ii++)
			_putchar('#');

		_putchar('\n');
	}
}
