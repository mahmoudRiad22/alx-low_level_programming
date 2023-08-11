#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 9-print_comb.c )
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int index = 0;
	int flag = 1;

	while (index < 10)
	{
		if (flag == 1)
			flag = 0;
		else
		{
			putchar(',');
			putchar(' ');
		}
		putchar(number[index]);
		index++;
	}
	putchar('\n');

	return (0);
}
