#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - A function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory
 * @old_size: Size of the allocated memory
 * @new_size: New size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pointer1;
char *old_pointer;
unsigned int x;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
pointer1 = malloc(new_size);
if (!pointer1)
return (NULL);
old_pointer = ptr;
if (new_size < old_size)
{
for (x = 0; x < new_size; x++)
pointer1[x] = old_pointer[x];
}
if (new_size > old_size)
{
for (x = 0; x < old_size; x++)
pointer1[x] = old_pointer[x];
}
free(ptr);
return (pointer1);
}
