#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int passwrd[100];
int x, add, y;
add = 0;
srand(time(NULL));
for (x = 0; x < 100; x++)
{
passwrd[x] = rand() % 78;
add += (passwrd[x] + '0');
putchar(passwrd[x] + '0');
if ((2772 - add) - '0' < 78)
{
y = 2772 - add - '0';
add += y;
putchar(y + '0');
break;
}
}
return (0);
}

