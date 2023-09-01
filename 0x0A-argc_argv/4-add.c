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
	int i, number = 0, flag = 0;

	for (i = 1; i < argc; i++)
	{
		if (_atoi(argv[i]) != 0 && (*argv[i] != 0))
			number += _atoi(argv[i]);
		else if (_atoi(argv[i]) == 0 && (*argv[i] != 0))
		{
			flag = 1;
			break;
		}
		/*printf("%d\n", number);*/
	}
	if (flag != 1)
		printf("%d\n", number);
	else
		printf("Error\n");
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
