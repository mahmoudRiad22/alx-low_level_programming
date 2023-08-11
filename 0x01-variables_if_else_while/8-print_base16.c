#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 8-print_base16.c )
 *
 * Return: 0 (success)
 */
int main(void)
{
	char Hexa[] = "0123456789abcdef";
	int index = 0;

	while (index < (int)strlen(Hexa))
	{
		putchar(Hexa[index]);
		index++;
	}

	putchar('\n');

	return (0);
}
