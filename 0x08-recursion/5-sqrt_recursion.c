#include "main.h"
int calculate_sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: given number
 *
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}

/**
 * calculate_sqrt -  finds the asqrt of a number by iteration
 *
 * @n: given number
 * @i: iterator
 *
 * Return: the sqrt if found
 */

int calculate_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calculate_sqrt(n, i + 1));
}
