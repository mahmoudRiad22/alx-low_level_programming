#include "main.h"
/**
 * print_rev - prints the given string in reverse
 *
 * @s: given string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
		s += 1;

	while (s-- != start)
		_putchar((*s));

	_putchar('\n');
}
