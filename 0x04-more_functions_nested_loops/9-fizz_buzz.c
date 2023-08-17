#include "main.h"
#include <stdio.h>
/**
 * main -  prints the numbers from 1 to 100, followed by a new line
 *		for multiples of three print "Fizz" instead
 *		for the multiples of five print "Buzz" instead
 *		For numbers which are multiples of both three and five
 *		print "FizzBuzz"
 *
 * parameter: void
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
			printf(" ");
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}

		if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}

		if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}

		printf("%d", i);
	}
	printf("\n");
return (0);
}
