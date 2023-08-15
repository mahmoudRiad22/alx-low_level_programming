#include "main.h"
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
