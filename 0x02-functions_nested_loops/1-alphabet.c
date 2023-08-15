#include <stdio.h>
#include "_putchar"
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task(1-alphabet.c)
 *
 * Return: 0 (success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - a function that prints the alphabet in lower case
 *
 * Parameters: void
 *
 * Return: void
 */

void print_alphabet(void)
{
	char line[] = "abcdefghijklmnopqrstuvwxyz$";
	int counter = 0;

	while (line[counter] != '$')
	{
		_putchar(line[counter]);
		counter++;
	}
	_putchar('\n');
}
