#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 101-print_comb4.c )
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
		int index2 = index + 1;

		while (index2 < 10)
		{
			int index3 = index2 + 1;

			while (index3 < 10)
			{
				if (number[index] != number[index2] &&
					number[index] != number[index3] &&
						number[index2] != number[index3])
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
					putchar(number[index3]);
				}

				index3++;
			}
			index2++;
		}
		index++;
	}
	putchar('\n');

	return (0);
}
