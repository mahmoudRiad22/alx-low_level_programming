#include "main.h"
/**
 * print_numbers - prints number from 0 to 9
 *
 * Parameters: void
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
