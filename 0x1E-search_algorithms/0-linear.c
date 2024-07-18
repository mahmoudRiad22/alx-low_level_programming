#include "search_algos.h"

/**
* linear_search- a function to perform a linear search
* @array: the array to search in
* @size: the size of the array
* @value: the thing we search for
* Return: the index if found or -1
*/
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{ return (-1); }

	for (size_t i = 0; i < size; i++)
	{
	printf("Value checked array[%zu] = [%d]", i, array[i]);
	if (array[i] == value)
	{ return (i); }
	}

	return (-1);
}
