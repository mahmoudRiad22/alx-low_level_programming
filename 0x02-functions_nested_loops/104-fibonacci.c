#include "main.h"
/**
 * main -Entry point
 *
 * decribtion: print the firs 98 fibonacci starting from 1,2
 *
 * Return: always 0
 */

int main(void)
{

int i, Zeroes;
unsigned long fibo1 = 1, fibo2 = 2, sum, sum_extra;
unsigned long fibo1_extra = 0, fibo2_extra = 0, M = 100000000;

for (i = 0; i < 98; i++)
{
	if (fibo1_extra > 0)
		printf("%lu", fibo1_extra);

	Zeroes = length(M) - 1 - length(fibo1);

	while (fibo1_extra > 0 && Zeroes > 0)
	{
		printf("%d", 0);
		Zeroes--;
	}

	printf("%lu", fibo1);

	sum = (fibo1 + fibo2) % M;
	sum_extra = fibo1_extra + fibo2_extra + (fibo1 + fibo2) / M;
	fibo1 = fibo2;
	fibo1_extra = fibo2_extra;
	fibo2 = sum;
	fibo2_extra = sum_extra;

	if (i != 97)
		printf(", ");
	else
		printf("\n");

}
return (0);
}

/**
 * length - count the number of digits ina number
 *
 * @n: number given
 *
 * Return: number of digits;
 */

int length(int n)
{
	int len = 0;

	if (n == 0)
		return (1);

	while (n != 0)
	{
		n = n / 10;
		len++;
	}

	return (len);
}
