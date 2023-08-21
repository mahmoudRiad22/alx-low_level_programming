#include "main.h"
/**
 * puts_half - prints the secound half of a given string
 *
 * @str: given string
 *
 * Return: void
 */

void puts_half(char *str)
{
	char *start = str;

	while (*str != '\0')
		str++;

	/*change address to middle of the string*/
	start = start + ((str - start) / 2);

	while (*start != '\0')
	{
		_putchar((*start));
		start++;
	}

	_putchar('\n');
}
