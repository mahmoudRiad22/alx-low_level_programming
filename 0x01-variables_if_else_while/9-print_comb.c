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
	char number[] = "0123456789";
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
