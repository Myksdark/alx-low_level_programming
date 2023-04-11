#include "main.h"
/**
 * _puts - this prints a string, followed by a new line
 * @str: pointer to the string to print
 * Return: void
*/

void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
