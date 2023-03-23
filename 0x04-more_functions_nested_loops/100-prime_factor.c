#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of the number
 *              612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    unsigned int n = 612852475;
    unsigned int i, largest = 0;

    while (n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    if (n > 2)
    {
        largest = n;
    }

    printf("%u\n", largest);

    return (0);
}
