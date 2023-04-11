#include "main.h"
#include<string.h>
/**
 * _strncpy - a function that copies a string..
 * @src: source
 * @dest: destination
 * @n: number.
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
