#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: Stored memory
 *@src: Copied nmemory
 *@n: Amount of bytes
 *
 *Return: changed copied memory 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x = 0;
int y = n;
for (; x < y; x++)
{
dest[x] = src[x];
n--;
}
return (dest);
}
