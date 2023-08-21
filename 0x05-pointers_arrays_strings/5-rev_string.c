#include "main.h"
/**
 * rev_string -  a function that reverse a given string
 *
 * @s: given string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start = s;

	while (*s != '\0')
		s++;

	s--;/*skip the null terminator*/

	while (s != start) /*automatic stops if strlen is odd number*/
	{
		char tmp;

		/*swap*/
		tmp = *start;
		*start = *s;
		*s = tmp;

		/*next*/
		s--;

		if (s == start)/*stop if the strlen is even number*/
			break;
		start++;
	}
}
