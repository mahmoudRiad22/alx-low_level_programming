#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0)
 */
int main(void)
{
	int counter = 0;
	unsigned long int n1 = 1, n2 = 2, sum = 0, EvenSum = 0;
	
	counter++;
	counter++;
	EvenSum = n2;

	while (counter < 50)
	{
		sum = n1 + n2;
		if (sum < 4000000 && sum % 2 == 0)
			EvenSum += sum;
		n1 = n2;
		n2 = sum;
		counter++;
	}

	printf("%lu\n", EvenSum);
	return (0);
}
