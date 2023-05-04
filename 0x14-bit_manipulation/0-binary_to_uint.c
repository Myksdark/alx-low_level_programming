#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to the binary string to convert
 *
 * Return: the converted number, or 0 if:
 * - b is NULL
 * - there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == 0)
return (0);

for (; *b != '\0'; b++)
{
if (*b != '0' && *b != '1')
return (0);

result = (result << 1) + (*b - '0');
}

return (result);
}
