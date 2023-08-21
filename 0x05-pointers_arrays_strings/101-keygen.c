#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates a random password  for the program 101-crackme
 *
 * @: void
 *
 * Return: always 0
 */
int main(void)
{
	int digits;
	char Random;
	unsigned int size = 0;

	srand(time(NULL));
	
	for (digits = 0; size <= 32767; digits++)
	/*make sure its atleast = lowest value of RAND_MAX = 32767*/
	{
		Random = rand();
		printf("%c", Random);
		size += Random;
	}

return (0);
}
