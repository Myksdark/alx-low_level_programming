#include "main.h"

/**
 * flip_bits - returns number of bits that differs between two numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that differ between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;

while (diff != 0)
{
count += diff & 1;
diff >>= 1;
}

return (count);
}
