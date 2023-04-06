#include "main.h"

/**
 * _strlen_recursion -this returns the length of a string
 * @s: the string to find length of
 * Return: the length of s
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;

	if (s == 0)
		return 0;

	while (s[len] != '\0')
		len++;

	len--;

	while (i < len)
	{
		if (s[i] != s[len])
			return 0;

		i++;
		len--;
	}

	return 1;
}
