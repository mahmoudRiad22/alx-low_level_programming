#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: number of arguments in this program
 * @argv: an array of poiter to each argument
 *
 * Return: alwasy 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
