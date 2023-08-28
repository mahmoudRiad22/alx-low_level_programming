#include "main.h"
#include <stdio.h>

/**
 */
char *_strchr(char *s, char c)
{
		int find;

		while (1)
		{
			find = *s++;
			if (find == c)
			{
				return (s - 1);
			}
			if (find == 0)
			{
				return (NULL);
			}
		}
}
