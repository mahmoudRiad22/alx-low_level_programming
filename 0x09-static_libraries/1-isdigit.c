#include "main.h"
/**
 * _isdigit - a function checks for a digit fom 0 to 9
 *
 * @c: the variable to be checked
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
