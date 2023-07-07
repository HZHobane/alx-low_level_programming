#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int x, y, z, size, a, digits;
x = 0;
y = 0;
z = 0;
size = 0;
a = 0;
digits = 0;
while (s[size] != '\0')
size++;
while (x < size && a == 0)
{
if (s[x] == '-')
++y;
if (s[x] >= '0' && s[x] <= '9')
{
digits = s[x] - '0';
if (y % 2)
digits = -digits;
z = z * 10 + digits;
a = 1;
if (s[x + 1] < '0' || s[x + 1] > '9')
break;
a = 0;
}
x++;
}
if (a == 0)
return (0);
return (z);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int total, digit1, digit2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
digit1 = _atoi(argv[1]);
digit2 = _atoi(argv[2]);
total = digit1 *digit2;
printf("%d\n", total);
return (0);
}
