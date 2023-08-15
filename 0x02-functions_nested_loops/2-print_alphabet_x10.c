#include "main.h"
/**
 * print_alphabet_x10 - a function prints the alphabet in lowercase 10 times
 *
 * Parameters: void
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int ten, counter;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz$";

	for (ten = 0; ten < 10; ten++)
	{
		counter = 0;

		while (alphabet[counter] != '$')
		{
			_putchar(alphabet[counter]);
			counter++;
		}
		_putchar('\n');
	}
}
