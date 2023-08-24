#include "main.h"
/**
 * _strcmp - compare two strings by size
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return : interger x
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, ii = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0')
		{
			i++;
			s1++;
		}
		if (*s2 != '\0')
		{
			ii++;
			s2++;
		}
	}

	return (i - ii);
}
