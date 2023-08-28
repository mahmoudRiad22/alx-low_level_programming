#include "main.h"

/**
 * _memcpy - copy bytes from one to another 
 * @dest: the memory to be copied to
 * @src: th memory to copy from
 * @n: number of bytes to be copied
 * 
 * Return: the adjusted memory after copying
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
