#include "main.h"
#include <stdlib.h>


/**
 * argstostr - Concatenates all the arguments of your program.
 *
 * @ac: Counts of arguments passed to the program.
 * @av: Array of pointers to containing arguements passed.
 * Return: Pointer to string, 0 if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
