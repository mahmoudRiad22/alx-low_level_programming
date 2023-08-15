#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number given
 *
 * @number: the number given
 *
 * Return: the last digit
 */
int print_last_digit(int number)
{
	number = number % 10;
	if (number < 0)
		number = number / -1;
	_putchar(number + '0');

	return (number);
}
