#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: number of arguments in the command line
 * @argv: pointers array to each argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
