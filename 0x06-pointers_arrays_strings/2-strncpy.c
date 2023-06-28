#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: Input
 * @src: Input
 * @n: Input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;
x = 0;
while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
