#include <stdio.h>
#include "main.h"
/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int r;

	printf("Infinite loop incoming :(\n");

	/*while (i < 10)*/
	
		/*putchar(i);*/
	

	r = largest_number(1, 2, 3);
	printf("case1: %d\n", r);
	r = largest_number(4, 9, 3);
	printf("case1: %d\n", r);
	r = largest_number(0, 0, 0);
	printf("case1: %d\n", r);
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
