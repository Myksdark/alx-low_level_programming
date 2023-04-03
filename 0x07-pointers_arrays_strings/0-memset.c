#include "main.h"

/**
 * _memset  fill a memory area with a constant byte value.
 * @s: Pointer to the memory area to fill.
 * @b: The byte value to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: Pointer to filled memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
