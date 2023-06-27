#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: string to be converted
 *
 * Return: integer conversion
 */
int _atoi(char *s)
{
int a, b, x, length, c, numbr;
a = 0;
b = 0;
x = 0;
length = 0;
c = 0;
numbr = 0;
while (s[length] != '\0')
length++;
while (a < length && c == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
numbr = s[a] - '0';
if (b % 2)
numbr = -numbr;
x = x * 10 + numbr;
c = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
c = 0;
}
a++;
}
if (c == 0)
return (0);
return (x);
}
