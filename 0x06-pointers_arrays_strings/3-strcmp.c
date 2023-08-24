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
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
