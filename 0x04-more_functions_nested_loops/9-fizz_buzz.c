#include "main.h"
#include <stdio.h>

/**
 * main - Prints numbers 1 to 100 FD by a new line
 * But for multp. of 3 prints Fizz instead of the number
 * And for multp. of 5 prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
} else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
} else if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
} else if (i == 1)
{
printf("%d", i);
} else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}
