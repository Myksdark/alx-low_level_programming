#include "main.h"

/**
 * is_prime -a helper function to check if n is prime
 * @n: the number to check
 * @i: iterator
 * Return: 1 if n is prime,or 0 if not.
 */

int is_prime(int n, int i);
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (is_prime(n, 2));
}

/**
 * is_prime_number - this checks if n is a prime number
 * @n: the number to check
 * Return: 1 if n is prime, or 0 if not
 */
int is_prime(int n, int i)
{
    if (i * i > n)
        return (1);
    if (n % i == 0)
        return (0);
    return (is_prime(n, i + 1));
}
