#include "main.h"
/**
 * _islower - a function that checks if the char is lowercase or not
 *
 * @c : the char to be checked
 *
 * Return: 1 (if c is lowercase), 0 (if c is not lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
