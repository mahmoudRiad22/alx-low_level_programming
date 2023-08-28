#include "main.h"
#include <stdio.h>

/**
 * _strstr - find a needle in a haystack
 * 
 * @haystack: the string to search in
 * @needle: the string we lookig for
 * 
 * Return: the needle location in the haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, ii;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (ii = 0; needle[ii] != '\0'; ii++)
		{
			if (haystack[i + ii] != needle[ii])
				break;
		}
		if (!needle[ii])
			return (&haystack[i]);
	}
	return (NULL);
}
