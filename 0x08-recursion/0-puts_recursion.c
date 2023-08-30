#include "main.h"
/**
 * _puts_recursion - a funtion that print a string + newline
 *
 * @s: string adress to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *next = s;
	
	if (*next != '\0')
		_putchar(*next);
	else if (*next == '\0')
	{
		_putchar('\n');
		return;
	}
	next = s + 1;
	_puts_recursion(next);
}
