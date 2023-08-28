#include "main.h"
#include <stdio.h>
/**
 * _strchar - find 1st occurence of a char in a string
 *
 * @s: given string
 * @c: char to look for
 *
 * Return: the 1st occurenece
 */
char *_strchr(char *s, char c)
{
		int find;

		while (1)
		{
			find = *s++;
			if (find == c)
			{
				return (s - 1);
			}
			if (find == 0)
			{
				return (NULL);
			}
		}
}
