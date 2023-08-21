#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: given string
 *
 * Return: the integer value
 */

int _atoi(char *s)
{
	int negatives = 0, x = 0, flag = 0;

	if (*s == '\0')
		return (0);
	else
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
					x = (x * 10)+((*s) - '0');
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
