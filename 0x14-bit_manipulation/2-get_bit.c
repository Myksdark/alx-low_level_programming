#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check the bit from
 * @index: the index of the bit to get (begining from 0)
 *
 * Return:value of bit at the given index, or -1 if on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}

return ((n >> index) & 1);
}
