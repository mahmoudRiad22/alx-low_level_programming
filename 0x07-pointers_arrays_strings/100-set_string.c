#include "main.h"

/**
 * set_string - overwrite a string by a value from another string
 * 
 * @s: the adress that has the adress of the string to be adjusted
 * @to: the adress that has the string to be written
 * 
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
