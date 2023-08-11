#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 4-print_alphabt.c )
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz$";
	int index = 0;

	while (alphabet[index] != '$')
	{
		if (alphabet[index] == 'q' || alphabet[index] == 'e')
		{
			index++;
			continue;
		}
		putchar(alphabet[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
