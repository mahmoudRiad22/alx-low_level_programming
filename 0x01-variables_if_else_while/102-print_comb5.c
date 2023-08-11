#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 102-print_comb5.c )
 *
 * Return: 0 (success)
 */
int main(void)
{
int number[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int indexN1 = 0;
while (indexN1 < 100)
{
	int indexN2 = indexN1 + 1;

	while (indexN2 < 100)
	{
		/*print the 1st Number*/
	putchar((indexN1 < 10 ? '0' : number[(indexN1 / 10)]));
	putchar((indexN1 < 10 ? number[indexN1] : number[(indexN1 % 10)]));
	/*seperate by space*/
	putchar(' ');

	/*print the 2nd Number*/
	putchar((indexN2 < 10 ? '0' : number[(indexN2 / 10)]));
	putchar((indexN2 < 10 ? number[indexN2] : number[(indexN2 % 10)]));

	/*condition to skip last comma*/
	if (indexN1 == 98 && indexN2 == 99)
		;/*skip that last comma*/
	else
	{	putchar(',');/*seperate by a comma*/
		putchar(' ');/*followed by space*/
	}
	indexN2++;/*move to the next 2nd number*/

	}
indexN1++;/*move to next 1st number*/
}
putchar('\n');
return (0);
}
