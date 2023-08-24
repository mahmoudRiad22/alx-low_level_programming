#include "main.h"
/**
 * rot13 -  encode a given string into a rot13
 *
 * @s: given string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
char *start = s;
int i = 0, x;

while (s[i] != '\0')
{
while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
{
if (*(s + i) >= 65 && *(s + i) <= 90)
{
x = s[i];
x > 77 ? (x = x + 13 - ((x / 78) * 91) + 65) : (x = x + 13 - ((x / 78) * 91));
s[i] = x;
break;
}
else
{
x = s[i];
x > 109 ? (x = x + 13 - (x / 110) * 123 + 97) : (x = x + 13 - (x / 110) * 123);
s[i] = x;
break;
}
break;
}
i++;

}

return (start);
}
