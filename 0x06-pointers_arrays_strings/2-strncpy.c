#include "main.h"
/**
 * _strncpy -  a function that copies n-bytes of a string into another
 *
 * @n: number of bytes to be copied
 * @src: the string that we copy from
 * @dest: the string that we copy to
 *
 * Return: the adjusted st
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
