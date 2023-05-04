#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: a pointer to the number to modify
 * @index: the index of the bit to set (begining from 0)
 *
 * Return: 1 if the bit was successfully set, or -1 if on erroe
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}

*n |= (1UL << index);
return (1);
}
