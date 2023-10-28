#include "main.h"
/**
 * _isupper - checks if the given char is an uppercase or not
 *
 * @c: the ascii code of the char
 *
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
