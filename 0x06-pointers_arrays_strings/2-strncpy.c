#include "main.h"
/**
 * _strncpy -  a function that copies n-bytes of a string into another
 *
 * @n: number of bytes to be copied
 * @src: the string that we copy from
 * @dest: the string that we copy to
 *
 * Return: the adjusted string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n > 0)
	{
		n--;
		if (*src != '\0' && *dest != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		if (*src == '\0' && *dest != '\0')
		{
			while (n > 0)
			{
				n--;
				*dest = '\0';
				dest++;
			}
			break;
		}
	}

return (start);
}
