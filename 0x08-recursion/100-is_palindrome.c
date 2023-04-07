#include "main.h"

/**
 * _strlen_recursion -this returns the length of a string
 * @s: the string to find length of
 * Return: the length of s
 */

int is_palindrome(char *s)
{
    if (s == NULL)
        return 0;

    int len = 0;
    while (s[len] != '\0')
        len++;

    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j])
            return 0;
    }

    return 1;
}
