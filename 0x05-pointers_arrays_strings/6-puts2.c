#include "main.h"
/**
 * puts2 - Program prints single character of the pair
 * beginning with the intitial one
 * @str: Input
 * Return: Print one character of the two
 */
void puts2(char *str)
{
int length = 0;
int a = 0;
char *b = str;
int c;
while (*b != '\0')
{
b++;
length++;
}
a = length - 1;
for (c = 0 ; c <= a ; c++)
{
if (c % 2 == 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
