#include <stdio.h>
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task( 3-print_alphabets.c )
 *
 * Return: 0 (success)
 */
int main(void)
{
	char FullAlphabet[] = "abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int index = 0;

	while (FullAlphabet[index] != '$')
	{
		putchar(FullAlphabet[index]);
		index++;
	}
	putchar('\n');

	return (0);
}
