#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 *descritpion: this program prints without any print functions
 *and prints it to the stderr
 *
 * Return: 1 (Success)
 */
int main(void)
{
const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-\
19\n";
	fwrite(quote, sizeof(char), strlen(quote), stdout);
return (1);
}
