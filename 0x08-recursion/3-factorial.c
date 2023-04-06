#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate the factorial of
 * res: results of the outcome
 * Return: factorial of n, or -1 if n is negative
 */

int factorial(int n)
{
        if (n < 0)
                return (-1);
        else if (n == 0)
                return (1);
        else
                return (n *(n - 1));
}
