#include "main.h"

/**
 * _isdigit - it checks if parameter is a number between 0 to 9.
 * @c:the input number.
 * Return: 1 if it's a number (0 to 9), 0 if not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
