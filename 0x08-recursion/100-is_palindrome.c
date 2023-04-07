#include "main.h"

/**
 * _strlen_recursion -this returns the length of a string
 * @s: the string to find length of
 * Return: the length of s
 */
int is_palindrome(char *s)
{
	if (s == 0)
		return 0;

	int len = 0;
	while (s[len] != '\0')
		len++;

	int i;
	int palindrome = 1;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			palindrome = 0;
			break;
		}
	}

	return palindrome;
}
