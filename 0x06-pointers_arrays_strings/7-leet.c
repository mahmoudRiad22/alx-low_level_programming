#include "main.h"
/**
 * leet -  a function that encode a string into a 1337
 *
 * @string: given string to encode
 *
 * Return: the encoded string
 */

char *leet(char *string)
{
	char *start = string, s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i;

	while (*string != '\0')
	{
		i = 0;
		while (s1[i] != '\0')
		{
			if (s1[i] == *string)
				*string = s2[i];
			i++;
		}
		string++;
	}
	return (start);
}
