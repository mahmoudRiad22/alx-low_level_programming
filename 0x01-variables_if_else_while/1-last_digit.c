#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task(1-last_digit.c)
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 == 0)
	{
		printf("and is 0\n");
	}
	else if (n % 10 < 6)
	{
		printf("and less than 6 and not 0\n");
	}
	else if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
return (0);
}
