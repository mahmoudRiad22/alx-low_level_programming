#include "main.h"
/**
 * main -  prints the numbers from 1 to 100, followed by a new line
 *		for multiples of three print "Fizz" instead
 * 		for the multiples of five print "Buzz" instead
 * 		For numbers which are multiples of both three and five
 * 		print "FizzBuzz"
 *
 * parameter: void
 *
 * Return: void
 */

int main(void)
{
	int i, temp;

	for (i =1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar(70);
			_putchar(105);
			_putchar(122);
			_putchar(122);
		}
		else if (i % 5 == 0)
		{
			_putchar(66);
			_putchar(117);
			_putchar(122);
			_putchar(122);
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			_putchar(70);
			_putchar(105);
			_putchar(122);
			_putchar(122);
			_putchar(66);
			_putchar(117);
			_putchar(122);
			_putchar(122);

		}
		else
		{
			if (i >= 10 && i < 100)/*for 2 digit numbers*/
			{
				_putchar((i / 10) + '0');
			}
			else if (i > 100 && i < 999)/*for 3 digit numbers*/
			{
				temp = i;
				_putchar((temp / 10) + '0');

				temp = temp / 10;
				_putchar((temp / 10) + '0');
			}
			_putchar((i % 10) + '0');/*for single digit numbers*/
		}

		if (i != 100)
		_putchar(' ');
	}
	_putchar('\n');
return (0);
}
