#include <stdlib.h>
#include "main.h"

/**
 * *_memset - A function that fills memory with a constant byte
 * @s: Memory area
 * @b: Char to be copied
 * @n: Number of times
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}

/**
 * *_calloc - A function that allocates the memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer of allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
