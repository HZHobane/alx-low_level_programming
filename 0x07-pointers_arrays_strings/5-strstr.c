#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: Initial digit
 * @needle: Secondary digit
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *x = haystack;
char *y = needle;
while (*x == *y && *y != '\0')
{
x++;
y++;
}
if (*y == '\0')
return (haystack);
}
return (0);
}
