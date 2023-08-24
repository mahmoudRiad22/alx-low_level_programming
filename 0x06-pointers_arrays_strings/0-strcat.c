#include "main.h"
/**
 * _strcat - a funtion that concatenates two strings
 *
 * @dest: the string to be ADDED TO
 * @src: the string to be ADDED
 *
 * Return: a pointer of the full string = dest
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

return (start);
}
