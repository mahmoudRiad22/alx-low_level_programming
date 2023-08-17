#include <stdio.h>
/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */
int largest_prime(long int n);

int main(void)
{
	int x = largest_prime(612852475143);

	printf("%d\n", x);

	return (0);
}

/**
 * largest_prime - return the largest prime of a given number
 *
 * @n: given number
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
