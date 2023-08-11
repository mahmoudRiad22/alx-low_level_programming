#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 2-print_alphabet.c )
 *
 * Return: 0 (success)
 */
int main(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int index = 0;

	while (numbers[index] < 10)
	{
		printf("%d", numbers[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
