#include <stdio.h>
int _atoi(char *s);

/**
 * main - entry point
 * @argc: total number of arguments
 * @argv: array pointers to the arguments
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int mul, N1, N2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	N1 = _atoi(argv[1]);
	N2 = _atoi(argv[2]);
	mul = N1 * N2;

	printf("%d\n", mul);

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
		while (*s != '\0' || *s != ' ')
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

