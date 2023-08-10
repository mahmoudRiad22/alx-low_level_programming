#include <stdio.h>
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
char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, var, 59);
return (1);
}
