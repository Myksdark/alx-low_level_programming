#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - this allocates memory using malloc
 * @b:the number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == 0)
	exit(98);
	else
	return (i);
}
