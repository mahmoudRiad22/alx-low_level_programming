#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * @: void
 *
 * Return: always 0
 */
int main(void)
{
	my_pass();
	return (0);
}
/**
 * my_pass - generates a password of 100 char to open 101-crackme
 *
 * @:void
 *
 * Return: void
 */

void my_pass(void)
{
	int i, my_magic_mana = 0, last_char, a_touch_of_magic = 2772;
	int my_password[100];

	srand(time(NULL));/*make the seed = current time*/

	for (i = 0; i < 100; i++)
	{
		/*password should not contain control*/
		/*char so allowed from 48 to 126 = 78*/

		my_password[i] = rand() % 78;

		/*print out the char equivelent*/
		putchar(my_password[i] + '0');

		/*all passwords has a meaning my angels*/
		my_magic_mana += (my_password[i] + '0');

		/*if i have enough magic to use the touch of magic then i stop*/
		if (my_magic_mana > a_touch_of_magic)
		{
		/*find out how much i need mana to be exactly enough to use the touch of magic*/
			last_char = a_touch_of_magic - my_magic_mana - '0';
		/*make my mana is at the perfect lvl to cast the touch of magic*/
			my_magic_mana += last_char;
		/*cast out the last word of the spell*/
			putchar(last_char + '0');
			break;
		}

	}
}
