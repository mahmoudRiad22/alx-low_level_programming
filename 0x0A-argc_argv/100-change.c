#include <stdio.h>
#include <stdlib.h>
/**
 * main - enty point
 * @argc: number of argumnets in the command line
 * @argv: 2D array contain each argumen as a string of char
 * Return: 0(sucess withh no errors) or 1(sucess with errors)
 */

int main(int argc, char **argv)
{
	int coinValue[] = {1, 2, 5, 10, 25};
	int i, number_passed, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number_passed = atoi(argv[1]);

	if (number_passed < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 4; i >= 0; i--)
	{
		while (number_passed >= coinValue[i])
		{
			coins++;
			number_passed -= coinValue[i];
		}
	}
	printf("%d\n", coins);
	return (0);

}
