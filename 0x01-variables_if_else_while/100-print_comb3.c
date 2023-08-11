#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 100-print_comb3.c )
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
		int index2 = index + 1;

		while (index2 < 10)
		{
			if (flag == 1)
				flag = 0;
			else
			{
				putchar(',');
				putchar(' ');
			}
			putchar(number[index]);
			putchar(number[index2]);
			index2++;
		}
		index++;
	}
	putchar('\n');
	return (0);
}
