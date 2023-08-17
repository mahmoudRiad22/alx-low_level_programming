#include "main.h"
/**
 * print_line - prints a line of '_' to stdout
 *
 * @n: number of times to print '_'
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
