#include"main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -it returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dest, *toReturn;
	if (str == NULL)
	return (NULL);
	dest = malloc((1 + strlen(str)) * sizeof(char));
	toReturn = dest;
	if (toReturn == NULL)
		return (NULL);
	while (*str)
	{
		*dest++ = *str++;
	}
	return (toReturn);
}
