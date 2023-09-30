#include "main.h"

/**
 * prime_a - to calculate if its a prime number
 * @i: input number
 * @j: divisor
 * Return: (o)
 */

int prime_a(int i, int j)
{
        if (i <= 1 || (i != j && i % j == 0))
{
        return (0);
}
        else if (i == j)
{
        return (1);
}
        return (prime_a(i, j + 1));
}
/**
 * is_prime_number - detect if its a prime number
 * @n: the input number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
        return (prime_a(n, 2));
}
