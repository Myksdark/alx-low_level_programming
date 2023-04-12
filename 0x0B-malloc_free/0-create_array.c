#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - it creates an array of chars and initializes it with a specific char
 * @size: Size of array to be created
 * @c: Character to initialize array with
 *
 * Return: Pointer to the array if successful, otherwise 0
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
return (0);
p = malloc((size) * sizeof(char));
if (!p)
{
return (0);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
