#include <stdio.h>

int largest_prime(long int n);

/**
 * main - prints the largest prime factor of a number
 *
 * Parameters: void
 *
 * Return: 0
 */

int main(void)
{
	int x = largest_prime(612852475143);

	printf("%d\n", x);

	return (0);
}

/**
 * largest_prime - return the largest prime of a given number
 *
 * @n: given number to find its prime
 *
 * Return: largest_prime
 */
int largest_prime(long int n)
{

	int largest_prime = 2;

	while (n > 1)
	{
		if (n % largest_prime == 0)
		{
			n = n / largest_prime;
			/*printf("%d ", largest_prime);*/
		}
		else
			largest_prime++;
	}
	/*printf("\n");*/

	return (largest_prime);
}
