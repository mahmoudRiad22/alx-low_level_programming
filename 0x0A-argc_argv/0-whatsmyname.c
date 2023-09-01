#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: the number of command in the program
 * @argv: array of pointers to each command argument
 *
 * Return: always 0
 */
int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
