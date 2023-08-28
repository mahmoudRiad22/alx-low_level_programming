#include "main.h"
#include <stdio.h>

/**
 * function that searches a string for any of a set of bytes.
 * 
 * @s: given string
 * @accept: string of bytes to search for
 * 
 * Return: a pointer of the bytes matching 
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
