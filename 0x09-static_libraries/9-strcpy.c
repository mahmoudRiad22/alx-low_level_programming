#include "main.h"
/**
 * _strcpy - cpy a string including the null terminator to a buffer
 *
 * @des: the buffer pointer to copy string to
 * @src: the string to be copied
 *
 * Return: a pointer that hold the address of the buffer
 */

char *_strcpy(char *des, char *src)
{
	char *DES = des;

	while (*src != '\0')
	{
		*des = *src;
		des++;
		src++;
	}

	*des = '\0';/*add the null terminator*/

	return (DES);
}
