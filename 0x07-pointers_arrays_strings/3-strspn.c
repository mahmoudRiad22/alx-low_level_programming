#include "main.h"

/**
 * _strspn -  a function that count the length of prefix string
 * 
 * @s: given string
 * @accept: the prefix string
 * 
 * Return: the length of the string found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, ii, counter, flag;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++) /*loop the string*/
	{
		flag = 0;
		for (ii = 0; accept[ii] != '\0'; ii++)/*search for a match in accept*/
		{
			if (s[i] == accept[ii])
			{
				counter++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (counter);
		}
	}

	return (0);
}
