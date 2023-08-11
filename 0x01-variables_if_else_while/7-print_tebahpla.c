#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 7-print_tebahpla.c )
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int index = strlen(alphabet) - 1;

	while (index >= 0)
	{
		putchar(alphabet[index]);
		index--;
	}

	putchar('\n');

	return (0);
}
