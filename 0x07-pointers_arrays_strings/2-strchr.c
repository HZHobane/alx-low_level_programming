#include "main.h"
/**
 * _strchr - A function that locates a character in a string.
 * @s: Initial input
 * @c: Seconfdary input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int x = 0;
for (; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (&s[x]);
}
return (0);
}
