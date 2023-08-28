#include "main.h"

/**
 * *_memset - fills memory with a given char for n times
 * @s: memory to be filled
 * @b: char to be written
 * @n: number pf copies
 *
 * Return: a pointer for the adjusted memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int limit;

	for (limit = 0; limit < n; limit++)
	{
		s[limit] = b;
	}

	return (s);
}
