#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: a pointer to firt element of the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s += 1;
	}

	return (len);
}
