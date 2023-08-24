#include "main.h"
/**
 * _strcmp - compare two strings by size
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return : -ev int if s1<s2, +ev int if s1>s2, 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	unsigned int x = 0;
	/*int r;*/

	while (*s1 != '\0' && *s2 != '\0')
	{
		x++;
		s1++;
		s2++;
	}

	if (*s1 != '\0' && *s2 == '\0')
		x = x;
	if (*s1 == '\0' && *s2 != '\0')
		x = x * -1;
	if (*s1 == '\0' && *s2 == '\0')
		x = 0;

	return (x);
}
