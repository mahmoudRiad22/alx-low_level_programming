#include <stdio.h>
/**
 * main - Entry point
 *
 * decription: a c-program to answer the task 6 on alx
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of a char: %zubyte(s)\n", (size_t)sizeof(char));
printf("Size of an int: %zubyte(s)\n", (size_t)sizeof(int));
printf("Size of a long int: %zubyte(s)\n", (size_t)sizeof(long int));
printf("Size of a long long int: %zubyte(s)\n", (size_t)sizeof(long long int));
printf("Size of a float: %zubyte(s)\n", (size_t)sizeof(float));
return (0);
}
