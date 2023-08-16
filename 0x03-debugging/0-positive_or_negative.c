# include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task(0-positive_or_negative.c)
 *
 * Return: 0 (success)
 */
void positive_or_negative(int n)
{
	
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

}
