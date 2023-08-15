#include "main.h"
/**
 * print_to_98 - prints the numbers between given number and 98
 *
 * @number: the given number
 *
 * Return: void
 */
void print_to_98(int number)
{
	while (number != 98)
	{
		PrintNumber(number);
		_putchar(',');
		_putchar(' ');
		if (number < 98)
			number++;
		if (number > 98)
			number--;
	}
	PrintNumber(98);
	_putchar('\n');
}

/**
 * PrintNumber- convert the number given into its digits then print them
 *
 * @n: the given number
 *
 * Return: void
 */
void PrintNumber(int n)
{
	int counter = 0;
	int DigitArray[1024];

	if (n < 0)
	{
		_putchar('-');
		n = n / -1;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	while (n % 10 != 0)
	{
		DigitArray[counter++] = n % 10;
		n = n / 10;
	}

	while (n > 0)
	{
		if (n % 10 >= 0)
			DigitArray[counter++] = n % 10;
		n = n / 10;
	}

	while (counter > 0)
	{
		_putchar(DigitArray[counter - 1] + '0');
		counter--;
	}
}
