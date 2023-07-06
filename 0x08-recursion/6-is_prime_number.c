#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - A function that decifers if a digit is a prime
 * number or not.
 * @n: Input
 * Return: 1 if input is a prime number and 0 if false
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - A function that calculates a prime number
 * @n: Input
 * @i: Iterator function
 * Return: 1 if input is a prime number and 0 if false
 */
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
