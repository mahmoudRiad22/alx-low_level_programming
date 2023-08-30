#include "main.h"
int test_number(int n, int i);

/**
 * is_prime_number - returns 1 if given number is prime, otherwise return 0
 *
 * @n: given number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_number(n, 2));
}

/**
 * test_number - tst for prim with iterator
 *
 * @n: number to be tested
 * @i: iterator
 *
 * Return: 1 if prime, 0 if otherwise
 */

int test_number(int n, int i)
{
	if (i < n && n % i == 0)
		return (0);
	if (i == n)
		return (1);
	return (test_number(n, i + 1));
}
