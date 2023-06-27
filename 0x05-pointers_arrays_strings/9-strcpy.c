#include "main.h"

/**
 * char *_strcpy - Copies the string pointed to by src
 * @dest: Makes a copy
 * @src: Makes a copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;
while (*(src + a) != '\0')
{
a++;
}
for ( ; b < a ; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
