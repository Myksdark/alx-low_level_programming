#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -it concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: is the amount of bytes allocation
 * Return:the pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == 0)
	s1 = "";

	if (s2 == 0)
	s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
	;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
	;

	if (n > ls2)
	n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == 0)
	return (0);

	for (i = 0; i < lsout; i++)
	if (i < ls1)
	sout[i] = s1[i];
	else
	sout[i] = s2[i - ls1];

	sout[i] = '\0';

	return (sout);
}
