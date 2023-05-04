#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 *
 * @n: a pointer to the number to modify
 * @index: the index of the bit to set (starting from 0)
 *
 * Return: 1 if the bit was set sucessfully, or -1 if on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
