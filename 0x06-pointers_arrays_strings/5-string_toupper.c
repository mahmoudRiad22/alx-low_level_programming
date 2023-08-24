#include "main.h"
/**
 * string_toupper - changes all lowercase of a string to uppercase
 *
 * @string: the given string
 *
 * Return: the adjusted string
 */

char *string_toupper(char *string)
{
	char *start = string;

	while (*string != '\0')
	{
		if (*string >= 97 && *string <= 122)
			*string -= 32;
		string++;
	}

	return (start);
}
