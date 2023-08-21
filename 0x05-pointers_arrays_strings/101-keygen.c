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
	int digits = 0;
	char Random;
	unsigned int size = 0;

	srand(time(NULL));

	while (size <= 32767)/*make sure its atleast = lowest value of RAND_MAX*/
	{
	Random = rand();
	printf("%c", Random);
	size += Random;
	digits++;
	}

return (0);
}
