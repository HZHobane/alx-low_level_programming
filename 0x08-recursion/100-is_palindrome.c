#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: Reversed string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: String length calculation
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - A function that checks characters for palindrome
 * @s: String
 * @i: Iterator input
 * @len: String lenght input
 * Return: 1 if s is a palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
