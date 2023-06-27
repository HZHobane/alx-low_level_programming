#include "main.h"
/**
 * _strlen - The string size is returned
 * @s: String length to be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
