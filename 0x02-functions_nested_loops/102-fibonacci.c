#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0)
 */
int main(void)
{
	int counter = 0;
	unsigned long int n1 = 1, n2 = 2, sum = 0;

	printf("%lu", n1);
	counter++;
	printf(", %lu", n2);
	counter++;

	while (counter < 50)
	{
		sum = n1 + n2;
		printf(", %lu", sum);
		n1 = n2;
		n2 = sum;
		counter++;
	}
	putchar('\n');
	return (0);
}
