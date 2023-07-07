#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digits
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
unsigned int add;
add = 0;
while (add < strlen(str))
{
if (!isdigit(str[add]))
{
return (0);
}
add++;
}
return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int add;
int string;
int total = 0;
add = 1;
while (add < argc)
{
if (check_num(argv[add]))
{
string = atoi(argv[add]);
total += string;
}
else
{
printf("Error\n");
return (1);
}
add++;
}
printf("%d\n", total);
return (0);
}
