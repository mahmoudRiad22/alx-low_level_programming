#include "main.h"
/**
 * jack_bauer - print every minute fot eh day for jack bauer
 *
 * Parameters: void
 *
 * Return: void
 */

void jack_bauer(void)
{
	int stop = 0, h1 = 0, h2 = 0, m1 = 0, m2 = 0;

	while (stop == 0)
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
		m2++;

		if (m2 > 9)
		{ m1++;
			m2 = 0; }
		if (m1 > 5)
		{ h2++;
			m1 = 0; }
		if (h2 > 9)
		{
			if (h1 <= 2)
			{ h1++;
				h2 = 0; } }
		if (h1 == 2 && h2 == 3 && m1 == 5 && m2 == 9)
		{
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
			h1 = h2 = m1 = m2 = 0;
			stop = 1; }
	} }
