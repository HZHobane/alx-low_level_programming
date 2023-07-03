#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte.
 * @s: Initial memory address 
 * @b: Desired digit
 * @n: Amount of bytes
 *
 * Return: New value with deesired bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int x = 0;
for (; n > 0; x++)
{
s[x] = b;
n--;
}
return (s);
}
