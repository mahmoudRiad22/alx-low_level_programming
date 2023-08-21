#include "main.h"
/**
 * puts2 - prints every other char in a given string
 *
 * @str: given string
 *
 * Return: void
 */

void puts2(char *str)
{
	_putchar((*str));

	while (*str)
	{
		str++;
		if (*str == '\0')
			break;
		str++;
		if (*str == '\0')
			break;
		_putchar((*str));
	}

	_putchar('\n');
}
