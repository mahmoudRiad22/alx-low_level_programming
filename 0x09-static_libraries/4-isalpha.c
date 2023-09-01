#include "main.h"
/**
 * _isalpha - a fucntion that checks for alphabet chars
 *
 * @c: teh char to be checked
 *
 * Return: 1 (if c is a letter), 0(if otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
