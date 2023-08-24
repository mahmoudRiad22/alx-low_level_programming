#include "main.h"
/**
 * _strncat - a function taht concatenates 2 strings
 * 		but for a limited number of char = n
 *
 * @dest: string that will be ADDED TO
 * @src: the string that will be ADDED
 * @n: number of char to be added only
 *
 * Return: the pointer that contain the adjusted string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		n--;
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
