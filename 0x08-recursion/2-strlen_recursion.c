#include "main.h"
/**
 * _strlen_recursion -  a funtion that return the length of a string
 *
 * @s: string given
 *
 * Return: length of the given string
 */

int _strlen_recursion(char *s)
{
	int c;

	if (*s == '\0')
	{
		c = 0;
		return (c);
	}

	return (_strlen_recursion(s + 1) + 1);
}
