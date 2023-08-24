#include "main.h"
/**
 * cap_string -  a function that capitalize each word in a string
 *
 * @string: given string
 * 
 * Return: the adjusted string
 */

char *cap_string(char *string)
{
int flag = 0, i;
char *start = string;
char S[] = {' ', ',', '.', ';', '!', '?', '\n', '\t', '(', ')', '{', '}', '"'};

	while (*string != '\0')
	{
		i = 0;
		while (S[i] != '\0')
		{
			if (*string == S[i])
			{
				flag = 1;
				break;
			}
			if (flag && *string >= 48 && *string <= 57)
				flag = 0;
			if (flag && *string >= 65 && *string <= 90)
				flag = 0;
			if (flag && *string >= 97 && *string <= 122)
			{	*string -= 32;
				flag = 0;
			}

			i++;
		}
		string++;
	}

return (start);
}
