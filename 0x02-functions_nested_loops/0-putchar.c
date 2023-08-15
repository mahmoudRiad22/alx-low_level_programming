#include "main.h"
/**
 * main - Entry point
 *
 * decribtion:
 * a program responds to project 0-positive_or_negative.c
 * task(0-putchar.c)
 *
 * Return: 0 (success)
 */
int main(void)
{
	char line[] = "_putchar\n$";
	int counter = 0;

	while (line[counter] != '$')
	{
		_putchar(line[counter]);
		counter++;
	}

	return (0);
}
