#include <stdio.h>
int _atoi(char *s);

/**
 * main - entry point
 *
 * @argc: number of arguments in the command line
 * @argv: array of pinters to each argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, ii, number = 0, result = 0;

	for (i = 1; i < argc; i++)
	{
		ii = 0;
		while (argv[i][ii] != '\0')
		{
			if (argv[i][ii] > '9' || argv[i][ii] < '0')
			{
				printf("Error\n");
				return (1);
			}
			ii++;
		}

	}

	for (i = 1; i < argc; i++)
	{
		number = _atoi(argv[i]);
		if (number >= 0)
			result += number;
	}
		printf("%d\n", result);
	return (0);
}

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: given string
 *
 * Return: the integer value
 */

int _atoi(char *s)
{
	int negatives = 0, flag = 0;
	unsigned int x = 0;

	if (*s == '\0')
		return (0);
	{
		while (*s != '\0')
		{
			if (*s == '-')
			{
				negatives++;
				s++;
				continue;
			}

			if (*s >= '0' && *s <= '9')
			{
				flag++;

				while (*s >= '0' && *s <= '9')
				{
					x = (x * 10) + ((*s) - '0');
					s++;
				}
				break;
			}
			s++;
		}
	}
if (flag == 0)
	return (0);
if (negatives % 2 != 0)
	return (-x);
else
	return (x);

}
