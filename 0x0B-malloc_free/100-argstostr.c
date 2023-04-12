#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 *
 * @ac: Counts of arguments passed to the program.
 * @av: Array of pointers to strings containing the arguments passed to the program.
 *
 * Return: Pointer to a new string or NULL if fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	j = 0;
	while (av[i][j] != '\0')
	j++;

	k += j + 1;
	}

	str = malloc(sizeof(char) * k);

	if (str == NULL)
	return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
	j = 0;
	while (av[i][j] != '\0')
	{
	str[k] = av[i][j];
	j++;
	k++;
        }

	str[k] = '\n';
	k++;
	}

	str[k] = '\0';

	return (str);
}	
