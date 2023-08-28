#include "main.h"
/**
 * print_chessboard -  a function the prints the chssboard as chars
 *
 * @a: the chesboard elemnts
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, ii;

	for (i = 0; i < 8; i++)/*loop rows*/
	{
		for (ii = 0; ii < 8; ii++)/*loop cols*/
		{
			_putchar(a[i][ii]);
		}
		_putchar('\n');
	}
}
