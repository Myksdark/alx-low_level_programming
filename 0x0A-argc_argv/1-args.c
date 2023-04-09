#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments that's passed to it
 * @argc: the argument count
 * @argv: arg6ument vector
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
