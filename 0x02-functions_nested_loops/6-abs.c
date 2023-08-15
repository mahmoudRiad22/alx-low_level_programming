#include "main.h"
/**
 *_abs - calculate the abs value of a number
 *
 * @number: the number to be calculated
 *
 * Return: abs value of a the number
 */

int _abs(int number)
{
	if (number < 0)
	{
		number = number / -1;
		return (number);
	}
	else if (number > 0)
		return (number);
	else
		return (0);
}
